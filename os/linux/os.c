#include <sys/mman.h>

S_JUMP_NAMESPACE(os)

	svoidptr SMAKE_NAME(vmem_alloc) (svoidptr address, ssize length, sword protection) {
		sint prot = 0;
		if(protection & S_OS_MEM_PROT_READ) prot |= PROT_READ;
		if(protection & S_OS_MEM_PROT_WRITE) prot |= PROT_WRITE;
		if(protection & S_OS_MEM_PROT_EXEC) prot |= PROT_EXEC;
		if(protection == S_OS_MEM_PROT_NONE) prot == PROT_NONE;

		return mmap(address, length, prot, MAP_PRIVATE | MAP_ANONUMOUS, -1, 0);
	}

S_EXIT_NAMESPACE

