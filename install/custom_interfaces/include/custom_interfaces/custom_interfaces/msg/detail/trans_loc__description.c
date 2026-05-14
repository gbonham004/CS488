// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/TransLoc.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/trans_loc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__TransLoc__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x63, 0x11, 0xbd, 0x95, 0xfa, 0x6c, 0xb3,
      0x34, 0xe3, 0xfb, 0xe4, 0x97, 0xf3, 0x12, 0xd3,
      0x28, 0x3a, 0x22, 0x1c, 0xb9, 0x85, 0xfd, 0xbb,
      0x9d, 0xe6, 0xf6, 0xef, 0x3f, 0x30, 0x31, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__TransLoc__TYPE_NAME[] = "custom_interfaces/msg/TransLoc";

// Define type names, field names, and default values
static char custom_interfaces__msg__TransLoc__FIELD_NAME__x[] = "x";
static char custom_interfaces__msg__TransLoc__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__TransLoc__FIELDS[] = {
  {
    {custom_interfaces__msg__TransLoc__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__TransLoc__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__TransLoc__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__TransLoc__TYPE_NAME, 30, 30},
      {custom_interfaces__msg__TransLoc__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__TransLoc__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__TransLoc__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__TransLoc__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__TransLoc__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
