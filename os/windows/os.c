#include <windows.h>

S_JUMP_NAMESPACE(os)

	svoidptr SMAKE_NAME(S_OS_PREFIX, vmem_alloc) (svoidptr address, ssize length, sword protection) {
		sint prot = 0;
		if(protection & SOS_MEM_PROT_READ) prot = PAGE_READONLY;
		if(protection & SOS_MEM_PROT_WRITE) prot = PAGE_READWRITE;	// write-only DNE on windows
		if(protection & SOS_MEM_PROT_EXEC) prot = PAGE_EXECUTE;
		if(protection & SOS_MEM_PROT_READ && protection & SOS_MEM_PROT_WRITE) prot = PAGE_READWRITE;
		if(protection & SOS_MEM_PROT_READ && protection & SOS_MEM_PROT_EXEC) prot = PAGE_EXECUTE_READ;
		if(protection & SOS_MEM_PROT_WRITE && protection & SOS_MEM_PROT_EXEC) prot = PAGE_EXECUTE_READWRITE;	// exec and write only DNE on windows;
		if(protection & SOS_MEM_PROT_READ && protection & SOS_MEM_PROT_WRITE && protection & SOS_MEM_PROT_EXEC) prot = PAGE_EXECUTE_READWRITE;
		return VirtualAlloc(address, length, MEM_COMMIT | MEM_RESERVE, prot);
	}

	sbool SMAKE_NAME(S_OS_PREFIX, vmem_free) (svoidptr address, ssize length) {
		return !VirtualFree(address, 0, MEM_DECOMMIT | MEM_RELEASE);	// windows can only free whole chunks of memory
	}

	void SMAKE_NAME(S_OS_PREFIX, read_system_conf) (SMAKE_NAME(S_OS_PREFIX, system_conf) *conf) {
		SYSTEM_INFO si;
		GetSystemInfo(&si);
		conf->min_vmem_address = si.lpMinimumApplicationAddress;
		conf->max_vmem_address = si.lpMaximumApplicationAddress;
		conf->page_size = si.dwPageSize;
		conf->vmem_alloc_address_granularity = si.dwAllocationGranularity;
	}

S_EXIT_NAMESPACE
