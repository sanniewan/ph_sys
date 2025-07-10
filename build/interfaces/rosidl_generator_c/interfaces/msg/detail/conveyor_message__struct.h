// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ConveyorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CONVEYOR_MESSAGE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__CONVEYOR_MESSAGE__STRUCT_H_

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
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ConveyorMessage in the package interfaces.
typedef struct interfaces__msg__ConveyorMessage
{
  bool err;
  rosidl_runtime_c__String msg;
  rosidl_runtime_c__String status;
  int8_t speed;
} interfaces__msg__ConveyorMessage;

// Struct for a sequence of interfaces__msg__ConveyorMessage.
typedef struct interfaces__msg__ConveyorMessage__Sequence
{
  interfaces__msg__ConveyorMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ConveyorMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__CONVEYOR_MESSAGE__STRUCT_H_
