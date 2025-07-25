// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/PhControllerService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pump_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PhControllerService in the package interfaces.
typedef struct interfaces__srv__PhControllerService_Request
{
  float ph;
  rosidl_runtime_c__String pump_type;
} interfaces__srv__PhControllerService_Request;

// Struct for a sequence of interfaces__srv__PhControllerService_Request.
typedef struct interfaces__srv__PhControllerService_Request__Sequence
{
  interfaces__srv__PhControllerService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__PhControllerService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pump_type'
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PhControllerService in the package interfaces.
typedef struct interfaces__srv__PhControllerService_Response
{
  rosidl_runtime_c__String pump_type;
  bool warning;
  rosidl_runtime_c__String msg;
  float volume;
} interfaces__srv__PhControllerService_Response;

// Struct for a sequence of interfaces__srv__PhControllerService_Response.
typedef struct interfaces__srv__PhControllerService_Response__Sequence
{
  interfaces__srv__PhControllerService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__PhControllerService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__STRUCT_H_
