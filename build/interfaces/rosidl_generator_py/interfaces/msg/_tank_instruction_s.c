// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/TankInstruction.idl
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
#include "interfaces/msg/detail/tank_instruction__struct.h"
#include "interfaces/msg/detail/tank_instruction__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__tank_instruction__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("interfaces.msg._tank_instruction.TankInstruction", full_classname_dest, 48) == 0);
  }
  interfaces__msg__TankInstruction * ros_message = _ros_message;
  {  // instruction
    PyObject * field = PyObject_GetAttrString(_pymsg, "instruction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->instruction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // tank
    PyObject * field = PyObject_GetAttrString(_pymsg, "tank");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->tank, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vat
    PyObject * field = PyObject_GetAttrString(_pymsg, "vat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vat = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // quantity
    PyObject * field = PyObject_GetAttrString(_pymsg, "quantity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quantity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ph_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "ph_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ph_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ec_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "ec_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ec_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__tank_instruction__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TankInstruction */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._tank_instruction");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TankInstruction");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__TankInstruction * ros_message = (interfaces__msg__TankInstruction *)raw_ros_message;
  {  // instruction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->instruction.data,
      strlen(ros_message->instruction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "instruction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tank
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tank.data,
      strlen(ros_message->tank.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tank", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quantity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quantity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quantity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ph_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ph_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ph_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ec_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ec_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ec_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
