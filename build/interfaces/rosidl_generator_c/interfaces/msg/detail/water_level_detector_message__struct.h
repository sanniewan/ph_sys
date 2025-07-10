// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/WaterLevelDetectorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/WaterLevelDetectorMessage in the package interfaces.
typedef struct interfaces__msg__WaterLevelDetectorMessage
{
  bool err;
  rosidl_runtime_c__String msg;
  bool critical;
} interfaces__msg__WaterLevelDetectorMessage;

// Struct for a sequence of interfaces__msg__WaterLevelDetectorMessage.
typedef struct interfaces__msg__WaterLevelDetectorMessage__Sequence
{
  interfaces__msg__WaterLevelDetectorMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__WaterLevelDetectorMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__STRUCT_H_
