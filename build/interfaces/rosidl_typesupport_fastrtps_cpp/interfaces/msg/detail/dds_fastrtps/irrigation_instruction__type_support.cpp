// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/IrrigationInstruction.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/irrigation_instruction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/msg/detail/irrigation_instruction__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_serialize(
  const interfaces::msg::IrrigationInstruction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: instruction
  cdr << ros_message.instruction;
  // Member: tank
  cdr << ros_message.tank;
  // Member: valves
  {
    size_t size = ros_message.valves.size();
    if (size > 64) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.valves[0]), size);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::msg::IrrigationInstruction & ros_message)
{
  // Member: instruction
  cdr >> ros_message.instruction;

  // Member: tank
  cdr >> ros_message.tank;

  // Member: valves
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.valves.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.valves[0]), size);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::msg::IrrigationInstruction & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: instruction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.instruction.size() + 1);
  // Member: tank
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tank.size() + 1);
  // Member: valves
  {
    size_t array_size = ros_message.valves.size();
    if (array_size > 64) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.valves[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_IrrigationInstruction(
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


  // Member: instruction
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

  // Member: tank
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

  // Member: valves
  {
    size_t array_size = 64;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces::msg::IrrigationInstruction;
    is_plain =
      (
      offsetof(DataType, valves) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IrrigationInstruction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::msg::IrrigationInstruction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IrrigationInstruction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::msg::IrrigationInstruction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IrrigationInstruction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::msg::IrrigationInstruction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IrrigationInstruction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IrrigationInstruction(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IrrigationInstruction__callbacks = {
  "interfaces::msg",
  "IrrigationInstruction",
  _IrrigationInstruction__cdr_serialize,
  _IrrigationInstruction__cdr_deserialize,
  _IrrigationInstruction__get_serialized_size,
  _IrrigationInstruction__max_serialized_size
};

static rosidl_message_type_support_t _IrrigationInstruction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IrrigationInstruction__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::IrrigationInstruction>()
{
  return &interfaces::msg::typesupport_fastrtps_cpp::_IrrigationInstruction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, msg, IrrigationInstruction)() {
  return &interfaces::msg::typesupport_fastrtps_cpp::_IrrigationInstruction__handle;
}

#ifdef __cplusplus
}
#endif
