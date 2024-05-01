// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_left'
// Member 'bottom_right'
#include "nmea_msgs/msg/detail/pixel_point__struct.h"

// Struct defined in msg/DefectBox in the package nmea_msgs.
typedef struct nmea_msgs__msg__DefectBox
{
  int32_t defect_id;
  float img_width;
  float img_height;
  nmea_msgs__msg__PixelPoint center;
  nmea_msgs__msg__PixelPoint top_left;
  nmea_msgs__msg__PixelPoint top_right;
  nmea_msgs__msg__PixelPoint bottom_left;
  nmea_msgs__msg__PixelPoint bottom_right;
} nmea_msgs__msg__DefectBox;

// Struct for a sequence of nmea_msgs__msg__DefectBox.
typedef struct nmea_msgs__msg__DefectBox__Sequence
{
  nmea_msgs__msg__DefectBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__DefectBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_H_
