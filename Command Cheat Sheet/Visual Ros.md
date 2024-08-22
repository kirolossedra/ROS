### 1. To install turtle sim 

```
sudo apt install ros-distroName-turtlesim
```


### 2. To run a default turtle sim node 

```
ros2 run turtlesim turtlesim_node
```

### 3. To run a customly named turtle sim node 

```
ros2 run turtlesim turtlesim_node --ros-args __node:=custom_name
```


### 4. To be able to control the turtle using keyboard 

```
ros2 run turtlesim turtle_teleop_key
```


### 5. To be access a gui with a plenty of tools

```
rqt
```

### 6. To be access only graph from rqt

```
rqt_graph
```



ros2 service call /turtle1/teleport_absolute turtlesim/srv/TeleportAbsolute "{x: 5.0, y: 5.0, theta: 6}"
