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
        
        # 1. Configuration des Publishers et Subscribers
        self.subscription = self.create_subscription(Image, 'camera/image_raw', self.image_callback, 10)
        self.publisher_status = self.create_publisher(String, 'camera/object_status', 10)
        self.bridge = CvBridge()

        # 2. Récupération dynamique du chemin du dossier images_cibles
        self.root_dir = os.path.join(os.path.expanduser('~'), 'ROS2_Hutalia', 'ros2_ws', 'src', 'droneload', 'droneload', 'images_cibles')
        
        # 3. Initialisation ORB
        self.orb = cv2.ORB_create(nfeatures=1000)
        self.bf = cv2.BFMatcher(cv2.NORM_HAMMING, crossCheck=True)
        
        # 4. Chargement et pré-traitement des images cibles au démarrage
        self.get_logger().info(f"Chargement des images cibles depuis : {self.root_dir}")
        self.target_images, self.labels = self.load_target_images(self.root_dir)
        self.target_features = [self.orb.detectAndCompute(img, None) for img in self.target_images]
        
        self.get_logger().info('Node Vision Prêt et abonné au flux caméra !')

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

        if detections:
            best_match = max(detections, key=detections.get)
            
            # Cette ligne envoie le résultat de l'objet vu en direct dans ton terminal
            self.get_logger().info(f"Objet détecté en direct : {best_match}")
            
            if best_match == "chien": 
                object_msg.data = "ouvert"
                target_found = True
        else:
            # Optionnel : affiche qu'aucun objet connu n'est détecté à chaque frame
            self.get_logger().info("Recherche en cours... Aucun objet connu")
        
        if not target_found:
            object_msg.data = "ferme"
            
        # Publication du résultat String ("ouvert" ou "ferme")
        self.publisher_status.publish(object_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ReconnaissanceNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    # Plus besoin de détruire les fenêtres OpenCV ici non plus
    rclpy.try_shutdown()

if __name__ == '__main__':
    main()