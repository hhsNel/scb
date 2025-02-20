struct SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) {
	SMAKE_NAME(S_CORE_PREFIX, malloc_data_chunk) *next;
	ssize chunk_size;
	sbool is_free : 1;
}
