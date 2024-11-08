// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from location_msgs:msg/PanelBox.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/panel_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
location_msgs__msg__PanelBox__init(location_msgs__msg__PanelBox * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // w
  // h
  return true;
}

void
location_msgs__msg__PanelBox__fini(location_msgs__msg__PanelBox * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // w
  // h
}

bool
location_msgs__msg__PanelBox__are_equal(const location_msgs__msg__PanelBox * lhs, const location_msgs__msg__PanelBox * rhs)
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
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // h
  if (lhs->h != rhs->h) {
    return false;
  }
  return true;
}

bool
location_msgs__msg__PanelBox__copy(
  const location_msgs__msg__PanelBox * input,
  location_msgs__msg__PanelBox * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // w
  output->w = input->w;
  // h
  output->h = input->h;
  return true;
}

location_msgs__msg__PanelBox *
location_msgs__msg__PanelBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  location_msgs__msg__PanelBox * msg = (location_msgs__msg__PanelBox *)allocator.allocate(sizeof(location_msgs__msg__PanelBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(location_msgs__msg__PanelBox));
  bool success = location_msgs__msg__PanelBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
location_msgs__msg__PanelBox__destroy(location_msgs__msg__PanelBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    location_msgs__msg__PanelBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
location_msgs__msg__PanelBox__Sequence__init(location_msgs__msg__PanelBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  location_msgs__msg__PanelBox * data = NULL;

  if (size) {
    data = (location_msgs__msg__PanelBox *)allocator.zero_allocate(size, sizeof(location_msgs__msg__PanelBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = location_msgs__msg__PanelBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        location_msgs__msg__PanelBox__fini(&data[i - 1]);
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
location_msgs__msg__PanelBox__Sequence__fini(location_msgs__msg__PanelBox__Sequence * array)
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
      location_msgs__msg__PanelBox__fini(&array->data[i]);
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

location_msgs__msg__PanelBox__Sequence *
location_msgs__msg__PanelBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  location_msgs__msg__PanelBox__Sequence * array = (location_msgs__msg__PanelBox__Sequence *)allocator.allocate(sizeof(location_msgs__msg__PanelBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = location_msgs__msg__PanelBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
location_msgs__msg__PanelBox__Sequence__destroy(location_msgs__msg__PanelBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    location_msgs__msg__PanelBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
location_msgs__msg__PanelBox__Sequence__are_equal(const location_msgs__msg__PanelBox__Sequence * lhs, const location_msgs__msg__PanelBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!location_msgs__msg__PanelBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
location_msgs__msg__PanelBox__Sequence__copy(
  const location_msgs__msg__PanelBox__Sequence * input,
  location_msgs__msg__PanelBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(location_msgs__msg__PanelBox);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    location_msgs__msg__PanelBox * data =
      (location_msgs__msg__PanelBox *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!location_msgs__msg__PanelBox__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          location_msgs__msg__PanelBox__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!location_msgs__msg__PanelBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
