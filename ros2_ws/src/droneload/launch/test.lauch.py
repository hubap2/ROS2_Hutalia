from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    # 1. Configuration du nœud Caméra
    camera_node = Node(
        package='droneload',          # Nom de ton package colcon
        executable='camera_node',      # Nom de l'executable défini dans setup.py
        name='camera_node',            # Nom sous lequel le nœud va apparaître
        output='screen'                # Permet d'afficher les logs/print dans le terminal
    )

    # 2. Configuration du nœud ArUco
    aruco_node = Node(
        package='droneload',
        executable='aruco_node',
        name='aruco_node',
        output='screen'
    )

    # 3. Configuration du nœud Robot (Contrôle série Arduino)
    robot_node = Node(
        package='droneload',
        executable='robot_node',
        name='robot_node',
        output='screen'
    )

    # 4. Configuration du nœud Reconnaissance
    reconnaissance_node = Node(
        package='droneload',
        executable='reconnaissance_node',
        name='reconnaissance_node',
        output='screen'
    )

    # 5. Configuration du nœud Pince 1
    pince1_node = Node(
        package='droneload',
        executable='pince1_node',
        name='pince1_node',
        output='screen'
    )

    # 6. Configuration du nœud Pince 1
    led_visuelle_node = Node(
        package='droneload',
        executable='led_visuelle_node',
        name='led_visuelle_node',
        output='screen'
    )

    # On rassemble TOUS les nœuds dans la description du Launch
    return LaunchDescription([
        led_visuelle_node
    ])
    