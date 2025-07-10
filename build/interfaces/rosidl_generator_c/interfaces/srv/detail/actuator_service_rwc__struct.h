// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ActuatorServiceRWC.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__STRUCT_H_
#define INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__STRUCT_H_

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

/// Struct defined in srv/ActuatorServiceRWC in the package interfaces.
typedef struct interfaces__srv__ActuatorServiceRWC_Request
{
  rosidl_runtime_c__String instruction;
} interfaces__srv__ActuatorServiceRWC_Request;

// Struct for a sequence of interfaces__srv__ActuatorServiceRWC_Request.
typedef struct interfaces__srv__ActuatorServiceRWC_Request__Sequence
{
  interfaces__srv__ActuatorServiceRWC_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ActuatorServiceRWC_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ActuatorServiceRWC in the package interfaces.
typedef struct interfaces__srv__ActuatorServiceRWC_Response
{
  bool err;
  rosidl_runtime_c__String msg;
  bool result;
} interfaces__srv__ActuatorServiceRWC_Response;

// Struct for a sequence of interfaces__srv__ActuatorServiceRWC_Response.
typedef struct interfaces__srv__ActuatorServiceRWC_Response__Sequence
{
  interfaces__srv__ActuatorServiceRWC_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ActuatorServiceRWC_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__STRUCT_H_
