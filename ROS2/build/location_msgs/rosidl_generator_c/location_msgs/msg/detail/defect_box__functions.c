// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/defect_box__functions.h"

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
#include "location_msgs/msg/detail/pixel_point__functions.h"

bool
location_msgs__msg__DefectBox__init(location_msgs__msg__DefectBox * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!location_msgs__msg__PixelPoint__init(&msg->center)) {
    location_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // top_left
  if (!location_msgs__msg__PixelPoint__init(&msg->top_left)) {
    location_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // top_right
  if (!location_msgs__msg__PixelPoint__init(&msg->top_right)) {
    location_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // bottom_left
  if (!location_msgs__msg__PixelPoint__init(&msg->bottom_left)) {
    location_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  // bottom_right
  if (!location_msgs__msg__PixelPoint__init(&msg->bottom_right)) {
    location_msgs__msg__DefectBox__fini(msg);
    return false;
  }
  return true;
}

void
location_msgs__msg__DefectBox__fini(location_msgs__msg__DefectBox * msg)
{
  if (!msg) {
    return;
  }
  // center
  location_msgs__msg__PixelPoint__fini(&msg->center);
  // top_left
  location_msgs__msg__PixelPoint__fini(&msg->top_left);
  // top_right
  location_msgs__msg__PixelPoint__fini(&msg->top_right);
  // bottom_left
  location_msgs__msg__PixelPoint__fini(&msg->bottom_left);
  // bottom_right
  location_msgs__msg__PixelPoint__fini(&msg->bottom_right);
}

bool
location_msgs__msg__DefectBox__are_equal(const location_msgs__msg__DefectBox * lhs, const location_msgs__msg__DefectBox * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!location_msgs__msg__PixelPoint__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // top_left
  if (!location_msgs__msg__PixelPoint__are_equal(
      &(lhs->top_left), &(rhs->top_left)))
  {
    return false;
  }
  // top_right
  if (!location_msgs__msg__PixelPoint__are_equal(
      &(lhs->top_right), &(rhs->top_right)))
  {
    return false;
  }
  // bottom_left
  if (!location_msgs__msg__PixelPoint__are_equal(
      &(lhs->bottom_left), &(rhs->bottom_left)))
  {
    return false;
  }
  // bottom_right
  if (!location_msgs__msg__PixelPoint__are_equal(
      &(lhs->bottom_right), &(rhs->bottom_right)))
  {
    return false;
  }
  return true;
}

bool
location_msgs__msg__DefectBox__copy(
  const location_msgs__msg__DefectBox * input,
  location_msgs__msg__DefectBox * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!location_msgs__msg__PixelPoint__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // top_left
  if (!location_msgs__msg__PixelPoint__copy(
      &(input->top_left), &(output->top_left)))
  {
    return false;
  }
  // top_right
  if (!location_msgs__msg__PixelPoint__copy(
      &(input->top_right), &(output->top_right)))
  {
    return false;
  }
  // bottom_left
  if (!location_msgs__msg__PixelPoint__copy(
      &(input->bottom_left), &(output->bottom_left)))
  {
    return false;
  }
  // bottom_right
  if (!location_msgs__msg__PixelPoint__copy(
      &(input->bottom_right), &(output->bottom_right)))
  {
    return false;
  }
  return true;
}

location_msgs__msg__DefectBox *
location_msgs__msg__DefectBox__create()
{
  location_msgs__msg__DefectBox * msg = (location_msgs__msg__DefectBox *)malloc(sizeof(location_msgs__msg__DefectBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(location_msgs__msg__DefectBox));
  bool success = location_msgs__msg__DefectBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
location_msgs__msg__DefectBox__destroy(location_msgs__msg__DefectBox * msg)
{
  if (msg) {
    location_msgs__msg__DefectBox__fini(msg);
  }
  free(msg);
}


bool
location_msgs__msg__DefectBox__Sequence__init(location_msgs__msg__DefectBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  location_msgs__msg__DefectBox * data = NULL;
  if (size) {
    data = (location_msgs__msg__DefectBox *)calloc(size, sizeof(location_msgs__msg__DefectBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = location_msgs__msg__DefectBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        location_msgs__msg__DefectBox__fini(&data[i - 1]);
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
location_msgs__msg__DefectBox__Sequence__fini(location_msgs__msg__DefectBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      location_msgs__msg__DefectBox__fini(&array->data[i]);
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

location_msgs__msg__DefectBox__Sequence *
location_msgs__msg__DefectBox__Sequence__create(size_t size)
{
  location_msgs__msg__DefectBox__Sequence * array = (location_msgs__msg__DefectBox__Sequence *)malloc(sizeof(location_msgs__msg__DefectBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = location_msgs__msg__DefectBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
location_msgs__msg__DefectBox__Sequence__destroy(location_msgs__msg__DefectBox__Sequence * array)
{
  if (array) {
    location_msgs__msg__DefectBox__Sequence__fini(array);
  }
  free(array);
}

bool
location_msgs__msg__DefectBox__Sequence__are_equal(const location_msgs__msg__DefectBox__Sequence * lhs, const location_msgs__msg__DefectBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!location_msgs__msg__DefectBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
location_msgs__msg__DefectBox__Sequence__copy(
  const location_msgs__msg__DefectBox__Sequence * input,
  location_msgs__msg__DefectBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(location_msgs__msg__DefectBox);
    location_msgs__msg__DefectBox * data =
      (location_msgs__msg__DefectBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!location_msgs__msg__DefectBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          location_msgs__msg__DefectBox__fini(&data[i]);
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
    if (!location_msgs__msg__DefectBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
