// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kiro_custom_interfaces/msg/sensor_state.hpp"


#ifndef KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
#define KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kiro_custom_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kiro_custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: new_readings_ready
  {
    out << "new_readings_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.new_readings_ready, out);
    out << ", ";
  }

  // member: reading_id
  {
    out << "reading_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reading_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: new_readings_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_readings_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.new_readings_ready, out);
    out << "\n";
  }

  // member: reading_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reading_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reading_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kiro_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kiro_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kiro_custom_interfaces::msg::SensorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  kiro_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kiro_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kiro_custom_interfaces::msg::SensorState & msg)
{
  return kiro_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kiro_custom_interfaces::msg::SensorState>()
{
  return "kiro_custom_interfaces::msg::SensorState";
}

template<>
inline const char * name<kiro_custom_interfaces::msg::SensorState>()
{
  return "kiro_custom_interfaces/msg/SensorState";
}

template<>
struct has_fixed_size<kiro_custom_interfaces::msg::SensorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kiro_custom_interfaces::msg::SensorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kiro_custom_interfaces::msg::SensorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
