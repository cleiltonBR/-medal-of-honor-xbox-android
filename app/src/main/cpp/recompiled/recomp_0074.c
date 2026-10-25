/**
 * Medal of Honor European Assault - Recompiled code chunk 74
 * Functions: 250 (0x002CA368 - 0x002CB0D6)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002CA368
 * Original: 0x002CA368 - 0x002CA370 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA368: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA370
 * Original: 0x002CA370 - 0x002CA37A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA370: ;
    eax = 0x350934;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA380
 * Original: 0x002CA380 - 0x002CA388 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA380: ;
    ecx = MEM32(ebp + -36);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA388
 * Original: 0x002CA388 - 0x002CA393 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA388: ;
    ecx = MEM32(ebp + -36);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CA393
 * Original: 0x002CA393 - 0x002CA39D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA393(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA393: ;
    eax = 0x350960;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA3A0
 * Original: 0x002CA3A0 - 0x002CA3A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA3A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA3A8
 * Original: 0x002CA3A8 - 0x002CA3B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA3A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA3A8: ;
    eax = 0x350984;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA3C0
 * Original: 0x002CA3C0 - 0x002CA3CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA3C0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA3C9u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA3C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA3CB
 * Original: 0x002CA3CB - 0x002CA3D5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA3CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA3CB: ;
    eax = 0x3509A8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA3E0
 * Original: 0x002CA3E0 - 0x002CA3E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA3E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA3E8
 * Original: 0x002CA3E8 - 0x002CA3F2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA3E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA3E8: ;
    eax = 0x3509CC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA400
 * Original: 0x002CA400 - 0x002CA40B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA400: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA409u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA409: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA40B
 * Original: 0x002CA40B - 0x002CA415 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA40B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA40B: ;
    eax = 0x3509F0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA420
 * Original: 0x002CA420 - 0x002CA428 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA420: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA428
 * Original: 0x002CA428 - 0x002CA432 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA428: ;
    eax = 0x350A14;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA440
 * Original: 0x002CA440 - 0x002CA448 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA440: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA448
 * Original: 0x002CA448 - 0x002CA452 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA448(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA448: ;
    eax = 0x350A38;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA460
 * Original: 0x002CA460 - 0x002CA468 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA460: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA468
 * Original: 0x002CA468 - 0x002CA470 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA468(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA468: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA470
 * Original: 0x002CA470 - 0x002CA47A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA470: ;
    eax = 0x350A64;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA480
 * Original: 0x002CA480 - 0x002CA48E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA480: ;
    eax = MEM32(ebp + -132);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA48Cu); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA48C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA48E
 * Original: 0x002CA48E - 0x002CA499 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA48E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA48E: ;
    ecx = MEM32(ebp + -132);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA499
 * Original: 0x002CA499 - 0x002CA4A3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA499: ;
    eax = 0x350A90;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA4B0
 * Original: 0x002CA4B0 - 0x002CA4BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA4B0: ;
    ecx = MEM32(ebp + -296);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA4BB
 * Original: 0x002CA4BB - 0x002CA4C9 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA4BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA4BB: ;
    ecx = MEM32(ebp + -296);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CA4C9
 * Original: 0x002CA4C9 - 0x002CA4D3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA4C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA4C9: ;
    eax = 0x350ABC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA4E0
 * Original: 0x002CA4E0 - 0x002CA4E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA4E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA4E8
 * Original: 0x002CA4E8 - 0x002CA4F2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA4E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA4E8: ;
    eax = 0x350AE0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA500
 * Original: 0x002CA500 - 0x002CA508 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA500: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA508
 * Original: 0x002CA508 - 0x002CA512 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA508(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA508: ;
    eax = 0x350B04;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA520
 * Original: 0x002CA520 - 0x002CA528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA520: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA528
 * Original: 0x002CA528 - 0x002CA532 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA528(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA528: ;
    eax = 0x350B28;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA540
 * Original: 0x002CA540 - 0x002CA54B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA540: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA549u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA549: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA54B
 * Original: 0x002CA54B - 0x002CA555 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA54B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA54B: ;
    eax = 0x350B4C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA560
 * Original: 0x002CA560 - 0x002CA568 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA560: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA568
 * Original: 0x002CA568 - 0x002CA570 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA568(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA568: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA570
 * Original: 0x002CA570 - 0x002CA57A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA570: ;
    eax = 0x350B78;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA580
 * Original: 0x002CA580 - 0x002CA588 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA580: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA588
 * Original: 0x002CA588 - 0x002CA592 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA588: ;
    eax = 0x350B9C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA5A0
 * Original: 0x002CA5A0 - 0x002CA5A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5A0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA5A8
 * Original: 0x002CA5A8 - 0x002CA5B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5A8: ;
    eax = 0x350BC0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA5C0
 * Original: 0x002CA5C0 - 0x002CA5C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5C0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA5C8
 * Original: 0x002CA5C8 - 0x002CA5D0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5C8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA5D0
 * Original: 0x002CA5D0 - 0x002CA5DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5D0: ;
    eax = 0x350BEC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA5E0
 * Original: 0x002CA5E0 - 0x002CA5EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5E0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA5E9u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA5E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA5EB
 * Original: 0x002CA5EB - 0x002CA5F6 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5EB: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA5F4u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA5F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA5F6
 * Original: 0x002CA5F6 - 0x002CA600 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA5F6: ;
    eax = 0x350C18;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA600
 * Original: 0x002CA600 - 0x002CA608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA600: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001FF100(); return; /* tail jmp 0x001FF100 */

}

