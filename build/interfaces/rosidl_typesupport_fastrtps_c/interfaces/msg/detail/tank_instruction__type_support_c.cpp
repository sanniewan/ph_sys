// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/TankInstruction.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/tank_instruction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/tank_instruction__struct.h"
#include "interfaces/msg/detail/tank_instruction__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // instruction, tank
#include "rosidl_runtime_c/string_functions.h"  // instruction, tank

// forward declare type support functions


using _TankInstruction__ros_msg_type = interfaces__msg__TankInstruction;

static bool _TankInstruction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TankInstruction__ros_msg_type * ros_message = static_cast<const _TankInstruction__ros_msg_type *>(untyped_ros_message);
  // Field name: instruction
  {
    const rosidl_runtime_c__String * str = &ros_message->instruction;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: tank
  {
    const rosidl_runtime_c__String * str = &ros_message->tank;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: vat
  {
    cdr << ros_message->vat;
  }

  // Field name: quantity
  {
    cdr << ros_message->quantity;
  }

  // Field name: ph_target
  {
    cdr << ros_message->ph_target;
  }

  // Field name: ec_target
  {
    cdr << ros_message->ec_target;
  }

  return true;
}

static bool _TankInstruction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TankInstruction__ros_msg_type * ros_message = static_cast<_TankInstruction__ros_msg_type *>(untyped_ros_message);
  // Field name: instruction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->instruction.data) {
      rosidl_runtime_c__String__init(&ros_message->instruction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->instruction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'instruction'\n");
      return false;
    }
  }

  // Field name: tank
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tank.data) {
      rosidl_runtime_c__String__init(&ros_message->tank);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tank,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tank'\n");
      return false;
    }
  }

  // Field name: vat
  {
    cdr >> ros_message->vat;
  }

  // Field name: quantity
  {
    cdr >> ros_message->quantity;
  }

  // Field name: ph_target
  {
    cdr >> ros_message->ph_target;
  }

  // Field name: ec_target
  {
    cdr >> ros_message->ec_target;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__TankInstruction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TankInstruction__ros_msg_type * ros_message = static_cast<const _TankInstruction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name instruction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->instruction.size + 1);
  // field.name tank
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tank.size + 1);
  // field.name vat
  {
    size_t item_size = sizeof(ros_message->vat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quantity
  {
    size_t item_size = sizeof(ros_message->quantity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ph_target
  {
    size_t item_size = sizeof(ros_message->ph_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ec_target
  {
    size_t item_size = sizeof(ros_message->ec_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TankInstruction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__TankInstruction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__TankInstruction(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: instruction
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tank
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: vat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quantity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ph_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ec_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces__msg__TankInstruction;
    is_plain =
      (
      offsetof(DataType, ec_target) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TankInstruction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__TankInstruction(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TankInstruction = {
  "interfaces::msg",
  "TankInstruction",
  _TankInstruction__cdr_serialize,
  _TankInstruction__cdr_deserialize,
  _TankInstruction__get_serialized_size,
  _TankInstruction__max_serialized_size
};

static rosidl_message_type_support_t _TankInstruction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TankInstruction,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, TankInstruction)() {
  return &_TankInstruction__type_support;
}

#if defined(__cplusplus)
}
#endif
