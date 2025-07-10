// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/IrrigationStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'valves'
// Member 'pumps'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IrrigationStatus in the package interfaces.
/**
  * builtin_interfaces/Time     stamp
 */
typedef struct interfaces__msg__IrrigationStatus
{
  rosidl_runtime_c__String valves;
  rosidl_runtime_c__String pumps;
  double pressure;
} interfaces__msg__IrrigationStatus;

// Struct for a sequence of interfaces__msg__IrrigationStatus.
typedef struct interfaces__msg__IrrigationStatus__Sequence
{
  interfaces__msg__IrrigationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__IrrigationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__STRUCT_H_
