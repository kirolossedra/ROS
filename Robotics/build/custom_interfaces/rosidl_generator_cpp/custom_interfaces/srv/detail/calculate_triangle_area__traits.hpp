// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/calculate_triangle_area.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/calculate_triangle_area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculateTriangleArea_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculateTriangleArea_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculateTriangleArea_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::CalculateTriangleArea_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::CalculateTriangleArea_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::CalculateTriangleArea_Request>()
{
  return "custom_interfaces::srv::CalculateTriangleArea_Request";
}

template<>
inline const char * name<custom_interfaces::srv::CalculateTriangleArea_Request>()
{
  return "custom_interfaces/srv/CalculateTriangleArea_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::CalculateTriangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::CalculateTriangleArea_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculateTriangleArea_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculateTriangleArea_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculateTriangleArea_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::CalculateTriangleArea_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::CalculateTriangleArea_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::CalculateTriangleArea_Response>()
{
  return "custom_interfaces::srv::CalculateTriangleArea_Response";
}

template<>
inline const char * name<custom_interfaces::srv::CalculateTriangleArea_Response>()
{
  return "custom_interfaces/srv/CalculateTriangleArea_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::CalculateTriangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::CalculateTriangleArea_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculateTriangleArea_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculateTriangleArea_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculateTriangleArea_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::CalculateTriangleArea_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::CalculateTriangleArea_Event & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::CalculateTriangleArea_Event>()
{
  return "custom_interfaces::srv::CalculateTriangleArea_Event";
}

template<>
inline const char * name<custom_interfaces::srv::CalculateTriangleArea_Event>()
{
  return "custom_interfaces/srv/CalculateTriangleArea_Event";
}

template<>
struct has_fixed_size<custom_interfaces::srv::CalculateTriangleArea_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Event>
  : std::integral_constant<bool, has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Request>::value && has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<custom_interfaces::srv::CalculateTriangleArea_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::CalculateTriangleArea>()
{
  return "custom_interfaces::srv::CalculateTriangleArea";
}

template<>
inline const char * name<custom_interfaces::srv::CalculateTriangleArea>()
{
  return "custom_interfaces/srv/CalculateTriangleArea";
}

template<>
struct has_fixed_size<custom_interfaces::srv::CalculateTriangleArea>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::CalculateTriangleArea_Request>::value &&
    has_fixed_size<custom_interfaces::srv::CalculateTriangleArea_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::CalculateTriangleArea>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Request>::value &&
    has_bounded_size<custom_interfaces::srv::CalculateTriangleArea_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::CalculateTriangleArea>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::CalculateTriangleArea_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::CalculateTriangleArea_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__TRAITS_HPP_
