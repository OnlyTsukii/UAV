// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgsv_satellite__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
nmea_msgs__msg__GpgsvSatellite__init(nmea_msgs__msg__GpgsvSatellite * msg)
{
  if (!msg) {
    return false;
  }
  // prn
  // elevation
  // azimuth
  // snr
  return true;
}

void
nmea_msgs__msg__GpgsvSatellite__fini(nmea_msgs__msg__GpgsvSatellite * msg)
{
  if (!msg) {
    return;
  }
  // prn
  // elevation
  // azimuth
  // snr
}

bool
nmea_msgs__msg__GpgsvSatellite__are_equal(const nmea_msgs__msg__GpgsvSatellite * lhs, const nmea_msgs__msg__GpgsvSatellite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // snr
  if (lhs->snr != rhs->snr) {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__GpgsvSatellite__copy(
  const nmea_msgs__msg__GpgsvSatellite * input,
  nmea_msgs__msg__GpgsvSatellite * output)
{
  if (!input || !output) {
    return false;
  }
  // prn
  output->prn = input->prn;
  // elevation
  output->elevation = input->elevation;
  // azimuth
  output->azimuth = input->azimuth;
  // snr
  output->snr = input->snr;
  return true;
}

nmea_msgs__msg__GpgsvSatellite *
nmea_msgs__msg__GpgsvSatellite__create()
{
  nmea_msgs__msg__GpgsvSatellite * msg = (nmea_msgs__msg__GpgsvSatellite *)malloc(sizeof(nmea_msgs__msg__GpgsvSatellite));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__GpgsvSatellite));
  bool success = nmea_msgs__msg__GpgsvSatellite__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__GpgsvSatellite__destroy(nmea_msgs__msg__GpgsvSatellite * msg)
{
  if (msg) {
    nmea_msgs__msg__GpgsvSatellite__fini(msg);
  }
  free(msg);
}


bool
nmea_msgs__msg__GpgsvSatellite__Sequence__init(nmea_msgs__msg__GpgsvSatellite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nmea_msgs__msg__GpgsvSatellite * data = NULL;
  if (size) {
    data = (nmea_msgs__msg__GpgsvSatellite *)calloc(size, sizeof(nmea_msgs__msg__GpgsvSatellite));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__GpgsvSatellite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__GpgsvSatellite__fini(&data[i - 1]);
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
nmea_msgs__msg__GpgsvSatellite__Sequence__fini(nmea_msgs__msg__GpgsvSatellite__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__GpgsvSatellite__fini(&array->data[i]);
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

nmea_msgs__msg__GpgsvSatellite__Sequence *
nmea_msgs__msg__GpgsvSatellite__Sequence__create(size_t size)
{
  nmea_msgs__msg__GpgsvSatellite__Sequence * array = (nmea_msgs__msg__GpgsvSatellite__Sequence *)malloc(sizeof(nmea_msgs__msg__GpgsvSatellite__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__GpgsvSatellite__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__GpgsvSatellite__Sequence__destroy(nmea_msgs__msg__GpgsvSatellite__Sequence * array)
{
  if (array) {
    nmea_msgs__msg__GpgsvSatellite__Sequence__fini(array);
  }
  free(array);
}

bool
nmea_msgs__msg__GpgsvSatellite__Sequence__are_equal(const nmea_msgs__msg__GpgsvSatellite__Sequence * lhs, const nmea_msgs__msg__GpgsvSatellite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__GpgsvSatellite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__GpgsvSatellite__Sequence__copy(
  const nmea_msgs__msg__GpgsvSatellite__Sequence * input,
  nmea_msgs__msg__GpgsvSatellite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__GpgsvSatellite);
    nmea_msgs__msg__GpgsvSatellite * data =
      (nmea_msgs__msg__GpgsvSatellite *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__GpgsvSatellite__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__GpgsvSatellite__fini(&data[i]);
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
    if (!nmea_msgs__msg__GpgsvSatellite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
