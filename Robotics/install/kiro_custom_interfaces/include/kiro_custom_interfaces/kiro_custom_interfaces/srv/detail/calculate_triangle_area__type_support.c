// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kiro_custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__rosidl_typesupport_introspection_c.h"
#include "kiro_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__functions.h"
#include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__init(message_memory);
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_fini_function(void * message_memory)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_members = {
  "kiro_custom_interfaces__srv",  // message namespace
  "CalculateTriangleArea_Request",  // message name
  3,  // number of fields
  sizeof(kiro_custom_interfaces__srv__CalculateTriangleArea_Request),
  false,  // has_any_key_member_
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_member_array,  // message members
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_type_support_handle = {
  0,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_members,
  get_message_typesupport_handle_function,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_hash,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_description,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kiro_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Request)() {
  if (!kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_type_support_handle.typesupport_identifier) {
    kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kiro_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__functions.h"
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__init(message_memory);
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_fini_function(void * message_memory)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_member_array[1] = {
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Response, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_members = {
  "kiro_custom_interfaces__srv",  // message namespace
  "CalculateTriangleArea_Response",  // message name
  1,  // number of fields
  sizeof(kiro_custom_interfaces__srv__CalculateTriangleArea_Response),
  false,  // has_any_key_member_
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_member_array,  // message members
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle = {
  0,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_members,
  get_message_typesupport_handle_function,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_hash,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_description,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kiro_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Response)() {
  if (!kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle.typesupport_identifier) {
    kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kiro_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__functions.h"
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "kiro_custom_interfaces/srv/calculate_triangle_area.h"
// Member `request`
// Member `response`
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__init(message_memory);
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_fini_function(void * message_memory)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__fini(message_memory);
}

size_t kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__size_function__CalculateTriangleArea_Event__request(
  const void * untyped_member)
{
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence * member =
    (const kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__CalculateTriangleArea_Event__request(
  const void * untyped_member, size_t index)
{
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence * member =
    (const kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_function__CalculateTriangleArea_Event__request(
  void * untyped_member, size_t index)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence * member =
    (kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__CalculateTriangleArea_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Request * item =
    ((const kiro_custom_interfaces__srv__CalculateTriangleArea_Request *)
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__CalculateTriangleArea_Event__request(untyped_member, index));
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request * value =
    (kiro_custom_interfaces__srv__CalculateTriangleArea_Request *)(untyped_value);
  *value = *item;
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__assign_function__CalculateTriangleArea_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request * item =
    ((kiro_custom_interfaces__srv__CalculateTriangleArea_Request *)
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_function__CalculateTriangleArea_Event__request(untyped_member, index));
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Request * value =
    (const kiro_custom_interfaces__srv__CalculateTriangleArea_Request *)(untyped_value);
  *item = *value;
}

bool kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__resize_function__CalculateTriangleArea_Event__request(
  void * untyped_member, size_t size)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence * member =
    (kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence *)(untyped_member);
  kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence__fini(member);
  return kiro_custom_interfaces__srv__CalculateTriangleArea_Request__Sequence__init(member, size);
}

size_t kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__size_function__CalculateTriangleArea_Event__response(
  const void * untyped_member)
{
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence * member =
    (const kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__CalculateTriangleArea_Event__response(
  const void * untyped_member, size_t index)
{
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence * member =
    (const kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_function__CalculateTriangleArea_Event__response(
  void * untyped_member, size_t index)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence * member =
    (kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__CalculateTriangleArea_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Response * item =
    ((const kiro_custom_interfaces__srv__CalculateTriangleArea_Response *)
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__CalculateTriangleArea_Event__response(untyped_member, index));
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response * value =
    (kiro_custom_interfaces__srv__CalculateTriangleArea_Response *)(untyped_value);
  *value = *item;
}

void kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__assign_function__CalculateTriangleArea_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response * item =
    ((kiro_custom_interfaces__srv__CalculateTriangleArea_Response *)
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_function__CalculateTriangleArea_Event__response(untyped_member, index));
  const kiro_custom_interfaces__srv__CalculateTriangleArea_Response * value =
    (const kiro_custom_interfaces__srv__CalculateTriangleArea_Response *)(untyped_value);
  *item = *value;
}

bool kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__resize_function__CalculateTriangleArea_Event__response(
  void * untyped_member, size_t size)
{
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence * member =
    (kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence *)(untyped_member);
  kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence__fini(member);
  return kiro_custom_interfaces__srv__CalculateTriangleArea_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Event, request),  // bytes offset in struct
    NULL,  // default value
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__size_function__CalculateTriangleArea_Event__request,  // size() function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__CalculateTriangleArea_Event__request,  // get_const(index) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_function__CalculateTriangleArea_Event__request,  // get(index) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__CalculateTriangleArea_Event__request,  // fetch(index, &value) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__assign_function__CalculateTriangleArea_Event__request,  // assign(index, value) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__resize_function__CalculateTriangleArea_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(kiro_custom_interfaces__srv__CalculateTriangleArea_Event, response),  // bytes offset in struct
    NULL,  // default value
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__size_function__CalculateTriangleArea_Event__response,  // size() function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_const_function__CalculateTriangleArea_Event__response,  // get_const(index) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__get_function__CalculateTriangleArea_Event__response,  // get(index) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__fetch_function__CalculateTriangleArea_Event__response,  // fetch(index, &value) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__assign_function__CalculateTriangleArea_Event__response,  // assign(index, value) function pointer
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__resize_function__CalculateTriangleArea_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_members = {
  "kiro_custom_interfaces__srv",  // message namespace
  "CalculateTriangleArea_Event",  // message name
  3,  // number of fields
  sizeof(kiro_custom_interfaces__srv__CalculateTriangleArea_Event),
  false,  // has_any_key_member_
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_member_array,  // message members
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_type_support_handle = {
  0,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_members,
  get_message_typesupport_handle_function,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_hash,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_description,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kiro_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Event)() {
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Request)();
  kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Response)();
  if (!kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_type_support_handle.typesupport_identifier) {
    kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kiro_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_members = {
  "kiro_custom_interfaces__srv",  // service namespace
  "CalculateTriangleArea",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_type_support_handle,
  NULL,  // response message
  // kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle
  NULL  // event_message
  // kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle
};


static rosidl_service_type_support_t kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_type_support_handle = {
  0,
  &kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_members,
  get_service_typesupport_handle_function,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Request__rosidl_typesupport_introspection_c__CalculateTriangleArea_Request_message_type_support_handle,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Response__rosidl_typesupport_introspection_c__CalculateTriangleArea_Response_message_type_support_handle,
  &kiro_custom_interfaces__srv__CalculateTriangleArea_Event__rosidl_typesupport_introspection_c__CalculateTriangleArea_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kiro_custom_interfaces,
    srv,
    CalculateTriangleArea
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kiro_custom_interfaces,
    srv,
    CalculateTriangleArea
  ),
  &kiro_custom_interfaces__srv__CalculateTriangleArea__get_type_hash,
  &kiro_custom_interfaces__srv__CalculateTriangleArea__get_type_description,
  &kiro_custom_interfaces__srv__CalculateTriangleArea__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kiro_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea)(void) {
  if (!kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_type_support_handle.typesupport_identifier) {
    kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kiro_custom_interfaces, srv, CalculateTriangleArea_Event)()->data;
  }

  return &kiro_custom_interfaces__srv__detail__calculate_triangle_area__rosidl_typesupport_introspection_c__CalculateTriangleArea_service_type_support_handle;
}
