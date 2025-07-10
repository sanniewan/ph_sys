// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/AirStatus.idl
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
#include "interfaces/msg/detail/air_status__struct.h"
#include "interfaces/msg/detail/air_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__air_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("interfaces.msg._air_status.AirStatus", full_classname_dest, 36) == 0);
  }
  interfaces__msg__AirStatus * ros_message = _ros_message;
  {  // t
    PyObject * field = PyObject_GetAttrString(_pymsg, "t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rh
    PyObject * field = PyObject_GetAttrString(_pymsg, "rh");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rh = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rh2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rh2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rh2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // co2
    PyObject * field = PyObject_GetAttrString(_pymsg, "co2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->co2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fan
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fan = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // aeration
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeration = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__air_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AirStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._air_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AirStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__AirStatus * ros_message = (interfaces__msg__AirStatus *)raw_ros_message;
  {  // t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rh
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rh2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rh2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rh2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // co2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->co2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "co2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
