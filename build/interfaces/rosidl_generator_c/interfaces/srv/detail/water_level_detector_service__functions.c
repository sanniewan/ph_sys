// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:srv/WaterLevelDetectorService.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/water_level_detector_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
interfaces__srv__WaterLevelDetectorService_Request__init(interfaces__srv__WaterLevelDetectorService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
interfaces__srv__WaterLevelDetectorService_Request__fini(interfaces__srv__WaterLevelDetectorService_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
interfaces__srv__WaterLevelDetectorService_Request__are_equal(const interfaces__srv__WaterLevelDetectorService_Request * lhs, const interfaces__srv__WaterLevelDetectorService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
interfaces__srv__WaterLevelDetectorService_Request__copy(
  const interfaces__srv__WaterLevelDetectorService_Request * input,
  interfaces__srv__WaterLevelDetectorService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

interfaces__srv__WaterLevelDetectorService_Request *
interfaces__srv__WaterLevelDetectorService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__WaterLevelDetectorService_Request * msg = (interfaces__srv__WaterLevelDetectorService_Request *)allocator.allocate(sizeof(interfaces__srv__WaterLevelDetectorService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__WaterLevelDetectorService_Request));
  bool success = interfaces__srv__WaterLevelDetectorService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__WaterLevelDetectorService_Request__destroy(interfaces__srv__WaterLevelDetectorService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__WaterLevelDetectorService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__WaterLevelDetectorService_Request__Sequence__init(interfaces__srv__WaterLevelDetectorService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__WaterLevelDetectorService_Request * data = NULL;

  if (size) {
    data = (interfaces__srv__WaterLevelDetectorService_Request *)allocator.zero_allocate(size, sizeof(interfaces__srv__WaterLevelDetectorService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__WaterLevelDetectorService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__WaterLevelDetectorService_Request__fini(&data[i - 1]);
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
interfaces__srv__WaterLevelDetectorService_Request__Sequence__fini(interfaces__srv__WaterLevelDetectorService_Request__Sequence * array)
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
      interfaces__srv__WaterLevelDetectorService_Request__fini(&array->data[i]);
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

interfaces__srv__WaterLevelDetectorService_Request__Sequence *
interfaces__srv__WaterLevelDetectorService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__WaterLevelDetectorService_Request__Sequence * array = (interfaces__srv__WaterLevelDetectorService_Request__Sequence *)allocator.allocate(sizeof(interfaces__srv__WaterLevelDetectorService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__WaterLevelDetectorService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__WaterLevelDetectorService_Request__Sequence__destroy(interfaces__srv__WaterLevelDetectorService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__WaterLevelDetectorService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__WaterLevelDetectorService_Request__Sequence__are_equal(const interfaces__srv__WaterLevelDetectorService_Request__Sequence * lhs, const interfaces__srv__WaterLevelDetectorService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__WaterLevelDetectorService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__WaterLevelDetectorService_Request__Sequence__copy(
  const interfaces__srv__WaterLevelDetectorService_Request__Sequence * input,
  interfaces__srv__WaterLevelDetectorService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__WaterLevelDetectorService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__WaterLevelDetectorService_Request * data =
      (interfaces__srv__WaterLevelDetectorService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__WaterLevelDetectorService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__WaterLevelDetectorService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__WaterLevelDetectorService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__srv__WaterLevelDetectorService_Response__init(interfaces__srv__WaterLevelDetectorService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // err
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    interfaces__srv__WaterLevelDetectorService_Response__fini(msg);
    return false;
  }
  // critical
  return true;
}

void
interfaces__srv__WaterLevelDetectorService_Response__fini(interfaces__srv__WaterLevelDetectorService_Response * msg)
{
  if (!msg) {
    return;
  }
  // err
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // critical
}

bool
interfaces__srv__WaterLevelDetectorService_Response__are_equal(const interfaces__srv__WaterLevelDetectorService_Response * lhs, const interfaces__srv__WaterLevelDetectorService_Response * rhs)
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
  // critical
  if (lhs->critical != rhs->critical) {
    return false;
  }
  return true;
}

bool
interfaces__srv__WaterLevelDetectorService_Response__copy(
  const interfaces__srv__WaterLevelDetectorService_Response * input,
  interfaces__srv__WaterLevelDetectorService_Response * output)
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
  // critical
  output->critical = input->critical;
  return true;
}

interfaces__srv__WaterLevelDetectorService_Response *
interfaces__srv__WaterLevelDetectorService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__WaterLevelDetectorService_Response * msg = (interfaces__srv__WaterLevelDetectorService_Response *)allocator.allocate(sizeof(interfaces__srv__WaterLevelDetectorService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__WaterLevelDetectorService_Response));
  bool success = interfaces__srv__WaterLevelDetectorService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__WaterLevelDetectorService_Response__destroy(interfaces__srv__WaterLevelDetectorService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__WaterLevelDetectorService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__WaterLevelDetectorService_Response__Sequence__init(interfaces__srv__WaterLevelDetectorService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__WaterLevelDetectorService_Response * data = NULL;

  if (size) {
    data = (interfaces__srv__WaterLevelDetectorService_Response *)allocator.zero_allocate(size, sizeof(interfaces__srv__WaterLevelDetectorService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__WaterLevelDetectorService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__WaterLevelDetectorService_Response__fini(&data[i - 1]);
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
interfaces__srv__WaterLevelDetectorService_Response__Sequence__fini(interfaces__srv__WaterLevelDetectorService_Response__Sequence * array)
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
      interfaces__srv__WaterLevelDetectorService_Response__fini(&array->data[i]);
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

interfaces__srv__WaterLevelDetectorService_Response__Sequence *
interfaces__srv__WaterLevelDetectorService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__WaterLevelDetectorService_Response__Sequence * array = (interfaces__srv__WaterLevelDetectorService_Response__Sequence *)allocator.allocate(sizeof(interfaces__srv__WaterLevelDetectorService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__WaterLevelDetectorService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__WaterLevelDetectorService_Response__Sequence__destroy(interfaces__srv__WaterLevelDetectorService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__WaterLevelDetectorService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__WaterLevelDetectorService_Response__Sequence__are_equal(const interfaces__srv__WaterLevelDetectorService_Response__Sequence * lhs, const interfaces__srv__WaterLevelDetectorService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__WaterLevelDetectorService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__WaterLevelDetectorService_Response__Sequence__copy(
  const interfaces__srv__WaterLevelDetectorService_Response__Sequence * input,
  interfaces__srv__WaterLevelDetectorService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__WaterLevelDetectorService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__WaterLevelDetectorService_Response * data =
      (interfaces__srv__WaterLevelDetectorService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__WaterLevelDetectorService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__WaterLevelDetectorService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__WaterLevelDetectorService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
