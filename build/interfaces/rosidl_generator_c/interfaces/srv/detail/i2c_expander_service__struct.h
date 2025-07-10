// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/I2cExpanderService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__I2C_EXPANDER_SERVICE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__I2C_EXPANDER_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sender'
// Member 'instruction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/I2cExpanderService in the package interfaces.
typedef struct interfaces__srv__I2cExpanderService_Request
{
  rosidl_runtime_c__String sender;
  int8_t address;
  int8_t port;
  rosidl_runtime_c__String instruction;
  bool value;
} interfaces__srv__I2cExpanderService_Request;

// Struct for a sequence of interfaces__srv__I2cExpanderService_Request.
typedef struct interfaces__srv__I2cExpanderService_Request__Sequence
{
  interfaces__srv__I2cExpanderService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__I2cExpanderService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/I2cExpanderService in the package interfaces.
typedef struct interfaces__srv__I2cExpanderService_Response
{
  bool err;
  rosidl_runtime_c__String msg;
  bool state;
} interfaces__srv__I2cExpanderService_Response;

// Struct for a sequence of interfaces__srv__I2cExpanderService_Response.
typedef struct interfaces__srv__I2cExpanderService_Response__Sequence
{
  interfaces__srv__I2cExpanderService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__I2cExpanderService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__I2C_EXPANDER_SERVICE__STRUCT_H_
