// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/IrrigationMessage.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/irrigation_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tank`
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__IrrigationMessage__init(interfaces__msg__IrrigationMessage * msg)
{
  if (!msg) {
    return false;
  }
  // tank
  if (!rosidl_runtime_c__String__init(&msg->tank)) {
    interfaces__msg__IrrigationMessage__fini(msg);
    return false;
  }
  // valve
  // err
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    interfaces__msg__IrrigationMessage__fini(msg);
    return false;
  }
  // state
  return true;
}

void
interfaces__msg__IrrigationMessage__fini(interfaces__msg__IrrigationMessage * msg)
{
  if (!msg) {
    return;
  }
  // tank
  rosidl_runtime_c__String__fini(&msg->tank);
  // valve
  // err
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // state
}

bool
interfaces__msg__IrrigationMessage__are_equal(const interfaces__msg__IrrigationMessage * lhs, const interfaces__msg__IrrigationMessage * rhs)
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
  // valve
  if (lhs->valve != rhs->valve) {
    return false;
  }
  // err
  if (lhs->err != rhs->err) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
interfaces__msg__IrrigationMessage__copy(
  const interfaces__msg__IrrigationMessage * input,
  interfaces__msg__IrrigationMessage * output)
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
  // valve
  output->valve = input->valve;
  // err
  output->err = input->err;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

interfaces__msg__IrrigationMessage *
interfaces__msg__IrrigationMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__IrrigationMessage * msg = (interfaces__msg__IrrigationMessage *)allocator.allocate(sizeof(interfaces__msg__IrrigationMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__IrrigationMessage));
  bool success = interfaces__msg__IrrigationMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__IrrigationMessage__destroy(interfaces__msg__IrrigationMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__IrrigationMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__IrrigationMessage__Sequence__init(interfaces__msg__IrrigationMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__IrrigationMessage * data = NULL;

  if (size) {
    data = (interfaces__msg__IrrigationMessage *)allocator.zero_allocate(size, sizeof(interfaces__msg__IrrigationMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__IrrigationMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__IrrigationMessage__fini(&data[i - 1]);
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
interfaces__msg__IrrigationMessage__Sequence__fini(interfaces__msg__IrrigationMessage__Sequence * array)
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
      interfaces__msg__IrrigationMessage__fini(&array->data[i]);
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

interfaces__msg__IrrigationMessage__Sequence *
interfaces__msg__IrrigationMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__IrrigationMessage__Sequence * array = (interfaces__msg__IrrigationMessage__Sequence *)allocator.allocate(sizeof(interfaces__msg__IrrigationMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__IrrigationMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__IrrigationMessage__Sequence__destroy(interfaces__msg__IrrigationMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__IrrigationMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__IrrigationMessage__Sequence__are_equal(const interfaces__msg__IrrigationMessage__Sequence * lhs, const interfaces__msg__IrrigationMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__IrrigationMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__IrrigationMessage__Sequence__copy(
  const interfaces__msg__IrrigationMessage__Sequence * input,
  interfaces__msg__IrrigationMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__IrrigationMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__IrrigationMessage * data =
      (interfaces__msg__IrrigationMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__IrrigationMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__IrrigationMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__IrrigationMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
