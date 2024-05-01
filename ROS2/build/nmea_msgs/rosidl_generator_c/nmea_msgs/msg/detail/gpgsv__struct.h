// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPGSV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message_id'
#include "rosidl_runtime_c/string.h"
// Member 'satellites'
#include "nmea_msgs/msg/detail/gpgsv_satellite__struct.h"

// Struct defined in msg/Gpgsv in the package nmea_msgs.
typedef struct nmea_msgs__msg__Gpgsv
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  uint8_t n_msgs;
  uint8_t msg_number;
  uint8_t n_satellites;
  nmea_msgs__msg__GpgsvSatellite__Sequence satellites;
} nmea_msgs__msg__Gpgsv;

// Struct for a sequence of nmea_msgs__msg__Gpgsv.
typedef struct nmea_msgs__msg__Gpgsv__Sequence
{
  nmea_msgs__msg__Gpgsv * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Gpgsv__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV__STRUCT_H_
