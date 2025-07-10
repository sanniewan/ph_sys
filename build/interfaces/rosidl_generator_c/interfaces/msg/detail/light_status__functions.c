// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/LightStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/light_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaces__msg__LightStatus__init(interfaces__msg__LightStatus * msg)
{
  if (!msg) {
    return false;
  }
  // growlight_state
  // growlight_level
  // tasklight_state
  return true;
}

void
interfaces__msg__LightStatus__fini(interfaces__msg__LightStatus * msg)
{
  if (!msg) {
    return;
  }
  // growlight_state
  // growlight_level
  // tasklight_state
}

bool
interfaces__msg__LightStatus__are_equal(const interfaces__msg__LightStatus * lhs, const interfaces__msg__LightStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // growlight_state
  if (lhs->growlight_state != rhs->growlight_state) {
    return false;
  }
  // growlight_level
  if (lhs->growlight_level != rhs->growlight_level) {
    return false;
  }
  // tasklight_state
  if (lhs->tasklight_state != rhs->tasklight_state) {
    return false;
  }
  return true;
}

bool
interfaces__msg__LightStatus__copy(
  const interfaces__msg__LightStatus * input,
  interfaces__msg__LightStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // growlight_state
  output->growlight_state = input->growlight_state;
  // growlight_level
  output->growlight_level = input->growlight_level;
  // tasklight_state
  output->tasklight_state = input->tasklight_state;
  return true;
}

interfaces__msg__LightStatus *
interfaces__msg__LightStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__LightStatus * msg = (interfaces__msg__LightStatus *)allocator.allocate(sizeof(interfaces__msg__LightStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__LightStatus));
  bool success = interfaces__msg__LightStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__LightStatus__destroy(interfaces__msg__LightStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__LightStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__LightStatus__Sequence__init(interfaces__msg__LightStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__LightStatus * data = NULL;

  if (size) {
    data = (interfaces__msg__LightStatus *)allocator.zero_allocate(size, sizeof(interfaces__msg__LightStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__LightStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__LightStatus__fini(&data[i - 1]);
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
interfaces__msg__LightStatus__Sequence__fini(interfaces__msg__LightStatus__Sequence * array)
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
      interfaces__msg__LightStatus__fini(&array->data[i]);
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

interfaces__msg__LightStatus__Sequence *
interfaces__msg__LightStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__LightStatus__Sequence * array = (interfaces__msg__LightStatus__Sequence *)allocator.allocate(sizeof(interfaces__msg__LightStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__LightStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__LightStatus__Sequence__destroy(interfaces__msg__LightStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__LightStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__LightStatus__Sequence__are_equal(const interfaces__msg__LightStatus__Sequence * lhs, const interfaces__msg__LightStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__LightStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__LightStatus__Sequence__copy(
  const interfaces__msg__LightStatus__Sequence * input,
  interfaces__msg__LightStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__LightStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__LightStatus * data =
      (interfaces__msg__LightStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__LightStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__LightStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__LightStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
