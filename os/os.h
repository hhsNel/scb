#ifndef S_OS_H
#define S_OS_H

/*
 $b
 $B (3) (Operating System dependant functions)
*/

#define S_OS_PREFIX SCONCATX(SCB_PREFIX, os)
SMAKE_NAMESPACE(os)

	/*
	 $B (4) (Memory functions)
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
	#define SOS_MEM_PROT_READ  1
	#define SOS_MEM_PROT_WRITE 2
	#define SOS_MEM_PROT_EXEC  4
	#define SOS_MEM_PROT_NONE 8
	/*
	 $f (sbool) (vmem_free)
	 $a (svoidptr) (address) (address of a previously allocated memory chunk)
	 $a (ssize) (length) (length to be unallocated)
	*/
	sbool          SMAKE_NAME(S_OS_PREFIX, vmem_free)           (svoidptr address, ssize length);
	/*
	 $c
	 $B (4) (System information functions)
	 $m (`system_conf.min_vmem_address` - lowest address at which allocation is possible  )
	 $m (`system_conf.max_vmem_address` - highest address at which allocation is possible  )
	 $m (`system_conf.page_size` - the physical memory page size  )
	 $m (`system_conf.vmem_alloc_address_granuality` - the minimum difference of addresses on which the allocation is possible  )
	*/
	typedef struct SCONCATX(_, SMAKE_NAME(S_OS_PREFIX, system_conf)) {
		svoidptr min_vmem_address;
		svoidptr max_vmem_address;
		ssize    page_size;
		ssize    vmem_alloc_address_granuality;
	} SMAKE_NAME(S_OS_PREFIX, system_conf);
	/*
	 $f (void) (read_system_conf)
	 $a (system_conf *) (conf) (the system configuration is written to this structure)
	*/
	void           SMAKE_NAME(S_OS_PREFIX, read_system_conf)      (SMAKE_NAME(S_OS_PREFIX, system_conf) *conf);

S_END_NAMESPACE

#endif

