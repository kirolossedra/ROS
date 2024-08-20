// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include "kiro_custom_interfaces/msg/detail/sensor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kiro_custom_interfaces
const rosidl_type_hash_t *
kiro_custom_interfaces__msg__SensorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0xec, 0xf0, 0x43, 0x42, 0xa3, 0xd1, 0xd7,
      0x09, 0x49, 0xa5, 0x53, 0xac, 0x55, 0x25, 0x38,
      0x41, 0xf7, 0xfa, 0xcc, 0x49, 0x8f, 0x3d, 0x08,
      0x40, 0xc0, 0x49, 0xf1, 0xf5, 0x7b, 0x12, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kiro_custom_interfaces__msg__SensorState__TYPE_NAME[] = "kiro_custom_interfaces/msg/SensorState";

// Define type names, field names, and default values
static char kiro_custom_interfaces__msg__SensorState__FIELD_NAME__sensor_name[] = "sensor_name";
static char kiro_custom_interfaces__msg__SensorState__FIELD_NAME__new_readings_ready[] = "new_readings_ready";
static char kiro_custom_interfaces__msg__SensorState__FIELD_NAME__reading_id[] = "reading_id";

static rosidl_runtime_c__type_description__Field kiro_custom_interfaces__msg__SensorState__FIELDS[] = {
  {
    {kiro_custom_interfaces__msg__SensorState__FIELD_NAME__sensor_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__msg__SensorState__FIELD_NAME__new_readings_ready, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__msg__SensorState__FIELD_NAME__reading_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kiro_custom_interfaces__msg__SensorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kiro_custom_interfaces__msg__SensorState__TYPE_NAME, 38, 38},
      {kiro_custom_interfaces__msg__SensorState__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string sensor_name\n"
  "bool new_readings_ready\n"
  "int64 reading_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kiro_custom_interfaces__msg__SensorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kiro_custom_interfaces__msg__SensorState__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kiro_custom_interfaces__msg__SensorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kiro_custom_interfaces__msg__SensorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
