// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__YAW__STRUCT_H_
#define LOCATION_MSGS__MSG__DETAIL__YAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Yaw in the package location_msgs.
typedef struct location_msgs__msg__Yaw
{
  int32_t yaw_id;
  double yaw;
} location_msgs__msg__Yaw;

// Struct for a sequence of location_msgs__msg__Yaw.
typedef struct location_msgs__msg__Yaw__Sequence
{
  location_msgs__msg__Yaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} location_msgs__msg__Yaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__YAW__STRUCT_H_
