// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/defect_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `center`
// Member `top_left`
// Member `top_right`
// Member `bottom_left`
// Member `bottom_right`
#include "nmea_msgs/msg/detail/pixel_point__functions.h"

bool
nmea_msgs__msg__DefectBox__init(nmea_msgs__msg__DefectBox * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!nmea_msgs__msg__PixelPoint__init(&msg->center)) {
    nmea_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // top_left
  if (!nmea_msgs__msg__PixelPoint__init(&msg->top_left)) {
    nmea_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // top_right
  if (!nmea_msgs__msg__PixelPoint__init(&msg->top_right)) {
    nmea_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // bottom_left
  if (!nmea_msgs__msg__PixelPoint__init(&msg->bottom_left)) {
    nmea_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // bottom_right
  if (!nmea_msgs__msg__PixelPoint__init(&msg->bottom_right)) {
    nmea_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__DefectBox__fini(nmea_msgs__msg__DefectBox * msg)
{
  if (!msg) {
    return;
  }
  // center
  nmea_msgs__msg__PixelPoint__fini(&msg->center);
  // top_left
  nmea_msgs__msg__PixelPoint__fini(&msg->top_left);
  // top_right
  nmea_msgs__msg__PixelPoint__fini(&msg->top_right);
  // bottom_left
  nmea_msgs__msg__PixelPoint__fini(&msg->bottom_left);
  // bottom_right
  nmea_msgs__msg__PixelPoint__fini(&msg->bottom_right);
}

bool
nmea_msgs__msg__DefectBox__are_equal(const nmea_msgs__msg__DefectBox * lhs, const nmea_msgs__msg__DefectBox * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!nmea_msgs__msg__PixelPoint__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // top_left
  if (!nmea_msgs__msg__PixelPoint__are_equal(
      &(lhs->top_left), &(rhs->top_left)))
  {
    return false;
  }
  // top_right
  if (!nmea_msgs__msg__PixelPoint__are_equal(
      &(lhs->top_right), &(rhs->top_right)))
  {
    return false;
  }
  // bottom_left
  if (!nmea_msgs__msg__PixelPoint__are_equal(
      &(lhs->bottom_left), &(rhs->bottom_left)))
  {
    return false;
  }
  // bottom_right
  if (!nmea_msgs__msg__PixelPoint__are_equal(
      &(lhs->bottom_right), &(rhs->bottom_right)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__DefectBox__copy(
  const nmea_msgs__msg__DefectBox * input,
  nmea_msgs__msg__DefectBox * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!nmea_msgs__msg__PixelPoint__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // top_left
  if (!nmea_msgs__msg__PixelPoint__copy(
      &(input->top_left), &(output->top_left)))
  {
    return false;
  }
  // top_right
  if (!nmea_msgs__msg__PixelPoint__copy(
      &(input->top_right), &(output->top_right)))
  {
    return false;
  }
  // bottom_left
  if (!nmea_msgs__msg__PixelPoint__copy(
      &(input->bottom_left), &(output->bottom_left)))
  {
    return false;
  }
  // bottom_right
  if (!nmea_msgs__msg__PixelPoint__copy(
      &(input->bottom_right), &(output->bottom_right)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__DefectBox *
nmea_msgs__msg__DefectBox__create()
{
  nmea_msgs__msg__DefectBox * msg = (nmea_msgs__msg__DefectBox *)malloc(sizeof(nmea_msgs__msg__DefectBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__DefectBox));
  bool success = nmea_msgs__msg__DefectBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__DefectBox__destroy(nmea_msgs__msg__DefectBox * msg)
{
  if (msg) {
    nmea_msgs__msg__DefectBox__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__DefectBox__Sequence__init(nmea_msgs__msg__DefectBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__DefectBox * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__DefectBox *)calloc(size, sizeof(nmea_msgs__msg__DefectBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__DefectBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__DefectBox__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nmea_msgs__msg__DefectBox__Sequence__fini(nmea_msgs__msg__DefectBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__DefectBox__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nmea_msgs__msg__DefectBox__Sequence *
nmea_msgs__msg__DefectBox__Sequence__create(size_t size)
{
  nmea_msgs__msg__DefectBox__Sequence * array = (nmea_msgs__msg__DefectBox__Sequence *)malloc(sizeof(nmea_msgs__msg__DefectBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__DefectBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__DefectBox__Sequence__destroy(nmea_msgs__msg__DefectBox__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__DefectBox__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__DefectBox__Sequence__are_equal(const nmea_msgs__msg__DefectBox__Sequence * lhs, const nmea_msgs__msg__DefectBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__DefectBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__DefectBox__Sequence__copy(
  const nmea_msgs__msg__DefectBox__Sequence * input,
  nmea_msgs__msg__DefectBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__DefectBox);
    nmea_msgs__msg__DefectBox * data =
      (nmea_msgs__msg__DefectBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__DefectBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__DefectBox__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nmea_msgs__msg__DefectBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
