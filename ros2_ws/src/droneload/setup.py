import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'droneload'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hutalia',
    maintainer_email='iatendryrakotonirina@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'camera_node = droneload.camera_node:main',
            'reconnaissance_node = droneload.reconnaissance_node:main',
            'aruco_node = droneload.aruco_node:main',
            'robot_node = droneload.robot_node:main',
            'pince1_node = droneload.pince1_node:main',
            'suivit_ligne = droneload.suivit_ligne:main',
            'led_node = droneload.led_node:main',
            'led_visuelle_node = droneload.led_visuelle_node:main',
        ],
    },
)