/**
 * sub_002CA608
 * Original: 0x002CA608 - 0x002CA612 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA608: ;
    eax = 0x350C3C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA620
 * Original: 0x002CA620 - 0x002CA62B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA620: ;
    ecx = ebp + -608;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CA62B
 * Original: 0x002CA62B - 0x002CA636 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA62B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA62B: ;
    ecx = ebp + -948;
    g_seh_ebp = ebp; sub_00214180(); return; /* tail jmp 0x00214180 */

}

/**
 * sub_002CA636
 * Original: 0x002CA636 - 0x002CA640 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA636(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA636: ;
    eax = 0x350C68;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA640
 * Original: 0x002CA640 - 0x002CA64B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA640: ;
    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CA64B
 * Original: 0x002CA64B - 0x002CA656 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA64B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA64B: ;
    ecx = ebp + -884;
    g_seh_ebp = ebp; sub_00214180(); return; /* tail jmp 0x00214180 */

}

/**
 * sub_002CA656
 * Original: 0x002CA656 - 0x002CA660 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA656(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA656: ;
    eax = 0x350C94;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA660
 * Original: 0x002CA660 - 0x002CA66B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA660: ;
    ecx = ebp + -800;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CA66B
 * Original: 0x002CA66B - 0x002CA675 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA66B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA66B: ;
    eax = 0x350CB8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA680
 * Original: 0x002CA680 - 0x002CA68B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA680: ;
    ecx = ebp + -600;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CA68B
 * Original: 0x002CA68B - 0x002CA695 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA68B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA68B: ;
    eax = 0x350CDC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA6A0
 * Original: 0x002CA6A0 - 0x002CA6A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6A0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA6A8
 * Original: 0x002CA6A8 - 0x002CA6B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6A8: ;
    eax = 0x350D00;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA6C0
 * Original: 0x002CA6C0 - 0x002CA6C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6C0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA6C8
 * Original: 0x002CA6C8 - 0x002CA6D2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6C8: ;
    eax = 0x350D24;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA6E0
 * Original: 0x002CA6E0 - 0x002CA6E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6E0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA6E8
 * Original: 0x002CA6E8 - 0x002CA6F0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6E8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA6F0
 * Original: 0x002CA6F0 - 0x002CA6FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA6F0: ;
    eax = 0x350D50;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA700
 * Original: 0x002CA700 - 0x002CA708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA700: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA708
 * Original: 0x002CA708 - 0x002CA712 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA708: ;
    eax = 0x350D74;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA720
 * Original: 0x002CA720 - 0x002CA728 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA720: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA728
 * Original: 0x002CA728 - 0x002CA732 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA728(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA728: ;
    eax = 0x350D98;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA740
 * Original: 0x002CA740 - 0x002CA748 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA740: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA748
 * Original: 0x002CA748 - 0x002CA752 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA748: ;
    eax = 0x350DBC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA760
 * Original: 0x002CA760 - 0x002CA76B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA760: ;
    ecx = MEM32(ebp + -152);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA76B
 * Original: 0x002CA76B - 0x002CA779 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA76B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA76B: ;
    ecx = MEM32(ebp + -152);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CA779
 * Original: 0x002CA779 - 0x002CA781 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA779(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA779: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA781
 * Original: 0x002CA781 - 0x002CA78B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA781(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA781: ;
    eax = 0x350DF0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA790
 * Original: 0x002CA790 - 0x002CA798 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA790: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA798
 * Original: 0x002CA798 - 0x002CA7A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA798(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA798: ;
    eax = 0x350E14;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA7B0
 * Original: 0x002CA7B0 - 0x002CA7BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7B0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA7B9u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA7B9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA7BB
 * Original: 0x002CA7BB - 0x002CA7C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7BB: ;
    eax = 0x350E38;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA7D0
 * Original: 0x002CA7D0 - 0x002CA7D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7D0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA7D8
 * Original: 0x002CA7D8 - 0x002CA7E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7D8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA7E0
 * Original: 0x002CA7E0 - 0x002CA7EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7E0: ;
    eax = 0x350E64;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA7F0
 * Original: 0x002CA7F0 - 0x002CA7F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7F0: ;
    ecx = MEM32(ebp + -32);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA7F8
 * Original: 0x002CA7F8 - 0x002CA802 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA7F8: ;
    eax = 0x350E88;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA810
 * Original: 0x002CA810 - 0x002CA81B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA810: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA819u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA819: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA81B
 * Original: 0x002CA81B - 0x002CA825 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA81B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA81B: ;
    eax = 0x350EAC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA830
 * Original: 0x002CA830 - 0x002CA838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA830: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA838
 * Original: 0x002CA838 - 0x002CA842 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA838(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA838: ;
    eax = 0x350ED0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA850
 * Original: 0x002CA850 - 0x002CA858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA850: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA858
 * Original: 0x002CA858 - 0x002CA862 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA858(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA858: ;
    eax = 0x350EF4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA870
 * Original: 0x002CA870 - 0x002CA878 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA870: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA878
 * Original: 0x002CA878 - 0x002CA882 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA878(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA878: ;
    eax = 0x350F18;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA890
 * Original: 0x002CA890 - 0x002CA898 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA890: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA898
 * Original: 0x002CA898 - 0x002CA8A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA898(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA898: ;
    eax = 0x350F3C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA8B0
 * Original: 0x002CA8B0 - 0x002CA8B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8B0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA8B8
 * Original: 0x002CA8B8 - 0x002CA8C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8B8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA8C0
 * Original: 0x002CA8C0 - 0x002CA8CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8C0: ;
    eax = 0x350F68;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA8D0
 * Original: 0x002CA8D0 - 0x002CA8D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8D0: ;
    ecx = MEM32(ebp + -32);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CA8D8
 * Original: 0x002CA8D8 - 0x002CA8E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8D8: ;
    eax = 0x350F8C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA8F0
 * Original: 0x002CA8F0 - 0x002CA8FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8F0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CA8F9u); RECOMP_ABI_CALL(0x001FEE20u, sub_001FEE20); /* call 0x001FEE20 */

