// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/PeristalticPumpMessage.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/peristaltic_pump_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__PeristalticPumpMessage__init(interfaces__msg__PeristalticPumpMessage * msg)
{
  if (!msg) {
    return false;
  }
  // err
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    interfaces__msg__PeristalticPumpMessage__fini(msg);
    return false;
  }
  // volume
  return true;
}

void
interfaces__msg__PeristalticPumpMessage__fini(interfaces__msg__PeristalticPumpMessage * msg)
{
  if (!msg) {
    return;
  }
  // err
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // volume
}

bool
interfaces__msg__PeristalticPumpMessage__are_equal(const interfaces__msg__PeristalticPumpMessage * lhs, const interfaces__msg__PeristalticPumpMessage * rhs)
{
  if (!lhs || !rhs) {
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
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  return true;
}

bool
interfaces__msg__PeristalticPumpMessage__copy(
  const interfaces__msg__PeristalticPumpMessage * input,
  interfaces__msg__PeristalticPumpMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // err
  output->err = input->err;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // volume
  output->volume = input->volume;
  return true;
}

interfaces__msg__PeristalticPumpMessage *
interfaces__msg__PeristalticPumpMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__PeristalticPumpMessage * msg = (interfaces__msg__PeristalticPumpMessage *)allocator.allocate(sizeof(interfaces__msg__PeristalticPumpMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__PeristalticPumpMessage));
  bool success = interfaces__msg__PeristalticPumpMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__PeristalticPumpMessage__destroy(interfaces__msg__PeristalticPumpMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__PeristalticPumpMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__PeristalticPumpMessage__Sequence__init(interfaces__msg__PeristalticPumpMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__PeristalticPumpMessage * data = NULL;

  if (size) {
    data = (interfaces__msg__PeristalticPumpMessage *)allocator.zero_allocate(size, sizeof(interfaces__msg__PeristalticPumpMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__PeristalticPumpMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__PeristalticPumpMessage__fini(&data[i - 1]);
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
interfaces__msg__PeristalticPumpMessage__Sequence__fini(interfaces__msg__PeristalticPumpMessage__Sequence * array)
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
      interfaces__msg__PeristalticPumpMessage__fini(&array->data[i]);
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

interfaces__msg__PeristalticPumpMessage__Sequence *
interfaces__msg__PeristalticPumpMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__PeristalticPumpMessage__Sequence * array = (interfaces__msg__PeristalticPumpMessage__Sequence *)allocator.allocate(sizeof(interfaces__msg__PeristalticPumpMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__PeristalticPumpMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__PeristalticPumpMessage__Sequence__destroy(interfaces__msg__PeristalticPumpMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__PeristalticPumpMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__PeristalticPumpMessage__Sequence__are_equal(const interfaces__msg__PeristalticPumpMessage__Sequence * lhs, const interfaces__msg__PeristalticPumpMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__PeristalticPumpMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__PeristalticPumpMessage__Sequence__copy(
  const interfaces__msg__PeristalticPumpMessage__Sequence * input,
  interfaces__msg__PeristalticPumpMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__PeristalticPumpMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__PeristalticPumpMessage * data =
      (interfaces__msg__PeristalticPumpMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__PeristalticPumpMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__PeristalticPumpMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__PeristalticPumpMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
