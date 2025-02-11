#include <sys/mman.h>
#include <unistd.h>
#include <sys/resource.h>

S_JUMP_NAMESPACE(os)

	svoidptr SMAKE_NAME(S_OS_PREFIX, vmem_alloc) (svoidptr address, ssize length, sword protection) {
		sint prot = 0;
		if(protection & SOS_MEM_PROT_READ) prot |= PROT_READ;
		if(protection & SOS_MEM_PROT_WRITE) prot |= PROT_WRITE;
		if(protection & SOS_MEM_PROT_EXEC) prot |= PROT_EXEC;
		if(protection == SOS_MEM_PROT_NONE) prot = PROT_NONE;

		return mmap(address, length, prot, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	}

	sbool SMAKE_NAME(S_OS_PREFIX, vmem_free) (svoidptr address, ssize length) {
		return munmap(address, length);
	}

	void SMAKE_NAME(S_OS_PREFIX, read_system_conf) (SMAKE_NAME(S_OS_PREFIX, system_conf) *conf) {
		if((conf->page_size = conf->vmem_alloc_address_granuality = sysconf(_SC_PAGESIZE)) == -1) {
			// errno
		}
		conf->min_vmem_address = sbrk(0);
		struct rlimit addrspacelim, stacklim;
		if(getrlimit(RLIMIT_AS, &addrspacelim)) {
			// errno
		}
		if(getrlimit(RLIMIT_STACK, &stacklim)) {
			// errno
		}
		conf->max_vmem_address = (svoidptr)(addrspacelim.rlim_max - stacklim.rlim_max);
	}

S_EXIT_NAMESPACE

