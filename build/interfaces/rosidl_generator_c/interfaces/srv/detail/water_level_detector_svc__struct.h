// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/WaterLevelDetectorSvc.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__STRUCT_H_
#define INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/WaterLevelDetectorSvc in the package interfaces.
typedef struct interfaces__srv__WaterLevelDetectorSvc_Request
{
  bool threshold;
} interfaces__srv__WaterLevelDetectorSvc_Request;

// Struct for a sequence of interfaces__srv__WaterLevelDetectorSvc_Request.
typedef struct interfaces__srv__WaterLevelDetectorSvc_Request__Sequence
{
  interfaces__srv__WaterLevelDetectorSvc_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__WaterLevelDetectorSvc_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WaterLevelDetectorSvc in the package interfaces.
typedef struct interfaces__srv__WaterLevelDetectorSvc_Response
{
  bool err;
  rosidl_runtime_c__String msg;
  bool result;
} interfaces__srv__WaterLevelDetectorSvc_Response;

// Struct for a sequence of interfaces__srv__WaterLevelDetectorSvc_Response.
typedef struct interfaces__srv__WaterLevelDetectorSvc_Response__Sequence
{
  interfaces__srv__WaterLevelDetectorSvc_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__WaterLevelDetectorSvc_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__STRUCT_H_
