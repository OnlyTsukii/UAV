// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/yaw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
location_msgs__msg__Yaw__init(location_msgs__msg__Yaw * msg)
{
  if (!msg) {
    return false;
  }
  // yaw_id
  // yaw
  return true;
}

void
location_msgs__msg__Yaw__fini(location_msgs__msg__Yaw * msg)
{
  if (!msg) {
    return;
  }
  // yaw_id
  // yaw
}

bool
location_msgs__msg__Yaw__are_equal(const location_msgs__msg__Yaw * lhs, const location_msgs__msg__Yaw * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw_id
  if (lhs->yaw_id != rhs->yaw_id) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
location_msgs__msg__Yaw__copy(
  const location_msgs__msg__Yaw * input,
  location_msgs__msg__Yaw * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw_id
  output->yaw_id = input->yaw_id;
  // yaw
  output->yaw = input->yaw;
  return true;
}

location_msgs__msg__Yaw *
location_msgs__msg__Yaw__create()
{
  location_msgs__msg__Yaw * msg = (location_msgs__msg__Yaw *)malloc(sizeof(location_msgs__msg__Yaw));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(location_msgs__msg__Yaw));
  bool success = location_msgs__msg__Yaw__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
location_msgs__msg__Yaw__destroy(location_msgs__msg__Yaw * msg)
{
  if (msg) {
    location_msgs__msg__Yaw__fini(msg);
  }
  free(msg);
}


bool
location_msgs__msg__Yaw__Sequence__init(location_msgs__msg__Yaw__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  location_msgs__msg__Yaw * data = NULL;
  if (size) {
    data = (location_msgs__msg__Yaw *)calloc(size, sizeof(location_msgs__msg__Yaw));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = location_msgs__msg__Yaw__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        location_msgs__msg__Yaw__fini(&data[i - 1]);
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
location_msgs__msg__Yaw__Sequence__fini(location_msgs__msg__Yaw__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      location_msgs__msg__Yaw__fini(&array->data[i]);
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

location_msgs__msg__Yaw__Sequence *
location_msgs__msg__Yaw__Sequence__create(size_t size)
{
  location_msgs__msg__Yaw__Sequence * array = (location_msgs__msg__Yaw__Sequence *)malloc(sizeof(location_msgs__msg__Yaw__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = location_msgs__msg__Yaw__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
location_msgs__msg__Yaw__Sequence__destroy(location_msgs__msg__Yaw__Sequence * array)
{
  if (array) {
    location_msgs__msg__Yaw__Sequence__fini(array);
  }
  free(array);
}

bool
location_msgs__msg__Yaw__Sequence__are_equal(const location_msgs__msg__Yaw__Sequence * lhs, const location_msgs__msg__Yaw__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!location_msgs__msg__Yaw__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
location_msgs__msg__Yaw__Sequence__copy(
  const location_msgs__msg__Yaw__Sequence * input,
  location_msgs__msg__Yaw__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(location_msgs__msg__Yaw);
    location_msgs__msg__Yaw * data =
      (location_msgs__msg__Yaw *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!location_msgs__msg__Yaw__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          location_msgs__msg__Yaw__fini(&data[i]);
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
    if (!location_msgs__msg__Yaw__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
