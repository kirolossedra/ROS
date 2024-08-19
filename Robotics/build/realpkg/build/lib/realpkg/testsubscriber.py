#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String


class SubscriberNode(Node):
    
    def __init__(self):
        

        super().__init__("Subscribe_Node")
        self.publisher_name = "Alice"
        self.subscriber_ = self.create_subscription(String,"Greeting_topic",self.reception_hook,10)
        self.get_logger().info("Subscribtion is started...")
        


    def reception_hook(self,msg):
        self.get_logger().info(msg.data)
        
        
def main(args=None):
    rclpy.init(args=args)
    node = SubscriberNode()

    
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == "__main__":
    main()