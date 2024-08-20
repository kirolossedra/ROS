#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String


class PublisherNode(Node):
    
    def __init__(self):
        

        super().__init__("Publish_Node")
        self.publisher_name = "Alice"
        self.publisher_ = self.create_publisher(String, "Greeting_topic",10)
        self.get_logger().info("Publishing is started...")
        self.create_timer(0.5,self.publish_msg)


    def publish_msg(self):
        msg = String()
        msg.data = "Hi this is"+str(self.publisher_name)
        
        self.publisher_.publish(msg)
def main(args=None):
    rclpy.init(args=args)
    node = PublisherNode()

    
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == "__main__":
    main()