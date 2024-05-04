// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from location_msgs:msg/GpsFix.idl
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
#include "location_msgs/msg/detail/gps_fix__struct.h"
#include "location_msgs/msg/detail/gps_fix__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__nav_sat_fix__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__nav_sat_fix__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool location_msgs__msg__gps_fix__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("location_msgs.msg._gps_fix.GpsFix", full_classname_dest, 33) == 0);
  }
  location_msgs__msg__GpsFix * ros_message = _ros_message;
  {  // gps_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gps_fix
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_fix");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__nav_sat_fix__convert_from_py(field, &ros_message->gps_fix)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * location_msgs__msg__gps_fix__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GpsFix */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("location_msgs.msg._gps_fix");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GpsFix");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  location_msgs__msg__GpsFix * ros_message = (location_msgs__msg__GpsFix *)raw_ros_message;
  {  // gps_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gps_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_fix
    PyObject * field = NULL;
    field = sensor_msgs__msg__nav_sat_fix__convert_to_py(&ros_message->gps_fix);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_fix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
