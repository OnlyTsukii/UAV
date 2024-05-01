// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPRMC__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPRMC__STRUCT_H_

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
// Member 'position_status'
// Member 'lat_dir'
// Member 'lon_dir'
// Member 'date'
// Member 'mag_var_direction'
// Member 'mode_indicator'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Gprmc in the package nmea_msgs.
typedef struct nmea_msgs__msg__Gprmc
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  double utc_seconds;
  rosidl_runtime_c__String position_status;
  double lat;
  double lon;
  rosidl_runtime_c__String lat_dir;
  rosidl_runtime_c__String lon_dir;
  float speed;
  float track;
  rosidl_runtime_c__String date;
  float mag_var;
  rosidl_runtime_c__String mag_var_direction;
  rosidl_runtime_c__String mode_indicator;
} nmea_msgs__msg__Gprmc;

// Struct for a sequence of nmea_msgs__msg__Gprmc.
typedef struct nmea_msgs__msg__Gprmc__Sequence
{
  nmea_msgs__msg__Gprmc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Gprmc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPRMC__STRUCT_H_
