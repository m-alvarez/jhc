char jhc_c_compile[] = "gcc tmp/rts/profile.c tmp/rts/rts_support.c tmp/rts/jhc_rts.c tmp/lib/lib_cbits.c tmp/rts/gc_jgc_stub.c -Itmp/cbits -Itmp tmp/main_code.c -o hs.out '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC' -D_JHC_GC_JGC_STUB";
char jhc_command[] = "jhc -L../ -f jgc-stub Main.hs --tdir=tmp";
char jhc_version[] = "jhc 0.8.2 (mydniquipepo-32)";

#include "jhc_rts_header.h"
#include <stdio.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0
};
struct sCJhc_Prim_Prim_$x3a;

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};
void jhc_hs_init(void) ;
void _amain(void) ;
static void b__main(gc_t gc) A_STD;
static void ftheMain(gc_t gc) A_STD;
/* CAFS */
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 1],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c1};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 114),Right 2],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF('r'), .a2 = c2};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 87),Right 4],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF('W'), .a2 = c4};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 5],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c5};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 44),Right 6],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF(','), .a2 = c6};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Right 7],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = c7};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 8],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c8};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 9],10) */
static const struct sCJhc_Prim_Prim_$x3a _c10 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c9};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 10],11) */
static const struct sCJhc_Prim_Prim_$x3a _c11 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 72),Right 11],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('H'), .a2 = c11};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))

const void * const nh_stuff[] = {
&_c1, &_c2, &_c3, &_c4, &_c5, &_c6, &_c7, &_c8, &_c9, &_c10, &_c11,
&_c12, NULL
};


void 
jhc_hs_init(void)
{
}

void 
_amain(void)
{
        return (void)b__main(saved_gc);
}

static void A_STD
b__main(gc_t gc)
{
        return ftheMain(gc);
}

static void A_STD
ftheMain(gc_t gc)
{
        sptr_t v26;
        v26 = c12;
        fJhc_Monad_72__go__2:;
        {   wptr_t v100000 = eval(gc,v26);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100000) {
                SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v28;
                sptr_t v30;
                /* ("CJhc.Prim.Prim.:" ni28 ni30) */
                v28 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a1;
                v30 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a2;
                {   uint32_t v206123614;
                    gc_frame0(gc,1,v30);
                    wptr_t v100002 = eval(gc,v28);
                    v206123614 = ((uint32_t)RAW_GET_UF(v100002));
                    uint32_t v87629798 = v206123614;
                    saved_gc = gc;
                    (void)jhc_utf8_putchar((int)v87629798);
                    v26 = v30;
                    goto fJhc_Monad_72__go__2;
                }
            }
        }
        saved_gc = gc;
        return (void)jhc_utf8_putchar((int)10);
}
