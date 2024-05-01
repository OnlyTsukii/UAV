// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgst__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Gpgst__init(nmea_msgs__msg__Gpgst * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gpgst__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gpgst__fini(msg);
    return false;
  }
  // utc_seconds
  // rms
  // semi_major_dev
  // semi_minor_dev
  // orientation
  // lat_dev
  // lon_dev
  // alt_dev
  return true;
}

void
nmea_msgs__msg__Gpgst__fini(nmea_msgs__msg__Gpgst * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // utc_seconds
  // rms
  // semi_major_dev
  // semi_minor_dev
  // orientation
  // lat_dev
  // lon_dev
  // alt_dev
}

bool
nmea_msgs__msg__Gpgst__are_equal(const nmea_msgs__msg__Gpgst * lhs, const nmea_msgs__msg__Gpgst * rhs)
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
  // utc_seconds
  if (lhs->utc_seconds != rhs->utc_seconds) {
    return false;
  }
  // rms
  if (lhs->rms != rhs->rms) {
    return false;
  }
  // semi_major_dev
  if (lhs->semi_major_dev != rhs->semi_major_dev) {
    return false;
  }
  // semi_minor_dev
  if (lhs->semi_minor_dev != rhs->semi_minor_dev) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // lat_dev
  if (lhs->lat_dev != rhs->lat_dev) {
    return false;
  }
  // lon_dev
  if (lhs->lon_dev != rhs->lon_dev) {
    return false;
  }
  // alt_dev
  if (lhs->alt_dev != rhs->alt_dev) {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gpgst__copy(
  const nmea_msgs__msg__Gpgst * input,
  nmea_msgs__msg__Gpgst * output)
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
  // utc_seconds
  output->utc_seconds = input->utc_seconds;
  // rms
  output->rms = input->rms;
  // semi_major_dev
  output->semi_major_dev = input->semi_major_dev;
  // semi_minor_dev
  output->semi_minor_dev = input->semi_minor_dev;
  // orientation
  output->orientation = input->orientation;
  // lat_dev
  output->lat_dev = input->lat_dev;
  // lon_dev
  output->lon_dev = input->lon_dev;
  // alt_dev
  output->alt_dev = input->alt_dev;
  return true;
}

nmea_msgs__msg__Gpgst *
nmea_msgs__msg__Gpgst__create()
{
  nmea_msgs__msg__Gpgst * msg = (nmea_msgs__msg__Gpgst *)malloc(sizeof(nmea_msgs__msg__Gpgst));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gpgst));
  bool success = nmea_msgs__msg__Gpgst__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gpgst__destroy(nmea_msgs__msg__Gpgst * msg)
{
  if (msg) {
    nmea_msgs__msg__Gpgst__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Gpgst__Sequence__init(nmea_msgs__msg__Gpgst__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Gpgst * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Gpgst *)calloc(size, sizeof(nmea_msgs__msg__Gpgst));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gpgst__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gpgst__fini(&data[i - 1]);
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
nmea_msgs__msg__Gpgst__Sequence__fini(nmea_msgs__msg__Gpgst__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Gpgst__fini(&array->data[i]);
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

nmea_msgs__msg__Gpgst__Sequence *
nmea_msgs__msg__Gpgst__Sequence__create(size_t size)
{
  nmea_msgs__msg__Gpgst__Sequence * array = (nmea_msgs__msg__Gpgst__Sequence *)malloc(sizeof(nmea_msgs__msg__Gpgst__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gpgst__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gpgst__Sequence__destroy(nmea_msgs__msg__Gpgst__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Gpgst__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Gpgst__Sequence__are_equal(const nmea_msgs__msg__Gpgst__Sequence * lhs, const nmea_msgs__msg__Gpgst__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gpgst__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gpgst__Sequence__copy(
  const nmea_msgs__msg__Gpgst__Sequence * input,
  nmea_msgs__msg__Gpgst__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gpgst);
    nmea_msgs__msg__Gpgst * data =
      (nmea_msgs__msg__Gpgst *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gpgst__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gpgst__fini(&data[i]);
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
    if (!nmea_msgs__msg__Gpgst__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
