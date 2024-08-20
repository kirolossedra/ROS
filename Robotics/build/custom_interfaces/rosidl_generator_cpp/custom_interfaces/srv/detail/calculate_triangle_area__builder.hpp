// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/calculate_triangle_area.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/calculate_triangle_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculateTriangleArea_Request_c
{
public:
  explicit Init_CalculateTriangleArea_Request_c(::custom_interfaces::srv::CalculateTriangleArea_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::CalculateTriangleArea_Request c(::custom_interfaces::srv::CalculateTriangleArea_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Request msg_;
};

class Init_CalculateTriangleArea_Request_b
{
public:
  explicit Init_CalculateTriangleArea_Request_b(::custom_interfaces::srv::CalculateTriangleArea_Request & msg)
  : msg_(msg)
  {}
  Init_CalculateTriangleArea_Request_c b(::custom_interfaces::srv::CalculateTriangleArea_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_CalculateTriangleArea_Request_c(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Request msg_;
};

class Init_CalculateTriangleArea_Request_a
{
public:
  Init_CalculateTriangleArea_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculateTriangleArea_Request_b a(::custom_interfaces::srv::CalculateTriangleArea_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CalculateTriangleArea_Request_b(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CalculateTriangleArea_Request>()
{
  return custom_interfaces::srv::builder::Init_CalculateTriangleArea_Request_a();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculateTriangleArea_Response_area
{
public:
  Init_CalculateTriangleArea_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::CalculateTriangleArea_Response area(::custom_interfaces::srv::CalculateTriangleArea_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CalculateTriangleArea_Response>()
{
  return custom_interfaces::srv::builder::Init_CalculateTriangleArea_Response_area();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculateTriangleArea_Event_response
{
public:
  explicit Init_CalculateTriangleArea_Event_response(::custom_interfaces::srv::CalculateTriangleArea_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::CalculateTriangleArea_Event response(::custom_interfaces::srv::CalculateTriangleArea_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Event msg_;
};

class Init_CalculateTriangleArea_Event_request
{
public:
  explicit Init_CalculateTriangleArea_Event_request(::custom_interfaces::srv::CalculateTriangleArea_Event & msg)
  : msg_(msg)
  {}
  Init_CalculateTriangleArea_Event_response request(::custom_interfaces::srv::CalculateTriangleArea_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CalculateTriangleArea_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Event msg_;
};

class Init_CalculateTriangleArea_Event_info
{
public:
  Init_CalculateTriangleArea_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculateTriangleArea_Event_request info(::custom_interfaces::srv::CalculateTriangleArea_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CalculateTriangleArea_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::CalculateTriangleArea_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CalculateTriangleArea_Event>()
{
  return custom_interfaces::srv::builder::Init_CalculateTriangleArea_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__BUILDER_HPP_
