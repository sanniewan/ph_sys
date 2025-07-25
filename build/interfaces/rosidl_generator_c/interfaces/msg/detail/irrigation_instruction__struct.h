// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/IrrigationInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__STRUCT_H_

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
// Member 'tank'
#include "rosidl_runtime_c/string.h"
// Member 'valves'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// valves
enum
{
  interfaces__msg__IrrigationInstruction__valves__MAX_SIZE = 64
};

/// Struct defined in msg/IrrigationInstruction in the package interfaces.
typedef struct interfaces__msg__IrrigationInstruction
{
  rosidl_runtime_c__String instruction;
  rosidl_runtime_c__String tank;
  rosidl_runtime_c__int8__Sequence valves;
} interfaces__msg__IrrigationInstruction;

// Struct for a sequence of interfaces__msg__IrrigationInstruction.
typedef struct interfaces__msg__IrrigationInstruction__Sequence
{
  interfaces__msg__IrrigationInstruction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__IrrigationInstruction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__STRUCT_H_
