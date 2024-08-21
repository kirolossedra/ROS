# To create the following result: 


![Screenshot 2024-08-21 102734](https://github.com/user-attachments/assets/75ed0b3e-4184-4d86-ade0-021a0dc8ce06)




## 1-  create a custom turtle sim node with the designated name

![Screenshot 2024-08-21 101715](https://github.com/user-attachments/assets/b78d6d5f-46f7-4ea9-8eff-fc66865343ee)


## 2- Start a teleop node
```
ros2 run turtlesim turtle_teleop_key
```

## 3- from any created node create an instance with a normal modified name 

```
ros2 run realpkg Node_1 --ros-args -r __node:=this_is_a_node_with_a_long_name_to_test_max_characters
```

## 4- 
start a custom rqt node
```
rqt_graph --ros-args -r __node:=custom_rqt
```
