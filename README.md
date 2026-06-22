# ROS2 Hutalia — DroneLoad

Projet ROS2 pour drone de livraison autonome (DroneLoad 2026).

## Architecture

- **camera_node** : flux vidéo RealSense D4xx → topic `camera/image_raw`
- **aruco_node** : détection marqueurs ArUco → topic `aruco/markers`
- **reconnaissance_node** : reconnaissance d'objets ORB → topic `camera/object_status`
- **navigation_node** : navigation autonome MAVROS + Marvelmind + LiDAR

## Stack

- ROS2 Humble
- MAVROS / ArduCopter
- Intel RealSense
- Marvelmind indoor positioning
- MatekSys 3901-L0X (LiDAR + Optical Flow)
