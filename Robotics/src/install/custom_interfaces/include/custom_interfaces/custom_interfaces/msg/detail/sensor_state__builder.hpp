// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/sensor_state.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorState_reading_id
{
public:
  explicit Init_SensorState_reading_id(::custom_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::SensorState reading_id(::custom_interfaces::msg::SensorState::_reading_id_type arg)
  {
    msg_.reading_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::SensorState msg_;
};

class Init_SensorState_new_readings_ready
{
public:
  explicit Init_SensorState_new_readings_ready(::custom_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_reading_id new_readings_ready(::custom_interfaces::msg::SensorState::_new_readings_ready_type arg)
  {
    msg_.new_readings_ready = std::move(arg);
    return Init_SensorState_reading_id(msg_);
  }

private:
  ::custom_interfaces::msg::SensorState msg_;
};

class Init_SensorState_sensor_name
{
public:
  Init_SensorState_sensor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorState_new_readings_ready sensor_name(::custom_interfaces::msg::SensorState::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_SensorState_new_readings_ready(msg_);
  }

private:
  ::custom_interfaces::msg::SensorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::SensorState>()
{
  return custom_interfaces::msg::builder::Init_SensorState_sensor_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
