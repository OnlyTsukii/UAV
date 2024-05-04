// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from location_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_
#define LOCATION_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gps_fix'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"

// Struct defined in msg/GpsFix in the package location_msgs.
typedef struct location_msgs__msg__GpsFix
{
  int32_t gps_id;
  sensor_msgs__msg__NavSatFix gps_fix;
} location_msgs__msg__GpsFix;

// Struct for a sequence of location_msgs__msg__GpsFix.
typedef struct location_msgs__msg__GpsFix__Sequence
{
  location_msgs__msg__GpsFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} location_msgs__msg__GpsFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_
