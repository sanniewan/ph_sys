// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/VatStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/vat_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaces__msg__VatStatus__init(interfaces__msg__VatStatus * msg)
{
  if (!msg) {
    return false;
  }
  // level_1
  // level_2
  // level_3
  // level_4
  return true;
}

void
interfaces__msg__VatStatus__fini(interfaces__msg__VatStatus * msg)
{
  if (!msg) {
    return;
  }
  // level_1
  // level_2
  // level_3
  // level_4
}

bool
interfaces__msg__VatStatus__are_equal(const interfaces__msg__VatStatus * lhs, const interfaces__msg__VatStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // level_1
  if (lhs->level_1 != rhs->level_1) {
    return false;
  }
  // level_2
  if (lhs->level_2 != rhs->level_2) {
    return false;
  }
  // level_3
  if (lhs->level_3 != rhs->level_3) {
    return false;
  }
  // level_4
  if (lhs->level_4 != rhs->level_4) {
    return false;
  }
  return true;
}

bool
interfaces__msg__VatStatus__copy(
  const interfaces__msg__VatStatus * input,
  interfaces__msg__VatStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // level_1
  output->level_1 = input->level_1;
  // level_2
  output->level_2 = input->level_2;
  // level_3
  output->level_3 = input->level_3;
  // level_4
  output->level_4 = input->level_4;
  return true;
}

interfaces__msg__VatStatus *
interfaces__msg__VatStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__VatStatus * msg = (interfaces__msg__VatStatus *)allocator.allocate(sizeof(interfaces__msg__VatStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__VatStatus));
  bool success = interfaces__msg__VatStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__VatStatus__destroy(interfaces__msg__VatStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__VatStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__VatStatus__Sequence__init(interfaces__msg__VatStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__VatStatus * data = NULL;

  if (size) {
    data = (interfaces__msg__VatStatus *)allocator.zero_allocate(size, sizeof(interfaces__msg__VatStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__VatStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__VatStatus__fini(&data[i - 1]);
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
interfaces__msg__VatStatus__Sequence__fini(interfaces__msg__VatStatus__Sequence * array)
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
      interfaces__msg__VatStatus__fini(&array->data[i]);
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

interfaces__msg__VatStatus__Sequence *
interfaces__msg__VatStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__VatStatus__Sequence * array = (interfaces__msg__VatStatus__Sequence *)allocator.allocate(sizeof(interfaces__msg__VatStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__VatStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__VatStatus__Sequence__destroy(interfaces__msg__VatStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__VatStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__VatStatus__Sequence__are_equal(const interfaces__msg__VatStatus__Sequence * lhs, const interfaces__msg__VatStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__VatStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__VatStatus__Sequence__copy(
  const interfaces__msg__VatStatus__Sequence * input,
  interfaces__msg__VatStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__VatStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__VatStatus * data =
      (interfaces__msg__VatStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__VatStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__VatStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__VatStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
