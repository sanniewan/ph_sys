// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/PhControllerMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pump_id'
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PhControllerMessage in the package interfaces.
typedef struct interfaces__msg__PhControllerMessage
{
  rosidl_runtime_c__String pump_id;
  bool warning;
  rosidl_runtime_c__String msg;
  float volume;
} interfaces__msg__PhControllerMessage;

// Struct for a sequence of interfaces__msg__PhControllerMessage.
typedef struct interfaces__msg__PhControllerMessage__Sequence
{
  interfaces__msg__PhControllerMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__PhControllerMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__STRUCT_H_
