from glob import glob
import os
from setuptools import setup

PACKAGE_NAME = "gps_handler"
SHARE_DIR = os.path.join("share", PACKAGE_NAME)

setup(
    name=PACKAGE_NAME,
    version='0.0.0',
    packages=["gps_handler", "gps_handler.nodes"],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + PACKAGE_NAME]),
        ('share/' + PACKAGE_NAME, ['package.xml']),
        (os.path.join(SHARE_DIR, "launch"), glob(os.path.join("launch", "*.launch.py"))),
        (os.path.join(SHARE_DIR, "config"), glob(os.path.join("config", "*.yaml")))],
    py_modules=[],
    zip_safe=True,
    install_requires=['setuptools',
                      'pyserial',
                      'numpy',
                      'pyyaml'],
    author='Eric Perko',
    maintainer='Ed Venator',
    keywords=['ROS2'],
    description='Package to parse NMEA strings and publish a very simple GPS message.',
    license='BSD',
    entry_points={
        'console_scripts': [
            'nmea_serial_driver = gps_handler.nodes.nmea_serial_driver:main',
            'gps_simulator = gps_handler.gps_simulator:main'
        ],
    }
)
