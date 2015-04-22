#ifndef _GC_DUMMY
#define _GC_DUMMY
#include <assert.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include "rts/gc.h"

#define TO_BLOCKS(x) (x)
#define gc_frame0(gc,n,...) 

typedef void **gc_t;
typedef void *heap_t;

struct s_cache {
	unsigned short size;
};
struct s_arena {
};

typedef struct s_cache cache;

extern gc_t saved_gc;
extern struct s_arena *arena;

struct s_cache *new_cache(
	struct s_arena *arena,
	unsigned short size,
	unsigned short num_ptrs
);	
struct s_arena *new_arena(void);

cache *find_cache(
	cache **rsc, 
	struct s_arena *arena, 
	unsigned short size,
	unsigned short num_ptrs
);

void gc_add_root(gc_t gc, void *root);
void gc_perform_gc(gc_t gc);
uint32_t get_heap_flags(void *sp);

heap_t s_alloc(gc_t gc, cache *sc);
heap_t gc_alloc(gc_t gc, struct s_cache **sc, unsigned count, unsigned nptrs);
heap_t gc_array_alloc(gc_t gc, unsigned count);
heap_t gc_array_alloc_atomic(gc_t gc, unsigned count, unsigned slab_flags);

void jhc_alloc_init(void);
void jhc_alloc_fini(void);
#endif
