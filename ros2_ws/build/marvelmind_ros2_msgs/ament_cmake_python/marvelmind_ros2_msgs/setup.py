from setuptools import find_packages
from setuptools import setup

setup(
    name='marvelmind_ros2_msgs',
    version='1.0.2',
    packages=find_packages(
        include=('marvelmind_ros2_msgs', 'marvelmind_ros2_msgs.*')),
)
