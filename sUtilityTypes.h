/*
 $b
 $B (3) (Utility file defining data types)
*/

#ifndef S_UTILITY_TYPES_H
#define S_UTILITY_TYPES_H

/*
 $d (sut_int8) (8 bit wide integer type)
*/
#ifndef sut_int8
#include <stdint.h>
#define sut_int8 int8_t
#endif

/*
 $d (sut_int16) (16 bit wide integer type)
*/
#ifndef sut_int16
#include <stdint.h>
#define sut_int16 int16_t
#endif

/*
 $d (sut_int32) (32 bit wide integer type)
*/
#ifndef sut_int32
#include <stdint.h>
#define sut_int32 int32_t
#endif

/*
 $d (sut_int64) (64 bit wide integer type)
*/
#ifndef sut_int64
#include <stdint.h>
#define sut_int64 int64_t
#endif

#ifndef S_UTILITY_TYPES_H
#define S_UTILITY_TYPES_H

/*
 $d (sut_uint8) (8 bit wide unsigned integer type)
*/
#ifndef sut_uint8
#include <stdint.h>
#define sut_uint8 uint8_t
#endif

/*
 $d (sut_uint16) (16 bit wide unsigned integer type)
*/
#ifndef sut_uint16
#include <stdint.h>
#define sut_uint16 uint16_t
#endif

/*
 $d (sut_uint32) (32 bit wide unsigned integer type)
*/
#ifndef sut_uint32
#include <stdint.h>
#define sut_uint32 uint32_t
#endif

/*
 $d (sut_uint64) (64 bit wide unsigned integer type)
*/
#ifndef sut_uint64
#include <stdint.h>
#define sut_uint64 uint64_t
#endif

/*
 $d (sut_intmax) (maximum width integer type)
*/
#ifndef sut_intmax
#include <stdint.h>
#define sut_intmax intmax_t
#endif

/*
 $d (sut_intptr_t) (pointer width integer type)
*/
#ifndef sut_intptr
#include <stdint.h>
#define sut_intptr intptr_t
#endif

#endif

