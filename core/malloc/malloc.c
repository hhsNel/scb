struct SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) {
	struct SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) *next;
	ssize chunk_size;
	sbool is_free : 1;
}

struct SMAKE_NAME(S_CORE_PREFIX, malloc_info) {
	SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) *first;
	ssize total_size;
}



