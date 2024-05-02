// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECTS__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__DEFECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'defects'
#include "nmea_msgs/msg/detail/defect_box__struct.h"

// Struct defined in msg/Defects in the package nmea_msgs.
typedef struct nmea_msgs__msg__Defects
{
  int32_t defect_id;
  float img_width;
  float img_height;
  nmea_msgs__msg__DefectBox__Sequence defects;
} nmea_msgs__msg__Defects;

// Struct for a sequence of nmea_msgs__msg__Defects.
typedef struct nmea_msgs__msg__Defects__Sequence
{
  nmea_msgs__msg__Defects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Defects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECTS__STRUCT_H_
