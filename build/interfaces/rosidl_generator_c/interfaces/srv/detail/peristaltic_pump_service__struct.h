// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/PeristalticPumpService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PeristalticPumpService in the package interfaces.
typedef struct interfaces__srv__PeristalticPumpService_Request
{
  float volume;
} interfaces__srv__PeristalticPumpService_Request;

// Struct for a sequence of interfaces__srv__PeristalticPumpService_Request.
typedef struct interfaces__srv__PeristalticPumpService_Request__Sequence
{
  interfaces__srv__PeristalticPumpService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__PeristalticPumpService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PeristalticPumpService in the package interfaces.
typedef struct interfaces__srv__PeristalticPumpService_Response
{
  bool err;
  rosidl_runtime_c__String msg;
  float volume;
} interfaces__srv__PeristalticPumpService_Response;

// Struct for a sequence of interfaces__srv__PeristalticPumpService_Response.
typedef struct interfaces__srv__PeristalticPumpService_Response__Sequence
{
  interfaces__srv__PeristalticPumpService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__PeristalticPumpService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__STRUCT_H_
