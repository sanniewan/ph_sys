// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/LiftInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIFT_INSTRUCTION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__LIFT_INSTRUCTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'instruction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LiftInstruction in the package interfaces.
typedef struct interfaces__msg__LiftInstruction
{
  rosidl_runtime_c__String instruction;
  int16_t level;
} interfaces__msg__LiftInstruction;

// Struct for a sequence of interfaces__msg__LiftInstruction.
typedef struct interfaces__msg__LiftInstruction__Sequence
{
  interfaces__msg__LiftInstruction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__LiftInstruction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__LIFT_INSTRUCTION__STRUCT_H_
