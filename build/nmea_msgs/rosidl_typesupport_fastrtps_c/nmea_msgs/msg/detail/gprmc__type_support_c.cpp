// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gprmc__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nmea_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nmea_msgs/msg/detail/gprmc__struct.h"
#include "nmea_msgs/msg/detail/gprmc__functions.h"
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

#include "rosidl_runtime_c/string.h"  // date, lat_dir, lon_dir, mag_var_direction, message_id, mode_indicator, position_status
#include "rosidl_runtime_c/string_functions.h"  // date, lat_dir, lon_dir, mag_var_direction, message_id, mode_indicator, position_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nmea_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nmea_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_nmea_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Gprmc__ros_msg_type = nmea_msgs__msg__Gprmc;

static bool _Gprmc__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Gprmc__ros_msg_type * ros_message = static_cast<const _Gprmc__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: message_id
  {
    const rosidl_runtime_c__String * str = &ros_message->message_id;
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

  // Field name: utc_seconds
  {
    cdr << ros_message->utc_seconds;
  }

  // Field name: position_status
  {
    const rosidl_runtime_c__String * str = &ros_message->position_status;
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

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: lat_dir
  {
    const rosidl_runtime_c__String * str = &ros_message->lat_dir;
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

  // Field name: lon_dir
  {
    const rosidl_runtime_c__String * str = &ros_message->lon_dir;
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

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: track
  {
    cdr << ros_message->track;
  }

  // Field name: date
  {
    const rosidl_runtime_c__String * str = &ros_message->date;
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

  // Field name: mag_var
  {
    cdr << ros_message->mag_var;
  }

  // Field name: mag_var_direction
  {
    const rosidl_runtime_c__String * str = &ros_message->mag_var_direction;
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

  // Field name: mode_indicator
  {
    const rosidl_runtime_c__String * str = &ros_message->mode_indicator;
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

  return true;
}

static bool _Gprmc__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Gprmc__ros_msg_type * ros_message = static_cast<_Gprmc__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: message_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_id.data) {
      rosidl_runtime_c__String__init(&ros_message->message_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_id'\n");
      return false;
    }
  }

  // Field name: utc_seconds
  {
    cdr >> ros_message->utc_seconds;
  }

  // Field name: position_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->position_status.data) {
      rosidl_runtime_c__String__init(&ros_message->position_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->position_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'position_status'\n");
      return false;
    }
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: lat_dir
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lat_dir.data) {
      rosidl_runtime_c__String__init(&ros_message->lat_dir);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lat_dir,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lat_dir'\n");
      return false;
    }
  }

  // Field name: lon_dir
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lon_dir.data) {
      rosidl_runtime_c__String__init(&ros_message->lon_dir);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lon_dir,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lon_dir'\n");
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: track
  {
    cdr >> ros_message->track;
  }

  // Field name: date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->date.data) {
      rosidl_runtime_c__String__init(&ros_message->date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'date'\n");
      return false;
    }
  }

  // Field name: mag_var
  {
    cdr >> ros_message->mag_var;
  }

  // Field name: mag_var_direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mag_var_direction.data) {
      rosidl_runtime_c__String__init(&ros_message->mag_var_direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mag_var_direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mag_var_direction'\n");
      return false;
    }
  }

  // Field name: mode_indicator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mode_indicator.data) {
      rosidl_runtime_c__String__init(&ros_message->mode_indicator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mode_indicator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode_indicator'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nmea_msgs
size_t get_serialized_size_nmea_msgs__msg__Gprmc(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gprmc__ros_msg_type * ros_message = static_cast<const _Gprmc__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name message_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_id.size + 1);
  // field.name utc_seconds
  {
    size_t item_size = sizeof(ros_message->utc_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->position_status.size + 1);
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_dir
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lat_dir.size + 1);
  // field.name lon_dir
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lon_dir.size + 1);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track
  {
    size_t item_size = sizeof(ros_message->track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->date.size + 1);
  // field.name mag_var
  {
    size_t item_size = sizeof(ros_message->mag_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_var_direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mag_var_direction.size + 1);
  // field.name mode_indicator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode_indicator.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Gprmc__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nmea_msgs__msg__Gprmc(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nmea_msgs
size_t max_serialized_size_nmea_msgs__msg__Gprmc(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: message_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: utc_seconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_dir
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lon_dir
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: date
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mag_var
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_var_direction
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mode_indicator
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Gprmc__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nmea_msgs__msg__Gprmc(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Gprmc = {
  "nmea_msgs::msg",
  "Gprmc",
  _Gprmc__cdr_serialize,
  _Gprmc__cdr_deserialize,
  _Gprmc__get_serialized_size,
  _Gprmc__max_serialized_size
};

static rosidl_message_type_support_t _Gprmc__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gprmc,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nmea_msgs, msg, Gprmc)() {
  return &_Gprmc__type_support;
}

#if defined(__cplusplus)
}
#endif
