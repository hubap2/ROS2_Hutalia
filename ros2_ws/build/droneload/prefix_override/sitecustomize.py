import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hutalia/ROS2_Hutalia/ros2_ws/install/droneload'
