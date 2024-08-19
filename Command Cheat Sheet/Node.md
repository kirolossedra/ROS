### 1. To compile a file in the package : Notice please be inside a workspace

```
colcon build --packages-select package_name 
```
### 1. to rename a node


  ```
  ros2 run packageName NodeName --ros-args -r __node:=newNodeName
```
