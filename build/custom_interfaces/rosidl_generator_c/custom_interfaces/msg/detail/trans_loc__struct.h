// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/TransLoc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/trans_loc.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TRANS_LOC__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__TRANS_LOC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TransLoc in the package custom_interfaces.
typedef struct custom_interfaces__msg__TransLoc
{
  double x;
  double y;
} custom_interfaces__msg__TransLoc;

// Struct for a sequence of custom_interfaces__msg__TransLoc.
typedef struct custom_interfaces__msg__TransLoc__Sequence
{
  custom_interfaces__msg__TransLoc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__TransLoc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TRANS_LOC__STRUCT_H_
