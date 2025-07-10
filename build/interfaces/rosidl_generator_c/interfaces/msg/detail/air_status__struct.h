// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/AirStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__AIR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AirStatus in the package interfaces.
typedef struct interfaces__msg__AirStatus
{
  float t;
  int8_t rh;
  float t2;
  int8_t rh2;
  int16_t co2;
  /// OFF, ON, SENSOR_ERROR, SENSOR_MISSING
  int8_t fan;
  bool aeration;
} interfaces__msg__AirStatus;

// Struct for a sequence of interfaces__msg__AirStatus.
typedef struct interfaces__msg__AirStatus__Sequence
{
  interfaces__msg__AirStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__AirStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__AIR_STATUS__STRUCT_H_
