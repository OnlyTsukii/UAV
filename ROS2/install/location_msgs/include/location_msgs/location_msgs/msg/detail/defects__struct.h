// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from location_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECTS__STRUCT_H_
#define LOCATION_MSGS__MSG__DETAIL__DEFECTS__STRUCT_H_

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
#include "location_msgs/msg/detail/defect_box__struct.h"

/// Struct defined in msg/Defects in the package location_msgs.
typedef struct location_msgs__msg__Defects
{
  float img_width;
  float img_height;
  location_msgs__msg__DefectBox__Sequence defects;
} location_msgs__msg__Defects;

// Struct for a sequence of location_msgs__msg__Defects.
typedef struct location_msgs__msg__Defects__Sequence
{
  location_msgs__msg__Defects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} location_msgs__msg__Defects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECTS__STRUCT_H_