loc_002CA8F9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA8FB
 * Original: 0x002CA8FB - 0x002CA905 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA8FB: ;
    eax = 0x350FB0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA910
 * Original: 0x002CA910 - 0x002CA918 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA910: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA918
 * Original: 0x002CA918 - 0x002CA922 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA918(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA918: ;
    eax = 0x350FD4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA930
 * Original: 0x002CA930 - 0x002CA938 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA930: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA938
 * Original: 0x002CA938 - 0x002CA942 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA938(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA938: ;
    eax = 0x350FF8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA950
 * Original: 0x002CA950 - 0x002CA958 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA950: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00217300(); return; /* tail jmp 0x00217300 */

}

/**
 * sub_002CA958
 * Original: 0x002CA958 - 0x002CA962 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA958(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA958: ;
    eax = 0x35101C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA970
 * Original: 0x002CA970 - 0x002CA978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA970: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA978
 * Original: 0x002CA978 - 0x002CA982 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA978: ;
    eax = 0x351040;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA990
 * Original: 0x002CA990 - 0x002CA998 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA990: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA998
 * Original: 0x002CA998 - 0x002CA9A0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA998(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA998: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA9A0
 * Original: 0x002CA9A0 - 0x002CA9AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9A0: ;
    eax = 0x35106C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA9B0
 * Original: 0x002CA9B0 - 0x002CA9BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9B0: ;
    ecx = ebp + -272;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA9BB
 * Original: 0x002CA9BB - 0x002CA9C6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9BB: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CA9C6
 * Original: 0x002CA9C6 - 0x002CA9D0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9C6: ;
    eax = 0x351098;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CA9D0
 * Original: 0x002CA9D0 - 0x002CA9DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9D0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CA9DB
 * Original: 0x002CA9DB - 0x002CA9E9 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9DB: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00221670(); return; /* tail jmp 0x00221670 */

}

