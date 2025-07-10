// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_STATUS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__TANK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tank'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TankStatus in the package interfaces.
typedef struct interfaces__msg__TankStatus
{
  /// tank name
  rosidl_runtime_c__String tank;
  /// pH
  float ph;
  /// EC
  float ec;
  /// temperature, Celcius
  float t;
  /// total flow volume in L since flow meter started
  float flow_volume;
  /// flow in L/min
  float flow_rate;
  /// pressure in circuit in mmH20
  float circuit_p;
  /// water level below the lower float switch
  bool critical_low;
  /// water level above the higher float switch
  bool critical_high;
  /// water level, mm
  float water_level;
  /// circuit pump is ON
  bool pump;
  /// recycling pump is ON
  bool recycling;
  /// intake solenoid valve is OPEN
  bool intake;
  /// drain solenoid valve is OPEN
  bool drain;
  /// aeration is on
  bool aeration;
} interfaces__msg__TankStatus;

// Struct for a sequence of interfaces__msg__TankStatus.
typedef struct interfaces__msg__TankStatus__Sequence
{
  interfaces__msg__TankStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__TankStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__TANK_STATUS__STRUCT_H_
