#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
import cv2
from cv_bridge import CvBridge
import numpy as np
import os

class ReconnaissanceNode(Node):
    def __init__(self):
        super().__init__('reconnaissance_node')
        
        # On initialise à None (aucune cible définie au lancement)
        self.cible_actuelle = None
        
        # 1. Configuration des Publishers et Subscribers
        self.subscription = self.create_subscription(Image, 'camera/image_raw', self.image_callback, 10)
        self.sub_reco_image = self.create_subscription(String, 'robot/reco_image', self.reco_image_callback, 10)
        self.publisher_status = self.create_publisher(String, 'reconnaissance/pince_command', 10)
        self.publisher_statut_debug = self.create_publisher(String, 'reconnaissance/image_reconnu', 10)

        self.bridge = CvBridge()

        # 2. Récupération dynamique du chemin du dossier images_cibles
        self.root_dir = os.path.join(os.path.expanduser('~'), 'ROS2_Hutalia', 'ros2_ws', 'src', 'droneload', 'droneload', 'images_cibles')
        
        # 3. Initialisation ORB
        self.orb = cv2.ORB_create(nfeatures=1000)
        self.bf = cv2.BFMatcher(cv2.NORM_HAMMING, crossCheck=True)
        
        # 4. Chargement et pré-traitement des images cibles au démarrage
        #self.get_logger().info(f"Chargement des images cibles depuis : {self.root_dir}")
        self.target_images, self.labels = self.load_target_images(self.root_dir)
        self.target_features = [self.orb.detectAndCompute(img, None) for img in self.target_images]
        
        self.get_logger().info('Node Vision Prêt.')

    def reco_image_callback(self, msg):
        self.cible_actuelle = msg.data
        #self.get_logger().info(f"Nouvelle cible reçue : '{self.cible_actuelle}'.")

    def load_target_images(self, root_dir):
        images = []
        labels = []
        if not os.path.exists(root_dir):
            self.get_logger().error(f"Le dossier cible n'existe pas : {root_dir}")
            return images, labels
            
        for class_dir in os.listdir(root_dir):
            class_path = os.path.join(root_dir, class_dir)
            if not os.path.isdir(class_path):
                continue
            for file in os.listdir(class_path):
                img_path = os.path.join(class_path, file)
                img = cv2.imread(img_path, cv2.IMREAD_GRAYSCALE)
                if img is not None:
                    images.append(img)
                    labels.append(class_dir)
        return images, labels

    def image_callback(self, msg):
        # Conversion du message ROS2 Image en format OpenCV
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        
        # Détection ORB sur l'image en direct
        kp_frame, desc_frame = self.orb.detectAndCompute(gray, None)
        
        detections = {}
        target_found = False
        
        # Comparaison avec notre base d'images cibles
        for i, (kp_tgt, desc_tgt) in enumerate(self.target_features):
            if desc_frame is None or desc_tgt is None:
                continue
            
            matches = self.bf.match(desc_tgt, desc_frame)
            matches = sorted(matches, key=lambda x: x.distance)
            good_matches = [m for m in matches if m.distance < 40]

            if len(good_matches) > 25:
                label = self.labels[i]
                detections[label] = detections.get(label, 0) + 1

        # Message de sortie par défaut
        object_msg = String()
        image_msg = String()

        if detections:
            best_match = max(detections, key=detections.get)
            image_msg.data = f"{best_match}"
            
            # Affichage permanent de ce qu'il voit
            if self.cible_actuelle is not None:
                self.get_logger().info(f"Objet détecté : {best_match} | Cible cherchée : {self.cible_actuelle}")
                # Ouvre la pince SEULEMENT si ça correspond
                if best_match == self.cible_actuelle: 
                    object_msg.data = "ouvert"
                    target_found = True
            else:
                #self.get_logger().info(f"Objet détecté : {best_match} | (Aucune cible définie, la pince reste fermée)")
                pass
        else:
            # S'il ne voit rien, on l'affiche seulement si on est en train de chercher activement
            if self.cible_actuelle is not None:
                #self.get_logger().info(f"Recherche de '{self.cible_actuelle}' ")
                pass

        # Publication du résultat String ("ouvert" ou "ferme")
        self.publisher_status.publish(object_msg)
        self.publisher_statut_debug.publish(image_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ReconnaissanceNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.try_shutdown()

if __name__ == '__main__':
    main()