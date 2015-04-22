#include "rts/gc_jgc_stub.h"

gc_t saved_gc = NULL;
struct s_arena *arena = NULL;

struct s_cache *new_cache(
	struct s_arena *arena,
	unsigned short size,
	unsigned short num_ptrs
) {
	struct s_cache *cache_ptr = (struct s_cache*)malloc(sizeof(struct s_cache));
	cache_ptr->size = size;
	return cache_ptr;
}
	
struct s_arena *new_arena(void) {
	return NULL;
}

cache *find_cache(
	cache **rsc, 
	struct s_arena *arena, 
	unsigned short size,
	unsigned short num_ptrs
) {
	if (!*rsc) {
		*rsc = new_cache( arena, size, num_ptrs );
	}

	return *rsc;
}

void gc_add_root(gc_t gc, void *root) {
	return;
}

void gc_perform_gc(gc_t gc) {
	return;
}

uint32_t get_heap_flags(void *sp) {
	return 0;
}

heap_t s_alloc(gc_t gc, cache *sc) {
	assert( sc != NULL );
	return malloc( sc->size );
}
heap_t gc_alloc(gc_t gc, struct s_cache **sc, unsigned count, unsigned nptrs) {
	return NULL;
}
heap_t gc_array_alloc(gc_t gc, unsigned count) {
	return NULL;
}
heap_t gc_array_alloc_atomic(gc_t gc, unsigned count, unsigned slab_flags) {
	return NULL;
}

void jhc_alloc_init(void) {}
void jhc_alloc_fini(void) {}
