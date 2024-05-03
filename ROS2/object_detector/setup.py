from setuptools import setup
import os
from glob import glob

package_name = 'object_detector'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name,],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ccl',
    maintainer_email='1431297183@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dft_publisher = object_detector.dft_publisher:main'
        ],
    },
)
