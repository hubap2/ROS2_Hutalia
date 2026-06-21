#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import time

# =====================================================================
# CONFIGURATION
# =====================================================================
# Met à False UNIQUEMENT quand tu es sur le Raspberry Pi avec le ruban branché
SIMULATION_MODE = False#True

# Configuration du ruban LED
PIN_L = board.D21        # Broche GPIO 21
PIN_R = board.D18        # Broche GPIO 18
NUM_LEDS = 10          # Nombre de LEDs sur ton ruban

# On sépare les index des LEDs (A TOI DE CHANGER CES NUMÉROS SELON TON CABLAGE)
# Exemple : 10 LEDs pour la gauche, 10 LEDs pour la droite
LEDS_GAUCHE = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] #[0, 1, 2, 3, 4, 10, 11, 12, 13, 14]
LEDS_DROITE = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] #[5, 6, 7, 8, 9, 15, 16, 17, 18, 19]

# Code Couleur Maritime (RGB)
COULEUR_GAUCHE = (255, 0, 0)   # ROUGE (Bâbord)
COULEUR_DROITE = (0, 255, 0)   # VERT  (Tribord)
COULEUR_ETEINT = (0, 0, 0)

if not SIMULATION_MODE:
    # Import de la bibliothèque spécifique au Raspberry Pi
    import board
    import neopixel

class LedControllerNode(Node):
    def __init__(self):
        super().__init__('led_controller_node')
        
        # On s'abonne à un topic de commande de virage
        # Le message sera un entier entre -100 (100% Gauche) et 100 (100% Droite)
        self.subscription = self.create_subscription(
            Int32,
            '/commande_virage',
            self.virage_callback,
            10
        )
        
        self.get_logger().info("Nœud Contrôleur LED démarré.")
        
        if SIMULATION_MODE:
            self.get_logger().info("MODE SIMULATION ACTIF : Affichage dans le terminal.")
        else:
            self.get_logger().info("MODE RASPBERRY PI ACTIF : Connexion au ruban NeoPixel.")
            self.led_left = neopixel.NeoPixel(PIN_L, NUM_LEDS, auto_write=False)
            self.led_rignt = neopixel.NeoPixel(PIN_R, NUM_LEDS, auto_write=False)
            self.tout_eteindre()

    def tout_eteindre(self):
        """Éteint toutes les LEDs physiques"""
        if not SIMULATION_MODE:
            self.led_left.fill(COULEUR_ETEINT)
            self.led_rignt.fill(COULEUR_ETEINT)
            self.led_left.show()
            self.led_rignt.show()

    def etat_pincese(self, msg);
        """
        Appelé à chaque fois qu'on reçoit une commande de direction.
        msg.data va de -100 (Gauche max) à +100 (Droite max).
        """
        mesage = msg.data
        
        if mesage == "ferme":
            # Virage à GAUCHE
            pourcentage = abs(valeur)
            nb_leds_allumees = int((pourcentage / 100.0) * len(LEDS_GAUCHE))
            self.allumer_leds("GAUCHE", nb_leds_allumees)
            
        elif valeur > 0:
            # Virage à DROITE
            pourcentage = valeur
            nb_leds_allumees = int((pourcentage / 100.0) * len(LEDS_DROITE))
            self.allumer_leds("DROITE", nb_leds_allumees)
            
        else:
            # Tout droit (0)
            self.allumer_leds("CENTRE", 0)

    def virage_callback(self, msg):
        """
        Appelé à chaque fois qu'on reçoit une commande de direction.
        msg.data va de -100 (Gauche max) à +100 (Droite max).
        """
        valeur = msg.data
        
        # Limiter les valeurs entre -100 et 100 par sécurité
        valeur = max(-100, min(100, valeur))
        
        if valeur < 0:
            # Virage à GAUCHE
            pourcentage = abs(valeur)
            nb_leds_allumees = int((pourcentage / 100.0) * len(LEDS_GAUCHE))
            self.allumer_leds("GAUCHE", nb_leds_allumees)
            
        elif valeur > 0:
            # Virage à DROITE
            pourcentage = valeur
            nb_leds_allumees = int((pourcentage / 100.0) * len(LEDS_DROITE))
            self.allumer_leds("DROITE", nb_leds_allumees)
            
        else:
            # Tout droit (0)
            self.allumer_leds("CENTRE", 0)

    def allumer_leds(self, direction, nombre):
        """Gère l'affichage physique ou simulé"""
        if SIMULATION_MODE:
            self.simuler_affichage_terminal(direction, nombre)
        else:
            self.led_rignt.fill(COULEUR_ETEINT) # On éteint tout d'abord
            self.led_left.fill(COULEUR_ETEINT) # On éteint tout d'abord
            
            if direction == "GAUCHE":
                for i in range(nombre):
                    if i < len(LEDS_GAUCHE):
                        index_led = LEDS_GAUCHE[i]
                        self.led_left[index_led] = COULEUR_GAUCHE
            
            elif direction == "DROITE":
                for i in range(nombre):
                    if i < len(LEDS_DROITE):
                        index_led = LEDS_DROITE[i]
                        self.led_rignt[index_led] = COULEUR_DROITE
                        
            self.pixels.show()

    def simuler_affichage_terminal(self, direction, nombre):
        """Dessine une barre de progression colorée dans le terminal"""
        max_leds = 10
        
        # Séquences d'échappement ANSI pour colorer le terminal
        ROUGE = '\033[91m'
        VERT = '\033[92m'
        RESET = '\033[0m'
        
        barre_gauche = ["○"] * max_leds
        barre_droite = ["○"] * max_leds
        
        if direction == "GAUCHE":
            # On remplit de droite à gauche pour que ça parte du centre
            for i in range(nombre):
                barre_gauche[-(i+1)] = f"{ROUGE}●{RESET}"
        elif direction == "DROITE":
            # On remplit de gauche à droite
            for i in range(nombre):
                barre_droite[i] = f"{VERT}●{RESET}"
                
        affichage_gauche = "".join(barre_gauche)
        affichage_droite = "".join(barre_droite)
        
        print(f"Bâbord [{affichage_gauche}] <|> [{affichage_droite}] Tribord")

def main(args=None):
    rclpy.init(args=args)
    node = LedControllerNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Arrêt du nœud demandé.")
    finally:
        if not SIMULATION_MODE:
            node.tout_eteindre()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()