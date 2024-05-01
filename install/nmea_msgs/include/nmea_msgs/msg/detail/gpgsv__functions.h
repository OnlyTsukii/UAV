// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV__FUNCTIONS_H_
#define NMEA_MSGS__MSG__DETAIL__GPGSV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nmea_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nmea_msgs/msg/detail/gpgsv__struct.h"

/// Initialize msg/Gpgsv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nmea_msgs__msg__Gpgsv
 * )) before or use
 * nmea_msgs__msg__Gpgsv__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
bool
nmea_msgs__msg__Gpgsv__init(nmea_msgs__msg__Gpgsv * msg);

/// Finalize msg/Gpgsv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
void
nmea_msgs__msg__Gpgsv__fini(nmea_msgs__msg__Gpgsv * msg);

/// Create msg/Gpgsv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nmea_msgs__msg__Gpgsv__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
nmea_msgs__msg__Gpgsv *
nmea_msgs__msg__Gpgsv__create();

/// Destroy msg/Gpgsv message.
/**
 * It calls
 * nmea_msgs__msg__Gpgsv__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
void
nmea_msgs__msg__Gpgsv__destroy(nmea_msgs__msg__Gpgsv * msg);

/// Check for msg/Gpgsv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
bool
nmea_msgs__msg__Gpgsv__are_equal(const nmea_msgs__msg__Gpgsv * lhs, const nmea_msgs__msg__Gpgsv * rhs);

/// Copy a msg/Gpgsv message.
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
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
bool
nmea_msgs__msg__Gpgsv__copy(
  const nmea_msgs__msg__Gpgsv * input,
  nmea_msgs__msg__Gpgsv * output);

/// Initialize array of msg/Gpgsv messages.
/**
 * It allocates the memory for the number of elements and calls
 * nmea_msgs__msg__Gpgsv__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
bool
nmea_msgs__msg__Gpgsv__Sequence__init(nmea_msgs__msg__Gpgsv__Sequence * array, size_t size);

/// Finalize array of msg/Gpgsv messages.
/**
 * It calls
 * nmea_msgs__msg__Gpgsv__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
void
nmea_msgs__msg__Gpgsv__Sequence__fini(nmea_msgs__msg__Gpgsv__Sequence * array);

/// Create array of msg/Gpgsv messages.
/**
 * It allocates the memory for the array and calls
 * nmea_msgs__msg__Gpgsv__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
nmea_msgs__msg__Gpgsv__Sequence *
nmea_msgs__msg__Gpgsv__Sequence__create(size_t size);

/// Destroy array of msg/Gpgsv messages.
/**
 * It calls
 * nmea_msgs__msg__Gpgsv__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
void
nmea_msgs__msg__Gpgsv__Sequence__destroy(nmea_msgs__msg__Gpgsv__Sequence * array);

/// Check for msg/Gpgsv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
bool
nmea_msgs__msg__Gpgsv__Sequence__are_equal(const nmea_msgs__msg__Gpgsv__Sequence * lhs, const nmea_msgs__msg__Gpgsv__Sequence * rhs);

/// Copy an array of msg/Gpgsv messages.
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
ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
bool
nmea_msgs__msg__Gpgsv__Sequence__copy(
  const nmea_msgs__msg__Gpgsv__Sequence * input,
  nmea_msgs__msg__Gpgsv__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV__FUNCTIONS_H_
