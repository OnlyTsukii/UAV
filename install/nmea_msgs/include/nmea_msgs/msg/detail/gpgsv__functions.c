// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgsv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `satellites`
#include "nmea_msgs/msg/detail/gpgsv_satellite__functions.h"

bool
nmea_msgs__msg__Gpgsv__init(nmea_msgs__msg__Gpgsv * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gpgsv__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gpgsv__fini(msg);
    return false;
  }
  // n_msgs
  // msg_number
  // n_satellites
  // satellites
  if (!nmea_msgs__msg__GpgsvSatellite__Sequence__init(&msg->satellites, 0)) {
    nmea_msgs__msg__Gpgsv__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Gpgsv__fini(nmea_msgs__msg__Gpgsv * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // n_msgs
  // msg_number
  // n_satellites
  // satellites
  nmea_msgs__msg__GpgsvSatellite__Sequence__fini(&msg->satellites);
}

bool
nmea_msgs__msg__Gpgsv__are_equal(const nmea_msgs__msg__Gpgsv * lhs, const nmea_msgs__msg__Gpgsv * rhs)
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
  // message_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_id), &(rhs->message_id)))
  {
    return false;
  }
  // n_msgs
  if (lhs->n_msgs != rhs->n_msgs) {
    return false;
  }
  // msg_number
  if (lhs->msg_number != rhs->msg_number) {
    return false;
  }
  // n_satellites
  if (lhs->n_satellites != rhs->n_satellites) {
    return false;
  }
  // satellites
  if (!nmea_msgs__msg__GpgsvSatellite__Sequence__are_equal(
      &(lhs->satellites), &(rhs->satellites)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gpgsv__copy(
  const nmea_msgs__msg__Gpgsv * input,
  nmea_msgs__msg__Gpgsv * output)
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
  // message_id
  if (!rosidl_runtime_c__String__copy(
      &(input->message_id), &(output->message_id)))
  {
    return false;
  }
  // n_msgs
  output->n_msgs = input->n_msgs;
  // msg_number
  output->msg_number = input->msg_number;
  // n_satellites
  output->n_satellites = input->n_satellites;
  // satellites
  if (!nmea_msgs__msg__GpgsvSatellite__Sequence__copy(
      &(input->satellites), &(output->satellites)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Gpgsv *
nmea_msgs__msg__Gpgsv__create()
{
  nmea_msgs__msg__Gpgsv * msg = (nmea_msgs__msg__Gpgsv *)malloc(sizeof(nmea_msgs__msg__Gpgsv));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gpgsv));
  bool success = nmea_msgs__msg__Gpgsv__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gpgsv__destroy(nmea_msgs__msg__Gpgsv * msg)
{
  if (msg) {
    nmea_msgs__msg__Gpgsv__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Gpgsv__Sequence__init(nmea_msgs__msg__Gpgsv__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Gpgsv * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Gpgsv *)calloc(size, sizeof(nmea_msgs__msg__Gpgsv));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gpgsv__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gpgsv__fini(&data[i - 1]);
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
nmea_msgs__msg__Gpgsv__Sequence__fini(nmea_msgs__msg__Gpgsv__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Gpgsv__fini(&array->data[i]);
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

nmea_msgs__msg__Gpgsv__Sequence *
nmea_msgs__msg__Gpgsv__Sequence__create(size_t size)
{
  nmea_msgs__msg__Gpgsv__Sequence * array = (nmea_msgs__msg__Gpgsv__Sequence *)malloc(sizeof(nmea_msgs__msg__Gpgsv__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gpgsv__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gpgsv__Sequence__destroy(nmea_msgs__msg__Gpgsv__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Gpgsv__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Gpgsv__Sequence__are_equal(const nmea_msgs__msg__Gpgsv__Sequence * lhs, const nmea_msgs__msg__Gpgsv__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gpgsv__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gpgsv__Sequence__copy(
  const nmea_msgs__msg__Gpgsv__Sequence * input,
  nmea_msgs__msg__Gpgsv__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gpgsv);
    nmea_msgs__msg__Gpgsv * data =
      (nmea_msgs__msg__Gpgsv *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gpgsv__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gpgsv__fini(&data[i]);
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
    if (!nmea_msgs__msg__Gpgsv__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
