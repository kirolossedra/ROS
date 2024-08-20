// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kiro_custom_interfaces/msg/detail/sensor_state__rosidl_typesupport_introspection_c.h"
#include "kiro_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kiro_custom_interfaces/msg/detail/sensor_state__functions.h"
#include "kiro_custom_interfaces/msg/detail/sensor_state__struct.h"


// Include directives for member types
// Member `sensor_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kiro_custom_interfaces__msg__SensorState__init(message_memory);
}

void kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function(void * message_memory)
{
  kiro_custom_interfaces__msg__SensorState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[3] = {
  {
    "sensor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__msg__SensorState, sensor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_readings_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__msg__SensorState, new_readings_ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reading_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__msg__SensorState, reading_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members = {
  "kiro_custom_interfaces__msg",  // message namespace
  "SensorState",  // message name
  3,  // number of fields
  sizeof(kiro_custom_interfaces__msg__SensorState),
  false,  // has_any_key_member_
  kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array,  // message members
  kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle = {
  0,
  &kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members,
  get_message_typesupport_handle_function,
  &kiro_custom_interfaces__msg__SensorState__get_type_hash,
  &kiro_custom_interfaces__msg__SensorState__get_type_description,
  &kiro_custom_interfaces__msg__SensorState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kiro_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, msg, SensorState)() {
  if (!kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier) {
    kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kiro_custom_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
