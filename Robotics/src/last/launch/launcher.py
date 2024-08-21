from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()



    publish_node = Node(



        package="realpkg",
        executable="Node_publisher"
    )


    service_node = Node(



        package="realpkg",
        executable="Node_Server"
    )

    ld.add_action(publish_node)
    ld.add_action(service_node)



    return ld

