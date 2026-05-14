// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from marvelmind_ros2_msgs:msg/HedgeImuFusion.idl
// generated code does not contain a copyright notice

#include "marvelmind_ros2_msgs/msg/detail/hedge_imu_fusion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xe6, 0xf9, 0x45, 0x5c, 0x16, 0x11, 0x5a,
      0x8b, 0xac, 0x87, 0xf6, 0x49, 0xd7, 0xee, 0x7b,
      0xaa, 0x46, 0xc1, 0xda, 0xee, 0x0b, 0xdc, 0xbb,
      0xf5, 0x0d, 0x5d, 0x01, 0x85, 0x71, 0x74, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char marvelmind_ros2_msgs__msg__HedgeImuFusion__TYPE_NAME[] = "marvelmind_ros2_msgs/msg/HedgeImuFusion";

// Define type names, field names, and default values
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__timestamp_ms[] = "timestamp_ms";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__x_m[] = "x_m";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__y_m[] = "y_m";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__z_m[] = "z_m";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qw[] = "qw";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qx[] = "qx";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qy[] = "qy";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qz[] = "qz";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__vx[] = "vx";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__vy[] = "vy";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__vz[] = "vz";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__ax[] = "ax";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__ay[] = "ay";
static char marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__az[] = "az";

static rosidl_runtime_c__type_description__Field marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELDS[] = {
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__timestamp_ms, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__x_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__y_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__z_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qw, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__qz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__ax, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__ay, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELD_NAME__az, 2, 2},
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
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {marvelmind_ros2_msgs__msg__HedgeImuFusion__TYPE_NAME, 39, 39},
      {marvelmind_ros2_msgs__msg__HedgeImuFusion__FIELDS, 14, 14},
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
  "float64 x_m\n"
  "float64 y_m\n"
  "float64 z_m\n"
  "float64 qw\n"
  "float64 qx\n"
  "float64 qy\n"
  "float64 qz\n"
  "float64 vx\n"
  "float64 vy\n"
  "float64 vz\n"
  "float64 ax\n"
  "float64 ay\n"
  "float64 az\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {marvelmind_ros2_msgs__msg__HedgeImuFusion__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 166, 166},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *marvelmind_ros2_msgs__msg__HedgeImuFusion__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
