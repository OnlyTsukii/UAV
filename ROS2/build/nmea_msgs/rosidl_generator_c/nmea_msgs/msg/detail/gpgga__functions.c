// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgga__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `lat_dir`
// Member `lon_dir`
// Member `altitude_units`
// Member `undulation_units`
// Member `station_id`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Gpgga__init(nmea_msgs__msg__Gpgga * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  // utc_seconds
  // lat
  // lon
  // lat_dir
  if (!rosidl_runtime_c__String__init(&msg->lat_dir)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  // lon_dir
  if (!rosidl_runtime_c__String__init(&msg->lon_dir)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  // gps_qual
  // num_sats
  // hdop
  // alt
  // altitude_units
  if (!rosidl_runtime_c__String__init(&msg->altitude_units)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  // undulation
  // undulation_units
  if (!rosidl_runtime_c__String__init(&msg->undulation_units)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  // diff_age
  // station_id
  if (!rosidl_runtime_c__String__init(&msg->station_id)) {
    nmea_msgs__msg__Gpgga__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Gpgga__fini(nmea_msgs__msg__Gpgga * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // utc_seconds
  // lat
  // lon
  // lat_dir
  rosidl_runtime_c__String__fini(&msg->lat_dir);
  // lon_dir
  rosidl_runtime_c__String__fini(&msg->lon_dir);
  // gps_qual
  // num_sats
  // hdop
  // alt
  // altitude_units
  rosidl_runtime_c__String__fini(&msg->altitude_units);
  // undulation
  // undulation_units
  rosidl_runtime_c__String__fini(&msg->undulation_units);
  // diff_age
  // station_id
  rosidl_runtime_c__String__fini(&msg->station_id);
}

bool
nmea_msgs__msg__Gpgga__are_equal(const nmea_msgs__msg__Gpgga * lhs, const nmea_msgs__msg__Gpgga * rhs)
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
  // gps_qual
  if (lhs->gps_qual != rhs->gps_qual) {
    return false;
  }
  // num_sats
  if (lhs->num_sats != rhs->num_sats) {
    return false;
  }
  // hdop
  if (lhs->hdop != rhs->hdop) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // altitude_units
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->altitude_units), &(rhs->altitude_units)))
  {
    return false;
  }
  // undulation
  if (lhs->undulation != rhs->undulation) {
    return false;
  }
  // undulation_units
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->undulation_units), &(rhs->undulation_units)))
  {
    return false;
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // station_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->station_id), &(rhs->station_id)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gpgga__copy(
  const nmea_msgs__msg__Gpgga * input,
  nmea_msgs__msg__Gpgga * output)
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
  // gps_qual
  output->gps_qual = input->gps_qual;
  // num_sats
  output->num_sats = input->num_sats;
  // hdop
  output->hdop = input->hdop;
  // alt
  output->alt = input->alt;
  // altitude_units
  if (!rosidl_runtime_c__String__copy(
      &(input->altitude_units), &(output->altitude_units)))
  {
    return false;
  }
  // undulation
  output->undulation = input->undulation;
  // undulation_units
  if (!rosidl_runtime_c__String__copy(
      &(input->undulation_units), &(output->undulation_units)))
  {
    return false;
  }
  // diff_age
  output->diff_age = input->diff_age;
  // station_id
  if (!rosidl_runtime_c__String__copy(
      &(input->station_id), &(output->station_id)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Gpgga *
nmea_msgs__msg__Gpgga__create()
{
  nmea_msgs__msg__Gpgga * msg = (nmea_msgs__msg__Gpgga *)malloc(sizeof(nmea_msgs__msg__Gpgga));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gpgga));
  bool success = nmea_msgs__msg__Gpgga__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gpgga__destroy(nmea_msgs__msg__Gpgga * msg)
{
  if (msg) {
    nmea_msgs__msg__Gpgga__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__Gpgga__Sequence__init(nmea_msgs__msg__Gpgga__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__Gpgga * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__Gpgga *)calloc(size, sizeof(nmea_msgs__msg__Gpgga));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gpgga__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gpgga__fini(&data[i - 1]);
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
nmea_msgs__msg__Gpgga__Sequence__fini(nmea_msgs__msg__Gpgga__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Gpgga__fini(&array->data[i]);
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

nmea_msgs__msg__Gpgga__Sequence *
nmea_msgs__msg__Gpgga__Sequence__create(size_t size)
{
  nmea_msgs__msg__Gpgga__Sequence * array = (nmea_msgs__msg__Gpgga__Sequence *)malloc(sizeof(nmea_msgs__msg__Gpgga__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gpgga__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gpgga__Sequence__destroy(nmea_msgs__msg__Gpgga__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__Gpgga__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__Gpgga__Sequence__are_equal(const nmea_msgs__msg__Gpgga__Sequence * lhs, const nmea_msgs__msg__Gpgga__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gpgga__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gpgga__Sequence__copy(
  const nmea_msgs__msg__Gpgga__Sequence * input,
  nmea_msgs__msg__Gpgga__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gpgga);
    nmea_msgs__msg__Gpgga * data =
      (nmea_msgs__msg__Gpgga *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gpgga__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gpgga__fini(&data[i]);
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
    if (!nmea_msgs__msg__Gpgga__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