/**
 * sub_002CA9E9
 * Original: 0x002CA9E9 - 0x002CA9F3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA9E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CA9E9: ;
    eax = 0x3510C4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAA00
 * Original: 0x002CAA00 - 0x002CAA0B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA00: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAA0B
 * Original: 0x002CAA0B - 0x002CAA19 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA0B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00221670(); return; /* tail jmp 0x00221670 */

}

/**
 * sub_002CAA19
 * Original: 0x002CAA19 - 0x002CAA27 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA19: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CAA27
 * Original: 0x002CAA27 - 0x002CAA31 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA27: ;
    eax = 0x3510F8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAA40
 * Original: 0x002CAA40 - 0x002CAA4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA40: ;
    ecx = ebp + -10240;
    g_seh_ebp = ebp; sub_00221700(); return; /* tail jmp 0x00221700 */

}

/**
 * sub_002CAA4B
 * Original: 0x002CAA4B - 0x002CAA56 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA4B: ;
    ecx = ebp + -11136;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CAA56
 * Original: 0x002CAA56 - 0x002CAA61 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA56: ;
    ecx = ebp + -12032;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CAA61
 * Original: 0x002CAA61 - 0x002CAA6B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA61: ;
    eax = 0x35112C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAA70
 * Original: 0x002CAA70 - 0x002CAA78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CAA78
 * Original: 0x002CAA78 - 0x002CAA83 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA78: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CAA83
 * Original: 0x002CAA83 - 0x002CAA8D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA83: ;
    eax = 0x351158;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAA90
 * Original: 0x002CAA90 - 0x002CAA98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA90: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00222F80(); return; /* tail jmp 0x00222F80 */

}

/**
 * sub_002CAA98
 * Original: 0x002CAA98 - 0x002CAAA3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAA98: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAAA3
 * Original: 0x002CAAA3 - 0x002CAAAE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAA3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAAAE
 * Original: 0x002CAAAE - 0x002CAAB9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAAE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAAB9
 * Original: 0x002CAAB9 - 0x002CAAC7 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAB9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAAC7
 * Original: 0x002CAAC7 - 0x002CAAD5 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAC7: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAAD5
 * Original: 0x002CAAD5 - 0x002CAADF (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAD5: ;
    eax = 0x3511A4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAAE0
 * Original: 0x002CAAE0 - 0x002CAAE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAE0: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00223300(); return; /* tail jmp 0x00223300 */

}

/**
 * sub_002CAAE8
 * Original: 0x002CAAE8 - 0x002CAAF2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAAE8: ;
    eax = 0x3511C8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAB00
 * Original: 0x002CAB00 - 0x002CAB08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB00: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00223300(); return; /* tail jmp 0x00223300 */

}

/**
 * sub_002CAB08
 * Original: 0x002CAB08 - 0x002CAB12 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB08: ;
    eax = 0x3511EC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAB20
 * Original: 0x002CAB20 - 0x002CAB2B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB20: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAB29u); RECOMP_ABI_CALL(0x00223270u, sub_00223270); /* call 0x00223270 */

loc_002CAB29: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAB2B
 * Original: 0x002CAB2B - 0x002CAB36 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB2B: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAB34u); RECOMP_ABI_CALL(0x00223270u, sub_00223270); /* call 0x00223270 */

loc_002CAB34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAB36
 * Original: 0x002CAB36 - 0x002CAB40 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB36: ;
    eax = 0x351218;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAB40
 * Original: 0x002CAB40 - 0x002CAB4B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB40: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAB49u); RECOMP_ABI_CALL(0x002232C0u, sub_002232C0); /* call 0x002232C0 */

loc_002CAB49: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAB4B
 * Original: 0x002CAB4B - 0x002CAB56 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB4B: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAB54u); RECOMP_ABI_CALL(0x002232C0u, sub_002232C0); /* call 0x002232C0 */

