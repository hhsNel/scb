#ifndef SCB_H
#define SCB_H

#include "sUtility.h"

#define SCB_PREFIX s

SMAKE_NAMESPACE(scb)
	#include "os/os.h"
S_END_NAMESPACE

S_JUMP_NAMESPACE(scb)
	#include "os/os.c"
S_EXIT_NAMESPACE

#endif

