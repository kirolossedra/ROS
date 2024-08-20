// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kiro_custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kiro_custom_interfaces/srv/calculate_triangle_area.h"


#ifndef KIRO_CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_H_
#define KIRO_CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalculateTriangleArea in the package kiro_custom_interfaces.
typedef struct kiro_custom_interfaces__srv__CalculateTriangleArea_Request
{
  double a;
  double b;
  double c;
} kiro_custom_interfaces__srv__CalculateTriangleArea_Request;

// Struct for a sequence of kiro_custom_interfaces__srv__CalculateTriangleArea_Request.
typedef struct kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CalculateTriangleArea in the package kiro_custom_interfaces.
typedef struct kiro_custom_interfaces__srv__CalculateTriangleArea_Response
{
  double area;
} kiro_custom_interfaces__srv__CalculateTriangleArea_Response;

// Struct for a sequence of kiro_custom_interfaces__srv__CalculateTriangleArea_Response.
typedef struct kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__request__MAX_SIZE = 1
};
// response
enum
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CalculateTriangleArea in the package kiro_custom_interfaces.
typedef struct kiro_custom_interfaces__srv__CalculateTriangleArea_Event
{
  service_msgs__msg__ServiceEventInfo info;
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence request;
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence response;
} kiro_custom_interfaces__srv__CalculateTriangleArea_Event;

// Struct for a sequence of kiro_custom_interfaces__srv__CalculateTriangleArea_Event.
typedef struct kiro_custom_interfaces__srv__CalculateTriangleArea_Event__Sequence
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kiro_custom_interfaces__srv__CalculateTriangleArea_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIRO_CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_H_
