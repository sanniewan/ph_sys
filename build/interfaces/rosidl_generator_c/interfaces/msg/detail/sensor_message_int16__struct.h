// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/SensorMessageInt16.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_INT16__STRUCT_H_
#define INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorMessageInt16 in the package interfaces.
typedef struct interfaces__msg__SensorMessageInt16
{
  bool err;
  rosidl_runtime_c__String msg;
  int16_t data;
} interfaces__msg__SensorMessageInt16;

// Struct for a sequence of interfaces__msg__SensorMessageInt16.
typedef struct interfaces__msg__SensorMessageInt16__Sequence
{
  interfaces__msg__SensorMessageInt16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__SensorMessageInt16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_INT16__STRUCT_H_
