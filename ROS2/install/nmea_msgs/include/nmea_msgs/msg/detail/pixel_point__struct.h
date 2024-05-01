// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PixelPoint in the package nmea_msgs.
typedef struct nmea_msgs__msg__PixelPoint
{
  float x;
  float y;
} nmea_msgs__msg__PixelPoint;

// Struct for a sequence of nmea_msgs__msg__PixelPoint.
typedef struct nmea_msgs__msg__PixelPoint__Sequence
{
  nmea_msgs__msg__PixelPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__PixelPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__STRUCT_H_
