// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from location_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__STRUCT_H_
#define LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PixelPoint in the package location_msgs.
typedef struct location_msgs__msg__PixelPoint
{
  float x;
  float y;
} location_msgs__msg__PixelPoint;

// Struct for a sequence of location_msgs__msg__PixelPoint.
typedef struct location_msgs__msg__PixelPoint__Sequence
{
  location_msgs__msg__PixelPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} location_msgs__msg__PixelPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__STRUCT_H_
