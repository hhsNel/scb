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
	 $t (SUI_VARIATE_FRACTIONAL_0)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_0 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_0 will be SUI_DEFAULT_FRACTIONAL_0)
	 $t (SUI_VARIATE_FRACTIONAL_1)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_1 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_1 will be SUI_DEFAULT_FRACTIONAL_1)
	 $t (SUI_VARIATE_FRACTIONAL_2)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_2 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_2 will be SUI_DEFAULT_FRACTIONAL_2)
	 $t (SUI_VARIATE_FRACTIONAL_3)	$t (If SUI_YES, the target will be included thrice with SUI_TARGET_FRACTIONAL_3 set to sfloat, sdouble and sldouble, and SUI_TARGET_NAME appended with -f, -d and -ld. If SUI_NO, SUI_TARGET_FRACTIONAL_3 will be SUI_DEFAULT_FRACTIONAL_3)
	 $t (SUI_VARIATE_INTEGER_0)	$t (If SUI_YES, the target will be included four times with SUI_TARGET_INTEGER_0 set to sshortint, sint, slongint, sllint and SUI_TARGET_NAME appended with -s, -l and -ll. If SUI_NO, SUI_TARGET_INTEGER_0 will be SUI_DEFAULT_INTEGER_0)
	 $t (SUI_VARIATE_INTEGER_1)	$t (If SUI_YES, the target will be included four times with SUI_TARGET_INTEGER_1 set to sshortint, sint, slongint, sllint and SUI_TARGET_NAME appended with -s, -l and -ll. If SUI_NO, SUI_TARGET_INTEGER_1 will be SUI_DEFAULT_INTEGER_1)
	 $t (SUI_VARIATE_INTEGER_2)	$t (If SUI_YES, the target will be included four times with SUI_TARGET_INTEGER_2 set to sshortint, sint, slongint, sllint and SUI_TARGET_NAME appended with -s, -l and -ll. If SUI_NO, SUI_TARGET_INTEGER_2 will be SUI_DEFAULT_INTEGER_2)
	 $t (SUI_VARIATE_INTEGER_3)	$t (If SUI_YES, the target will be included four times with SUI_TARGET_INTEGER_3 set to sshortint, sint, slongint, sllint and SUI_TARGET_NAME appended with -s, -l and -ll. If SUI_NO, SUI_TARGET_INTEGER_3 will be SUI_DEFAULT_INTEGER_3)
	 $t (SUI_TARGET_TYPE_0)		$t(Any type. Used by the target)
	 $t (SUI_TARGET_TYPE_1)		$t(Any type. Used by the target)
	 $t (SUI_TARGET_TYPE_2)		$t(Any type. Used by the target)
	 $t (SUI_TARGET_TYPE_3)		$t(Any type. Used by the target)
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
#elif SUI_VARIATE_INTEGER_0
	#define SUI_VARIATE_INTEGER_0
	#define SUI_INTEGER_0_SUFFIX s
	#define SUI_TARGET_INTEGER_0 sshortint
	#include __FILE__
	#define SUI_INTEGER_0_SUFFIX 
	#define SUI_TARGET_INTEGER_0 sint
	#include __FILE__
	#define SUI_INTEGER_0_SUFFIX l
	#define SUI_TARGET_INTEGER_0 slongint
	#include __FILE__
	#define SUI_INTEGER_0_SUFFIX ll
	#define SUI_TARGET_INTEGER_0 sllint
	#include __FILE__
#elif SUI_VARIATE_INTEGER_1
	#define SUI_VARIATE_INTEGER_1
	#define SUI_INTEGER_1_SUFFIX s
	#define SUI_TARGET_INTEGER_1 sshortint
	#include __FILE__
	#define SUI_INTEGER_1_SUFFIX 
	#define SUI_TARGET_INTEGER_1 sint
	#include __FILE__
	#define SUI_INTEGER_1_SUFFIX l
	#define SUI_TARGET_INTEGER_1 slongint
	#include __FILE__
	#define SUI_INTEGER_1_SUFFIX ll
	#define SUI_TARGET_INTEGER_1 sllint
	#include __FILE__
#elif SUI_VARIATE_INTEGER_2
	#define SUI_VARIATE_INTEGER_2
	#define SUI_INTEGER_2_SUFFIX s
	#define SUI_TARGET_INTEGER_2 sshortint
	#include __FILE__
	#define SUI_INTEGER_2_SUFFIX 
	#define SUI_TARGET_INTEGER_2 sint
	#include __FILE__
	#define SUI_INTEGER_2_SUFFIX l
	#define SUI_TARGET_INTEGER_2 slongint
	#include __FILE__
	#define SUI_INTEGER_2_SUFFIX ll
	#define SUI_TARGET_INTEGER_2 sllint
	#include __FILE__
#elif SUI_VARIATE_INTEGER_3
	#define SUI_VARIATE_INTEGER_3
	#define SUI_INTEGER_3_SUFFIX s
	#define SUI_TARGET_INTEGER_3 sshortint
	#include __FILE__
	#define SUI_INTEGER_3_SUFFIX 
	#define SUI_TARGET_INTEGER_3 sint
	#include __FILE__
	#define SUI_INTEGER_3_SUFFIX l
	#define SUI_TARGET_INTEGER_3 slongint
	#include __FILE__
	#define SUI_INTEGER_3_SUFFIX ll
	#define SUI_TARGET_INTEGER_3 sllint
	#include __FILE__
#else

#include SUI_INCLUDE_TARGET

#endif

