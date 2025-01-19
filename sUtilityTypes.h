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
 $d (sut_int8) (8 bit wide integer type)
 $d (sint8) (alias of `sut_int8`)
 $d (sut_pint8) (pointer to an 8 bit wide integer type)
 $d (spint8) (alias of `sut_pint8`)
*/
#ifndef sut_int8
#include <stdint.h>
#define sut_int8 int8_t
#define sut_pint8 sut_int8*
#endif
#define sint8 sut_int8
#define spint8 sut_pint8

/*
 $d (sut_int16) (16 bit wide integer type)
 $d (sint16) (alias of `sut_int16`)
 $d (sut_pint16) (pointer to a 16 bit wide integer type)
 $d (spint16) (alias of `sut_pint16`)
*/
#ifndef sut_int16
#include <stdint.h>
#define sut_int16 int16_t
#define sut_pint16 sut_int16*
#endif
#define sint16 sut_int16
#define spint16 sut_pint16

/*
 $d (sut_int32) (32 bit wide integer type)
 $d (sint32) (alias of `sut_int32`)
 $d (sut_pint32) (pointer to a 32 bit wide integer type)
 $d (spint32) (alias of `sut_pint32`)
*/
#ifndef sut_int32
#include <stdint.h>
#define sut_int32 int32_t
#define sut_pint32 sut_int32*
#endif
#define sint32 sut_int32
#define spint32 sut_pint32

/*
 $d (sut_int64) (64 bit wide integer type)
 $d (sint64) (alias of `sut_int64`)
 $d (sut_pint64) (pointer to a 64 bit wide integer type)
 $d (spint64) (alias of `sut_pint64`)
*/
#ifndef sut_int64
#include <stdint.h>
#define sut_int64 int64_t
#define sut_pint64 sut_int64*
#endif
#define sint64 sut_int64
#define spint64 sut_pint64

/*
 $d (sut_uint8) (8 bit wide unsigned integer type)
 $d (suint8) (alias of `sut_uint8`)
 $d (sut_puint8) (pointer to an 8 bit wide unsigned integer type)
 $d (spuint8) (alias of `sut_puint8`)
*/
#ifndef sut_uint8
#include <stdint.h>
#define sut_uint8 uint8_t
#define sut_puint8 sut_uint8*
#endif
#define suint8 sut_uint8
#define spuint8 sut_puint8

/*
 $d (sut_uint16) (16 bit wide unsigned integer type)
 $d (suint16) (alias of `sut_uint16`)
 $d (sut_puint16) (pointer to a 16 bit wide unsigned integer type)
 $d (spuint16) (alias of `sut_puint16`)
*/
#ifndef sut_uint16
#include <stdint.h>
#define sut_uint16 uint16_t
#define sut_puint16 sut_uint16*
#endif
#define suint16 sut_uint16
#define spuint16 sut_puint16

/*
 $d (sut_uint32) (32 bit wide unsigned integer type)
 $d (suint32) (alias of `sut_uint32`)
 $d (sut_puint32) (pointer to a 32 bit wide unsigned integer type)
 $d (spuint32) (alias of `sut_puint32`)
*/
#ifndef sut_uint32
#include <stdint.h>
#define sut_uint32 uint32_t
#define sut_puint32 sut_uint32*
#endif
#define suint32 sut_uint32
#define spuint32 sut_puint32

/*
 $d (sut_uint64) (64 bit wide unsigned integer type)
 $d (suint64) (alias of `sut_uint64`)
 $d (sut_puint64) (pointer to a 64 bit wide unsigned integer type)
 $d (spuint64) (alias of `sut_puint64`)
*/
#ifndef sut_uint64
#include <stdint.h>
#define sut_uint64 uint64_t
#define sut_puint64 sut_uint64*
#endif
#define suint64 sut_uint64
#define spuint64 sut_puint64

