/*
 $b
 $B (3) (Macro definitions)
*/

#ifndef S_UTILITY_MACROS_H
#define S_UTILITY_MACROS_H

/*
 $M (SU_ZERO_STRUCT) (zeros a struct of a given type)
*/
#if SU_LANGUAGE_SYNTAX == SU_CPP_SYNTAX
#define SU_ZERO_STRUCT(type) {}
#else
#define SU_ZERO_STRUCT(type) (type){0}
#endif

/*
 $M (SU_ZERO_GLOBAL_STRUCT) (zeros a global struct of a given type)
*/
#if SU_LANGUAGE_SYNTAX == SU_CPP_SYNTAX
#define SU_ZERO_GLOBAL_STRUCT(type) {}
#else
#define SU_ZERO_GLOBAL_STRUCT(type) {0}
#endif

/*
 $M (SCONCAT) (concatenates two values without evaluating them)
*/
#ifndef SCONCAT
#define SCONCAT(A,B) A##B
#endif

/*
 $M (SCONCATX) (evaluates two values, then concatenates them)
*/
#ifndef SCONCATX
#define SCONCATX(A,B) SCONCAT(A,B)
#endif

/*
 $M (SCONCAT3) (concatenates three values without evaluating them)
*/
#ifndef SCONCAT3
#define SCONCAT3(A,B,C) A##B##C
#endif

/*
 $M (SCONCAT3X) (evaluates three values, then concatenates them)
*/
#ifndef SCONCAT3X
#define SCONCAT3X(A,B,C) SCONCAT3(A,B,C)
#endif

/*
 $M (SCONCAT5) (concatenates five values without evaluating them)
*/
#ifndef SCONCAT5
#define SCONCAT5(A,B,C,D,E) A##B##C##D##E
#endif

/*
 $M (SCONCAT5X) (evaluates five values, then concatenates them)
*/
#ifndef SCONCAT5X
#define SCONCAT5X(A,B,C,D,E) SCONCAT5(A,B,C,D,E)
#endif

/*
 $M (SSTRING) (puts ""s $(quotes$) around the argument)
*/
#ifndef SSTRING
#define SSTRING(A) #A
#endif

/*
 $M (SSTRINGX) (evaluates the argument, then stringifies it)
*/
#ifndef SSTRINGX
#define SSTRINGX(A) SSTRING(A)
#endif

/*
 $M (SEVAL) (evaluates the argument)
*/
#ifndef SEVAL
#define SEVAL(A) A
#endif

#endif

