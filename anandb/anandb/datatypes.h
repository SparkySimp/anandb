#pragma once

#include <limits>

typedef struct __anandb_uint128 {
	unsigned octet1 : 64;
	unsigned octet2 : 64;
} anandb_uint128;

template <unsigned UMaxLen> struct __anandb_string {
	char32_t con[UMaxLen];
};

template <unsigned UMaxLen = INT_MAX> using anandb_string = __anandb_string<UMaxLen>;

typedef struct __anandb_uint8 {
	unsigned octet : 8;
} anandb_uint8;