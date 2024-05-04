// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from location_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/gps_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `gps_fix`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

bool
location_msgs__msg__GpsFix__init(location_msgs__msg__GpsFix * msg)
{
  if (!msg) {
    return false;
  }
  // gps_id
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__init(&msg->gps_fix)) {
    location_msgs__msg__GpsFix__fini(msg);
    return false;
  }
  return true;
}

void
location_msgs__msg__GpsFix__fini(location_msgs__msg__GpsFix * msg)
{
  if (!msg) {
    return;
  }
  // gps_id
  // gps_fix
  sensor_msgs__msg__NavSatFix__fini(&msg->gps_fix);
}

bool
location_msgs__msg__GpsFix__are_equal(const location_msgs__msg__GpsFix * lhs, const location_msgs__msg__GpsFix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gps_id
  if (lhs->gps_id != rhs->gps_id) {
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
location_msgs__msg__GpsFix__copy(
  const location_msgs__msg__GpsFix * input,
  location_msgs__msg__GpsFix * output)
{
  if (!input || !output) {
    return false;
  }
  // gps_id
  output->gps_id = input->gps_id;
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__copy(
      &(input->gps_fix), &(output->gps_fix)))
  {
    return false;
  }
  return true;
}

location_msgs__msg__GpsFix *
location_msgs__msg__GpsFix__create()
{
  location_msgs__msg__GpsFix * msg = (location_msgs__msg__GpsFix *)malloc(sizeof(location_msgs__msg__GpsFix));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(location_msgs__msg__GpsFix));
  bool success = location_msgs__msg__GpsFix__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
location_msgs__msg__GpsFix__destroy(location_msgs__msg__GpsFix * msg)
{
  if (msg) {
    location_msgs__msg__GpsFix__fini(msg);
  }
  free(msg);
}


bool
location_msgs__msg__GpsFix__Sequence__init(location_msgs__msg__GpsFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  location_msgs__msg__GpsFix * data = NULL;
  if (size) {
    data = (location_msgs__msg__GpsFix *)calloc(size, sizeof(location_msgs__msg__GpsFix));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = location_msgs__msg__GpsFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        location_msgs__msg__GpsFix__fini(&data[i - 1]);
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
location_msgs__msg__GpsFix__Sequence__fini(location_msgs__msg__GpsFix__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      location_msgs__msg__GpsFix__fini(&array->data[i]);
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

location_msgs__msg__GpsFix__Sequence *
location_msgs__msg__GpsFix__Sequence__create(size_t size)
{
  location_msgs__msg__GpsFix__Sequence * array = (location_msgs__msg__GpsFix__Sequence *)malloc(sizeof(location_msgs__msg__GpsFix__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = location_msgs__msg__GpsFix__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
location_msgs__msg__GpsFix__Sequence__destroy(location_msgs__msg__GpsFix__Sequence * array)
{
  if (array) {
    location_msgs__msg__GpsFix__Sequence__fini(array);
  }
  free(array);
}

bool
location_msgs__msg__GpsFix__Sequence__are_equal(const location_msgs__msg__GpsFix__Sequence * lhs, const location_msgs__msg__GpsFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!location_msgs__msg__GpsFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
location_msgs__msg__GpsFix__Sequence__copy(
  const location_msgs__msg__GpsFix__Sequence * input,
  location_msgs__msg__GpsFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(location_msgs__msg__GpsFix);
    location_msgs__msg__GpsFix * data =
      (location_msgs__msg__GpsFix *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!location_msgs__msg__GpsFix__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          location_msgs__msg__GpsFix__fini(&data[i]);
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
    if (!location_msgs__msg__GpsFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
