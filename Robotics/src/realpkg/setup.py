from setuptools import find_packages, setup

package_name = 'realpkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "Node_1 =  realpkg.testnode:main"
            ,"Node_publisher = realpkg.testpublisher:main"
            ,"Node_subscriber= realpkg.testsubscriber:main"
            ,"Node_Server = realpkg.testservice:main"
            ,"Node_Client = realpkg.testclient:main"
            ,"Node_Publisher_Sensor = realpkg.SensorPublisher:main"
            ,"Node_Area_Server = realpkg.TriangleService:main"
            
            
        ],
    },
)




