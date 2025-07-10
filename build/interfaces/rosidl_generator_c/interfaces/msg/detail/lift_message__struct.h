// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/LiftMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIFT_MESSAGE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__LIFT_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/LiftMessage in the package interfaces.
typedef struct interfaces__msg__LiftMessage
{
  bool err;
  rosidl_runtime_c__String msg;
  bool state;
  int16_t height;
} interfaces__msg__LiftMessage;

// Struct for a sequence of interfaces__msg__LiftMessage.
typedef struct interfaces__msg__LiftMessage__Sequence
{
  interfaces__msg__LiftMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__LiftMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__LIFT_MESSAGE__STRUCT_H_
