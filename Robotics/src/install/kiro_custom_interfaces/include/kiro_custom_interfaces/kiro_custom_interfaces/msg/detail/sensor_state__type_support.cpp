// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kiro_custom_interfaces/msg/detail/sensor_state__functions.h"
#include "kiro_custom_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kiro_custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kiro_custom_interfaces::msg::SensorState(_init);
}

void SensorState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kiro_custom_interfaces::msg::SensorState *>(message_memory);
  typed_message->~SensorState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorState_message_member_array[3] = {
  {
    "sensor_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces::msg::SensorState, sensor_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "new_readings_ready",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces::msg::SensorState, new_readings_ready),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reading_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces::msg::SensorState, reading_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorState_message_members = {
  "kiro_custom_interfaces::msg",  // message namespace
  "SensorState",  // message name
  3,  // number of fields
  sizeof(kiro_custom_interfaces::msg::SensorState),
  false,  // has_any_key_member_
  SensorState_message_member_array,  // message members
  SensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorState_message_members,
  get_message_typesupport_handle_function,
  &kiro_custom_interfaces__msg__SensorState__get_type_hash,
  &kiro_custom_interfaces__msg__SensorState__get_type_description,
  &kiro_custom_interfaces__msg__SensorState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kiro_custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kiro_custom_interfaces::msg::SensorState>()
{
  return &::kiro_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kiro_custom_interfaces, msg, SensorState)() {
  return &::kiro_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
