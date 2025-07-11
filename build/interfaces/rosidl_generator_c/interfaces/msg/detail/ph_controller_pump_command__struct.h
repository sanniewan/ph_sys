// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/PhControllerPumpCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PH_CONTROLLER_PUMP_COMMAND__STRUCT_H_
#define INTERFACES__MSG__DETAIL__PH_CONTROLLER_PUMP_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pump_id'
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PhControllerPumpCommand in the package interfaces.
typedef struct interfaces__msg__PhControllerPumpCommand
{
  rosidl_runtime_c__String pump_id;
  bool err;
  rosidl_runtime_c__String msg;
  float volume;
} interfaces__msg__PhControllerPumpCommand;

// Struct for a sequence of interfaces__msg__PhControllerPumpCommand.
typedef struct interfaces__msg__PhControllerPumpCommand__Sequence
{
  interfaces__msg__PhControllerPumpCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__PhControllerPumpCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__PH_CONTROLLER_PUMP_COMMAND__STRUCT_H_
