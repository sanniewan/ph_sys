// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/tank_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/tank_status__struct.h"
#include "interfaces/msg/detail/tank_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // tank
#include "rosidl_runtime_c/string_functions.h"  // tank

// forward declare type support functions


using _TankStatus__ros_msg_type = interfaces__msg__TankStatus;

static bool _TankStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TankStatus__ros_msg_type * ros_message = static_cast<const _TankStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ph
  {
    cdr << ros_message->ph;
  }

  // Field name: ec
  {
    cdr << ros_message->ec;
  }

  // Field name: t
  {
    cdr << ros_message->t;
  }

  // Field name: flow_volume
  {
    cdr << ros_message->flow_volume;
  }

  // Field name: flow_rate
  {
    cdr << ros_message->flow_rate;
  }

  // Field name: circuit_p
  {
    cdr << ros_message->circuit_p;
  }

  // Field name: critical_low
  {
    cdr << (ros_message->critical_low ? true : false);
  }

  // Field name: critical_high
  {
    cdr << (ros_message->critical_high ? true : false);
  }

  // Field name: water_level
  {
    cdr << ros_message->water_level;
  }

  // Field name: pump
  {
    cdr << (ros_message->pump ? true : false);
  }

  // Field name: recycling
  {
    cdr << (ros_message->recycling ? true : false);
  }

  // Field name: intake
  {
    cdr << (ros_message->intake ? true : false);
  }

  // Field name: drain
  {
    cdr << (ros_message->drain ? true : false);
  }

  // Field name: aeration
  {
    cdr << (ros_message->aeration ? true : false);
  }

  return true;
}

static bool _TankStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TankStatus__ros_msg_type * ros_message = static_cast<_TankStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ph
  {
    cdr >> ros_message->ph;
  }

  // Field name: ec
  {
    cdr >> ros_message->ec;
  }

  // Field name: t
  {
    cdr >> ros_message->t;
  }

  // Field name: flow_volume
  {
    cdr >> ros_message->flow_volume;
  }

  // Field name: flow_rate
  {
    cdr >> ros_message->flow_rate;
  }

  // Field name: circuit_p
  {
    cdr >> ros_message->circuit_p;
  }

  // Field name: critical_low
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->critical_low = tmp ? true : false;
  }

  // Field name: critical_high
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->critical_high = tmp ? true : false;
  }

  // Field name: water_level
  {
    cdr >> ros_message->water_level;
  }

  // Field name: pump
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pump = tmp ? true : false;
  }

  // Field name: recycling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->recycling = tmp ? true : false;
  }

  // Field name: intake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->intake = tmp ? true : false;
  }

  // Field name: drain
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->drain = tmp ? true : false;
  }

  // Field name: aeration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeration = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__TankStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TankStatus__ros_msg_type * ros_message = static_cast<const _TankStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tank
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tank.size + 1);
  // field.name ph
  {
    size_t item_size = sizeof(ros_message->ph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ec
  {
    size_t item_size = sizeof(ros_message->ec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t
  {
    size_t item_size = sizeof(ros_message->t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flow_volume
  {
    size_t item_size = sizeof(ros_message->flow_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flow_rate
  {
    size_t item_size = sizeof(ros_message->flow_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_p
  {
    size_t item_size = sizeof(ros_message->circuit_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name critical_low
  {
    size_t item_size = sizeof(ros_message->critical_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name critical_high
  {
    size_t item_size = sizeof(ros_message->critical_high);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name water_level
  {
    size_t item_size = sizeof(ros_message->water_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pump
  {
    size_t item_size = sizeof(ros_message->pump);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recycling
  {
    size_t item_size = sizeof(ros_message->recycling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intake
  {
    size_t item_size = sizeof(ros_message->intake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drain
  {
    size_t item_size = sizeof(ros_message->drain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aeration
  {
    size_t item_size = sizeof(ros_message->aeration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TankStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__TankStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__TankStatus(
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
  // member: ph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flow_volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flow_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: circuit_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: critical_low
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: critical_high
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: water_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pump
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: recycling
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: intake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aeration
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
    using DataType = interfaces__msg__TankStatus;
    is_plain =
      (
      offsetof(DataType, aeration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TankStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__TankStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TankStatus = {
  "interfaces::msg",
  "TankStatus",
  _TankStatus__cdr_serialize,
  _TankStatus__cdr_deserialize,
  _TankStatus__get_serialized_size,
  _TankStatus__max_serialized_size
};

static rosidl_message_type_support_t _TankStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TankStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, TankStatus)() {
  return &_TankStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
