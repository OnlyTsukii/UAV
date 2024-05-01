// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGST__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPGST__STRUCT_H_

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

// Struct defined in msg/Gpgst in the package nmea_msgs.
typedef struct nmea_msgs__msg__Gpgst
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  double utc_seconds;
  float rms;
  float semi_major_dev;
  float semi_minor_dev;
  float orientation;
  float lat_dev;
  float lon_dev;
  float alt_dev;
} nmea_msgs__msg__Gpgst;

// Struct for a sequence of nmea_msgs__msg__Gpgst.
typedef struct nmea_msgs__msg__Gpgst__Sequence
{
  nmea_msgs__msg__Gpgst * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Gpgst__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGST__STRUCT_H_
