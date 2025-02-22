struct SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) {
	struct SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) *next;
	ssize chunk_size;
	sbool is_free : 1;
}

struct SMAKE_NAME(S_CORE_PREFIX, malloc_info) {
	struct SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) *first;
	ssize total_size;
	ssize alloc_size;
}

struct SMAKE_NAME(S_CORE_PREFIX, malloc_info) SMAKE_NAME(S_CORE_PREFIX, global_malloc);

void SMAKE_NAME(S_CORE_PREFIX, malloc_map_next) (svoidptr next_region) {
	ssize size = SMAKE_NAME(S_CORE_PREFIX, global_malloc).alloc_size;
}

