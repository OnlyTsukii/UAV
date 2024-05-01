// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gprmc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `position_status`
// Member `lat_dir`
// Member `lon_dir`
// Member `date`
// Member `mag_var_direction`
// Member `mode_indicator`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Gprmc__init(nmea_msgs__msg__Gprmc * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // utc_seconds
  // position_status
  if (!rosidl_runtime_c__String__init(&msg->position_status)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // lat
  // lon
  // lat_dir
  if (!rosidl_runtime_c__String__init(&msg->lat_dir)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // lon_dir
  if (!rosidl_runtime_c__String__init(&msg->lon_dir)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // speed
  // track
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // mag_var
  // mag_var_direction
  if (!rosidl_runtime_c__String__init(&msg->mag_var_direction)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__init(&msg->mode_indicator)) {
    nmea_msgs__msg__Gprmc__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Gprmc__fini(nmea_msgs__msg__Gprmc * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // utc_seconds
  // position_status
  rosidl_runtime_c__String__fini(&msg->position_status);
  // lat
  // lon
  // lat_dir
  rosidl_runtime_c__String__fini(&msg->lat_dir);
  // lon_dir
  rosidl_runtime_c__String__fini(&msg->lon_dir);
  // speed
  // track
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // mag_var
  // mag_var_direction
  rosidl_runtime_c__String__fini(&msg->mag_var_direction);
  // mode_indicator
  rosidl_runtime_c__String__fini(&msg->mode_indicator);
}

bool
nmea_msgs__msg__Gprmc__are_equal(const nmea_msgs__msg__Gprmc * lhs, const nmea_msgs__msg__Gprmc * rhs)
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
  // position_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->position_status), &(rhs->position_status)))
  {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat_dir
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lat_dir), &(rhs->lat_dir)))
  {
    return false;
  }
  // lon_dir
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lon_dir), &(rhs->lon_dir)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // track
  if (lhs->track != rhs->track) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // mag_var
  if (lhs->mag_var != rhs->mag_var) {
    return false;
  }
  // mag_var_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mag_var_direction), &(rhs->mag_var_direction)))
  {
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode_indicator), &(rhs->mode_indicator)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gprmc__copy(
  const nmea_msgs__msg__Gprmc * input,
  nmea_msgs__msg__Gprmc * output)
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
  // position_status
  if (!rosidl_runtime_c__String__copy(
      &(input->position_status), &(output->position_status)))
  {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // lat_dir
  if (!rosidl_runtime_c__String__copy(
      &(input->lat_dir), &(output->lat_dir)))
  {
    return false;
  }
  // lon_dir
  if (!rosidl_runtime_c__String__copy(
      &(input->lon_dir), &(output->lon_dir)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // track
  output->track = input->track;
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // mag_var
  output->mag_var = input->mag_var;
  // mag_var_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->mag_var_direction), &(output->mag_var_direction)))
  {
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->mode_indicator), &(output->mode_indicator)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Gprmc *
nmea_msgs__msg__Gprmc__create()
{
  nmea_msgs__msg__Gprmc * msg = (nmea_msgs__msg__Gprmc *)malloc(sizeof(nmea_msgs__msg__Gprmc));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gprmc));
  bool success = nmea_msgs__msg__Gprmc__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gprmc__destroy(nmea_msgs__msg__Gprmc * msg)
{
  if (msg) {
    nmea_msgs__msg__Gprmc__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Gprmc__Sequence__init(nmea_msgs__msg__Gprmc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Gprmc * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Gprmc *)calloc(size, sizeof(nmea_msgs__msg__Gprmc));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gprmc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gprmc__fini(&data[i - 1]);
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
nmea_msgs__msg__Gprmc__Sequence__fini(nmea_msgs__msg__Gprmc__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Gprmc__fini(&array->data[i]);
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

nmea_msgs__msg__Gprmc__Sequence *
nmea_msgs__msg__Gprmc__Sequence__create(size_t size)
{
  nmea_msgs__msg__Gprmc__Sequence * array = (nmea_msgs__msg__Gprmc__Sequence *)malloc(sizeof(nmea_msgs__msg__Gprmc__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gprmc__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gprmc__Sequence__destroy(nmea_msgs__msg__Gprmc__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Gprmc__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Gprmc__Sequence__are_equal(const nmea_msgs__msg__Gprmc__Sequence * lhs, const nmea_msgs__msg__Gprmc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gprmc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gprmc__Sequence__copy(
  const nmea_msgs__msg__Gprmc__Sequence * input,
  nmea_msgs__msg__Gprmc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gprmc);
    nmea_msgs__msg__Gprmc * data =
      (nmea_msgs__msg__Gprmc *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gprmc__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gprmc__fini(&data[i]);
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
    if (!nmea_msgs__msg__Gprmc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
