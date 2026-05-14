// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/MarvelmindUserData.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/marvelmind_user_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__MarvelmindUserData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xf6, 0x43, 0x6c, 0x6a, 0xdb, 0xb7, 0xac,
      0x4c, 0xdc, 0xbb, 0x30, 0x56, 0xfd, 0x51, 0x69,
      0xd1, 0x49, 0xc3, 0x01, 0x5f, 0x70, 0xc3, 0xe1,
      0x39, 0xeb, 0x95, 0xb6, 0x05, 0x6c, 0x07, 0x66,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__MarvelmindUserData__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/MarvelmindUserData";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__MarvelmindUserData__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char marvelmind_ros2_msgs__msg__MarvelmindUserData__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__MarvelmindUserData__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__MarvelmindUserData__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__MarvelmindUserData__FIELD_NAME__data, 4, 4},
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
marvelmind_ros2_msgs__msg__MarvelmindUserData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__MarvelmindUserData__TYPE_NAME, 43, 43},
      {marvelmind_ros2_msgs__msg__MarvelmindUserData__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 timestamp_ms\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__MarvelmindUserData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__MarvelmindUserData__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__MarvelmindUserData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__MarvelmindUserData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
