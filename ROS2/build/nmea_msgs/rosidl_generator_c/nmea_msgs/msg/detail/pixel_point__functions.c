// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/pixel_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
nmea_msgs__msg__PixelPoint__init(nmea_msgs__msg__PixelPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
nmea_msgs__msg__PixelPoint__fini(nmea_msgs__msg__PixelPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
nmea_msgs__msg__PixelPoint__are_equal(const nmea_msgs__msg__PixelPoint * lhs, const nmea_msgs__msg__PixelPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__PixelPoint__copy(
  const nmea_msgs__msg__PixelPoint * input,
  nmea_msgs__msg__PixelPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

nmea_msgs__msg__PixelPoint *
nmea_msgs__msg__PixelPoint__create()
{
  nmea_msgs__msg__PixelPoint * msg = (nmea_msgs__msg__PixelPoint *)malloc(sizeof(nmea_msgs__msg__PixelPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__PixelPoint));
  bool success = nmea_msgs__msg__PixelPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__PixelPoint__destroy(nmea_msgs__msg__PixelPoint * msg)
{
  if (msg) {
    nmea_msgs__msg__PixelPoint__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__PixelPoint__Sequence__init(nmea_msgs__msg__PixelPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__PixelPoint * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__PixelPoint *)calloc(size, sizeof(nmea_msgs__msg__PixelPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__PixelPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__PixelPoint__fini(&data[i - 1]);
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
nmea_msgs__msg__PixelPoint__Sequence__fini(nmea_msgs__msg__PixelPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__PixelPoint__fini(&array->data[i]);
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

nmea_msgs__msg__PixelPoint__Sequence *
nmea_msgs__msg__PixelPoint__Sequence__create(size_t size)
{
  nmea_msgs__msg__PixelPoint__Sequence * array = (nmea_msgs__msg__PixelPoint__Sequence *)malloc(sizeof(nmea_msgs__msg__PixelPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__PixelPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__PixelPoint__Sequence__destroy(nmea_msgs__msg__PixelPoint__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__PixelPoint__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__PixelPoint__Sequence__are_equal(const nmea_msgs__msg__PixelPoint__Sequence * lhs, const nmea_msgs__msg__PixelPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__PixelPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__PixelPoint__Sequence__copy(
  const nmea_msgs__msg__PixelPoint__Sequence * input,
  nmea_msgs__msg__PixelPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__PixelPoint);
    nmea_msgs__msg__PixelPoint * data =
      (nmea_msgs__msg__PixelPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__PixelPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__PixelPoint__fini(&data[i]);
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
    if (!nmea_msgs__msg__PixelPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
