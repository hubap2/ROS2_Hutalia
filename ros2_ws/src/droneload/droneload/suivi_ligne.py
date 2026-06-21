#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int32
from cv_bridge import CvBridge
import cv2
import numpy as np
import math

class SuiviLigneNode(Node):
    def __init__(self):
        super().__init__('suivi_ligne_node')
        
        # Outil pour convertir les images ROS en images OpenCV
        self.bridge = CvBridge()

        # 1. Souscription au flux vidéo de la caméra
        self.subscription = self.create_subscription(
            Image,
            'camera/image_raw',
            self.image_callback,
            10
        )

        # 2. Publication de la commande de direction pour les moteurs et les LEDs
        self.cmd_pub = self.create_publisher(Int32, '/commande_virage', 10)

        # Configuration des Zones d'Intérêt (ROIs) pour une image de 320x240
        self.ROIS = [
            (100, 110, 120, 10, 0.9),
            (100, 90,  120, 10, 0.8),
            (100, 70,  120, 10, 0.7),
            (100, 50,  120, 10, 0.5),
        ]
        self.ROIS_2 = [
            (0, 40, 40, 120),   # gauche
            (280, 40, 40, 120), # droite
        ]
        self.weight_sum = sum(r[4] for r in self.ROIS)

        self.get_logger().info('Nœud de suivi de ligne démarré ! En attente d\'images...')

    def detect_bicolor_line(self, hsv_img, roi):
        """Fonction interne pour détecter les couleurs dans une zone donnée"""
        x, y, w, h = roi
        crop = hsv_img[y:y+h, x:x+w]

        # Masques couleur (Valeurs par défaut, à adapter avec ton calibrage)
        lower_green = np.array([40, 40, 40])
        upper_green = np.array([85, 255, 255])
        mask_green = cv2.inRange(crop, lower_green, upper_green)

        lower_yellow = np.array([20, 100, 100])
        upper_yellow = np.array([35, 255, 255])
        mask_yellow = cv2.inRange(crop, lower_yellow, upper_yellow)

        def get_cx(mask):
            contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            if not contours: return None
            largest = max(contours, key=cv2.contourArea)
            M = cv2.moments(largest)
            if M["m00"] == 0: return None
            return int(M["m10"] / M["m00"]) + x

        cx_green = get_cx(mask_green)
        cx_yellow = get_cx(mask_yellow)

        mask_combined = cv2.bitwise_or(mask_green, mask_yellow)
        contours, _ = cv2.findContours(mask_combined, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        if not contours: return None

        largest = max(contours, key=cv2.contourArea)
        M = cv2.moments(largest)
        if M["m00"] == 0: return None

        cx = int(M["m10"] / M["m00"]) + x
        cy = int(M["m01"] / M["m00"]) + y
        return (cx, cy, x, y, w, h, cx_green, cx_yellow)

    def image_callback(self, msg):
        """Fonction appelée à chaque fois qu'une image est reçue de la caméra"""
        try:
            # Conversion du message ROS en format OpenCV
            frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        except Exception as e:
            self.get_logger().error(f'Erreur de conversion CvBridge: {e}')
            return

        # On redimensionne l'image en 320x240 car ta caméra publie en 640x480
        # Cela permet de garder tes calculs mathématiques (comme le centre à 160) corrects !
        frame = cv2.resize(frame, (320, 240))
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        centroid_sum = 0
        etat_couleurs = "INCONNU"

        # Analyse des zones principales
        for r in self.ROIS:
            blob = self.detect_bicolor_line(hsv, r[0:4])
            if blob:
                cx, cy, x, y, w, h, cx_green, cx_yellow = blob
                centroid_sum += cx * r[4]
                cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 1)
                cv2.drawMarker(frame, (cx, cy), (0, 0, 255), markerType=cv2.MARKER_CROSS)

                if cx_green is not None and cx_yellow is not None:
                    if cx_yellow < cx_green:
                        etat_couleurs = "JAUNE_A_GAUCHE"
                    elif cx_green < cx_yellow:
                        etat_couleurs = "JAUNE_A_DROITE"

        # Calcul de l'angle de déviation
        if self.weight_sum != 0 and centroid_sum != 0:
            center_pos = centroid_sum / self.weight_sum
            deflection_angle = -math.atan((center_pos - 160) / 60)
            deflection_angle = math.degrees(deflection_angle)
        else:
            deflection_angle = 0

        # Vérification des capteurs latéraux
        l_blob_coter = []
        for r in self.ROIS_2:
            blob = self.detect_bicolor_line(hsv, r[0:4])
            if blob:
                cx, _, x, y, w, h, _, _ = blob
                l_blob_coter.append(cx)
                cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 0, 0), 1)

        if len(l_blob_coter) == 1:
            if l_blob_coter[0] < 21:
                deflection_angle = -54 # Forcer virage max gauche
            elif l_blob_coter[0] > 299:
                deflection_angle = 54  # Forcer virage max droite

        # --- TRANSFORMATION EN COMMANDE ROS (-100 à 100) ---
        ANGLE_MAX = 54.0 
        # Si deflection_angle est négatif -> virage à gauche (valeur négative attendue par les leds)
        # Si deflection_angle est positif -> virage à droite (valeur positive)
        pourcentage = (deflection_angle / ANGLE_MAX) * 100
        
        # On s'assure que la valeur reste entre -100 et 100
        valeur_finale = int(max(-100, min(100, pourcentage)))

        # Création et publication du message
        msg_cmd = Int32()
        msg_cmd.data = valeur_finale
        self.cmd_pub.publish(msg_cmd)

        # Affichage pour le débogage sur le PC
        cv2.putText(frame, f"Cmd: {valeur_finale}%", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 255), 2)
        cv2.putText(frame, etat_couleurs, (10, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 0), 2)
        cv2.imshow("Vue camera - Suivi", frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = SuiviLigneNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Arrêt manuel.")
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()