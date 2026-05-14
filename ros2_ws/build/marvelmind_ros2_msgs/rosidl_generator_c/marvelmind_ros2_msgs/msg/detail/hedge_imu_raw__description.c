// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/HedgeImuRaw.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/hedge_imu_raw__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__HedgeImuRaw__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x49, 0x8a, 0xc2, 0xee, 0xcc, 0xf2, 0x91,
      0xe0, 0x24, 0xbc, 0x12, 0xa4, 0x55, 0xc7, 0x71,
      0x3f, 0xfb, 0xe4, 0x5a, 0x34, 0xa1, 0x13, 0x32,
      0x5d, 0x64, 0x7f, 0xe4, 0xe4, 0x22, 0x49, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__HedgeImuRaw__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/HedgeImuRaw";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__acc_x[] = "acc_x";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__acc_y[] = "acc_y";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__acc_z[] = "acc_z";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__gyro_x[] = "gyro_x";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__gyro_y[] = "gyro_y";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__gyro_z[] = "gyro_z";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__compass_x[] = "compass_x";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__compass_y[] = "compass_y";
static char marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__compass_z[] = "compass_z";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__acc_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__acc_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__acc_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__gyro_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__gyro_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__gyro_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__compass_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__compass_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELD_NAME__compass_z, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__msg__HedgeImuRaw__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__HedgeImuRaw__TYPE_NAME, 36, 36},
      {marvelmind_ros2_msgs__msg__HedgeImuRaw__FIELDS, 10, 10},
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
  "int16 acc_x\n"
  "int16 acc_y\n"
  "int16 acc_z\n"
  "int16 gyro_x\n"
  "int16 gyro_y\n"
  "int16 gyro_z\n"
  "int16 compass_x\n"
  "int16 compass_y\n"
  "int16 compass_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__HedgeImuRaw__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__HedgeImuRaw__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 142, 142},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__HedgeImuRaw__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__HedgeImuRaw__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
