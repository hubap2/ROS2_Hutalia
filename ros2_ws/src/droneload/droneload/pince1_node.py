#!/usr/bin/env python3
"""
Created on Mon apr 27 19:39 2026

des: pince_V1.py
obj: code de commande du servo moteur pour la pince V1 (Filtré pour l'ouverture uniquement)
"""
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from gpiozero import AngularServo

class Pince1Node(Node):
    def __init__(self):
        super().__init__('pince1_node')

        # 1. Configuration du Servo (GPIO 17)
        self.servo = AngularServo(17, min_angle=0, max_angle=180, 
                                  min_pulse_width=0.0005, max_pulse_width=0.0025)

        # 2. Création des Subscribers
        # Écoute la vision
        self.sub_vision = self.create_subscription(
            String,
            'reconnaissance/pince_command',
            self.listener_callback,
            10)
        
        # Écoute la commande manuelle (IHM)
        self.sub_ihm = self.create_subscription(
            String,
            'ihm/pince_command',
            self.listener_callback,
            10)

        # 3. Création du Publisher (Annonce l'état)
        self.publisher_ = self.create_publisher(String, 'pince_etat', 10)

        # Timer pour publier l'état régulièrement (toutes les 1 seconde)
        self.timer = self.create_timer(1.0, self.publish_status)
        
        self.get_logger().info("Le nœud de la pince est démarré !")
        self.etat_actuel = "ferme" # État par défaut

    def listener_callback(self, msg):
        # .strip() permet de retirer les espaces invisibles ou retours à la ligne
        commande = msg.data.lower().strip()
        
        # Condition stricte : on ne réagit QUE si le message est exactement "ouvert"
        if commande == "ouvert":
            self.servo.angle = 0
            self.etat_actuel = "ouvert"
            self.get_logger().info("Commande valide reçue : Ouverture de la pince")
            
        # Tout le reste (chaînes vides, ordres de fermeture, bruit) est ignoré en silence

    def publish_status(self):
        msg = String()
        msg.data = f"Etat de la pince : {self.etat_actuel}"
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = Pince1Node()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.servo.detach()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()