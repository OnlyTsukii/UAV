// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from location_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__FUNCTIONS_H_
#define LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "location_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "location_msgs/msg/detail/pixel_point__struct.h"

/// Initialize msg/PixelPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * location_msgs__msg__PixelPoint
 * )) before or use
 * location_msgs__msg__PixelPoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__PixelPoint__init(location_msgs__msg__PixelPoint * msg);

/// Finalize msg/PixelPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__PixelPoint__fini(location_msgs__msg__PixelPoint * msg);

/// Create msg/PixelPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * location_msgs__msg__PixelPoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
location_msgs__msg__PixelPoint *
location_msgs__msg__PixelPoint__create();

/// Destroy msg/PixelPoint message.
/**
 * It calls
 * location_msgs__msg__PixelPoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__PixelPoint__destroy(location_msgs__msg__PixelPoint * msg);

/// Check for msg/PixelPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__PixelPoint__are_equal(const location_msgs__msg__PixelPoint * lhs, const location_msgs__msg__PixelPoint * rhs);

/// Copy a msg/PixelPoint message.
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
location_msgs__msg__PixelPoint__copy(
  const location_msgs__msg__PixelPoint * input,
  location_msgs__msg__PixelPoint * output);

/// Initialize array of msg/PixelPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * location_msgs__msg__PixelPoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__PixelPoint__Sequence__init(location_msgs__msg__PixelPoint__Sequence * array, size_t size);

/// Finalize array of msg/PixelPoint messages.
/**
 * It calls
 * location_msgs__msg__PixelPoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__PixelPoint__Sequence__fini(location_msgs__msg__PixelPoint__Sequence * array);

/// Create array of msg/PixelPoint messages.
/**
 * It allocates the memory for the array and calls
 * location_msgs__msg__PixelPoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
location_msgs__msg__PixelPoint__Sequence *
location_msgs__msg__PixelPoint__Sequence__create(size_t size);

/// Destroy array of msg/PixelPoint messages.
/**
 * It calls
 * location_msgs__msg__PixelPoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
void
location_msgs__msg__PixelPoint__Sequence__destroy(location_msgs__msg__PixelPoint__Sequence * array);

/// Check for msg/PixelPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_location_msgs
bool
location_msgs__msg__PixelPoint__Sequence__are_equal(const location_msgs__msg__PixelPoint__Sequence * lhs, const location_msgs__msg__PixelPoint__Sequence * rhs);

/// Copy an array of msg/PixelPoint messages.
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
location_msgs__msg__PixelPoint__Sequence__copy(
  const location_msgs__msg__PixelPoint__Sequence * input,
  location_msgs__msg__PixelPoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__FUNCTIONS_H_
