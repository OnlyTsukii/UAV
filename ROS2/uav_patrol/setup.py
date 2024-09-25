from setuptools import setup
import os
from glob import glob

package_name = 'uav_patrol'

setup(
    name=package_name,
    version='0.0.0',
    packages=[
        package_name, 
        'uav_patrol.yolo_detector',
        'uav_patrol.drone_controller',
        'uav_patrol.gps_simulator',
        'uav_patrol.tf_converter'],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='xs',
    maintainer_email='1431297183@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'yolo_detector = uav_patrol.yolo_detector.yolo_detector:main',
            'tf_converter = uav_patrol.tf_converter.tf_converter:main',
            'uav2cam_broadcaster = uav_patrol.tf_converter.uav2cam_broadcaster:main',
            'gps_simulator = uav_patrol.gps_simulator.gps_simulator:main',
            'drone_controller = uav_patrol.drone_controller.drone_controller:main',
            'drone_controller_2 = uav_patrol.drone_controller.drone_controller_2:main'
        ],
    },
)
