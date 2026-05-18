import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray, String
import serial
import time

class RobotNode(Node):
    def __init__(self):
        super().__init__('robot_node')

        # --- CONFIGURATION INITIALE ---
        self.ID_ROBOT = 1
        self.ID_FIXE = 2  # Première mission
        self.SEUIL_PIXELS = 15
        self.STOP_DELAY = 0.2  
        self.MIN_SEND_INTERVAL = 0.15  
        self.WAIT_RESPONSE_TIMEOUT = 4.0  
        self.SEARCH_SWITCH_DELAY = 10.0  

        # --- ÉTATS ---
        self.waiting_for_response = False
        self.mission_complete = False
        self.search_mode = False
        self.search_direction = "G"
        
        # --- TIMERS / TIMESTAMPS ---
        self.last_search_switch = time.time()
        self.last_send_time = 0.0
        self.last_stop_time = 0.0
        self.last_command = ""

        # --- INITIALISATION SÉRIE ---
        try:
            self.ser = serial.Serial('/dev/ttyAMA0', 57600, timeout=0.1)  
            time.sleep(2)
            self.get_logger().info("✅ Port série prêt et connecté à l'Arduino.")
        except Exception as e:
            self.get_logger().error(f"❌ Erreur liaison série : {e}")
            raise e

        # --- ABONNEMENT ROS 2 ---
        self.aruco_sub = self.create_subscription(
            Int32MultiArray,
            'aruco/markers',
            self.aruco_callback,
            10
        )
        
        # --- PUBLICATION ROS 2 ---
        # Le topic est désormais 'robot/reco_image'
        self.image_pub = self.create_publisher(
            String, 
            'robot/reco_image', 
            10
        )

        # --- TIMERS INTERNES ---
        self.serial_timer = self.create_timer(0.02, self.check_serial_input)
        self.safety_timer = self.create_timer(0.1, self.check_safety_timeout)

        self.get_logger().info("🚀 Nœud Robot prêt ! En attente de données ArUco...")

    def check_serial_input(self):
        """Lit en continu les retours de l'Arduino."""
        if self.ser.in_waiting > 0:
            try:
                ligne = self.ser.readline()
                reponse = ligne.decode('utf-8', errors='ignore').strip()
                
                if reponse:
                    self.get_logger().info(f"📥 [Arduino -> Pi] : {reponse}")

                    # --- DÉTECTION DU SIGNAL IMAGE DE L'ARDUINO ---
                    if "image" in reponse.lower():
                        self.get_logger().info(f"📢 Signal reçu ! Publication sur robot/reco_image : {reponse}")
                        
                        msg_pub = String()
                        msg_pub.data = reponse
                        self.image_pub.publish(msg_pub)
                        
                        # Désactivation du suivi ArUco
                        self.ID_FIXE = -1 
                        return

                    # --- LOGIQUE SÉQUENTIELLE DES MISSIONS ARUCO ---
                    if self.waiting_for_response:
                        if "rien" in reponse.lower():
                            self.get_logger().info("❌ Pas aligné → reprise du guidage")
                            self.waiting_for_response = False

                        elif "premiere couleur okay" in reponse.lower() or "deuxieme couleur okay" in reponse.lower():
                            self.get_logger().info("🎉 Mission validée par l'Arduino !")
                            self.mission_complete = True

                            if self.ID_FIXE == 2:
                                self.ID_FIXE = 3
                                self.get_logger().info("🔄 Passage à la mission 2 → ID_FIXE = 3")
                                
                                time.sleep(0.5)
                                self.ser.reset_input_buffer()
                                
                                self.mission_complete = False
                                self.waiting_for_response = False
                                self.last_command = ""
                                self.search_mode = False
                                self.last_search_switch = time.time()
                            
                            elif self.ID_FIXE == 3:
                                self.get_logger().info("🏆 Guidage terminé. En attente du signal 'image X'...")
                                self.waiting_for_response = False
                        else:
                            self.waiting_for_response = False
            except Exception as e:
                self.get_logger().error(f"Erreur lors de la lecture série : {e}")

    def check_safety_timeout(self):
        current_time = time.time()
        if self.waiting_for_response and (current_time - self.last_stop_time > self.WAIT_RESPONSE_TIMEOUT):
            self.get_logger().warn("⚠️ Timeout Arduino. Reprise forcée...")
            self.waiting_for_response = False

    def aruco_callback(self, msg):
        if self.ID_FIXE == -1:
            return 

        current_time = time.time()
        data = msg.data
        pos_x_robot = None
        pos_x_fixe = None

        for i in range(0, len(data), 2):
            marker_id = data[i]
            center_x = data[i+1]

            if marker_id == self.ID_ROBOT:
                pos_x_robot = center_x
            elif marker_id == self.ID_FIXE:
                pos_x_fixe = center_x

        if pos_x_fixe is not None and pos_x_robot is None and not self.waiting_for_response:
            self.search_mode = True
        else:
            self.search_mode = False

        if self.search_mode:
            if current_time - self.last_search_switch > self.SEARCH_SWITCH_DELAY:
                self.search_direction = "D" if self.search_direction == "G" else "G"
                self.last_search_switch = current_time

            command = f"{self.search_direction} 200\n"
            if command != self.last_command:
                self.ser.write(command.encode())
                self.last_command = command
            return

        if not self.waiting_for_response and pos_x_robot is not None and pos_x_fixe is not None:
            diff = pos_x_robot - pos_x_fixe

            if diff > self.SEUIL_PIXELS:
                command = "G 254\n"
            elif diff < -self.SEUIL_PIXELS:
                command = "D 254\n"
            else:
                command = "S\n"

            if (current_time - self.last_stop_time) < self.STOP_DELAY:
                command = ""

            if command and command != self.last_command:
                if (current_time - self.last_send_time) > self.MIN_SEND_INTERVAL:
                    if command == "S\n" and (current_time - self.last_send_time) < 0.3:
                        return

                    self.ser.write(command.encode())
                    self.get_logger().info(f"📡 [Pi -> Arduino] : {command.strip()}")
                    self.last_command = command
                    self.last_send_time = current_time

                    if command == "S\n":
                        self.last_stop_time = current_time
                        self.waiting_for_response = True


def main(args=None):
    rclpy.init(args=args)
    try:
        node = RobotNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(f"Erreur critique : {e}")
    finally:
        if 'node' in locals():
            node.ser.close()
            node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()