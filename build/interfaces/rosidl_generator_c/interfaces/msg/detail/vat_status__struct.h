// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/VatStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__VAT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VatStatus in the package interfaces.
typedef struct interfaces__msg__VatStatus
{
  /// nutrient level in vat 1, mm
  int8_t level_1;
  /// nutrient level in vat 2, mm
  int8_t level_2;
  /// nutrient level in vat 3, mm
  int8_t level_3;
  /// nutrient level in vat 4, mm
  int8_t level_4;
} interfaces__msg__VatStatus;

// Struct for a sequence of interfaces__msg__VatStatus.
typedef struct interfaces__msg__VatStatus__Sequence
{
  interfaces__msg__VatStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__VatStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__VAT_STATUS__STRUCT_H_
