// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from location_msgs:msg/PanelBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__STRUCT_H_
#define LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PanelBox in the package location_msgs.
typedef struct location_msgs__msg__PanelBox
{
  float x;
  float y;
  float w;
  float h;
} location_msgs__msg__PanelBox;

// Struct for a sequence of location_msgs__msg__PanelBox.
typedef struct location_msgs__msg__PanelBox__Sequence
{
  location_msgs__msg__PanelBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} location_msgs__msg__PanelBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__STRUCT_H_
