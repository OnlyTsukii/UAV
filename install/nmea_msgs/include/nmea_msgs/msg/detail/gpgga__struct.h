// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGGA__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPGGA__STRUCT_H_

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
// Member 'lat_dir'
// Member 'lon_dir'
// Member 'altitude_units'
// Member 'undulation_units'
// Member 'station_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Gpgga in the package nmea_msgs.
typedef struct nmea_msgs__msg__Gpgga
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  double utc_seconds;
  double lat;
  double lon;
  rosidl_runtime_c__String lat_dir;
  rosidl_runtime_c__String lon_dir;
  uint32_t gps_qual;
  uint32_t num_sats;
  float hdop;
  float alt;
  rosidl_runtime_c__String altitude_units;
  float undulation;
  rosidl_runtime_c__String undulation_units;
  uint32_t diff_age;
  rosidl_runtime_c__String station_id;
} nmea_msgs__msg__Gpgga;

// Struct for a sequence of nmea_msgs__msg__Gpgga.
typedef struct nmea_msgs__msg__Gpgga__Sequence
{
  nmea_msgs__msg__Gpgga * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Gpgga__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGGA__STRUCT_H_
