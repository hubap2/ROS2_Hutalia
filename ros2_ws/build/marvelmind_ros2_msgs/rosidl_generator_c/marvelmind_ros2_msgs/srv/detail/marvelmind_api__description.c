// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:srv/MarvelmindAPI.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/srv/detail/marvelmind_api__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0xce, 0x63, 0x8d, 0xd7, 0x24, 0xd7, 0xbc,
      0xed, 0xea, 0x5f, 0xa4, 0x0d, 0xd1, 0x19, 0xf1,
      0x32, 0x35, 0x7a, 0xd8, 0x40, 0x87, 0xbb, 0xe8,
      0x28, 0xef, 0x75, 0xa1, 0xf0, 0xc3, 0x74, 0x10,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0xbd, 0xe2, 0x53, 0x7d, 0xd1, 0x14, 0x86,
      0x71, 0x42, 0x73, 0x07, 0x65, 0xb0, 0x47, 0xdd,
      0x85, 0x5d, 0xe8, 0x98, 0x60, 0x85, 0x82, 0x42,
      0x0f, 0x7c, 0xe1, 0x9f, 0x01, 0x90, 0xe8, 0x3a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0x78, 0x9a, 0x45, 0x2b, 0xd9, 0xdf, 0xc4,
      0xde, 0x49, 0x0e, 0x1f, 0x01, 0x3a, 0xac, 0xa6,
      0x6f, 0x5b, 0x5d, 0xa1, 0xf5, 0xb1, 0xf7, 0xa0,
      0x4a, 0x96, 0x8d, 0x18, 0x41, 0x59, 0xdf, 0x53,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x65, 0x95, 0xfc, 0x46, 0x7d, 0x5f, 0x21,
      0x03, 0xf9, 0xdb, 0x82, 0x22, 0x86, 0x90, 0xe0,
      0x6a, 0xd5, 0x74, 0xc7, 0x3e, 0x12, 0x7b, 0xf1,
      0xad, 0x9d, 0x90, 0xd3, 0x25, 0x42, 0xba, 0x59,
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

static char marvelmind_ros2_msgs__srv__MarvelmindAPI__TYPE_NAME[] = "marvelmind_ros2_msgs/srv/MarvelmindAPI";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__TYPE_NAME[] = "marvelmind_ros2_msgs/srv/MarvelmindAPI_Event";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME[] = "marvelmind_ros2_msgs/srv/MarvelmindAPI_Request";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME[] = "marvelmind_ros2_msgs/srv/MarvelmindAPI_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELD_NAME__request_message[] = "request_message";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELD_NAME__response_message[] = "response_message";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription marvelmind_ros2_msgs__srv__MarvelmindAPI__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__srv__MarvelmindAPI__TYPE_NAME, 38, 38},
      {marvelmind_ros2_msgs__srv__MarvelmindAPI__FIELDS, 3, 3},
    },
    {marvelmind_ros2_msgs__srv__MarvelmindAPI__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__FIELD_NAME__command_id[] = "command_id";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__FIELD_NAME__request[] = "request";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__FIELD_NAME__command_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME, 46, 46},
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELD_NAME__success[] = "success";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELD_NAME__error_code[] = "error_code";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME, 47, 47},
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELD_NAME__info[] = "info";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELD_NAME__request[] = "request";
static char marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__TYPE_NAME, 44, 44},
      {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__FIELDS, 3, 3},
    },
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request\n"
  "int64 command_id\n"
  "uint8[] request\n"
  "---\n"
  "# Response\n"
  "bool success\n"
  "int32 error_code\n"
  "uint8[] response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__srv__MarvelmindAPI__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_individual_type_description_source(NULL);
    sources[3] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_individual_type_description_source(NULL);
    sources[4] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_individual_type_description_source(NULL);
    sources[3] = *marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
