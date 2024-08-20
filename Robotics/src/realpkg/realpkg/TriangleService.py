#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import math

from custom_interfaces.srv import CalculateTriangleArea


class AreaServer(Node):
    
    def __init__(self):
        

        super().__init__("Triangle_Area_Service_Node")
        
        self.server_ = self.create_service(CalculateTriangleArea,"Triangle_Area",self.servHook)
        self.get_logger().info("Triangle Area Service has started")
    def servHook(self, request, response): #question : why does should it have self

        a = request.a
        b = request.b
        c = request.c

        s = (a+b+c)/2

        response.area = math.sqrt(s*(s-a)*(s-b)*(s-c))
        self.get_logger().info("Area is " + str(response.area)) 
        return response


        
        
def main(args=None):
    rclpy.init(args=args)
    node = AreaServer()

    
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == "__main__":
    main()