/*
 $d (sut_intmax) (maximum width integer type)
 $d (sintmax) (alias of `sut_intmax`)
 $d (sut_pintmax) (pointer to a maximum width integer type)
 $d (spintmax) (alias of `sut_pintmax`)
*/
#ifndef sut_intmax
#include <stdint.h>
#define sut_intmax intmax_t
#define sut_pintmax sut_intmax*
#endif
#define sintmax sut_intmax
#define spintmax sut_pintmax

/*
 $d (sut_intptr) (pointer width integer type)
 $d (sintptr) (alias of `sut_intptr`)
*/
#ifndef sut_intptr
#include <stdint.h>
#define sut_intptr intptr_t
#endif
#define sintptr sut_intptr

/*
 $d (sut_uintmax) (maximum width unsigned integer type)
 $d (suintmax) (alias of `sut_uintmax`)
 $d (sut_puintmax) (pointer to a maximum width unsigned integer type)
 $d (spuintmax) (alias of `sut_puintmax`)
*/
#ifndef sut_uintmax
#include <stdint.h>
#define sut_uintmax uintmax_t
#define sut_puintmax sut_uintmax*
#endif
#define suintmax sut_uintmax
#define spuintmax sut_puintmax

/*
 $d (sut_uintptr) (pointer width unsigned integer type)
 $d (suintptr) (alias of `sut_uintptr`)
*/
#ifndef sut_uintptr
#include <stdint.h>
#define sut_uintptr uintptr_t
#endif
#define suintptr sut_uintptr

/*
 $c
 $B (4) (Low level types)
 $d (sut_byte) (byte data type)
 $d (sbyte) (alias of `sut_byte`)
*/
#ifndef sut_byte
#define sut_byte sut_int8
#endif
#define sbyte sut_byte

/*
 $d (sut_word) (word data type)
 $d (sword) (alias of `sut_word`)
*/
#ifndef sut_word
#define sut_word sut_int16
#endif
#define sword sut_word

/*
 $d (sut_dword) (dword data type)
 $d (sdword) (alias of `sut_dword`)
*/
#ifndef sut_dword
#define sut_dword sut_int32
#endif
#define sdword sut_dword

/*
 $d (sut_qword) (qword data type)
 $d (sqword) (alias of `sut_qword`)
*/
#ifndef sut_qword
#define sut_qword sut_int64
#endif
#define sqword sut_qword

/*
 $c
 $B (4) (Discrete types)
 $d (sut_bool) (boolean data type)
 $d (sbool) (alias of `sut_bool`)
 $d (su_true) (boolean constant casting to nonzero values)
 $d (strue) (alias of `su_true`)
 $d (su_false) (boolean constant casting to zero)
 $d (sfalse) (alias of `su_false`)
*/
#ifndef sut_bool
#define sut_bool sut_int8
#define su_true (1)
#define su_false (0)
#endif
#define sbool sut_bool
#define strue su_true
#define sfalse su_false

/*
 $c
 $B (4) (Pointers and related types)
 $d (sut_size) (data size type)
 $d (ssize) (alias of `sut_size`)
*/
#ifndef sut_size
#define sut_size size_t
#endif
#define ssize sut_size

/*
 $d (sut_voidptr) (void pointer)
 $d (svoidptr) (alias of `sut_voidptr`)
*/
#ifndef sut_voidptr
#define sut_voidptr void*
#endif
#define svoidptr sut_voidptr

/*
 $d (sut_unsafeptr) (an alias of sut_voidptr, used without any checks)
 $d (sunsafeptr) (alias of `sut_unsafeptr`)
*/
#ifndef sut_unsafeptr
#define sut_unsafeptr sut_voidptr
#endif
#define sunsafeptr sut_unsafeptr

/*
 $d (sut_safeptr) (an alias of sut_voidptr, used with checks in place)
 $d (ssafeptr) (alias of `sut_safeptr`)
*/
#ifndef sut_safeptr
#define sut_safeptr sut_voidptr
#endif
#define ssafeptr sut_safeptr

/*
 $c
 $B (4) (Built-in data types)
 $d (sut_int) (built-in int)
 $d (sint) (alias of `sut_int`)
*/
#ifndef sut_int
#define sut_int int
#endif
#define sint sut_int

