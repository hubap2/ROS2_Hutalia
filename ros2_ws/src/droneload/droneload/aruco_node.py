import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int32MultiArray
import cv2
import cv2.aruco as aruco
from cv_bridge import CvBridge

class ArucoNode(Node):
    def __init__(self):
        super().__init__('aruco_node')
        
        self.bridge = CvBridge()
        
        # --- PARAMÈTRES ARUCO (NOUVELLE SYNTAXE) ---
        self.aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_4X4_50)
        self.parameters = aruco.DetectorParameters()
        
        # On crée l'objet détecteur requis par les nouvelles versions d'OpenCV
        self.detector = aruco.ArucoDetector(self.aruco_dict, self.parameters)

        # --- ABONNEMENT ---
        self.subscription = self.create_subscription(
            Image,
            'camera/image_raw',
            self.image_callback,
            10
        )
        
        # --- PUBLICATION ---
        self.marker_pub = self.create_publisher(Int32MultiArray, 'aruco/markers', 10)

        self.get_logger().info('Nœud ArUco prêt !')

    def image_callback(self, msg):
        try:
            # Conversion du message ROS en image OpenCV
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        except Exception as e:
            self.get_logger().error(f"Erreur de conversion d'image : {e}")
            return

        # Détection des marqueurs ArUco avec le nouvel objet detector
        corners, ids, _ = self.detector.detectMarkers(frame)

        marker_data = []

        # Si on détecte des marqueurs, on extrait les ID et les positions X
        if ids is not None:
            for i in range(len(ids)):
                marker_id = int(ids[i][0])
                c = corners[i][0]
                center_x = int(c[:, 0].mean()) # Calcul du centre X en pixel
                
                # On remplit la liste : [id, x, id, x, ...]
                marker_data.append(marker_id)
                marker_data.append(center_x)

        # Publication de la liste
        data_msg = Int32MultiArray()
        data_msg.data = marker_data
        self.marker_pub.publish(data_msg)


def main(args=None):
    rclpy.init(args=args)
    node = ArucoNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()