// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from location_msgs:msg/Mix.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/mix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gps_fix`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"
// Member `defects`
#include "location_msgs/msg/detail/defects__functions.h"

bool
location_msgs__msg__Mix__init(location_msgs__msg__Mix * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__init(&msg->gps_fix)) {
    location_msgs__msg__Mix__fini(msg);
    return false;
  }
  // yaw
  // defects
  if (!location_msgs__msg__Defects__init(&msg->defects)) {
    location_msgs__msg__Mix__fini(msg);
    return false;
  }
  return true;
}

void
location_msgs__msg__Mix__fini(location_msgs__msg__Mix * msg)
{
  if (!msg) {
    return;
  }
  // id
  // gps_fix
  sensor_msgs__msg__NavSatFix__fini(&msg->gps_fix);
  // yaw
  // defects
  location_msgs__msg__Defects__fini(&msg->defects);
}

bool
location_msgs__msg__Mix__are_equal(const location_msgs__msg__Mix * lhs, const location_msgs__msg__Mix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__are_equal(
      &(lhs->gps_fix), &(rhs->gps_fix)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // defects
  if (!location_msgs__msg__Defects__are_equal(
      &(lhs->defects), &(rhs->defects)))
  {
    return false;
  }
  return true;
}

bool
location_msgs__msg__Mix__copy(
  const location_msgs__msg__Mix * input,
  location_msgs__msg__Mix * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // gps_fix
  if (!sensor_msgs__msg__NavSatFix__copy(
      &(input->gps_fix), &(output->gps_fix)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // defects
  if (!location_msgs__msg__Defects__copy(
      &(input->defects), &(output->defects)))
  {
    return false;
  }
  return true;
}

location_msgs__msg__Mix *
location_msgs__msg__Mix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  location_msgs__msg__Mix * msg = (location_msgs__msg__Mix *)allocator.allocate(sizeof(location_msgs__msg__Mix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(location_msgs__msg__Mix));
  bool success = location_msgs__msg__Mix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
location_msgs__msg__Mix__destroy(location_msgs__msg__Mix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    location_msgs__msg__Mix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
location_msgs__msg__Mix__Sequence__init(location_msgs__msg__Mix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  location_msgs__msg__Mix * data = NULL;

  if (size) {
    data = (location_msgs__msg__Mix *)allocator.zero_allocate(size, sizeof(location_msgs__msg__Mix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = location_msgs__msg__Mix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        location_msgs__msg__Mix__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
location_msgs__msg__Mix__Sequence__fini(location_msgs__msg__Mix__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      location_msgs__msg__Mix__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

location_msgs__msg__Mix__Sequence *
location_msgs__msg__Mix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  location_msgs__msg__Mix__Sequence * array = (location_msgs__msg__Mix__Sequence *)allocator.allocate(sizeof(location_msgs__msg__Mix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = location_msgs__msg__Mix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
location_msgs__msg__Mix__Sequence__destroy(location_msgs__msg__Mix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    location_msgs__msg__Mix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
location_msgs__msg__Mix__Sequence__are_equal(const location_msgs__msg__Mix__Sequence * lhs, const location_msgs__msg__Mix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!location_msgs__msg__Mix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
location_msgs__msg__Mix__Sequence__copy(
  const location_msgs__msg__Mix__Sequence * input,
  location_msgs__msg__Mix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(location_msgs__msg__Mix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    location_msgs__msg__Mix * data =
      (location_msgs__msg__Mix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!location_msgs__msg__Mix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          location_msgs__msg__Mix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!location_msgs__msg__Mix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