loc_002CAB54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAB56
 * Original: 0x002CAB56 - 0x002CAB60 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB56(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB56: ;
    eax = 0x351244;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAB60
 * Original: 0x002CAB60 - 0x002CAB68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB60: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB68
 * Original: 0x002CAB68 - 0x002CAB70 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB68: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB70
 * Original: 0x002CAB70 - 0x002CAB78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB70: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB78
 * Original: 0x002CAB78 - 0x002CAB80 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB78: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB80
 * Original: 0x002CAB80 - 0x002CAB88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB80: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB88
 * Original: 0x002CAB88 - 0x002CAB90 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB88: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB90
 * Original: 0x002CAB90 - 0x002CAB98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB90: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAB98
 * Original: 0x002CAB98 - 0x002CABA2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAB98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAB98: ;
    eax = 0x351298;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CABB0
 * Original: 0x002CABB0 - 0x002CABB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CABB8
 * Original: 0x002CABB8 - 0x002CABC2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABB8: ;
    eax = 0x3512BC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CABD0
 * Original: 0x002CABD0 - 0x002CABD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABD0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CABD8
 * Original: 0x002CABD8 - 0x002CABE2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABD8: ;
    eax = 0x3512E0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CABF0
 * Original: 0x002CABF0 - 0x002CABF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABF0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CABF8
 * Original: 0x002CABF8 - 0x002CAC02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABF8: ;
    eax = 0x351304;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAC10
 * Original: 0x002CAC10 - 0x002CAC18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC10: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002236A0(); return; /* tail jmp 0x002236A0 */

}

/**
 * sub_002CAC18
 * Original: 0x002CAC18 - 0x002CAC22 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC18: ;
    eax = 0x351328;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAC30
 * Original: 0x002CAC30 - 0x002CAC38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC30: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CAC38
 * Original: 0x002CAC38 - 0x002CAC40 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC38: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAC40
 * Original: 0x002CAC40 - 0x002CAC48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC40: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAC48
 * Original: 0x002CAC48 - 0x002CAC52 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC48: ;
    eax = 0x35135C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAC60
 * Original: 0x002CAC60 - 0x002CAC68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC60: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CAC68
 * Original: 0x002CAC68 - 0x002CAC70 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC68: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_00224A70(); return; /* tail jmp 0x00224A70 */

}

/**
 * sub_002CAC70
 * Original: 0x002CAC70 - 0x002CAC7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC70: ;
    eax = 0x351388;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAC80
 * Original: 0x002CAC80 - 0x002CAC88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC80: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CAC88
 * Original: 0x002CAC88 - 0x002CAC90 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC88: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_00224A70(); return; /* tail jmp 0x00224A70 */

}

/**
 * sub_002CAC90
 * Original: 0x002CAC90 - 0x002CAC9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAC90: ;
    eax = 0x3513B4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CACA0
 * Original: 0x002CACA0 - 0x002CACA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CACA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CACA0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CACA8
 * Original: 0x002CACA8 - 0x002CACB2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CACA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CACA8: ;
    eax = 0x3513D8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CACC0
 * Original: 0x002CACC0 - 0x002CACC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CACC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CACC0: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CACC8
 * Original: 0x002CACC8 - 0x002CACD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CACC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CACC8: ;
    eax = 0x3513FC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CACE0
 * Original: 0x002CACE0 - 0x002CACE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CACE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CACE0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CACE8
 * Original: 0x002CACE8 - 0x002CACF2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CACE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CACE8: ;
    eax = 0x351420;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAD00
 * Original: 0x002CAD00 - 0x002CAD0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD00: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_002245C0(); return; /* tail jmp 0x002245C0 */

}

/**
 * sub_002CAD0B
 * Original: 0x002CAD0B - 0x002CAD13 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD0B: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_002246F0(); return; /* tail jmp 0x002246F0 */

}

/**
 * sub_002CAD13
 * Original: 0x002CAD13 - 0x002CAD1B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD13: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_002246F0(); return; /* tail jmp 0x002246F0 */

}

/**
 * sub_002CAD1B
 * Original: 0x002CAD1B - 0x002CAD26 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD1B: ;
    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_000F23E0(); return; /* tail jmp 0x000F23E0 */

}

