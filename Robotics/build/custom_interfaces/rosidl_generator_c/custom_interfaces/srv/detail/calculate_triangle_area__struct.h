// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/calculate_triangle_area.h"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalculateTriangleArea in the package custom_interfaces.
typedef struct custom_interfaces__srv__CalculateTriangleArea_Request
{
  double a;
  double b;
  double c;
} custom_interfaces__srv__CalculateTriangleArea_Request;

// Struct for a sequence of custom_interfaces__srv__CalculateTriangleArea_Request.
typedef struct custom_interfaces__srv__CalculateTriangleArea_Request__Sequence
{
  custom_interfaces__srv__CalculateTriangleArea_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__CalculateTriangleArea_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CalculateTriangleArea in the package custom_interfaces.
typedef struct custom_interfaces__srv__CalculateTriangleArea_Response
{
  double area;
} custom_interfaces__srv__CalculateTriangleArea_Response;

// Struct for a sequence of custom_interfaces__srv__CalculateTriangleArea_Response.
typedef struct custom_interfaces__srv__CalculateTriangleArea_Response__Sequence
{
  custom_interfaces__srv__CalculateTriangleArea_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__CalculateTriangleArea_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_interfaces__srv__CalculateTriangleArea_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_interfaces__srv__CalculateTriangleArea_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CalculateTriangleArea in the package custom_interfaces.
typedef struct custom_interfaces__srv__CalculateTriangleArea_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_interfaces__srv__CalculateTriangleArea_Request__Sequence request;
  custom_interfaces__srv__CalculateTriangleArea_Response__Sequence response;
} custom_interfaces__srv__CalculateTriangleArea_Event;

// Struct for a sequence of custom_interfaces__srv__CalculateTriangleArea_Event.
typedef struct custom_interfaces__srv__CalculateTriangleArea_Event__Sequence
{
  custom_interfaces__srv__CalculateTriangleArea_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__CalculateTriangleArea_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CALCULATE_TRIANGLE_AREA__STRUCT_H_
