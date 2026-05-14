// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/HedgeQuality.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/hedge_quality__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__HedgeQuality__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x17, 0xdd, 0xbd, 0xd7, 0x73, 0xb4, 0x9b,
      0xa8, 0x4f, 0xa9, 0x82, 0x28, 0x46, 0x4e, 0x10,
      0xa4, 0x26, 0x25, 0x86, 0xd1, 0x09, 0x55, 0x22,
      0x9d, 0xce, 0x8a, 0x10, 0x39, 0x95, 0xb4, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__HedgeQuality__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/HedgeQuality";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__HedgeQuality__FIELD_NAME__address[] = "address";
static char marvelmind_ros2_msgs__msg__HedgeQuality__FIELD_NAME__quality_percents[] = "quality_percents";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__HedgeQuality__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__HedgeQuality__FIELD_NAME__address, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeQuality__FIELD_NAME__quality_percents, 16, 16},
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
marvelmind_ros2_msgs__msg__HedgeQuality__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__HedgeQuality__TYPE_NAME, 37, 37},
      {marvelmind_ros2_msgs__msg__HedgeQuality__FIELDS, 2, 2},
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
  "uint8 quality_percents";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__HedgeQuality__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__HedgeQuality__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__HedgeQuality__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__HedgeQuality__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
