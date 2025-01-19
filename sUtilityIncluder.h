/*
 $b
 $B (3) (Header file to automatically include other header files with slight tweaks)
 $m (Instead of duplicating code with slight tweaks, its better to follow the DRY principle. 
Including this file, you need to specify the following:)
 $p
 $T (2)
 $h (Defined name)		$h (Purpose)
 $t (SUI_INCLUDE_TARGET)	$t (Name $(In "" quotes$) of the file to be included. Needs to be relative path from this file)
 $t (SUI_BASE_NAME)		$t (The base name, to be tweaked by different SUI_ settings)
	 $t (SUI_VARIATE_FRACTIONAL_0)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_0 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_0 will be DUI_DEFAULT_FRACTIONAL_0)
	 $t (SUI_VARIATE_FRACTIONAL_1)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_1 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_1 will be DUI_DEFAULT_FRACTIONAL_1)
	 $t (SUI_VARIATE_FRACTIONAL_2)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_2 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_2 will be DUI_DEFAULT_FRACTIONAL_2)
	 $t (SUI_VARIATE_FRACTIONAL_3)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_3 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_3 will be DUI_DEFAULT_FRACTIONAL_3)
*/

#ifndef SUI_YES
#define SUI_YES 1
#endif
#ifndef SUI_NO
#define SUI_NO 0
#endif

#if SUI_VARIATE_FRACTIONAL_0 == SUI_YES
	#define SUI_VARIATE_FRACTIONAL_0 SUI_NO
	#define SUI_FRACTIONAL_0_SUFFIX f
	#define SUI_TARGET_FRACTIONAL_0 sfloat
	#include __FILE__
	#define SUI_FRACTIONAL_0_SUFFIX d
	#define SUI_TARGET_FRACTIONAL_0 sdouble
	#include __FILE__
	#define SUI_FRACTIONAL_0_SUFFIX ld
	#define SUI_TARGET_FRACTIONAL sldouble
	#include __FILE__
#elif SUI_VARIATE_FRACTIONAL_1 == SUI_YES
	#define SUI_VARIATE_FRACTIONAL_1 SUI_NO
	#define SUI_FRACTIONAL_1_SUFFIX f
	#define SUI_TARGET_FRACTIONAL_1 sfloat
	#include __FILE__
	#define SUI_FRACTIONAL_1_SUFFIX d
	#define SUI_TARGET_FRACTIONAL_1 sdouble
	#include __FILE__
	#define SUI_FRACTIONAL_1_SUFFIX ld
	#define SUI_TARGET_FRACTIONAL sldouble
	#include __FILE__
#elif SUI_VARIATE_FRACTIONAL_2 == SUI_YES
	#define SUI_VARIATE_FRACTIONAL_2 SUI_NO
	#define SUI_FRACTIONAL_2_SUFFIX f
	#define SUI_TARGET_FRACTIONAL_2 sfloat
	#include __FILE__
	#define SUI_FRACTIONAL_2_SUFFIX d
	#define SUI_TARGET_FRACTIONAL_2 sdouble
	#include __FILE__
	#define SUI_FRACTIONAL_2_SUFFIX ld
	#define SUI_TARGET_FRACTIONAL sldouble
	#include __FILE__
#elif SUI_VARIATE_FRACTIONAL_3 == SUI_YES
	#define SUI_VARIATE_FRACTIONAL_3 SUI_NO
	#define SUI_FRACTIONAL_3_SUFFIX f
	#define SUI_TARGET_FRACTIONAL_3 sfloat
	#include __FILE__
	#define SUI_FRACTIONAL_3_SUFFIX d
	#define SUI_TARGET_FRACTIONAL_3 sdouble
	#include __FILE__
	#define SUI_FRACTIONAL_3_SUFFIX ld
	#define SUI_TARGET_FRACTIONAL sldouble
	#include __FILE__
#else

#include SUI_INCLUDE_TARGET

#endif

