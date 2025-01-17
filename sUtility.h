/*
 $b
 $B (3) (Utility definitions)
*/

#ifndef S_UTILITY_H
#define S_UTILITY_H

/*
 $d (SU_SECURITY_WARNINGS_OFF) (turns warnings off on some compilers)
 $d (SU_SECURITY_WARNINGS_ON) (turns warnings on on some compilers)
 $d (SU_SECURITY_WARNINGS) (switches between warnings on/off $(by defining _CRT_SECURE_NO_WARNINGS$). Default is SU_SECURITY_WARNINGS_OFF) 
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
 $F
 $d (SU_CPP_SYNTAX) (adapts c++ syntax when it varies from c syntax)
 $d (SU_C_SYNTAX) (adapts c syntax when it varies from c++ syntax)
 $d (SU_LANGUAGE_SYNTAX) (switches between c and c++ syntax when they vary. Default is synched with __cplusplus)
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
 $F
 $M (SU_ZERO_STRUCT) (zeros a struct of a given type)
*/
#if SU_LANGUAGE_SYNTAX == SU_CPP_SYNTAX
#define SU_ZERO_STRUCT(type) {}
#else
#define SU_ZERO_STRUCT(type) (type){0}
#endif

/*
 $F
 $M (SU_ZERO_GLOBAL_STRUCT) (zeros a global struct of a given type)
*/
#if SU_LANGUAGE_SYNTAX == SU_CPP_SYNTAX
#define SU_ZERO_GLOBAL_STRUCT(type) {}
#else
#define SU_ZERO_GLOBAL_STRUCT(type) {0}
#endif

/*
 $F
 $M (s_sqrt) (overridable macro pointing to a square root function)
*/
#ifndef s_sqrt
#include <math.h>
#define s_sqrt sqrt
#endif

/*
 $F
 $M (s_malloc) (overridable macro pointing to a malloc function)
*/
#ifndef s_malloc
#include <stdlib.h>
#define s_malloc malloc
#endif

#endif

