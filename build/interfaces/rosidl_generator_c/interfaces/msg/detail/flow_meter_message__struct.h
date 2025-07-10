// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/FlowMeterMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/FlowMeterMessage in the package interfaces.
typedef struct interfaces__msg__FlowMeterMessage
{
  bool err;
  rosidl_runtime_c__String msg;
  /// total flow volume in L since flow meter started
  float flow_volume;
  /// flow in L/min
  float flow_rate;
} interfaces__msg__FlowMeterMessage;

// Struct for a sequence of interfaces__msg__FlowMeterMessage.
typedef struct interfaces__msg__FlowMeterMessage__Sequence
{
  interfaces__msg__FlowMeterMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__FlowMeterMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__STRUCT_H_
