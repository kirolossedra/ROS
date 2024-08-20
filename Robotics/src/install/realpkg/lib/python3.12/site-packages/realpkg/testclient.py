#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts


            
def main(args=None):
    rclpy.init(args=args)
    node = Node("Addition_Requestor_Node_first_version")


    client = node.create_client(AddTwoInts, "Addition_Service")


    while not client.wait_for_service(1.0):
        node.get_logger().warn("DESIGNATED SERVER NOT FOUND!!!")

    request = AddTwoInts.Request()
    request.a = 1
    request.b = 8

    future = client.call_async(request) # what does this line mean
    rclpy.spin_until_future_complete(node,future)

    try:
        response = future.result()
        node.get_logger().info(str(request.a) + " + " + str(request.b) +" = " + str(response.sum)) 

    except Exception as e:
        node.get_logger().error("SErvice call failed %r" %(e,))


    

    
    
    rclpy.shutdown()


if __name__ == "__main__":
    main()