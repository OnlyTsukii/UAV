from setuptools import setup
from glob import glob
import os

package_name = 'cmd_handler'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ccl',
    maintainer_email='ccl@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'cmd_publisher = cmd_handler.cmd_publisher:main',
                'cmd_subscriber = cmd_handler.cmd_subscriber:main',
        ],
},
)
