#ifndef S_OS_H
#define S_OS_H

#define S_OS_PREFIX SCONCATX(SCB_PREFIX, os)
SMAKE_NAMESPACE(os)

	/*
	 $f (svoidptr const) (vmem_alloc)
	 $a (svoidptr) (address) (preffered starting address of allocated memory)
	 $a (ssize) (length) (length in bytes of the allocated memory)
	 $a (sword) (protection) (memory protection of the allocated chunk of memory)
	*/
	svoidptr const SMAKE_NAME(S_OS_PREFIX, vmem_alloc)          (svoidptr address, ssize length, sword protection);
	/*
	 $d (SOS_MEM_PROT_READ) (whether the memory can be read)
	 $d (SOS_MEM_PROT_WRITE) (whether the memory can be written)
	 $d (SOS_MEM_PROT_EXEC) (whether the memory can be executed)
	 $d (SOS_MEM_PROT_NONE) (signifies no access to memory)
	*/
	#define SOS_MEM_PROT_READ  0
	#define SOS_MEM_PROT_WRITE 1
	#define SOS_MEM_PROT_EXEC  2
	#define SOS_MEM_PROT_NONE 3
	/*
	 $f (sbool) (vmem_free)
	 $a (svoidptr) (address) (address of a previously allocated memory chunk)
	 $a (ssize) (length) (length to be unallocated)
	*/
	sbool          SMAKE_NAME(S_OS_PREFIX, vmem_free)           (svoidptr address, ssize length);
	/*
	 f (ssize) (vmem_min_alloc_page)
	*/
	ssize const    SMAKE_NAME(S_OS_PREFIX, vmem_min_alloc_page) ();

S_END_NAMESPACE

#include "os.c"

#endif

