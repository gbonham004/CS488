// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/ObsList.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/obs_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__ObsList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0xdb, 0xbb, 0xb7, 0x4c, 0x02, 0x0d, 0x89,
      0xfd, 0x1b, 0x6c, 0xe8, 0xeb, 0xcf, 0xef, 0x20,
      0xd1, 0xe7, 0x3e, 0x68, 0xa0, 0xce, 0xc6, 0xaa,
      0x2f, 0x55, 0x87, 0x1b, 0x79, 0x0b, 0x38, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__ObsList__TYPE_NAME[] = "custom_interfaces/msg/ObsList";

// Define type names, field names, and default values
static char custom_interfaces__msg__ObsList__FIELD_NAME__x_list[] = "x_list";
static char custom_interfaces__msg__ObsList__FIELD_NAME__y_list[] = "y_list";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__ObsList__FIELDS[] = {
  {
    {custom_interfaces__msg__ObsList__FIELD_NAME__x_list, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__ObsList__FIELD_NAME__y_list, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__ObsList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__ObsList__TYPE_NAME, 29, 29},
      {custom_interfaces__msg__ObsList__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] x_list\n"
  "float64[] y_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__ObsList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__ObsList__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__ObsList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__ObsList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
