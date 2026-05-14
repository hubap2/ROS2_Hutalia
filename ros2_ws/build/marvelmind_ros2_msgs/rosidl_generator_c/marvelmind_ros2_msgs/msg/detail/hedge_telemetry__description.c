// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/HedgeTelemetry.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/hedge_telemetry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__HedgeTelemetry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xbd, 0xfb, 0xf6, 0xb5, 0x60, 0x0e, 0xdc,
      0x4b, 0x82, 0xd4, 0x51, 0xb7, 0x00, 0x86, 0x8a,
      0xda, 0x9a, 0xa4, 0xf7, 0xd1, 0x41, 0x50, 0x14,
      0xec, 0x8e, 0xc6, 0xd3, 0xcf, 0x25, 0xaa, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__HedgeTelemetry__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/HedgeTelemetry";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__HedgeTelemetry__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char marvelmind_ros2_msgs__msg__HedgeTelemetry__FIELD_NAME__rssi_dbm[] = "rssi_dbm";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__HedgeTelemetry__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__HedgeTelemetry__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeTelemetry__FIELD_NAME__rssi_dbm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__msg__HedgeTelemetry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__HedgeTelemetry__TYPE_NAME, 39, 39},
      {marvelmind_ros2_msgs__msg__HedgeTelemetry__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 battery_voltage\n"
  "int8 rssi_dbm";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__HedgeTelemetry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__HedgeTelemetry__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__HedgeTelemetry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__HedgeTelemetry__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
