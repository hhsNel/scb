#ifndef S_CORE_H
#define S_CORE_H

/*
 $b
 $B (3) (core functions needed for other parts of SCB)
*/

#define S_CORE_PREFIX SCONCATX(SCB_PREFIX, core)
SMAKE_NAMESPACE(core)

	/*
	 $f (const svoidptr) (malloc)
	 $a (const ssize) (size) (size to be allocated)
	*/
	const svoidptr    SMAKE_NAME(S_CORE_PREFIX, malloc) (const ssize size);
	/*
	 $f (void) (free)
	 $a (const svoidptr) (ptr) (address previously allocated with malloc)
	*/
	void              SMAKE_NAME(S_CORE_PREFIX, free) (const svoidptr ptr);
	/*
	 $f (void) (nfree)
	 $a (svoidptr *const) (ptr) (address previously allocated with malloc)
	 $m (`nfree` calls `free`, then sets the pointer to NULL  )
	*/
	void              SMAKE_NAME(S_CORE_PREFIX, nfree) (svoidptr *const ptr);
	/*
	 $f (const svoidptr) (realloc)
	 $a (const svoidptr) (prev_ptr) (pointer to previously allocated address)
	 $a (const ssize) (size) (new desired size)
	*/
	const svoidptr    SMAKE_NAME(S_CORE_PREFIX, realloc) (const svoidptr prev_ptr, const ssize size);

S_END_NAMESPACE

#endif

