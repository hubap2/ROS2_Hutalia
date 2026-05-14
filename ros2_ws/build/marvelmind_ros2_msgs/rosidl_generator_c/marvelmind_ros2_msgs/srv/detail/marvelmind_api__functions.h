// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marvelmind_ros2_msgs:srv/MarvelmindAPI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marvelmind_ros2_msgs/srv/marvelmind_api.h"


#ifndef MARVELMIND_ROS2_MSGS__SRV__DETAIL__MARVELMIND_API__FUNCTIONS_H_
#define MARVELMIND_ROS2_MSGS__SRV__DETAIL__MARVELMIND_API__FUNCTIONS_H_

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

#include "marvelmind_ros2_msgs/srv/detail/marvelmind_api__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/MarvelmindAPI message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request
 * )) before or use
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__init(marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * msg);

/// Finalize srv/MarvelmindAPI message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__fini(marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * msg);

/// Create srv/MarvelmindAPI message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__create(void);

/// Destroy srv/MarvelmindAPI message.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__destroy(marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * msg);

/// Check for srv/MarvelmindAPI message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__are_equal(const marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * lhs, const marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * rhs);

/// Copy a srv/MarvelmindAPI message.
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
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__copy(
  const marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * input,
  marvelmind_ros2_msgs__srv__MarvelmindAPI_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MarvelmindAPI messages.
/**
 * It allocates the memory for the number of elements and calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__init(marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * array, size_t size);

/// Finalize array of srv/MarvelmindAPI messages.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__fini(marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * array);

/// Create array of srv/MarvelmindAPI messages.
/**
 * It allocates the memory for the array and calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__create(size_t size);

/// Destroy array of srv/MarvelmindAPI messages.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__destroy(marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * array);

/// Check for srv/MarvelmindAPI message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__are_equal(const marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * lhs, const marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * rhs);

/// Copy an array of srv/MarvelmindAPI messages.
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
marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence__copy(
  const marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * input,
  marvelmind_ros2_msgs__srv__MarvelmindAPI_Request__Sequence * output);

/// Initialize srv/MarvelmindAPI message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response
 * )) before or use
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__init(marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * msg);

/// Finalize srv/MarvelmindAPI message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__fini(marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * msg);

/// Create srv/MarvelmindAPI message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__create(void);

/// Destroy srv/MarvelmindAPI message.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__destroy(marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * msg);

/// Check for srv/MarvelmindAPI message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__are_equal(const marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * lhs, const marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * rhs);

/// Copy a srv/MarvelmindAPI message.
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
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__copy(
  const marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * input,
  marvelmind_ros2_msgs__srv__MarvelmindAPI_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MarvelmindAPI messages.
/**
 * It allocates the memory for the number of elements and calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__init(marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * array, size_t size);

/// Finalize array of srv/MarvelmindAPI messages.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__fini(marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * array);

/// Create array of srv/MarvelmindAPI messages.
/**
 * It allocates the memory for the array and calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__create(size_t size);

/// Destroy array of srv/MarvelmindAPI messages.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__destroy(marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * array);

/// Check for srv/MarvelmindAPI message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__are_equal(const marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * lhs, const marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * rhs);

/// Copy an array of srv/MarvelmindAPI messages.
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
marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence__copy(
  const marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * input,
  marvelmind_ros2_msgs__srv__MarvelmindAPI_Response__Sequence * output);

/// Initialize srv/MarvelmindAPI message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event
 * )) before or use
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__init(marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * msg);

/// Finalize srv/MarvelmindAPI message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__fini(marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * msg);

/// Create srv/MarvelmindAPI message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__create(void);

/// Destroy srv/MarvelmindAPI message.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__destroy(marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * msg);

/// Check for srv/MarvelmindAPI message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__are_equal(const marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * lhs, const marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * rhs);

/// Copy a srv/MarvelmindAPI message.
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
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__copy(
  const marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * input,
  marvelmind_ros2_msgs__srv__MarvelmindAPI_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_type_hash_t *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MarvelmindAPI messages.
/**
 * It allocates the memory for the number of elements and calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__init(marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * array, size_t size);

/// Finalize array of srv/MarvelmindAPI messages.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__fini(marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * array);

/// Create array of srv/MarvelmindAPI messages.
/**
 * It allocates the memory for the array and calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence *
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__create(size_t size);

/// Destroy array of srv/MarvelmindAPI messages.
/**
 * It calls
 * marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
void
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__destroy(marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * array);

/// Check for srv/MarvelmindAPI message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marvelmind_ros2_msgs
bool
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__are_equal(const marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * lhs, const marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * rhs);

/// Copy an array of srv/MarvelmindAPI messages.
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
marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence__copy(
  const marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * input,
  marvelmind_ros2_msgs__srv__MarvelmindAPI_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // MARVELMIND_ROS2_MSGS__SRV__DETAIL__MARVELMIND_API__FUNCTIONS_H_
