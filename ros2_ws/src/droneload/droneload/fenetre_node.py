import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray, String
import serial
import time
from geometry_msgs.msg import Point
from geometry_msgs.msg import Twist

class FenetreNode(Node):
    def __init__(self):
        super().__init__('fenetre_node')
    
        # --- SUBSCRIPTION ROS 2 ---
        self.aruco_sub = self.create_subscription(
            Int32MultiArray,
            'aruco/markers',
            self.aruco_callback,
            10
        )
        
        # --- PUBLICATION ROS 2 ---
        self.image_pub = self.create_publisher(
            String, 
            'fenetre/direction', 
            10
        )

        self.IDS_FENETRE_B = [10, 11, 12, 13]  # Les 4 coins
        self.IDS_FENETRE_C = [20, 21]          # Alignés verticalement
        self.OFFSET_X_FENETRE_C = 0.30 # offset du fenêtre (30cm)
        self.KP_X = 0.5  # Gain pour la vitesse latérale (droite/gauche)
        self.KP_Y = 0.5  # Gain pour la vitesse verticale (haut/bas)
        self.MAX_VEL_X = 0.3  # Limite de vitesse latérale (droite/gauche) en m/s
        self.MAX_VEL_Y = 0.3  # Limite de vitesse verticale (haut/bas) en m/s

        self.get_logger().info("Nœud de passage du fenêtre prêt !")

    def aruco_callback(self, msg):
    # msg.data contient la liste des IDs détectés (ex: [3, 42])
# ==========================================
# ETAPE 1 : Identifier les fenêtres
# ==========================================
        liste_ids = msg.data
        
        marqueurs_fenetre_b = []
        marqueurs_fenetre_c = []

        for id in liste_ids:
            if id in self.IDS_FENETRE_B:
                marqueurs_fenetre_b.append(id)
            elif id in self.IDS_FENETRE_C:
                marqueurs_fenetre_c.append(id)

# ==========================================
# ETAPE 2 : Calculer le centre des fenêtres
# ==========================================

        # Création du message Point qui contiendra notre centre estimé
        centre_estime = Point()
        # ==========================================
        # CAS 1 : FENÊTRE B (Moyenne des 4 coins)
        # ==========================================
        if len(marqueurs_fenetre_b) == 4:
            centre_estime.x = sum(m['x'] for m in marqueurs_fenetre_b) / 4.0
            centre_estime.y = sum(m['y'] for m in marqueurs_fenetre_b) / 4.0
            centre_estime.z = sum(m['z'] for m in marqueurs_fenetre_b) / 4.0

        # ==========================================
        # CAS 2 : FENÊTRE C (Milieu vertical + Offset latéral)
        # ==========================================
        elif len(marqueurs_fenetre_c) == 2:
            # 1. On calcule le milieu brut
            milieu_brut_x = sum(m['x'] for m in marqueurs_fenetre_c) / 2.0
            milieu_brut_y = sum(m['y'] for m in marqueurs_fenetre_c) / 2.0
            milieu_brut_z = sum(m['z'] for m in marqueurs_fenetre_c) / 2.0

            # 2. On applique le décalage (l'offset) sur l'axe X 
            # Note : Selon le côté où est placée la fenêtre, ce sera + ou - self.OFFSET_X_FENETRE_C
            centre_estime.x = milieu_brut_x + self.OFFSET_X_FENETRE_C
            centre_estime.y = milieu_brut_y
            centre_estime.z = milieu_brut_z
        
        else : 
            pass

# ==========================================
# ETAPE 3 : Asservissement pour se centrer sur la fenêtre
# ==========================================
    
        # Le centre de notre caméra est théoriquement à (0.0, 0.0)
        # L'erreur est donc directement égale à la position de la cible
        erreur_x = centre_estime.x
        erreur_y = centre_estime.y

        # Calcul de la commande brute : Vitesse = Commande Proportionnelle (Erreur * K_p)
        cmd_vx = erreur_x * self.KP_X
        cmd_vy = erreur_y * self.KP_Y

        # Sécurité : On sature les vitesses
        cmd_vx = max(-self.MAX_VEL_X, min(self.MAX_VEL_X, cmd_vx))
        cmd_vy = max(-self.MAX_VEL_Y, min(self.MAX_VEL_Y, cmd_vy))

        # Création du message de mouvement Twist
        twist_msg = Twist()
        
        # En ROS standard :
        # twist_msg.linear.x correspond souvent à la marche avant/arrière (profondeur)
        # twist_msg.linear.y correspond à la vitesse latérale (gauche/droite)
        # twist_msg.linear.z correspond à la vitesse verticale (haut/bas)
        # /!\ ATTENTION : Vérifie le mapping exact des axes de ton drone spécifique /!\
        
        twist_msg.linear.y = cmd_vx  # Correction latérale
        twist_msg.linear.z = cmd_vy  # Correction verticale
        twist_msg.linear.x = 0.0     # Pour le moment, on reste stationnaire en profondeur, on s'aligne juste !
            
def main(args=None):
    rclpy.init(args=args)
    node = FenetreNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
    
