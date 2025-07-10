// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/TankStatus.idl
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
#include "interfaces/msg/detail/tank_status__struct.h"
#include "interfaces/msg/detail/tank_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__tank_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("interfaces.msg._tank_status.TankStatus", full_classname_dest, 38) == 0);
  }
  interfaces__msg__TankStatus * ros_message = _ros_message;
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
  {  // ph
    PyObject * field = PyObject_GetAttrString(_pymsg, "ph");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ph = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ec
    PyObject * field = PyObject_GetAttrString(_pymsg, "ec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ec = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t
    PyObject * field = PyObject_GetAttrString(_pymsg, "t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flow_volume
    PyObject * field = PyObject_GetAttrString(_pymsg, "flow_volume");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flow_volume = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flow_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "flow_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flow_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // circuit_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->circuit_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // critical_low
    PyObject * field = PyObject_GetAttrString(_pymsg, "critical_low");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->critical_low = (Py_True == field);
    Py_DECREF(field);
  }
  {  // critical_high
    PyObject * field = PyObject_GetAttrString(_pymsg, "critical_high");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->critical_high = (Py_True == field);
    Py_DECREF(field);
  }
  {  // water_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->water_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pump
    PyObject * field = PyObject_GetAttrString(_pymsg, "pump");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pump = (Py_True == field);
    Py_DECREF(field);
  }
  {  // recycling
    PyObject * field = PyObject_GetAttrString(_pymsg, "recycling");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->recycling = (Py_True == field);
    Py_DECREF(field);
  }
  {  // intake
    PyObject * field = PyObject_GetAttrString(_pymsg, "intake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->intake = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drain
    PyObject * field = PyObject_GetAttrString(_pymsg, "drain");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drain = (Py_True == field);
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
PyObject * interfaces__msg__tank_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TankStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._tank_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TankStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__TankStatus * ros_message = (interfaces__msg__TankStatus *)raw_ros_message;
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
  {  // ph
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ph);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // flow_volume
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flow_volume);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flow_volume", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flow_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flow_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flow_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->circuit_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // critical_low
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->critical_low ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "critical_low", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // critical_high
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->critical_high ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "critical_high", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->water_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pump
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pump ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pump", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recycling
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->recycling ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recycling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->intake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drain
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drain ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drain", field);
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
