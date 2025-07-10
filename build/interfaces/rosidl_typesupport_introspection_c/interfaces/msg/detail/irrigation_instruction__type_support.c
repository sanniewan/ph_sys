// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/IrrigationInstruction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/irrigation_instruction__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/irrigation_instruction__functions.h"
#include "interfaces/msg/detail/irrigation_instruction__struct.h"


// Include directives for member types
// Member `instruction`
// Member `tank`
#include "rosidl_runtime_c/string_functions.h"
// Member `valves`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__IrrigationInstruction__init(message_memory);
}

void interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_fini_function(void * message_memory)
{
  interfaces__msg__IrrigationInstruction__fini(message_memory);
}

size_t interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__size_function__IrrigationInstruction__valves(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__get_const_function__IrrigationInstruction__valves(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__get_function__IrrigationInstruction__valves(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__fetch_function__IrrigationInstruction__valves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__get_const_function__IrrigationInstruction__valves(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__assign_function__IrrigationInstruction__valves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__get_function__IrrigationInstruction__valves(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__resize_function__IrrigationInstruction__valves(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_member_array[3] = {
  {
    "instruction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__IrrigationInstruction, instruction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tank",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__IrrigationInstruction, tank),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valves",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    64,  // array size
    true,  // is upper bound
    offsetof(interfaces__msg__IrrigationInstruction, valves),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__size_function__IrrigationInstruction__valves,  // size() function pointer
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__get_const_function__IrrigationInstruction__valves,  // get_const(index) function pointer
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__get_function__IrrigationInstruction__valves,  // get(index) function pointer
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__fetch_function__IrrigationInstruction__valves,  // fetch(index, &value) function pointer
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__assign_function__IrrigationInstruction__valves,  // assign(index, value) function pointer
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__resize_function__IrrigationInstruction__valves  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_members = {
  "interfaces__msg",  // message namespace
  "IrrigationInstruction",  // message name
  3,  // number of fields
  sizeof(interfaces__msg__IrrigationInstruction),
  interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_member_array,  // message members
  interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_type_support_handle = {
  0,
  &interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, IrrigationInstruction)() {
  if (!interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_type_support_handle.typesupport_identifier) {
    interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__msg__IrrigationInstruction__rosidl_typesupport_introspection_c__IrrigationInstruction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
