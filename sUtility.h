/*
 $b
 $B (3) (Utility definitions)
*/

#ifndef S_UTILITY_H
#define S_UTILITY_H

/*
 $B (4) (QOL)
 $d (SU_SECURITY_WARNINGS_OFF) (turns warnings off on some compilers)
 $d (SU_SECURITY_WARNINGS_ON) (turns warnings on on some compilers)
 $d (SU_SECURITY_WARNINGS) (switches between warnings on/off $(by defining `_CRT_SECURE_NO_WARNINGS`$). Default is `SU_SECURITY_WARNINGS_OFF`) 
*/
#define SU_SECURITY_WARNINGS_OFF 0
#define SU_SECURITY_WARNINGS_ON 1
#if !defined(SU_SECURITY_WARNINGS)
#define SU_SECURITY_WARNINGS SU_SECURITY_WARNINGS_OFF
#endif
#if !defined(_CRT_SECURE_NO_WARNINGS) && (SU_SECURITY_WARNINGS == SU_SECURITY_WARNINGS_ON)
#define _CRT_SECURE_NO_WARNINGS
#endif



/*
 $c
 $B (4) (Global options)
 $d (SU_CPP_SYNTAX) (adapts c++ syntax when it varies from c syntax)
 $d (SU_C_SYNTAX) (adapts c syntax when it varies from c++ syntax)
 $d (SU_LANGUAGE_SYNTAX) (switches between c and c++ syntax when they vary. Default is synched with `__cplusplus`)
*/
#define SU_CPP_SYNTAX 0
#define SU_C_SYNTAX 1
#if !defined(SU_LANGUAGE_SYNTAX) && __cplusplus
#define SU_LANGUAGE_SYNTAX SU_CPP_SYNTAX
#else
#if !defined(SU_LANGUAGE_SYNTAX) && !__cplusplus
#define SU_LANGUAGE_SYNTAX SU_C_SYNTAX
#endif
#endif

/*
 $d (SU_PLATFORM_GENERIC_LINUX) (uses linux-specific headers when needed)
 $d (SU_PLATFORM_WINDOWS) (uses windows-specific headers when needed)
 $d (SU_TARGET_PLATFORM) (uses platform-specific headers when needed. Default is `SU_PLATFORM_GENERIC_LINUX`)
*/
#define SU_PLATFORM_GENERIC_LINUX 0
#define SU_PLATFORM_WINDOWS 1
#ifndef SU_TARGET_PLATFORM
#define SU_TARGET_PLATFORM SU_PLATFORM_GENERIC_LINUX
#endif

/*
 $c
 $B (4) (Included files)
 $m (sUtilityTypes.h)
 $F
 $m (sUtilityOM.h)
 $F
 $m (sUtilityMacros.h)
*/
#include "sUtilityTypes.h"
#include "sUtilityOM.h"
#include "sUtilityMacros.h"

#endif

