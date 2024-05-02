// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nmea_msgs:msg/Defects.idl
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
#include "nmea_msgs/msg/detail/defects__struct.h"
#include "nmea_msgs/msg/detail/defects__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "nmea_msgs/msg/detail/defect_box__functions.h"
// end nested array functions include
bool nmea_msgs__msg__defect_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * nmea_msgs__msg__defect_box__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nmea_msgs__msg__defects__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("nmea_msgs.msg._defects.Defects", full_classname_dest, 30) == 0);
  }
  nmea_msgs__msg__Defects * ros_message = _ros_message;
  {  // defect_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "defect_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->defect_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // img_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "img_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->img_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // img_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "img_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->img_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // defects
    PyObject * field = PyObject_GetAttrString(_pymsg, "defects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'defects'");
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
    if (!nmea_msgs__msg__DefectBox__Sequence__init(&(ros_message->defects), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create nmea_msgs__msg__DefectBox__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    nmea_msgs__msg__DefectBox * dest = ros_message->defects.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!nmea_msgs__msg__defect_box__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * nmea_msgs__msg__defects__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Defects */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nmea_msgs.msg._defects");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Defects");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nmea_msgs__msg__Defects * ros_message = (nmea_msgs__msg__Defects *)raw_ros_message;
  {  // defect_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->defect_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defect_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // img_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->img_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "img_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // img_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->img_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "img_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defects
    PyObject * field = NULL;
    size_t size = ros_message->defects.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    nmea_msgs__msg__DefectBox * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->defects.data[i]);
      PyObject * pyitem = nmea_msgs__msg__defect_box__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "defects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
