// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kiro_custom_interfaces/msg/sensor_state.hpp"


#ifndef KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_
#define KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kiro_custom_interfaces__msg__SensorState __attribute__((deprecated))
#else
# define DEPRECATED__kiro_custom_interfaces__msg__SensorState __declspec(deprecated)
#endif

namespace kiro_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorState_
{
  using Type = SensorState_<ContainerAllocator>;

  explicit SensorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->new_readings_ready = false;
      this->reading_id = 0ll;
    }
  }

  explicit SensorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->new_readings_ready = false;
      this->reading_id = 0ll;
    }
  }

  // field types and members
  using _sensor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_name_type sensor_name;
  using _new_readings_ready_type =
    bool;
  _new_readings_ready_type new_readings_ready;
  using _reading_id_type =
    int64_t;
  _reading_id_type reading_id;

  // setters for named parameter idiom
  Type & set__sensor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_name = _arg;
    return *this;
  }
  Type & set__new_readings_ready(
    const bool & _arg)
  {
    this->new_readings_ready = _arg;
    return *this;
  }
  Type & set__reading_id(
    const int64_t & _arg)
  {
    this->reading_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kiro_custom_interfaces::msg::SensorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const kiro_custom_interfaces::msg::SensorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::msg::SensorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::msg::SensorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kiro_custom_interfaces__msg__SensorState
    std::shared_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kiro_custom_interfaces__msg__SensorState
    std::shared_ptr<kiro_custom_interfaces::msg::SensorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorState_ & other) const
  {
    if (this->sensor_name != other.sensor_name) {
      return false;
    }
    if (this->new_readings_ready != other.new_readings_ready) {
      return false;
    }
    if (this->reading_id != other.reading_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorState_

// alias to use template instance with default allocator
using SensorState =
  kiro_custom_interfaces::msg::SensorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kiro_custom_interfaces

#endif  // KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_
