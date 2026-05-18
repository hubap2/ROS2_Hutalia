#!/usr/bin/env python3
"""
Created on Mon apr 27 19:39 2026

des: pince_V1.py
obj: code de commande du servo moteur pour la pince V1

reflection : voir pour l'angle d'ouverture et de fermeture si on ne prend pas les extreme

à faire : verif

problème :

@author: hubap
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

        # 2. Création du Subscriber (Écoute les ordres)
        # On écoute sur 'reconnaissance/pince_command' pour correspondre au noeud de vision
        self.subscription = self.create_subscription(
            String,
            'reconnaissance/pince_command',
            self.listener_callback,
            10)

        # 3. Création du Publisher (Annonce l'état)
        # On publie sur 'pince_etat'
        self.publisher_ = self.create_publisher(String, 'pince_etat', 10)

        # Timer pour publier l'état régulièrement (toutes les 1 seconde)
        self.timer = self.create_timer(1.0, self.publish_status)
        
        self.get_logger().info("Le nœud de la pince est démarré !")
        self.etat_actuel = "ferme" # État par défaut

    def listener_callback(self, msg):
        commande = msg.data.lower()
        
        if commande == "ouvert": # Adapté pour correspondre au "ouvert" envoyé par la vision
            # Vous pourrez ajuster ces angles extrêmes plus tard selon vos réflexions
            self.servo.angle = 180
            self.etat_actuel = "ouvert"
            self.get_logger().info("Commande reçue : Ouverture de la pince")
        
        elif commande == "ferme": # Adapté pour correspondre au "ferme" envoyé par la vision
            self.servo.angle = 0
            self.etat_actuel = "ferme"
            self.get_logger().info("Commande reçue : Fermeture de la pince")
        
        else:
            self.get_logger().warn(f"Commande inconnue : {commande}")

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