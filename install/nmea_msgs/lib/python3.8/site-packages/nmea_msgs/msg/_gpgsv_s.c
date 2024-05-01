// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nmea_msgs:msg/Gpgsv.idl
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
#include "nmea_msgs/msg/detail/gpgsv__struct.h"
#include "nmea_msgs/msg/detail/gpgsv__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "nmea_msgs/msg/detail/gpgsv_satellite__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool nmea_msgs__msg__gpgsv_satellite__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * nmea_msgs__msg__gpgsv_satellite__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nmea_msgs__msg__gpgsv__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("nmea_msgs.msg._gpgsv.Gpgsv", full_classname_dest, 26) == 0);
  }
  nmea_msgs__msg__Gpgsv * ros_message = _ros_message;
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
  {  // n_msgs
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_msgs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_msgs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msg_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_number = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // n_satellites
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_satellites");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_satellites = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // satellites
    PyObject * field = PyObject_GetAttrString(_pymsg, "satellites");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'satellites'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!nmea_msgs__msg__GpgsvSatellite__Sequence__init(&(ros_message->satellites), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create nmea_msgs__msg__GpgsvSatellite__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    nmea_msgs__msg__GpgsvSatellite * dest = ros_message->satellites.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!nmea_msgs__msg__gpgsv_satellite__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nmea_msgs__msg__gpgsv__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpgsv */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nmea_msgs.msg._gpgsv");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpgsv");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nmea_msgs__msg__Gpgsv * ros_message = (nmea_msgs__msg__Gpgsv *)raw_ros_message;
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
  {  // n_msgs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->n_msgs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_msgs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n_satellites
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->n_satellites);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_satellites", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // satellites
    PyObject * field = NULL;
    size_t size = ros_message->satellites.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    nmea_msgs__msg__GpgsvSatellite * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->satellites.data[i]);
      PyObject * pyitem = nmea_msgs__msg__gpgsv_satellite__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "satellites", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
