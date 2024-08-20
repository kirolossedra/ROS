#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts


class AdditionServer(Node):
    
    def __init__(self):
        

        super().__init__("add_two_ints_service")
        
        self.server_ = self.create_service(AddTwoInts,"Addition_Service",self.servHook)
        self.get_logger().info("Addition Service has started")
    def servHook(self, request, response): #question : why does should it have self 
        response.sum = request.a + request.b
        self.get_logger().info(str(request.a) + " + " + str(request.b) +" = " + str(response.sum)) 
        return response


        
        
def main(args=None):
    rclpy.init(args=args)
    node = AdditionServer()

    
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == "__main__":
    main()