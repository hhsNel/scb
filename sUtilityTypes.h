/*
 $b
 $B (3) (Utility file defining data types)
*/

#ifndef S_UTILITY_TYPES_H
#define S_UTILITY_TYPES_H

/*
 $m (Please note that types with prefixes such as 'p-' are deprecated and should ) $s (NOT) $m ( be used.)
*/

/*
 $c
 $B (4) (Integers, Pointers to integers)
 $d sut_int8) (8 bit wide integer type)
 $d sut_pint8) (pointer to an 8 bit wide integer type)
*/
#ifndef sut_int8
#include <stdint.h>
#define sut_int8 int8_t
#define sut_pint8 sut_int8*
#endif

/*
 $d sut_int16) (16 bit wide integer type)
 $d sut_pint16) (pointer to a 16 bit wide integer type)
*/
#ifndef sut_int16
#include <stdint.h>
#define sut_int16 int16_t
#define sut_pint16 sut_int16*
#endif

/*
 $d sut_int32) (32 bit wide integer type)
 $d sut_pint32) (pointer to a 32 bit wide integer type)
*/
#ifndef sut_int32
#include <stdint.h>
#define sut_int32 int32_t
#define sut_pint32 sut_int32*
#endif

/*
 $d sut_int64) (64 bit wide integer type)
 $d sut_pint64) (pointer to a 64 bit wide integer type)
*/
#ifndef sut_int64
#include <stdint.h>
#define sut_int64 int64_t
#define sut_pint64 sut_int64*
#endif

/*
 $d sut_uint8) (8 bit wide unsigned integer type)
 $d sut_puint8) (pointer to an 8 bit wide unsigned integer type)
*/
#ifndef sut_uint8
#include <stdint.h>
#define sut_uint8 uint8_t
#define sut_puint8 sut_uint8*
#endif

/*
 $d sut_uint16) (16 bit wide unsigned integer type)
 $d sut_puint16) (pointer to a 16 bit wide unsigned integer type)
*/
#ifndef sut_uint16
#include <stdint.h>
#define sut_uint16 uint16_t
#define sut_puint16 sut_uint16*
#endif

/*
 $d sut_uint32) (32 bit wide unsigned integer type)
 $d sut_puint32) (pointer to a 32 bit wide unsigned integer type)
*/
#ifndef sut_uint32
#include <stdint.h>
#define sut_uint32 uint32_t
#define sut_puint32 sut_uint32*
#endif

/*
 $d sut_uint64) (64 bit wide unsigned integer type)
 $d sut_puint64) (pointer to a 64 bit wide unsigned integer type)
*/
#ifndef sut_uint64
#include <stdint.h>
#define sut_uint64 uint64_t
#define sut_puint64 sut_uint64*
#endif

/*
 $d sut_intmax) (maximum width integer type)
 $d sut_pintmax) (pointer to a maximum width integer type)
*/
#ifndef sut_intmax
#include <stdint.h>
#define sut_intmax intmax_t
#define sut_pintmax sut_intmax*
#endif

/*
 $d sut_intptr) (pointer width integer type)
*/
#ifndef sut_intptr
#include <stdint.h>
#define sut_intptr intptr_t
#endif

/*
 $d sut_uintmax) (maximum width unsigned integer type)
 $d sut_puintmax) (pointer to a maximum width unsigned integer type)
*/
#ifndef sut_uintmax
#include <stdint.h>
#define sut_uintmax uintmax_t
#define sut_puintmax sut_uintmax*
#endif

/*
 $d sut_uintptr) (pointer width unsigned integer type)
*/
#ifndef sut_uintptr
#include <stdint.h>
#define sut_uintptr uintptr_t
#endif

/*
 $c
 $B (4) (Low level types)
 $d sut_byte) (byte data type)
*/
#ifndef sut_byte
#define sut_byte sut_int8
#endif

/*
 $d sut_word) (word data type)
*/
#ifndef sut_word
#define sut_word sut_int16
#endif

/*
 $d sut_dword) (dword data type)
*/
#ifndef sut_dword
#define sut_dword sut_int32
#endif

/*
 $d sut_qword) (qword data type)
*/
#ifndef sut_qword
#define sut_qword sut_int64
#endif

/*
 $c
 $B (4) (Discrete types)
 $d sut_bool) (boolean data type)
 $d (su_true) (boolean constant casting to nonzero values)
 $d (strue) (alias of `su_true`)
 $d (su_false) (boolean constant casting to zero)
 $d (sfalse) (alias of `su_false`)
*/
#ifndef sut_bool
#define sut_bool sut_int8
#define su_true (1)
#define strue su_true
#define su_false (0)
#define sfalse su_false
#endif

/*
 $c
 $B (4) (Pointers and related types)
 $d sut_size) (data size type)
*/
#ifndef sut_size
#define sut_size size_t
#endif

/*
 $d sut_voidptr) (void pointer)
*/
#ifndef sut_voidptr
#define sut_voidptr void*
#endif

/*
 $d sut_unsafeptr) (an alias of sut_voidptr, used without any checks)
*/
#ifndef sut_unsafeptr
#define sut_unsafeptr sut_voidptr
#endif

/*
 $d sut_safeptr) (an alias of sut_voidptr, used with checks in place)
*/
#ifndef sut_safeptr
#define sut_safeptr sut_voidptr
#endif

#endif

