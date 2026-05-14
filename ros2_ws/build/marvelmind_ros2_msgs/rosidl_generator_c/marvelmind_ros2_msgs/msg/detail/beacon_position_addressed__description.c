// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/BeaconPositionAddressed.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/beacon_position_addressed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__BeaconPositionAddressed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xe8, 0x6d, 0x8a, 0x6a, 0xe2, 0x92, 0x9a,
      0x72, 0x3a, 0x1f, 0x75, 0x14, 0xc6, 0x6b, 0xd2,
      0x83, 0x94, 0x8d, 0xe7, 0x43, 0xb1, 0x5a, 0x41,
      0x85, 0x8a, 0xbe, 0x4e, 0x34, 0x0e, 0xef, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__BeaconPositionAddressed__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/BeaconPositionAddressed";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__address[] = "address";
static char marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__x_m[] = "x_m";
static char marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__y_m[] = "y_m";
static char marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__z_m[] = "z_m";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__address, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__x_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__y_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELD_NAME__z_m, 3, 3},
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
marvelmind_ros2_msgs__msg__BeaconPositionAddressed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__TYPE_NAME, 48, 48},
      {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__FIELDS, 4, 4},
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
  "float64 x_m\n"
  "float64 y_m\n"
  "float64 z_m";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__BeaconPositionAddressed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__BeaconPositionAddressed__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__BeaconPositionAddressed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__BeaconPositionAddressed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
