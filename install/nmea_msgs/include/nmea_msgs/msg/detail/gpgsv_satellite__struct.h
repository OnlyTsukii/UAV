// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GpgsvSatellite in the package nmea_msgs.
typedef struct nmea_msgs__msg__GpgsvSatellite
{
  uint8_t prn;
  uint8_t elevation;
  uint16_t azimuth;
  int8_t snr;
} nmea_msgs__msg__GpgsvSatellite;

// Struct for a sequence of nmea_msgs__msg__GpgsvSatellite.
typedef struct nmea_msgs__msg__GpgsvSatellite__Sequence
{
  nmea_msgs__msg__GpgsvSatellite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__GpgsvSatellite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_H_
