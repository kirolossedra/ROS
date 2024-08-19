### 1. To check for a certain message (String in this case) 
``` 
ros2 interface show example_interfaces/msg/String

``` 



### 2. To list the active/alive topics similar to nodes command

``` 
ros2 topic list

```

### 3. To know the data comming from a certain topic

``` 
ros2 topic echo /topic_name

``` 
### 4. To rename a topic at runtime Please Note: You have to change its view in the subscriber as well 

  ```
  ros2 run packageName NodeName --ros-args -r oldTopicName:=newTopicName
```


### 5. Example on creating a publisher on the run 
  ```
  ros2 topic pub -r 10 /topic_name example_interfaces/msg/String "{data: 'hello from terminal'}"
```
