// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/sensor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__SensorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x64, 0x1c, 0x56, 0xec, 0x9e, 0x2c, 0xe3,
      0x8b, 0x31, 0xd6, 0x78, 0xaa, 0xf3, 0xd2, 0xad,
      0x72, 0x91, 0x6f, 0xe7, 0x8e, 0x12, 0x16, 0x4e,
      0x59, 0x4b, 0x81, 0x54, 0x8f, 0x13, 0x0f, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__SensorState__TYPE_NAME[] = "custom_interfaces/msg/SensorState";

// Define type names, field names, and default values
static char custom_interfaces__msg__SensorState__FIELD_NAME__sensor_name[] = "sensor_name";
static char custom_interfaces__msg__SensorState__FIELD_NAME__new_readings_ready[] = "new_readings_ready";
static char custom_interfaces__msg__SensorState__FIELD_NAME__reading_id[] = "reading_id";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__SensorState__FIELDS[] = {
  {
    {custom_interfaces__msg__SensorState__FIELD_NAME__sensor_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__SensorState__FIELD_NAME__new_readings_ready, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__SensorState__FIELD_NAME__reading_id, 10, 10},
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
custom_interfaces__msg__SensorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__SensorState__TYPE_NAME, 33, 33},
      {custom_interfaces__msg__SensorState__FIELDS, 3, 3},
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
custom_interfaces__msg__SensorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__SensorState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__SensorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__SensorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
