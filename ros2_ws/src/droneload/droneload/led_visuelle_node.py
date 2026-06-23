#led_visuelle_node.py
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import time
import threading

# Importation des bibliothèques matérielles
import board
import neopixel

class LedTestNode(Node):
    def __init__(self):
        super().__init__('led_test_node')
        
        # =====================================================================
        # CONFIGURATION DU TEST
        # =====================================================================
        self.PIN = board.D21        # Broche GPIO 21
        self.NUM_LEDS = 20          # Nombre de LEDs sur ton ruban
        self.BRIGHTNESS = 0.9       # Luminosité (de 0.0 à 1.0)
        
        self.get_logger().info("Initialisation du ruban LED sur GPIO 21...")
        
        # Initialisation du ruban LED
        self.pixels = neopixel.NeoPixel(self.PIN, self.NUM_LEDS, brightness=self.BRIGHTNESS, auto_write=False)
        
        # Variable pour contrôler la boucle (permet de s'arrêter proprement)
        self.is_running = True
        
        # On lance l'animation dans un "Thread" séparé pour ne pas bloquer ROS 2
        self.animation_thread = threading.Thread(target=self.boucle_principale)
        self.animation_thread.start()

    def chenillard_couleur(self, couleur, temps_attente):
        """Allume les LEDs une par une avec la couleur donnée."""
        for i in range(self.NUM_LEDS):
            if not self.is_running: # Sécurité pour quitter rapidement
                return
            self.pixels[i] = couleur
            self.pixels.show()
            time.sleep(temps_attente)
        
        if self.is_running:
            time.sleep(0.5)

    def generer_couleur_roue(self, pos):
        """Génère des couleurs pour créer un dégradé arc-en-ciel (0-255)."""
        if pos < 85:
            return (pos * 3, 255 - pos * 3, 0)
        elif pos < 170:
            pos -= 85
            return (255 - pos * 3, 0, pos * 3)
        else:
            pos -= 170
            return (0, pos * 3, 255 - pos * 3)

    def chenillard_arc_en_ciel(self, temps_attente):
        """Fait défiler un arc-en-ciel sur le ruban."""
        for j in range(255):
            if not self.is_running: # Sécurité pour quitter rapidement
                break
            for i in range(self.NUM_LEDS):
                pixel_index = (i * 256 // self.NUM_LEDS) + j
                self.pixels[i] = self.generer_couleur_roue(pixel_index & 255)
            self.pixels.show()
            time.sleep(temps_attente)

    def boucle_principale(self):
        """La boucle infinie qui tourne en tâche de fond"""
        self.get_logger().info("Début du test des animations LEDs.")
        self.get_logger().info("Appuyez sur Ctrl+C pour arrêter le test.")
        
        while self.is_running:
            # Éteindre avant de commencer
            self.pixels.fill((0, 0, 0))
            self.pixels.show()
            time.sleep(0.5)

            if not self.is_running: break
            self.get_logger().info("-> Chenillard ROUGE")
            self.chenillard_couleur((255, 0, 0), 0.1)

            if not self.is_running: break
            self.get_logger().info("-> Chenillard VERT")
            self.chenillard_couleur((0, 255, 0), 0.1)

            if not self.is_running: break
            self.get_logger().info("-> Chenillard BLEU")
            self.chenillard_couleur((0, 0, 255), 0.1)

            if not self.is_running: break
            self.get_logger().info("-> Chenillard ARC-EN-CIEL")
            self.chenillard_arc_en_ciel(0.01)

    def eteindre_leds(self):
        """Procédure d'arrêt propre"""
        self.is_running = False
        self.get_logger().info("Extinction des LEDs...")
        # Attendre que le thread se termine
        if self.animation_thread.is_alive():
            self.animation_thread.join(timeout=1.0)
            
        self.pixels.fill((0, 0, 0))
        self.pixels.show()

def main(args=None):
    rclpy.init(args=args)
    node = LedTestNode()
    
    try:
        # Fait tourner le nœud ROS (écoute des événements système)
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        # S'assure que les LEDs s'éteignent même en cas de Ctrl+C
        node.eteindre_leds()
        node.destroy_node()
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()