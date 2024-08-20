// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kiro_custom_interfaces:srv/CalculateTriangleArea.idl
// generated code does not contain a copyright notice

#include "kiro_custom_interfaces/srv/detail/calculate_triangle_area__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kiro_custom_interfaces
const rosidl_type_hash_t *
kiro_custom_interfaces__srv__CalculateTriangleArea__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x2e, 0xbd, 0xf9, 0x85, 0x00, 0x18, 0x6a,
      0x92, 0xa0, 0xc1, 0x37, 0x0b, 0x1a, 0x80, 0x25,
      0xd5, 0x47, 0x35, 0xef, 0x3b, 0x3b, 0x2f, 0x61,
      0x4f, 0xa1, 0x18, 0xf1, 0xe6, 0x68, 0xde, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_kiro_custom_interfaces
const rosidl_type_hash_t *
kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x2d, 0xc0, 0x27, 0x28, 0x9f, 0xc3, 0x4a,
      0xac, 0x56, 0x10, 0x2f, 0x0f, 0xc5, 0x1f, 0x59,
      0x08, 0x2a, 0x5a, 0xdf, 0x5b, 0x3c, 0xae, 0x1a,
      0xdf, 0x8a, 0x1a, 0x9c, 0x1d, 0x45, 0x4a, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_kiro_custom_interfaces
const rosidl_type_hash_t *
kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x24, 0x7c, 0x82, 0x28, 0xe5, 0xc6, 0xa0,
      0x72, 0x25, 0xa3, 0x07, 0xd8, 0xf6, 0x09, 0xa5,
      0xf6, 0x04, 0x46, 0xbf, 0x33, 0xd0, 0x2b, 0x3f,
      0x99, 0x5b, 0x02, 0xe3, 0xf6, 0x93, 0x0b, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_kiro_custom_interfaces
const rosidl_type_hash_t *
kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0xa6, 0x1d, 0x41, 0xd8, 0xe7, 0x0e, 0x7b,
      0x77, 0xde, 0x0f, 0xde, 0x65, 0x02, 0x92, 0x24,
      0x74, 0xf1, 0xa0, 0xe8, 0x06, 0x4b, 0x12, 0x71,
      0x1a, 0xb1, 0x2c, 0x1f, 0xbe, 0x75, 0xe0, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char kiro_custom_interfaces__srv__CalculateTriangleArea__TYPE_NAME[] = "kiro_custom_interfaces/srv/CalculateTriangleArea";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Event__TYPE_NAME[] = "kiro_custom_interfaces/srv/CalculateTriangleArea_Event";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME[] = "kiro_custom_interfaces/srv/CalculateTriangleArea_Request";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME[] = "kiro_custom_interfaces/srv/CalculateTriangleArea_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char kiro_custom_interfaces__srv__CalculateTriangleArea__FIELD_NAME__request_message[] = "request_message";
static char kiro_custom_interfaces__srv__CalculateTriangleArea__FIELD_NAME__response_message[] = "response_message";
static char kiro_custom_interfaces__srv__CalculateTriangleArea__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field kiro_custom_interfaces__srv__CalculateTriangleArea__FIELDS[] = {
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kiro_custom_interfaces__srv__CalculateTriangleArea__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kiro_custom_interfaces__srv__CalculateTriangleArea__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kiro_custom_interfaces__srv__CalculateTriangleArea__TYPE_NAME, 48, 48},
      {kiro_custom_interfaces__srv__CalculateTriangleArea__FIELDS, 3, 3},
    },
    {kiro_custom_interfaces__srv__CalculateTriangleArea__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELD_NAME__a[] = "a";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELD_NAME__b[] = "b";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELD_NAME__c[] = "c";

static rosidl_runtime_c__type_description__Field kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELDS[] = {
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELD_NAME__c, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME, 56, 56},
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Response__FIELD_NAME__area[] = "area";

static rosidl_runtime_c__type_description__Field kiro_custom_interfaces__srv__CalculateTriangleArea_Response__FIELDS[] = {
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__FIELD_NAME__area, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME, 57, 57},
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELD_NAME__info[] = "info";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELD_NAME__request[] = "request";
static char kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELDS[] = {
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription kiro_custom_interfaces__srv__CalculateTriangleArea_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__TYPE_NAME, 54, 54},
      {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__FIELDS, 3, 3},
    },
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 a \n"
  "float64 b\n"
  "float64 c \n"
  "---\n"
  "\n"
  "float64 area";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kiro_custom_interfaces__srv__CalculateTriangleArea__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kiro_custom_interfaces__srv__CalculateTriangleArea__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kiro_custom_interfaces__srv__CalculateTriangleArea_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kiro_custom_interfaces__srv__CalculateTriangleArea__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kiro_custom_interfaces__srv__CalculateTriangleArea__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_individual_type_description_source(NULL);
    sources[3] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_individual_type_description_source(NULL);
    sources[4] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Request__get_individual_type_description_source(NULL);
    sources[3] = *kiro_custom_interfaces__srv__CalculateTriangleArea_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
