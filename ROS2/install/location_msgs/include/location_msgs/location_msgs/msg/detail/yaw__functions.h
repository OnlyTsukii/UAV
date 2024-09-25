// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__YAW__FUNCTIONS_H_
#define LOCATION_MSGS__MSG__DETAIL__YAW__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "location_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "location_msgs/msg/detail/yaw__struct.h"

/// Initialize msg/Yaw message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * location_msgs__msg__Yaw
 * )) before or use
 * location_msgs__msg__Yaw__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__Yaw__init(location_msgs__msg__Yaw * msg);

/// Finalize msg/Yaw message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__Yaw__fini(location_msgs__msg__Yaw * msg);

/// Create msg/Yaw message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * location_msgs__msg__Yaw__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
location_msgs__msg__Yaw *
location_msgs__msg__Yaw__create();

/// Destroy msg/Yaw message.
/**
 * It calls
 * location_msgs__msg__Yaw__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__Yaw__destroy(location_msgs__msg__Yaw * msg);

/// Check for msg/Yaw message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__Yaw__are_equal(const location_msgs__msg__Yaw * lhs, const location_msgs__msg__Yaw * rhs);

/// Copy a msg/Yaw message.
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
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__Yaw__copy(
  const location_msgs__msg__Yaw * input,
  location_msgs__msg__Yaw * output);

/// Initialize array of msg/Yaw messages.
/**
 * It allocates the memory for the number of elements and calls
 * location_msgs__msg__Yaw__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__Yaw__Sequence__init(location_msgs__msg__Yaw__Sequence * array, size_t size);

/// Finalize array of msg/Yaw messages.
/**
 * It calls
 * location_msgs__msg__Yaw__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__Yaw__Sequence__fini(location_msgs__msg__Yaw__Sequence * array);

/// Create array of msg/Yaw messages.
/**
 * It allocates the memory for the array and calls
 * location_msgs__msg__Yaw__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
location_msgs__msg__Yaw__Sequence *
location_msgs__msg__Yaw__Sequence__create(size_t size);

/// Destroy array of msg/Yaw messages.
/**
 * It calls
 * location_msgs__msg__Yaw__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__Yaw__Sequence__destroy(location_msgs__msg__Yaw__Sequence * array);

/// Check for msg/Yaw message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__Yaw__Sequence__are_equal(const location_msgs__msg__Yaw__Sequence * lhs, const location_msgs__msg__Yaw__Sequence * rhs);

/// Copy an array of msg/Yaw messages.
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
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__Yaw__Sequence__copy(
  const location_msgs__msg__Yaw__Sequence * input,
  location_msgs__msg__Yaw__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__YAW__FUNCTIONS_H_
