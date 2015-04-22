#ifndef JHC_GC_H
#define JHC_GC_H

#define _JHC_GC_NONE   0
#define _JHC_GC_JGC    1
#define _JHC_GC_BOEHM  2
#define _JHC_GC_REGION 3
#define _JHC_GC_STUB   4

#ifndef _JHC_GC
#define _JHC_GC _JHC_GC_NONE
#endif

void jhc_alloc_init(void);
void jhc_alloc_fini(void);

#include "rts/gc_none.h"

// CHANGE: Stub gc flags
#ifndef _JHC_GC_JGC_STUB
#include "rts/gc_jgc.h"
#else
#include "rts/gc_jgc_stub.h"
#endif

#endif
