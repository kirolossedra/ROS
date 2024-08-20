#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


from custom_interfaces.msg import SensorState



class SensorPublisher(Node):
    
    def __init__(self):
        

        super().__init__("Sensor_Publish_Node")
        
        self.publisher_ = self.create_publisher(SensorState, "Sensor_Readings",10)
        self.get_logger().info("Sensor Publishing has started...")
        self.create_timer(0.5,self.publish_msg)


    def publish_msg(self):
        msg = SensorState()
        

        msg.sensor_name = "Radar"
        msg.new_readings_ready = True
        msg.reading_id =4 

        
        self.publisher_.publish(msg)




def main(args=None):
    rclpy.init(args=args)
    node = SensorPublisher()

    
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == "__main__":
    main()