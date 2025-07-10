// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/tank_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/msg/detail/tank_status__struct.hpp"

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
  const interfaces::msg::TankStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tank
  cdr << ros_message.tank;
  // Member: ph
  cdr << ros_message.ph;
  // Member: ec
  cdr << ros_message.ec;
  // Member: t
  cdr << ros_message.t;
  // Member: flow_volume
  cdr << ros_message.flow_volume;
  // Member: flow_rate
  cdr << ros_message.flow_rate;
  // Member: circuit_p
  cdr << ros_message.circuit_p;
  // Member: critical_low
  cdr << (ros_message.critical_low ? true : false);
  // Member: critical_high
  cdr << (ros_message.critical_high ? true : false);
  // Member: water_level
  cdr << ros_message.water_level;
  // Member: pump
  cdr << (ros_message.pump ? true : false);
  // Member: recycling
  cdr << (ros_message.recycling ? true : false);
  // Member: intake
  cdr << (ros_message.intake ? true : false);
  // Member: drain
  cdr << (ros_message.drain ? true : false);
  // Member: aeration
  cdr << (ros_message.aeration ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::msg::TankStatus & ros_message)
{
  // Member: tank
  cdr >> ros_message.tank;

  // Member: ph
  cdr >> ros_message.ph;

  // Member: ec
  cdr >> ros_message.ec;

  // Member: t
  cdr >> ros_message.t;

  // Member: flow_volume
  cdr >> ros_message.flow_volume;

  // Member: flow_rate
  cdr >> ros_message.flow_rate;

  // Member: circuit_p
  cdr >> ros_message.circuit_p;

  // Member: critical_low
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.critical_low = tmp ? true : false;
  }

  // Member: critical_high
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.critical_high = tmp ? true : false;
  }

  // Member: water_level
  cdr >> ros_message.water_level;

  // Member: pump
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pump = tmp ? true : false;
  }

  // Member: recycling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.recycling = tmp ? true : false;
  }

  // Member: intake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.intake = tmp ? true : false;
  }

  // Member: drain
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.drain = tmp ? true : false;
  }

  // Member: aeration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aeration = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::msg::TankStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tank
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tank.size() + 1);
  // Member: ph
  {
    size_t item_size = sizeof(ros_message.ph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ec
  {
    size_t item_size = sizeof(ros_message.ec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t
  {
    size_t item_size = sizeof(ros_message.t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flow_volume
  {
    size_t item_size = sizeof(ros_message.flow_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flow_rate
  {
    size_t item_size = sizeof(ros_message.flow_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_p
  {
    size_t item_size = sizeof(ros_message.circuit_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: critical_low
  {
    size_t item_size = sizeof(ros_message.critical_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: critical_high
  {
    size_t item_size = sizeof(ros_message.critical_high);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_level
  {
    size_t item_size = sizeof(ros_message.water_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pump
  {
    size_t item_size = sizeof(ros_message.pump);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: recycling
  {
    size_t item_size = sizeof(ros_message.recycling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intake
  {
    size_t item_size = sizeof(ros_message.intake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drain
  {
    size_t item_size = sizeof(ros_message.drain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aeration
  {
    size_t item_size = sizeof(ros_message.aeration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_TankStatus(
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

  // Member: ph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: flow_volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: flow_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: circuit_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: critical_low
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: critical_high
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: water_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pump
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: recycling
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: intake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aeration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces::msg::TankStatus;
    is_plain =
      (
      offsetof(DataType, aeration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TankStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::msg::TankStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TankStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::msg::TankStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TankStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::msg::TankStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TankStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TankStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TankStatus__callbacks = {
  "interfaces::msg",
  "TankStatus",
  _TankStatus__cdr_serialize,
  _TankStatus__cdr_deserialize,
  _TankStatus__get_serialized_size,
  _TankStatus__max_serialized_size
};

static rosidl_message_type_support_t _TankStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TankStatus__callbacks,
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
get_message_type_support_handle<interfaces::msg::TankStatus>()
{
  return &interfaces::msg::typesupport_fastrtps_cpp::_TankStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, msg, TankStatus)() {
  return &interfaces::msg::typesupport_fastrtps_cpp::_TankStatus__handle;
}

#ifdef __cplusplus
}
#endif
