// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/TankInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__STRUCT_H_

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

/// Struct defined in msg/TankInstruction in the package interfaces.
typedef struct interfaces__msg__TankInstruction
{
  /// instruction
  rosidl_runtime_c__String instruction;
  rosidl_runtime_c__String tank;
  /// vat number
  int8_t vat;
  /// float or int?
  float quantity;
  /// target ph
  float ph_target;
  /// target ec
  float ec_target;
} interfaces__msg__TankInstruction;

// Struct for a sequence of interfaces__msg__TankInstruction.
typedef struct interfaces__msg__TankInstruction__Sequence
{
  interfaces__msg__TankInstruction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__TankInstruction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__STRUCT_H_
