// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/VatInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__STRUCT_H_

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

/// Struct defined in msg/VatInstruction in the package interfaces.
typedef struct interfaces__msg__VatInstruction
{
  /// instruction
  rosidl_runtime_c__String instruction;
  /// vat
  int8_t vat;
  /// tank to release into
  rosidl_runtime_c__String tank;
  /// release volume in ml
  float volume;
} interfaces__msg__VatInstruction;

// Struct for a sequence of interfaces__msg__VatInstruction.
typedef struct interfaces__msg__VatInstruction__Sequence
{
  interfaces__msg__VatInstruction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__VatInstruction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__STRUCT_H_
