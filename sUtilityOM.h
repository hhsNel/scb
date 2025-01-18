/*
 $b
 $B (3) (Overridable macro definitions)
*/

#ifndef S_UTILITY_OVERRIDABLE_MACROS_H
#define S_UTILITY_OVERRIDABLE_MACROS_H

/*
 $M (s_sqrt) (overridable macro pointing to a square root function)
*/
#ifndef s_sqrt
#include <math.h>
#define s_sqrt sqrt
#endif

/*
 $M (s_malloc) (overridable macro pointing to a malloc function)
*/
#ifndef s_malloc
#include <stdlib.h>
#define s_malloc malloc
#endif

#endif

