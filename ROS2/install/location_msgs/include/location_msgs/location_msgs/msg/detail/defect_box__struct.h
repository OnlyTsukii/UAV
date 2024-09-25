// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_H_
#define LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_H_

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
#include "location_msgs/msg/detail/pixel_point__struct.h"

/// Struct defined in msg/DefectBox in the package location_msgs.
typedef struct location_msgs__msg__DefectBox
{
  location_msgs__msg__PixelPoint center;
  location_msgs__msg__PixelPoint top_left;
  location_msgs__msg__PixelPoint top_right;
  location_msgs__msg__PixelPoint bottom_left;
  location_msgs__msg__PixelPoint bottom_right;
} location_msgs__msg__DefectBox;

// Struct for a sequence of location_msgs__msg__DefectBox.
typedef struct location_msgs__msg__DefectBox__Sequence
{
  location_msgs__msg__DefectBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} location_msgs__msg__DefectBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_H_
