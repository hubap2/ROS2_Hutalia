// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marvelmind_ros2_msgs:msg/HedgeImuFusion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marvelmind_ros2_msgs/msg/hedge_imu_fusion.h"


#ifndef MARVELMIND_ROS2_MSGS__MSG__DETAIL__HEDGE_IMU_FUSION__FUNCTIONS_H_
#define MARVELMIND_ROS2_MSGS__MSG__DETAIL__HEDGE_IMU_FUSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "marvelmind_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marvelmind_ros2_msgs/msg/detail/hedge_imu_fusion__struct.h"

/// Initialize msg/HedgeImuFusion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marvelmind_ros2_msgs__msg__HedgeImuFusion
 * )) before or use
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__msg__HedgeImuFusion__init(marvelmind_ros2_msgs__msg__HedgeImuFusion * msg);

/// Finalize msg/HedgeImuFusion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__msg__HedgeImuFusion__fini(marvelmind_ros2_msgs__msg__HedgeImuFusion * msg);

/// Create msg/HedgeImuFusion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__msg__HedgeImuFusion *
marvelmind_ros2_msgs__msg__HedgeImuFusion__create(void);

/// Destroy msg/HedgeImuFusion message.
/**
 * It calls
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__msg__HedgeImuFusion__destroy(marvelmind_ros2_msgs__msg__HedgeImuFusion * msg);

/// Check for msg/HedgeImuFusion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__msg__HedgeImuFusion__are_equal(const marvelmind_ros2_msgs__msg__HedgeImuFusion * lhs, const marvelmind_ros2_msgs__msg__HedgeImuFusion * rhs);

/// Copy a msg/HedgeImuFusion message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__msg__HedgeImuFusion__copy(
  const marvelmind_ros2_msgs__msg__HedgeImuFusion * input,
  marvelmind_ros2_msgs__msg__HedgeImuFusion * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__msg__HedgeImuFusion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/HedgeImuFusion messages.
/**
 * It allocates the memory for the number of elements and calls
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__init(marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * array, size_t size);

/// Finalize array of msg/HedgeImuFusion messages.
/**
 * It calls
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__fini(marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * array);

/// Create array of msg/HedgeImuFusion messages.
/**
 * It allocates the memory for the array and calls
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence *
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__create(size_t size);

/// Destroy array of msg/HedgeImuFusion messages.
/**
 * It calls
 * marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__destroy(marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * array);

/// Check for msg/HedgeImuFusion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__are_equal(const marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * lhs, const marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * rhs);

/// Copy an array of msg/HedgeImuFusion messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence__copy(
  const marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * input,
  marvelmind_ros2_msgs__msg__HedgeImuFusion__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARVELMIND_ROS2_MSGS__MSG__DETAIL__HEDGE_IMU_FUSION__FUNCTIONS_H_
