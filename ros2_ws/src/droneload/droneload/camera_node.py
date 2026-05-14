import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge
import pyrealsense2 as rs
import numpy as np

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.publisher_ = self.create_publisher(Image, 'camera/image_raw', 10)
        self.bridge = CvBridge()

        # Configuration de la RealSense
        self.pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        
        # Démarrage du flux
        self.pipeline.start(config)
        
        self.timer = self.create_timer(0.1, self.timer_callback) # 10 FPS
        self.get_logger().info('Caméra RealSense prête !')

    def timer_callback(self):
        # 1. Attendre une image
        frames = self.pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        if not color_frame:
            return

        # 2. Convertir en format OpenCV (numpy array)
        img_opencv = np.asanyarray(color_frame.get_data())

        # 4. Convertir l'image OpenCV en message ROS 2 et Publier
        msg = self.bridge.cv2_to_imgmsg(img_opencv, encoding="bgr8")
        self.publisher_.publish(msg)

def main(args=None): # Les deux-points étaient manquants ici
    rclpy.init(args=args)
    node = CameraNode() # Corrigé pour correspondre au nom de la classe
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        # On arrête proprement la caméra et le node
        node.pipeline.stop()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
