from setuptools import find_packages
from setuptools import setup

setup(
    name='location_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('location_msgs', 'location_msgs.*')),
)
