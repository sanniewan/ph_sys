// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ConveyorService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONVEYOR_SERVICE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__CONVEYOR_SERVICE__STRUCT_H_

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

/// Struct defined in srv/ConveyorService in the package interfaces.
typedef struct interfaces__srv__ConveyorService_Request
{
  rosidl_runtime_c__String instruction;
  int8_t speed;
} interfaces__srv__ConveyorService_Request;

// Struct for a sequence of interfaces__srv__ConveyorService_Request.
typedef struct interfaces__srv__ConveyorService_Request__Sequence
{
  interfaces__srv__ConveyorService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ConveyorService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ConveyorService in the package interfaces.
typedef struct interfaces__srv__ConveyorService_Response
{
  bool err;
  rosidl_runtime_c__String msg;
  rosidl_runtime_c__String status;
  int8_t speed;
} interfaces__srv__ConveyorService_Response;

// Struct for a sequence of interfaces__srv__ConveyorService_Response.
typedef struct interfaces__srv__ConveyorService_Response__Sequence
{
  interfaces__srv__ConveyorService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ConveyorService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__CONVEYOR_SERVICE__STRUCT_H_
