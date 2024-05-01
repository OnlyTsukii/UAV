// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/sentence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sentence`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Sentence__init(nmea_msgs__msg__Sentence * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Sentence__fini(msg);
    return false;
  }
  // sentence
  if (!rosidl_runtime_c__String__init(&msg->sentence)) {
    nmea_msgs__msg__Sentence__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Sentence__fini(nmea_msgs__msg__Sentence * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sentence
  rosidl_runtime_c__String__fini(&msg->sentence);
}

bool
nmea_msgs__msg__Sentence__are_equal(const nmea_msgs__msg__Sentence * lhs, const nmea_msgs__msg__Sentence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // sentence
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sentence), &(rhs->sentence)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Sentence__copy(
  const nmea_msgs__msg__Sentence * input,
  nmea_msgs__msg__Sentence * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // sentence
  if (!rosidl_runtime_c__String__copy(
      &(input->sentence), &(output->sentence)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Sentence *
nmea_msgs__msg__Sentence__create()
{
  nmea_msgs__msg__Sentence * msg = (nmea_msgs__msg__Sentence *)malloc(sizeof(nmea_msgs__msg__Sentence));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Sentence));
  bool success = nmea_msgs__msg__Sentence__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Sentence__destroy(nmea_msgs__msg__Sentence * msg)
{
  if (msg) {
    nmea_msgs__msg__Sentence__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Sentence__Sequence__init(nmea_msgs__msg__Sentence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Sentence * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Sentence *)calloc(size, sizeof(nmea_msgs__msg__Sentence));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Sentence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Sentence__fini(&data[i - 1]);
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
nmea_msgs__msg__Sentence__Sequence__fini(nmea_msgs__msg__Sentence__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Sentence__fini(&array->data[i]);
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

nmea_msgs__msg__Sentence__Sequence *
nmea_msgs__msg__Sentence__Sequence__create(size_t size)
{
  nmea_msgs__msg__Sentence__Sequence * array = (nmea_msgs__msg__Sentence__Sequence *)malloc(sizeof(nmea_msgs__msg__Sentence__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Sentence__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Sentence__Sequence__destroy(nmea_msgs__msg__Sentence__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Sentence__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Sentence__Sequence__are_equal(const nmea_msgs__msg__Sentence__Sequence * lhs, const nmea_msgs__msg__Sentence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Sentence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Sentence__Sequence__copy(
  const nmea_msgs__msg__Sentence__Sequence * input,
  nmea_msgs__msg__Sentence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Sentence);
    nmea_msgs__msg__Sentence * data =
      (nmea_msgs__msg__Sentence *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Sentence__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Sentence__fini(&data[i]);
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
    if (!nmea_msgs__msg__Sentence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
