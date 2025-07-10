// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/LightStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIGHT_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__LIGHT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LightStatus in the package interfaces.
typedef struct interfaces__msg__LightStatus
{
  bool growlight_state;
  int8_t growlight_level;
  bool tasklight_state;
} interfaces__msg__LightStatus;

// Struct for a sequence of interfaces__msg__LightStatus.
typedef struct interfaces__msg__LightStatus__Sequence
{
  interfaces__msg__LightStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__LightStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__LIGHT_STATUS__STRUCT_H_
