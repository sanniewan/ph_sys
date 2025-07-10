// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/VatStatus.idl
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
#include "interfaces/msg/detail/vat_status__struct.h"
#include "interfaces/msg/detail/vat_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__vat_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("interfaces.msg._vat_status.VatStatus", full_classname_dest, 36) == 0);
  }
  interfaces__msg__VatStatus * ros_message = _ros_message;
  {  // level_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "level_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level_1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // level_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "level_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level_2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // level_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "level_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level_3 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // level_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "level_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level_4 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__vat_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VatStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._vat_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VatStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__VatStatus * ros_message = (interfaces__msg__VatStatus *)raw_ros_message;
  {  // level_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->level_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // level_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->level_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // level_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->level_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // level_4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->level_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
