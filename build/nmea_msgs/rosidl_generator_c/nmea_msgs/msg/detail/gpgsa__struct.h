// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSA__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPGSA__STRUCT_H_

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
// Member 'auto_manual_mode'
#include "rosidl_runtime_c/string.h"
// Member 'sv_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Gpgsa in the package nmea_msgs.
typedef struct nmea_msgs__msg__Gpgsa
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  rosidl_runtime_c__String auto_manual_mode;
  uint8_t fix_mode;
  rosidl_runtime_c__uint8__Sequence sv_ids;
  float pdop;
  float hdop;
  float vdop;
} nmea_msgs__msg__Gpgsa;

// Struct for a sequence of nmea_msgs__msg__Gpgsa.
typedef struct nmea_msgs__msg__Gpgsa__Sequence
{
  nmea_msgs__msg__Gpgsa * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Gpgsa__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSA__STRUCT_H_
