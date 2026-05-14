// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/ObsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/obs_list.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'x_list'
// Member 'y_list'
// Member 'd_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ObsList in the package custom_interfaces.
typedef struct custom_interfaces__msg__ObsList
{
  rosidl_runtime_c__double__Sequence x_list;
  rosidl_runtime_c__double__Sequence y_list;
  rosidl_runtime_c__double__Sequence d_list;
} custom_interfaces__msg__ObsList;

// Struct for a sequence of custom_interfaces__msg__ObsList.
typedef struct custom_interfaces__msg__ObsList__Sequence
{
  custom_interfaces__msg__ObsList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__ObsList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__STRUCT_H_
