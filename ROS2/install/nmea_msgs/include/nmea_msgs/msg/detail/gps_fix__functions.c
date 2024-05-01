// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gps_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `gps_fix`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

bool
nmea_msgs__msg__GpsFix__init(nmea_msgs__msg__GpsFix * msg)
{
  if (!msg) {
    return false;
  }
  // msg_id
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__init(&msg->gps_fix)) {
    nmea_msgs__msg__GpsFix__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__GpsFix__fini(nmea_msgs__msg__GpsFix * msg)
{
  if (!msg) {
    return;
  }
  // msg_id
  // gps_fix
  sensor_msgs__msg__NavSatFix__fini(&msg->gps_fix);
}

bool
nmea_msgs__msg__GpsFix__are_equal(const nmea_msgs__msg__GpsFix * lhs, const nmea_msgs__msg__GpsFix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg_id
  if (lhs->msg_id != rhs->msg_id) {
    return false;
  }
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__are_equal(
      &(lhs->gps_fix), &(rhs->gps_fix)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__GpsFix__copy(
  const nmea_msgs__msg__GpsFix * input,
  nmea_msgs__msg__GpsFix * output)
{
  if (!input || !output) {
    return false;
  }
  // msg_id
  output->msg_id = input->msg_id;
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__copy(
      &(input->gps_fix), &(output->gps_fix)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__GpsFix *
nmea_msgs__msg__GpsFix__create()
{
  nmea_msgs__msg__GpsFix * msg = (nmea_msgs__msg__GpsFix *)malloc(sizeof(nmea_msgs__msg__GpsFix));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__GpsFix));
  bool success = nmea_msgs__msg__GpsFix__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__GpsFix__destroy(nmea_msgs__msg__GpsFix * msg)
{
  if (msg) {
    nmea_msgs__msg__GpsFix__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__GpsFix__Sequence__init(nmea_msgs__msg__GpsFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__GpsFix * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__GpsFix *)calloc(size, sizeof(nmea_msgs__msg__GpsFix));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__GpsFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__GpsFix__fini(&data[i - 1]);
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
nmea_msgs__msg__GpsFix__Sequence__fini(nmea_msgs__msg__GpsFix__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__GpsFix__fini(&array->data[i]);
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

nmea_msgs__msg__GpsFix__Sequence *
nmea_msgs__msg__GpsFix__Sequence__create(size_t size)
{
  nmea_msgs__msg__GpsFix__Sequence * array = (nmea_msgs__msg__GpsFix__Sequence *)malloc(sizeof(nmea_msgs__msg__GpsFix__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__GpsFix__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__GpsFix__Sequence__destroy(nmea_msgs__msg__GpsFix__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__GpsFix__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__GpsFix__Sequence__are_equal(const nmea_msgs__msg__GpsFix__Sequence * lhs, const nmea_msgs__msg__GpsFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__GpsFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__GpsFix__Sequence__copy(
  const nmea_msgs__msg__GpsFix__Sequence * input,
  nmea_msgs__msg__GpsFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__GpsFix);
    nmea_msgs__msg__GpsFix * data =
      (nmea_msgs__msg__GpsFix *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__GpsFix__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__GpsFix__fini(&data[i]);
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
    if (!nmea_msgs__msg__GpsFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
