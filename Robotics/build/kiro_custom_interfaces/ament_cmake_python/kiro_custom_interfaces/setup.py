from setuptools import find_packages
from setuptools import setup

setup(
    name='kiro_custom_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('kiro_custom_interfaces', 'kiro_custom_interfaces.*')),
)
