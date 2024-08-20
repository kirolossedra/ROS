// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kiro_custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kiro_custom_interfaces/srv/calculate_triangle_area.hpp"


#ifndef KIRO_CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_HPP_
#define KIRO_CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Request __attribute__((deprecated))
#else
# define DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Request __declspec(deprecated)
#endif

namespace kiro_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculateTriangleArea_Request_
{
  using Type = CalculateTriangleArea_Request_<ContainerAllocator>;

  explicit CalculateTriangleArea_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
    }
  }

  explicit CalculateTriangleArea_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Request
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Request
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculateTriangleArea_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculateTriangleArea_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculateTriangleArea_Request_

// alias to use template instance with default allocator
using CalculateTriangleArea_Request =
  kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kiro_custom_interfaces


#ifndef _WIN32
# define DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Response __attribute__((deprecated))
#else
# define DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Response __declspec(deprecated)
#endif

namespace kiro_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculateTriangleArea_Response_
{
  using Type = CalculateTriangleArea_Response_<ContainerAllocator>;

  explicit CalculateTriangleArea_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  explicit CalculateTriangleArea_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  // field types and members
  using _area_type =
    double;
  _area_type area;

  // setters for named parameter idiom
  Type & set__area(
    const double & _arg)
  {
    this->area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Response
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Response
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculateTriangleArea_Response_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculateTriangleArea_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculateTriangleArea_Response_

// alias to use template instance with default allocator
using CalculateTriangleArea_Response =
  kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kiro_custom_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Event __attribute__((deprecated))
#else
# define DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Event __declspec(deprecated)
#endif

namespace kiro_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculateTriangleArea_Event_
{
  using Type = CalculateTriangleArea_Event_<ContainerAllocator>;

  explicit CalculateTriangleArea_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CalculateTriangleArea_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kiro_custom_interfaces::srv::CalculateTriangleArea_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kiro_custom_interfaces::srv::CalculateTriangleArea_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Event
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kiro_custom_interfaces__srv__CalculateTriangleArea_Event
    std::shared_ptr<kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculateTriangleArea_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculateTriangleArea_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculateTriangleArea_Event_

// alias to use template instance with default allocator
using CalculateTriangleArea_Event =
  kiro_custom_interfaces::srv::CalculateTriangleArea_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kiro_custom_interfaces

namespace kiro_custom_interfaces
{

namespace srv
{

struct CalculateTriangleArea
{
  using Request = kiro_custom_interfaces::srv::CalculateTriangleArea_Request;
  using Response = kiro_custom_interfaces::srv::CalculateTriangleArea_Response;
  using Event = kiro_custom_interfaces::srv::CalculateTriangleArea_Event;
};

}  // namespace srv

}  // namespace kiro_custom_interfaces

#endif  // KIRO_CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_HPP_
