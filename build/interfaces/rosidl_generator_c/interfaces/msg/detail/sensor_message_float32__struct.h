// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/SensorMessageFloat32.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__STRUCT_H_
#define INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__STRUCT_H_

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

/// Struct defined in msg/SensorMessageFloat32 in the package interfaces.
typedef struct interfaces__msg__SensorMessageFloat32
{
  bool err;
  rosidl_runtime_c__String msg;
  float data;
} interfaces__msg__SensorMessageFloat32;

// Struct for a sequence of interfaces__msg__SensorMessageFloat32.
typedef struct interfaces__msg__SensorMessageFloat32__Sequence
{
  interfaces__msg__SensorMessageFloat32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__SensorMessageFloat32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__STRUCT_H_
