// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "nmea_msgs/msg/detail/gpgga__struct.h"
#include "nmea_msgs/msg/detail/gpgga__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nmea_msgs__msg__gpgga__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("nmea_msgs.msg._gpgga.Gpgga", full_classname_dest, 26) == 0);
  }
  nmea_msgs__msg__Gpgga * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // message_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // utc_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utc_seconds = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_dir");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lat_dir, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lon_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_dir");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lon_dir, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // gps_qual
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_qual");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_qual = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sats
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sats");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sats = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_units
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_units");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->altitude_units, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation_units
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation_units");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->undulation_units, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->diff_age = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // station_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "station_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->station_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nmea_msgs__msg__gpgga__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpgga */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nmea_msgs.msg._gpgga");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpgga");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nmea_msgs__msg__Gpgga * ros_message = (nmea_msgs__msg__Gpgga *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_id.data,
      strlen(ros_message->message_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utc_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_dir
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lat_dir.data,
      strlen(ros_message->lat_dir.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_dir
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lon_dir.data,
      strlen(ros_message->lon_dir.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_qual
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_qual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_qual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sats
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sats);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sats", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_units
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->altitude_units.data,
      strlen(ros_message->altitude_units.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_units", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation_units
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->undulation_units.data,
      strlen(ros_message->undulation_units.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation_units", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->station_id.data,
      strlen(ros_message->station_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "station_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
