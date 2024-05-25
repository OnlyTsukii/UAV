from setuptools import setup
import os
from glob import glob

package_name = 'uav_patrol'

setup(
    name=package_name,
    version='0.0.0',
    packages=[
        package_name, 
        'uav_patrol.ctrl_relayer', 
        'uav_patrol.gps_handler', 
        'uav_patrol.gps_handler.nodes',
        'uav_patrol.object_detector',
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
            'cmd_subscriber = uav_patrol.ctrl_relayer.cmd_subscriber:main',
            'nmea_serial_driver = uav_patrol.gps_handler.nodes.nmea_serial_driver:main',
            'gps_simulator = uav_patrol.gps_handler.gps_simulator:main',
            'gps_handler = uav_patrol.gps_handler.gps_handler:main',
            'dft_publisher = uav_patrol.object_detector.dft_publisher:main',
            'tf_converter = uav_patrol.tf_converter.tf_converter:main',
            'uav2cam_broadcaster = uav_patrol.tf_converter.uav2cam_broadcaster:main'
        ],
    },
)
