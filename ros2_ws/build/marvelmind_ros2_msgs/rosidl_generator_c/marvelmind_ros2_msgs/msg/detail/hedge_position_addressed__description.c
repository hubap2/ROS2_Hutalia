// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/HedgePositionAddressed.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/hedge_position_addressed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__HedgePositionAddressed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0x95, 0x7a, 0x7e, 0x44, 0x35, 0x97, 0x9c,
      0xba, 0x12, 0x79, 0x0a, 0x97, 0xf5, 0x52, 0x3e,
      0x26, 0xc0, 0x2a, 0x36, 0x46, 0xb5, 0x8a, 0x48,
      0x6b, 0x9d, 0xb2, 0x6c, 0xf4, 0xe4, 0x2b, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/HedgePositionAddressed";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__address[] = "address";
static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__x_m[] = "x_m";
static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__y_m[] = "y_m";
static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__z_m[] = "z_m";
static char marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__flags[] = "flags";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__address, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__x_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__y_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__z_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__msg__HedgePositionAddressed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__HedgePositionAddressed__TYPE_NAME, 47, 47},
      {marvelmind_ros2_msgs__msg__HedgePositionAddressed__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 address\n"
  "int64 timestamp_ms\n"
  "float64 x_m\n"
  "float64 y_m\n"
  "float64 z_m\n"
  "uint8 flags";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__HedgePositionAddressed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__HedgePositionAddressed__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__HedgePositionAddressed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__HedgePositionAddressed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
