// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaces:msg/FlowMeterMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__FUNCTIONS_H_
#define INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "interfaces/msg/detail/flow_meter_message__struct.h"

/// Initialize msg/FlowMeterMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces__msg__FlowMeterMessage
 * )) before or use
 * interfaces__msg__FlowMeterMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__FlowMeterMessage__init(interfaces__msg__FlowMeterMessage * msg);

/// Finalize msg/FlowMeterMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__FlowMeterMessage__fini(interfaces__msg__FlowMeterMessage * msg);

/// Create msg/FlowMeterMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces__msg__FlowMeterMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
interfaces__msg__FlowMeterMessage *
interfaces__msg__FlowMeterMessage__create();

/// Destroy msg/FlowMeterMessage message.
/**
 * It calls
 * interfaces__msg__FlowMeterMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__FlowMeterMessage__destroy(interfaces__msg__FlowMeterMessage * msg);

/// Check for msg/FlowMeterMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__FlowMeterMessage__are_equal(const interfaces__msg__FlowMeterMessage * lhs, const interfaces__msg__FlowMeterMessage * rhs);

/// Copy a msg/FlowMeterMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__FlowMeterMessage__copy(
  const interfaces__msg__FlowMeterMessage * input,
  interfaces__msg__FlowMeterMessage * output);

/// Initialize array of msg/FlowMeterMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces__msg__FlowMeterMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__FlowMeterMessage__Sequence__init(interfaces__msg__FlowMeterMessage__Sequence * array, size_t size);

/// Finalize array of msg/FlowMeterMessage messages.
/**
 * It calls
 * interfaces__msg__FlowMeterMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__FlowMeterMessage__Sequence__fini(interfaces__msg__FlowMeterMessage__Sequence * array);

/// Create array of msg/FlowMeterMessage messages.
/**
 * It allocates the memory for the array and calls
 * interfaces__msg__FlowMeterMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
interfaces__msg__FlowMeterMessage__Sequence *
interfaces__msg__FlowMeterMessage__Sequence__create(size_t size);

/// Destroy array of msg/FlowMeterMessage messages.
/**
 * It calls
 * interfaces__msg__FlowMeterMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
void
interfaces__msg__FlowMeterMessage__Sequence__destroy(interfaces__msg__FlowMeterMessage__Sequence * array);

/// Check for msg/FlowMeterMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__FlowMeterMessage__Sequence__are_equal(const interfaces__msg__FlowMeterMessage__Sequence * lhs, const interfaces__msg__FlowMeterMessage__Sequence * rhs);

/// Copy an array of msg/FlowMeterMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces
bool
interfaces__msg__FlowMeterMessage__Sequence__copy(
  const interfaces__msg__FlowMeterMessage__Sequence * input,
  interfaces__msg__FlowMeterMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__FUNCTIONS_H_