/**
 * sub_002CAD26
 * Original: 0x002CAD26 - 0x002CAD31 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD26: ;
    ecx = ebp + -196;
    g_seh_ebp = ebp; sub_002B1E40(); return; /* tail jmp 0x002B1E40 */

}

/**
 * sub_002CAD31
 * Original: 0x002CAD31 - 0x002CAD3F (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD31: ;
    eax = MEM32(ebp + -200);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAD3Du); RECOMP_ABI_CALL(0x002232C0u, sub_002232C0); /* call 0x002232C0 */

loc_002CAD3D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAD3F
 * Original: 0x002CAD3F - 0x002CAD47 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD3F: ;
    ecx = ebp + -88;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAD47
 * Original: 0x002CAD47 - 0x002CAD51 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD47: ;
    eax = 0x351474;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAD60
 * Original: 0x002CAD60 - 0x002CAD68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD60: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_00224820(); return; /* tail jmp 0x00224820 */

}

/**
 * sub_002CAD68
 * Original: 0x002CAD68 - 0x002CAD72 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD68: ;
    eax = 0x351498;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAD80
 * Original: 0x002CAD80 - 0x002CAD88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD80: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_002246F0(); return; /* tail jmp 0x002246F0 */

}

/**
 * sub_002CAD88
 * Original: 0x002CAD88 - 0x002CAD92 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAD88: ;
    eax = 0x3514BC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CADA0
 * Original: 0x002CADA0 - 0x002CADAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADA0: ;
    ecx = MEM32(ebp + -1316);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CADAB
 * Original: 0x002CADAB - 0x002CADB9 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADAB: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CADB9
 * Original: 0x002CADB9 - 0x002CADC7 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADB9: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CADC7
 * Original: 0x002CADC7 - 0x002CADD5 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADC7: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CADD5
 * Original: 0x002CADD5 - 0x002CADE3 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADD5: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CADE3
 * Original: 0x002CADE3 - 0x002CADF1 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADE3: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CADF1
 * Original: 0x002CADF1 - 0x002CADFF (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADF1: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CADFF
 * Original: 0x002CADFF - 0x002CAE0D (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CADFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CADFF: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE0D
 * Original: 0x002CAE0D - 0x002CAE1B (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE0D: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE1B
 * Original: 0x002CAE1B - 0x002CAE29 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE1B: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE29
 * Original: 0x002CAE29 - 0x002CAE3A (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE29: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE3A
 * Original: 0x002CAE3A - 0x002CAE4B (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE3A: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE4B
 * Original: 0x002CAE4B - 0x002CAE5C (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE4B: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x9C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE5C
 * Original: 0x002CAE5C - 0x002CAE6D (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE5C: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE6D
 * Original: 0x002CAE6D - 0x002CAE7E (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE6D: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE7E
 * Original: 0x002CAE7E - 0x002CAE8F (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE7E: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAE8F
 * Original: 0x002CAE8F - 0x002CAEA0 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAE8F: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAEA0
 * Original: 0x002CAEA0 - 0x002CAEB1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAEA0: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAEB1
 * Original: 0x002CAEB1 - 0x002CAEC2 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAEB1: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x114;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAEC2
 * Original: 0x002CAEC2 - 0x002CAED3 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAEC2: ;
    ecx = MEM32(ebp + -1316);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAED3
 * Original: 0x002CAED3 - 0x002CAEDE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAED3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAED3: ;
    ecx = ebp + -1112;
    g_seh_ebp = ebp; sub_001F66C0(); return; /* tail jmp 0x001F66C0 */

}

/**
 * sub_002CAEDE
 * Original: 0x002CAEDE - 0x002CAEE9 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAEDE: ;
    ecx = ebp + -1328;
    g_seh_ebp = ebp; sub_001F6CD0(); return; /* tail jmp 0x001F6CD0 */

}

/**
 * sub_002CAEE9
 * Original: 0x002CAEE9 - 0x002CAEF7 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAEE9: ;
    eax = MEM32(ebp + -1336);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAEF5u); RECOMP_ABI_CALL(0x00223330u, sub_00223330); /* call 0x00223330 */

loc_002CAEF5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAEF7
 * Original: 0x002CAEF7 - 0x002CAF05 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAEF7: ;
    eax = MEM32(ebp + -1336);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAF03u); RECOMP_ABI_CALL(0x00223270u, sub_00223270); /* call 0x00223270 */

