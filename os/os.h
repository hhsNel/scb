#ifndef S_OS_H
#define S_OS_H

#define S_OS_PREFIX SCONCATX(SCB_PREFIX, os)
SMAKE_NAMESPACE(os)

	/*
	 $f (svoidptr const) (heap_alloc)
	 $a (ssize) (chunk_size) (size to be allocated on the heap)
	 $a (sword) (flags) (additional flags)
	*/
	svoidptr const SMAKE_NAME(S_OS_PREFIX, heap_alloc) (ssize chunk_size, sint8 flags);
	/*
	 $f (sbool) (heap_free)
	 $a (svoidptr) (allocated_chunk) (previously allocated memory chunk)
	*/
	sbool          SMAKE_NAME(S_OS_PREFIX, heap_free)  (svoidptr allocated_chunk);

S_END_NAMESPACE

#include "os.c"

#endif

