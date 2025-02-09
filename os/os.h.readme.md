(Function) `svoidptr const` `vmem_alloc`  
(Argument 0)
		`svoidptr` `address` - preffered starting address of allocated memory  
(Argument 1)
		`ssize` `length` - length in bytes of the allocated memory  
(Argument 2)
		`sword` `protection` - memory protection of the allocated chunk of memory  
(#defined constant) `SOS_MEM_PROT_READ` - whether the memory can be read  
(#defined constant) `SOS_MEM_PROT_WRITE` - whether the memory can be written  
(#defined constant) `SOS_MEM_PROT_EXEC` - whether the memory can be executed  
(#defined constant) `SOS_MEM_PROT_NONE` - signifies no access to memory  
(Function) `sbool` `vmem_free`  
(Argument 0)
		`svoidptr` `address` - address of a previously allocated memory chunk  
(Argument 1)
		`ssize` `length` - length to be unallocated  
