#include <sys/mman.h>

S_JUMP_NAMESPACE(os)

	svoidptr SMAKE_NAME(S_OS_PREFIX, vmem_alloc) (svoidptr address, ssize length, sword protection) {
		sint prot = 0;
		if(protection & SOS_MEM_PROT_READ) prot |= PROT_READ;
		if(protection & SOS_MEM_PROT_WRITE) prot |= PROT_WRITE;
		if(protection & SOS_MEM_PROT_EXEC) prot |= PROT_EXEC;
		if(protection == SOS_MEM_PROT_NONE) prot == PROT_NONE;

		return mmap(address, length, prot, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	}

	sbool SMAKE_NAME(S_OS_PREFIX, vmem_free) (svoidptr address, ssize length) {
		return munmap(address, length);
	}

S_EXIT_NAMESPACE

