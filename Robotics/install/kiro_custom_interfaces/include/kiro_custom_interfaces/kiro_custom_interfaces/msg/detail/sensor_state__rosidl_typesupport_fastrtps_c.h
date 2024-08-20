// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice
#ifndef KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kiro_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kiro_custom_interfaces/msg/detail/sensor_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
bool cdr_serialize_kiro_custom_interfaces__msg__SensorState(
  const kiro_custom_interfaces__msg__SensorState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
bool cdr_deserialize_kiro_custom_interfaces__msg__SensorState(
  eprosima::fastcdr::Cdr &,
  kiro_custom_interfaces__msg__SensorState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
size_t get_serialized_size_kiro_custom_interfaces__msg__SensorState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
size_t max_serialized_size_kiro_custom_interfaces__msg__SensorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
bool cdr_serialize_key_kiro_custom_interfaces__msg__SensorState(
  const kiro_custom_interfaces__msg__SensorState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
size_t get_serialized_size_key_kiro_custom_interfaces__msg__SensorState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
size_t max_serialized_size_key_kiro_custom_interfaces__msg__SensorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kiro_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kiro_custom_interfaces, msg, SensorState)();

#ifdef __cplusplus
}
#endif

#endif  // KIRO_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
