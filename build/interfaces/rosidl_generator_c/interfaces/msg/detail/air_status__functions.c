// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/AirStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/air_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaces__msg__AirStatus__init(interfaces__msg__AirStatus * msg)
{
  if (!msg) {
    return false;
  }
  // t
  // rh
  // t2
  // rh2
  // co2
  // fan
  // aeration
  return true;
}

void
interfaces__msg__AirStatus__fini(interfaces__msg__AirStatus * msg)
{
  if (!msg) {
    return;
  }
  // t
  // rh
  // t2
  // rh2
  // co2
  // fan
  // aeration
}

bool
interfaces__msg__AirStatus__are_equal(const interfaces__msg__AirStatus * lhs, const interfaces__msg__AirStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t
  if (lhs->t != rhs->t) {
    return false;
  }
  // rh
  if (lhs->rh != rhs->rh) {
    return false;
  }
  // t2
  if (lhs->t2 != rhs->t2) {
    return false;
  }
  // rh2
  if (lhs->rh2 != rhs->rh2) {
    return false;
  }
  // co2
  if (lhs->co2 != rhs->co2) {
    return false;
  }
  // fan
  if (lhs->fan != rhs->fan) {
    return false;
  }
  // aeration
  if (lhs->aeration != rhs->aeration) {
    return false;
  }
  return true;
}

bool
interfaces__msg__AirStatus__copy(
  const interfaces__msg__AirStatus * input,
  interfaces__msg__AirStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // t
  output->t = input->t;
  // rh
  output->rh = input->rh;
  // t2
  output->t2 = input->t2;
  // rh2
  output->rh2 = input->rh2;
  // co2
  output->co2 = input->co2;
  // fan
  output->fan = input->fan;
  // aeration
  output->aeration = input->aeration;
  return true;
}

interfaces__msg__AirStatus *
interfaces__msg__AirStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__AirStatus * msg = (interfaces__msg__AirStatus *)allocator.allocate(sizeof(interfaces__msg__AirStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__AirStatus));
  bool success = interfaces__msg__AirStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__AirStatus__destroy(interfaces__msg__AirStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__AirStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__AirStatus__Sequence__init(interfaces__msg__AirStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__AirStatus * data = NULL;

  if (size) {
    data = (interfaces__msg__AirStatus *)allocator.zero_allocate(size, sizeof(interfaces__msg__AirStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__AirStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__AirStatus__fini(&data[i - 1]);
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
interfaces__msg__AirStatus__Sequence__fini(interfaces__msg__AirStatus__Sequence * array)
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
      interfaces__msg__AirStatus__fini(&array->data[i]);
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

interfaces__msg__AirStatus__Sequence *
interfaces__msg__AirStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__AirStatus__Sequence * array = (interfaces__msg__AirStatus__Sequence *)allocator.allocate(sizeof(interfaces__msg__AirStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__AirStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__AirStatus__Sequence__destroy(interfaces__msg__AirStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__AirStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__AirStatus__Sequence__are_equal(const interfaces__msg__AirStatus__Sequence * lhs, const interfaces__msg__AirStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__AirStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__AirStatus__Sequence__copy(
  const interfaces__msg__AirStatus__Sequence * input,
  interfaces__msg__AirStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__AirStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__AirStatus * data =
      (interfaces__msg__AirStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__AirStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__AirStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__AirStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
