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
        'uav_patrol.tf_converter',
        'uav_patrol.usb_cam'],
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
            'anomaly_detector = uav_patrol.yolo_detector.anomaly_detector:main',
            'tf_converter = uav_patrol.tf_converter.tf_converter:main',
            'uav2cam_broadcaster = uav_patrol.tf_converter.uav2cam_broadcaster:main',
            'gps_simulator = uav_patrol.gps_simulator.gps_simulator:main',
            'drone_controller_local = uav_patrol.drone_controller.drone_controller_local:main',
            'drone_controller_mission = uav_patrol.drone_controller.drone_controller_mission:main',
            'drone_controller_raw = uav_patrol.drone_controller.drone_controller_raw:main',
            'drone_controller_body = uav_patrol.drone_controller.drone_controller_body:main',
            'usb_cam_test = uav_patrol.usb_cam.usb_cam_test:main',
            'opencv_test = uav_patrol.usb_cam.opencv_test:main',
            'panel_detector = uav_patrol.yolo_detector.panel_detector:main',
        ],
    },
)
