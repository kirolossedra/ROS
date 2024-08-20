// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/sensor_state.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'sensor_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorState in the package custom_interfaces.
typedef struct custom_interfaces__msg__SensorState
{
  rosidl_runtime_c__String sensor_name;
  bool new_readings_ready;
  int64_t reading_id;
} custom_interfaces__msg__SensorState;

// Struct for a sequence of custom_interfaces__msg__SensorState.
typedef struct custom_interfaces__msg__SensorState__Sequence
{
  custom_interfaces__msg__SensorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SensorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