loc_002CAF03: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAF05
 * Original: 0x002CAF05 - 0x002CAF13 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF05: ;
    eax = MEM32(ebp + -1332);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAF11u); RECOMP_ABI_CALL(0x00223250u, sub_00223250); /* call 0x00223250 */

loc_002CAF11: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAF13
 * Original: 0x002CAF13 - 0x002CAF21 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF13: ;
    eax = MEM32(ebp + -1332);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAF1Fu); RECOMP_ABI_CALL(0x002232C0u, sub_002232C0); /* call 0x002232C0 */

loc_002CAF1F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAF21
 * Original: 0x002CAF21 - 0x002CAF2C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF21: ;
    ecx = ebp + -1312;
    g_seh_ebp = ebp; sub_000863B0(); return; /* tail jmp 0x000863B0 */

}

/**
 * sub_002CAF2C
 * Original: 0x002CAF2C - 0x002CAF3A (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF2C: ;
    eax = MEM32(ebp + -1332);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CAF38u); RECOMP_ABI_CALL(0x00223350u, sub_00223350); /* call 0x00223350 */

loc_002CAF38: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAF3A
 * Original: 0x002CAF3A - 0x002CAF44 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF3A: ;
    eax = 0x3515B8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CAF50
 * Original: 0x002CAF50 - 0x002CAF58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CAF58
 * Original: 0x002CAF58 - 0x002CAF63 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF58: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAF63
 * Original: 0x002CAF63 - 0x002CAF6E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF63: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAF6E
 * Original: 0x002CAF6E - 0x002CAF79 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF6E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CAF79
 * Original: 0x002CAF79 - 0x002CAF84 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF79: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAF84
 * Original: 0x002CAF84 - 0x002CAF8F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF84: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAF8F
 * Original: 0x002CAF8F - 0x002CAF9A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF8F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAF9A
 * Original: 0x002CAF9A - 0x002CAFA5 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF9A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFA5
 * Original: 0x002CAFA5 - 0x002CAFB0 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFA5: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFB0
 * Original: 0x002CAFB0 - 0x002CAFBB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFB0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFBB
 * Original: 0x002CAFBB - 0x002CAFC9 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFBB: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFC9
 * Original: 0x002CAFC9 - 0x002CAFD7 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFC9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFD7
 * Original: 0x002CAFD7 - 0x002CAFE5 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFD7: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x9C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFE5
 * Original: 0x002CAFE5 - 0x002CAFF3 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFE5: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CAFF3
 * Original: 0x002CAFF3 - 0x002CB001 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAFF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAFF3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB001
 * Original: 0x002CB001 - 0x002CB00F (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB001: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB00F
 * Original: 0x002CB00F - 0x002CB01D (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB00F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB00F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB01D
 * Original: 0x002CB01D - 0x002CB02B (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB01D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB01D: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB02B
 * Original: 0x002CB02B - 0x002CB039 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB02B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB02B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x114;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB039
 * Original: 0x002CB039 - 0x002CB047 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB039: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB047
 * Original: 0x002CB047 - 0x002CB051 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB047(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB047: ;
    eax = 0x351674;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB060
 * Original: 0x002CB060 - 0x002CB068 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB060: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002230E0(); return; /* tail jmp 0x002230E0 */

}

/**
 * sub_002CB068
 * Original: 0x002CB068 - 0x002CB072 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB068(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB068: ;
    eax = 0x351698;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB080
 * Original: 0x002CB080 - 0x002CB088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB080: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB088
 * Original: 0x002CB088 - 0x002CB092 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB088: ;
    eax = 0x3516BC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB0A0
 * Original: 0x002CB0A0 - 0x002CB0AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0A0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB0A9u); RECOMP_ABI_CALL(0x00228700u, sub_00228700); /* call 0x00228700 */

loc_002CB0A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB0AB
 * Original: 0x002CB0AB - 0x002CB0B5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0AB: ;
    eax = 0x3516E0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB0C0
 * Original: 0x002CB0C0 - 0x002CB0CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0C0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB0C9u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB0C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB0CB
 * Original: 0x002CB0CB - 0x002CB0D6 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0CB: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB0D4u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB0D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB0D6
 * Original: 0x002CB0D6 - 0x002CB0E1 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0D6: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB0DFu); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB0DF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
