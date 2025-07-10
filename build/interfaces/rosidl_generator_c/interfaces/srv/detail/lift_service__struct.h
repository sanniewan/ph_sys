// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/LiftService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__LIFT_SERVICE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__LIFT_SERVICE__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LiftService in the package interfaces.
typedef struct interfaces__srv__LiftService_Request
{
  rosidl_runtime_c__String instruction;
  int16_t height;
} interfaces__srv__LiftService_Request;

// Struct for a sequence of interfaces__srv__LiftService_Request.
typedef struct interfaces__srv__LiftService_Request__Sequence
{
  interfaces__srv__LiftService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__LiftService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LiftService in the package interfaces.
typedef struct interfaces__srv__LiftService_Response
{
  bool err;
  rosidl_runtime_c__String msg;
  bool state;
  int16_t height;
} interfaces__srv__LiftService_Response;

// Struct for a sequence of interfaces__srv__LiftService_Response.
typedef struct interfaces__srv__LiftService_Response__Sequence
{
  interfaces__srv__LiftService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__LiftService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__LIFT_SERVICE__STRUCT_H_
