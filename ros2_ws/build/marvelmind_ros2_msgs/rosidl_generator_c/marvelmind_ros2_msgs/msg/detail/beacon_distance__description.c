// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/BeaconDistance.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/beacon_distance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__BeaconDistance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0xdc, 0x1e, 0x5f, 0x92, 0x76, 0xd4, 0x5a,
      0xf9, 0x24, 0x9d, 0x01, 0x72, 0x49, 0x94, 0xe2,
      0xad, 0x85, 0xde, 0x79, 0x27, 0x85, 0xd2, 0x91,
      0x4c, 0xe0, 0x0f, 0x21, 0xea, 0x14, 0xe6, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__BeaconDistance__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/BeaconDistance";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__BeaconDistance__FIELD_NAME__address_hedge[] = "address_hedge";
static char marvelmind_ros2_msgs__msg__BeaconDistance__FIELD_NAME__address_beacon[] = "address_beacon";
static char marvelmind_ros2_msgs__msg__BeaconDistance__FIELD_NAME__distance_m[] = "distance_m";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__BeaconDistance__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__BeaconDistance__FIELD_NAME__address_hedge, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__BeaconDistance__FIELD_NAME__address_beacon, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__BeaconDistance__FIELD_NAME__distance_m, 10, 10},
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
marvelmind_ros2_msgs__msg__BeaconDistance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__BeaconDistance__TYPE_NAME, 39, 39},
      {marvelmind_ros2_msgs__msg__BeaconDistance__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 address_hedge\n"
  "uint8 address_beacon\n"
  "float64 distance_m";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__BeaconDistance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__BeaconDistance__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__BeaconDistance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__BeaconDistance__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
