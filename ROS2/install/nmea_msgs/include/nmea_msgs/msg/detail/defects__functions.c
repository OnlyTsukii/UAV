// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/defects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `defects`
#include "nmea_msgs/msg/detail/defect_box__functions.h"

bool
nmea_msgs__msg__Defects__init(nmea_msgs__msg__Defects * msg)
{
  if (!msg) {
    return false;
  }
  // defect_id
  // img_width
  // img_height
  // defects
  if (!nmea_msgs__msg__DefectBox__Sequence__init(&msg->defects, 0)) {
    nmea_msgs__msg__Defects__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Defects__fini(nmea_msgs__msg__Defects * msg)
{
  if (!msg) {
    return;
  }
  // defect_id
  // img_width
  // img_height
  // defects
  nmea_msgs__msg__DefectBox__Sequence__fini(&msg->defects);
}

bool
nmea_msgs__msg__Defects__are_equal(const nmea_msgs__msg__Defects * lhs, const nmea_msgs__msg__Defects * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // defect_id
  if (lhs->defect_id != rhs->defect_id) {
    return false;
  }
  // img_width
  if (lhs->img_width != rhs->img_width) {
    return false;
  }
  // img_height
  if (lhs->img_height != rhs->img_height) {
    return false;
  }
  // defects
  if (!nmea_msgs__msg__DefectBox__Sequence__are_equal(
      &(lhs->defects), &(rhs->defects)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Defects__copy(
  const nmea_msgs__msg__Defects * input,
  nmea_msgs__msg__Defects * output)
{
  if (!input || !output) {
    return false;
  }
  // defect_id
  output->defect_id = input->defect_id;
  // img_width
  output->img_width = input->img_width;
  // img_height
  output->img_height = input->img_height;
  // defects
  if (!nmea_msgs__msg__DefectBox__Sequence__copy(
      &(input->defects), &(output->defects)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Defects *
nmea_msgs__msg__Defects__create()
{
  nmea_msgs__msg__Defects * msg = (nmea_msgs__msg__Defects *)malloc(sizeof(nmea_msgs__msg__Defects));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Defects));
  bool success = nmea_msgs__msg__Defects__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Defects__destroy(nmea_msgs__msg__Defects * msg)
{
  if (msg) {
    nmea_msgs__msg__Defects__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Defects__Sequence__init(nmea_msgs__msg__Defects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Defects * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Defects *)calloc(size, sizeof(nmea_msgs__msg__Defects));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Defects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Defects__fini(&data[i - 1]);
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
nmea_msgs__msg__Defects__Sequence__fini(nmea_msgs__msg__Defects__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Defects__fini(&array->data[i]);
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

nmea_msgs__msg__Defects__Sequence *
nmea_msgs__msg__Defects__Sequence__create(size_t size)
{
  nmea_msgs__msg__Defects__Sequence * array = (nmea_msgs__msg__Defects__Sequence *)malloc(sizeof(nmea_msgs__msg__Defects__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Defects__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Defects__Sequence__destroy(nmea_msgs__msg__Defects__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Defects__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Defects__Sequence__are_equal(const nmea_msgs__msg__Defects__Sequence * lhs, const nmea_msgs__msg__Defects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Defects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Defects__Sequence__copy(
  const nmea_msgs__msg__Defects__Sequence * input,
  nmea_msgs__msg__Defects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Defects);
    nmea_msgs__msg__Defects * data =
      (nmea_msgs__msg__Defects *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Defects__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Defects__fini(&data[i]);
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
    if (!nmea_msgs__msg__Defects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
