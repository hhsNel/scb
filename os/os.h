#ifndef S_OS_H
#define S_OS_H

#define S_OS_PREFIX SCONCATX(SCB_PREFIX, os)
SMAKE_NAMESPACE(os)

	svoidptr const SMAKE_NAME(S_OS_PREFIX, heap_alloc) (ssize chunk_size, sint8 flags);
	void           SMAKE_NAME(S_OS_PREFIX, heap_free)  (svoidptr allocated_chunk);

S_END_NAMESPACE

#include "os.def.h"

#endif

