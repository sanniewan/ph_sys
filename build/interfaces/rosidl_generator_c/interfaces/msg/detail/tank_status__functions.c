// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/tank_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tank`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__TankStatus__init(interfaces__msg__TankStatus * msg)
{
  if (!msg) {
    return false;
  }
  // tank
  if (!rosidl_runtime_c__String__init(&msg->tank)) {
    interfaces__msg__TankStatus__fini(msg);
    return false;
  }
  // ph
  // ec
  // t
  // flow_volume
  // flow_rate
  // circuit_p
  // critical_low
  // critical_high
  // water_level
  // pump
  // recycling
  // intake
  // drain
  // aeration
  return true;
}

void
interfaces__msg__TankStatus__fini(interfaces__msg__TankStatus * msg)
{
  if (!msg) {
    return;
  }
  // tank
  rosidl_runtime_c__String__fini(&msg->tank);
  // ph
  // ec
  // t
  // flow_volume
  // flow_rate
  // circuit_p
  // critical_low
  // critical_high
  // water_level
  // pump
  // recycling
  // intake
  // drain
  // aeration
}

bool
interfaces__msg__TankStatus__are_equal(const interfaces__msg__TankStatus * lhs, const interfaces__msg__TankStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tank
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tank), &(rhs->tank)))
  {
    return false;
  }
  // ph
  if (lhs->ph != rhs->ph) {
    return false;
  }
  // ec
  if (lhs->ec != rhs->ec) {
    return false;
  }
  // t
  if (lhs->t != rhs->t) {
    return false;
  }
  // flow_volume
  if (lhs->flow_volume != rhs->flow_volume) {
    return false;
  }
  // flow_rate
  if (lhs->flow_rate != rhs->flow_rate) {
    return false;
  }
  // circuit_p
  if (lhs->circuit_p != rhs->circuit_p) {
    return false;
  }
  // critical_low
  if (lhs->critical_low != rhs->critical_low) {
    return false;
  }
  // critical_high
  if (lhs->critical_high != rhs->critical_high) {
    return false;
  }
  // water_level
  if (lhs->water_level != rhs->water_level) {
    return false;
  }
  // pump
  if (lhs->pump != rhs->pump) {
    return false;
  }
  // recycling
  if (lhs->recycling != rhs->recycling) {
    return false;
  }
  // intake
  if (lhs->intake != rhs->intake) {
    return false;
  }
  // drain
  if (lhs->drain != rhs->drain) {
    return false;
  }
  // aeration
  if (lhs->aeration != rhs->aeration) {
    return false;
  }
  return true;
}

bool
interfaces__msg__TankStatus__copy(
  const interfaces__msg__TankStatus * input,
  interfaces__msg__TankStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // tank
  if (!rosidl_runtime_c__String__copy(
      &(input->tank), &(output->tank)))
  {
    return false;
  }
  // ph
  output->ph = input->ph;
  // ec
  output->ec = input->ec;
  // t
  output->t = input->t;
  // flow_volume
  output->flow_volume = input->flow_volume;
  // flow_rate
  output->flow_rate = input->flow_rate;
  // circuit_p
  output->circuit_p = input->circuit_p;
  // critical_low
  output->critical_low = input->critical_low;
  // critical_high
  output->critical_high = input->critical_high;
  // water_level
  output->water_level = input->water_level;
  // pump
  output->pump = input->pump;
  // recycling
  output->recycling = input->recycling;
  // intake
  output->intake = input->intake;
  // drain
  output->drain = input->drain;
  // aeration
  output->aeration = input->aeration;
  return true;
}

interfaces__msg__TankStatus *
interfaces__msg__TankStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__TankStatus * msg = (interfaces__msg__TankStatus *)allocator.allocate(sizeof(interfaces__msg__TankStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__TankStatus));
  bool success = interfaces__msg__TankStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__TankStatus__destroy(interfaces__msg__TankStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__TankStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__TankStatus__Sequence__init(interfaces__msg__TankStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__TankStatus * data = NULL;

  if (size) {
    data = (interfaces__msg__TankStatus *)allocator.zero_allocate(size, sizeof(interfaces__msg__TankStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__TankStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__TankStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__TankStatus__Sequence__fini(interfaces__msg__TankStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__TankStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__TankStatus__Sequence *
interfaces__msg__TankStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__TankStatus__Sequence * array = (interfaces__msg__TankStatus__Sequence *)allocator.allocate(sizeof(interfaces__msg__TankStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__TankStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__TankStatus__Sequence__destroy(interfaces__msg__TankStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__TankStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__TankStatus__Sequence__are_equal(const interfaces__msg__TankStatus__Sequence * lhs, const interfaces__msg__TankStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__TankStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__TankStatus__Sequence__copy(
  const interfaces__msg__TankStatus__Sequence * input,
  interfaces__msg__TankStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__TankStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__TankStatus * data =
      (interfaces__msg__TankStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__TankStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__TankStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__TankStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
