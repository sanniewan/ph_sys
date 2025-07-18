// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/LiftStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIFT_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__LIFT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LiftStatus in the package interfaces.
typedef struct interfaces__msg__LiftStatus
{
  rosidl_runtime_c__String status;
  int16_t level;
} interfaces__msg__LiftStatus;

// Struct for a sequence of interfaces__msg__LiftStatus.
typedef struct interfaces__msg__LiftStatus__Sequence
{
  interfaces__msg__LiftStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__LiftStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__LIFT_STATUS__STRUCT_H_
