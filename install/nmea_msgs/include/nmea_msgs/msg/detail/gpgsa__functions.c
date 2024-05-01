// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgsa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `auto_manual_mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `sv_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nmea_msgs__msg__Gpgsa__init(nmea_msgs__msg__Gpgsa * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // auto_manual_mode
  if (!rosidl_runtime_c__String__init(&msg->auto_manual_mode)) {
    nmea_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // fix_mode
  // sv_ids
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->sv_ids, 0)) {
    nmea_msgs__msg__Gpgsa__fini(msg);
    return false;
  }
  // pdop
  // hdop
  // vdop
  return true;
}

void
nmea_msgs__msg__Gpgsa__fini(nmea_msgs__msg__Gpgsa * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // auto_manual_mode
  rosidl_runtime_c__String__fini(&msg->auto_manual_mode);
  // fix_mode
  // sv_ids
  rosidl_runtime_c__uint8__Sequence__fini(&msg->sv_ids);
  // pdop
  // hdop
  // vdop
}

bool
nmea_msgs__msg__Gpgsa__are_equal(const nmea_msgs__msg__Gpgsa * lhs, const nmea_msgs__msg__Gpgsa * rhs)
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
  // auto_manual_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->auto_manual_mode), &(rhs->auto_manual_mode)))
  {
    return false;
  }
  // fix_mode
  if (lhs->fix_mode != rhs->fix_mode) {
    return false;
  }
  // sv_ids
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->sv_ids), &(rhs->sv_ids)))
  {
    return false;
  }
  // pdop
  if (lhs->pdop != rhs->pdop) {
    return false;
  }
  // hdop
  if (lhs->hdop != rhs->hdop) {
    return false;
  }
  // vdop
  if (lhs->vdop != rhs->vdop) {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gpgsa__copy(
  const nmea_msgs__msg__Gpgsa * input,
  nmea_msgs__msg__Gpgsa * output)
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
  // auto_manual_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->auto_manual_mode), &(output->auto_manual_mode)))
  {
    return false;
  }
  // fix_mode
  output->fix_mode = input->fix_mode;
  // sv_ids
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->sv_ids), &(output->sv_ids)))
  {
    return false;
  }
  // pdop
  output->pdop = input->pdop;
  // hdop
  output->hdop = input->hdop;
  // vdop
  output->vdop = input->vdop;
  return true;
}

nmea_msgs__msg__Gpgsa *
nmea_msgs__msg__Gpgsa__create()
{
  nmea_msgs__msg__Gpgsa * msg = (nmea_msgs__msg__Gpgsa *)malloc(sizeof(nmea_msgs__msg__Gpgsa));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gpgsa));
  bool success = nmea_msgs__msg__Gpgsa__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gpgsa__destroy(nmea_msgs__msg__Gpgsa * msg)
{
  if (msg) {
    nmea_msgs__msg__Gpgsa__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Gpgsa__Sequence__init(nmea_msgs__msg__Gpgsa__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Gpgsa * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Gpgsa *)calloc(size, sizeof(nmea_msgs__msg__Gpgsa));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gpgsa__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gpgsa__fini(&data[i - 1]);
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
nmea_msgs__msg__Gpgsa__Sequence__fini(nmea_msgs__msg__Gpgsa__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Gpgsa__fini(&array->data[i]);
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

nmea_msgs__msg__Gpgsa__Sequence *
nmea_msgs__msg__Gpgsa__Sequence__create(size_t size)
{
  nmea_msgs__msg__Gpgsa__Sequence * array = (nmea_msgs__msg__Gpgsa__Sequence *)malloc(sizeof(nmea_msgs__msg__Gpgsa__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gpgsa__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gpgsa__Sequence__destroy(nmea_msgs__msg__Gpgsa__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Gpgsa__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Gpgsa__Sequence__are_equal(const nmea_msgs__msg__Gpgsa__Sequence * lhs, const nmea_msgs__msg__Gpgsa__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gpgsa__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gpgsa__Sequence__copy(
  const nmea_msgs__msg__Gpgsa__Sequence * input,
  nmea_msgs__msg__Gpgsa__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gpgsa);
    nmea_msgs__msg__Gpgsa * data =
      (nmea_msgs__msg__Gpgsa *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gpgsa__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gpgsa__fini(&data[i]);
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
    if (!nmea_msgs__msg__Gpgsa__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