/*
 $d (sut_uint) (built-in unsigned int)
 $d (suint) (alias of `sut_uint`)
*/
#ifndef sut_uint
#define sut_uint unsigned int
#endif
#define suint sut_uint

/*
 $d (sut_shortint) (built-in short int)
 $d (sshortint) (alias of `sut_shortint`)
*/
#ifndef sut_shortint
#define sut_shortint short int
#endif
#define sshortint sut_shortint

/*
 $d (sut_ushortint) (built-in unsigned short int)
 $d (sushortint) (alias of `sut_ushortint`)
*/
#ifndef sut_ushortint
#define sut_ushortint unsigned short int
#endif
#define sushortint sut_ushortint

/*
 $d (sut_longint) (built-in long int)
 $d (slongint) (alias of `sut_longint`)
*/
#ifndef sut_longint
#define sut_longint long int
#endif
#define slongint sut_longint

/*
 $d (sut_ulongint) (built-in unsigned long int)
 $d (sulongint) (alias of `sut_ulongint`)
*/
#ifndef sut_ulongint
#define sut_ulongint unsigned long int
#endif
#define sulongint sut_ulongint

/*
 $d (sut_longlongint) (built-in long long int)
 $d (sut_llint) (alias of `sut_longlongint`)
 $d (slonglongint) (alias of `sut_longlongint`)
 $d (sllint) (alias of `sut_longlongint`)
*/
#ifndef sut_longlongint
#define sut_longlongint long long int
#endif
#define sut_llint sut_longlongint
#define slonglongint sut_longlongint
#define sllint sut_longlongint

/*
 $d (sut_ulonglongint) (built-in unsigned long long int)
 $d (sut_ullint) (alias of `sut_ulonglongint`)
 $d (sulonglongint) (alias of `sut_ulonglongint`)
 $d (sullint) (alias of `sut_ulonglongint`)
*/
#ifndef sut_ulonglongint
#define sut_ulonglongint unsigned long long int
#endif
#define sut_ullint sut_ulonglongint
#define sulonglongint sut_ulonglongint
#define sullint sut_ulonglongint

/*
 $c
 $B (4) (Cheat sheet)

 $T (5)
 $h (Name)		$h (Alias $(es$))		$h (Length $(Bits$))		$h (Length $(Bytes$))		$h (Signed?)
 $t (sut_int8)		$t (sint8)			$t (8)				$t (1)				$t (0)
 $t (sut_uint8)		$t (suint8)			$t (8)				$t (1)				$t (1)
 $t (sut_int16)		$t (sint16)			$t (16)				$t (2)				$t (0)
 $t (sut_uint16)	$t (suint16)			$t (16)				$t (2)				$t (1)
 $t (sut_int32)		$t (sint32)			$t (32)				$t (4)				$t (0)
 $t (sut_uint32)	$t (suint32)			$t (32)				$t (4)				$t (1)
 $t (sut_int64)		$t (sint64)			$t (64)				$t (8)				$t (0)
 $t (sut_uint64)	$t (suint64)			$t (64)				$t (8)				$t (1)

 $t (sut_byte)		$t (sbyte)			$t (8)				$t (1)				$t (1)
 $t (sut_word)		$t (sword)			$t (16)				$t (2)				$t (1)
 $t (sut_dword)		$t (sdword)			$t (32)				$t (4)				$t (1)
 $t (sut_qword)		$t (sqword)			$t (64)				$t (8)				$t (1)

 $t (sut_bool)		$t (sbool)			$t (8 $(Min 1$))		$t (1)				$t (-)
 
 $t (sut_size)		$t (ssize)			$t (-)				$t (-)				$t (0)
 $t (sut_voidptr)	$t (svoidptr)			$t (-)				$t (-)				$t (-)
 $t (sut_unsafeptr)	$t (sunsafeptr)			$t (-)				$t (-)				$t (-)
 $t (sut_safeptr)	$t (ssafeptr)			$t (-)				$t (-)				$t (-)
*/

#endif

