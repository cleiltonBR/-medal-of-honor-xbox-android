/**
 * Medal of Honor European Assault - Recompiled code chunk 77
 * Functions: 250 (0x002CCAF0 - 0x002CD840)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002CCAF0
 * Original: 0x002CCAF0 - 0x002CCAF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCAF0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCAF8
 * Original: 0x002CCAF8 - 0x002CCB11 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCAF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCAF8: ;
    eax = MEM32(ebp + -24);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002CCB10; /* je: equal / zero */

loc_002CCB04: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

loc_002CCB10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CCB11
 * Original: 0x002CCB11 - 0x002CCB19 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB11: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCB19
 * Original: 0x002CCB19 - 0x002CCB21 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB19: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCB21
 * Original: 0x002CCB21 - 0x002CCB2B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB21: ;
    eax = 0x35335C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCB30
 * Original: 0x002CCB30 - 0x002CCB38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB30: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCB38
 * Original: 0x002CCB38 - 0x002CCB42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB38: ;
    eax = 0x353380;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCB50
 * Original: 0x002CCB50 - 0x002CCB58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CCB58
 * Original: 0x002CCB58 - 0x002CCB62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB58: ;
    eax = 0x3533A4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCB70
 * Original: 0x002CCB70 - 0x002CCB7F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB70: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCB7Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CCB7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCB7F
 * Original: 0x002CCB7F - 0x002CCB89 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB7F: ;
    eax = 0x3533C8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCB90
 * Original: 0x002CCB90 - 0x002CCB9F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB90: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCB9Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCB9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCB9F
 * Original: 0x002CCB9F - 0x002CCBAE (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCB9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCB9F: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCBAAu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCBAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCBAE
 * Original: 0x002CCBAE - 0x002CCBBD (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCBAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCBAE: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCBB9u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCBB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCBBD
 * Original: 0x002CCBBD - 0x002CCBCC (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCBBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCBBD: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCBC8u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCBC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCBCC
 * Original: 0x002CCBCC - 0x002CCBDB (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCBCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCBCC: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCBD7u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCBD7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCBDB
 * Original: 0x002CCBDB - 0x002CCBEA (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCBDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCBDB: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCBE6u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCBE6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCBEA
 * Original: 0x002CCBEA - 0x002CCBF9 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCBEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCBEA: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCBF5u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCBF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCBF9
 * Original: 0x002CCBF9 - 0x002CCC08 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCBF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCBF9: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC04u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC08
 * Original: 0x002CCC08 - 0x002CCC17 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC08: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC13u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC17
 * Original: 0x002CCC17 - 0x002CCC26 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC17: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC22u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC26
 * Original: 0x002CCC26 - 0x002CCC35 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC26: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC31u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC31: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC35
 * Original: 0x002CCC35 - 0x002CCC44 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC35: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC40u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC44
 * Original: 0x002CCC44 - 0x002CCC53 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC44: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC4Fu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC53
 * Original: 0x002CCC53 - 0x002CCC62 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC53: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC5Eu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC62
 * Original: 0x002CCC62 - 0x002CCC71 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC62: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC6Du); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC71
 * Original: 0x002CCC71 - 0x002CCC80 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC71: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC7Cu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC80
 * Original: 0x002CCC80 - 0x002CCC8F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC80: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC8Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC8F
 * Original: 0x002CCC8F - 0x002CCC9E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC8F: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCC9Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCC9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCC9E
 * Original: 0x002CCC9E - 0x002CCCAD (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCC9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCC9E: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCCA9u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCCA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCCAD
 * Original: 0x002CCCAD - 0x002CCCBC (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCCAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCCAD: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCCB8u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCCB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCCBC
 * Original: 0x002CCCBC - 0x002CCCCB (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCCBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCCBC: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCCC7u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCCC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCCCB
 * Original: 0x002CCCCB - 0x002CCCDA (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCCCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCCCB: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCCD6u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCCD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCCDA
 * Original: 0x002CCCDA - 0x002CCCE9 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCCDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCCDA: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCCE5u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCCE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCCE9
 * Original: 0x002CCCE9 - 0x002CCCF3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCCE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCCE9: ;
    eax = 0x35349C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCD00
 * Original: 0x002CCD00 - 0x002CCD12 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD00: ;
    PUSH32(esp, 0x3C0);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD0Eu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CCD0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD12
 * Original: 0x002CCD12 - 0x002CCD21 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD12: ;
    PUSH32(esp, 0x18);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD1Du); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD21
 * Original: 0x002CCD21 - 0x002CCD30 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD21: ;
    PUSH32(esp, 0x18);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD2Cu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD2C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD30
 * Original: 0x002CCD30 - 0x002CCD3F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD30: ;
    PUSH32(esp, 0x18);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD3Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD3B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD3F
 * Original: 0x002CCD3F - 0x002CCD4E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD3F: ;
    PUSH32(esp, 0x18);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD4Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD4E
 * Original: 0x002CCD4E - 0x002CCD5D (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD4E: ;
    PUSH32(esp, 0x18);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD59u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD5D
 * Original: 0x002CCD5D - 0x002CCD6C (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD5D: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD68u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CCD68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD6C
 * Original: 0x002CCD6C - 0x002CCD7B (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD6C: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD77u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD7B
 * Original: 0x002CCD7B - 0x002CCD8A (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD7B: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD86u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD8A
 * Original: 0x002CCD8A - 0x002CCD99 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD8A: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCD95u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCD95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD99
 * Original: 0x002CCD99 - 0x002CCDA8 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD99: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCDA4u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCDA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCDA8
 * Original: 0x002CCDA8 - 0x002CCDB7 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCDA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCDA8: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCDB3u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCDB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCDB7
 * Original: 0x002CCDB7 - 0x002CCDC6 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCDB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCDB7: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCDC2u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCDC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCDC6
 * Original: 0x002CCDC6 - 0x002CCDD5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCDC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCDC6: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCDD1u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CCDD1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCDD5
 * Original: 0x002CCDD5 - 0x002CCDDF (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCDD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCDD5: ;
    eax = 0x353528;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCDE0
 * Original: 0x002CCDE0 - 0x002CCDF9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCDE0: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002CCDF8; /* je: equal / zero */

loc_002CCDEC: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

loc_002CCDF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CCDF9
 * Original: 0x002CCDF9 - 0x002CCE03 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCDF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCDF9: ;
    eax = 0x35354C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCE10
 * Original: 0x002CCE10 - 0x002CCE29 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE10: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002CCE28; /* je: equal / zero */

loc_002CCE1C: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

loc_002CCE28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CCE29
 * Original: 0x002CCE29 - 0x002CCE31 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE29: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCE31
 * Original: 0x002CCE31 - 0x002CCE3B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE31: ;
    eax = 0x353578;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCE40
 * Original: 0x002CCE40 - 0x002CCE48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE40: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCE48
 * Original: 0x002CCE48 - 0x002CCE50 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE48: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCE50
 * Original: 0x002CCE50 - 0x002CCE5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE50: ;
    eax = 0x3535A4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCE60
 * Original: 0x002CCE60 - 0x002CCE68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE60: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCE68
 * Original: 0x002CCE68 - 0x002CCE72 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE68: ;
    eax = 0x3535C8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCE80
 * Original: 0x002CCE80 - 0x002CCE8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE80: ;
    ecx = ebp + -276;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCE8B
 * Original: 0x002CCE8B - 0x002CCE96 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE8B: ;
    ecx = ebp + -272;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCE96
 * Original: 0x002CCE96 - 0x002CCEA0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCE96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCE96: ;
    eax = 0x3535F4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCEA0
 * Original: 0x002CCEA0 - 0x002CCEA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEA0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCEA8
 * Original: 0x002CCEA8 - 0x002CCEB0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEA8: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCEB0
 * Original: 0x002CCEB0 - 0x002CCEB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEB0: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCEB8
 * Original: 0x002CCEB8 - 0x002CCEC2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEB8: ;
    eax = 0x353628;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCED0
 * Original: 0x002CCED0 - 0x002CCED8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCED0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCED8
 * Original: 0x002CCED8 - 0x002CCEE0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCED8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCED8: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCEE0
 * Original: 0x002CCEE0 - 0x002CCEEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEE0: ;
    eax = 0x353654;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCEF0
 * Original: 0x002CCEF0 - 0x002CCEF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEF0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCEF8
 * Original: 0x002CCEF8 - 0x002CCF02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCEF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCEF8: ;
    eax = 0x353678;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCF10
 * Original: 0x002CCF10 - 0x002CCF1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF10: ;
    ecx = MEM32(ebp + -276);
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCF1B
 * Original: 0x002CCF1B - 0x002CCF26 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF1B: ;
    ecx = ebp + -280;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCF26
 * Original: 0x002CCF26 - 0x002CCF31 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF26: ;
    ecx = MEM32(ebp + -276);
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCF31
 * Original: 0x002CCF31 - 0x002CCF3C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF31: ;
    ecx = ebp + -284;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCF3C
 * Original: 0x002CCF3C - 0x002CCF46 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF3C: ;
    eax = 0x3536C4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCF50
 * Original: 0x002CCF50 - 0x002CCF58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCF58
 * Original: 0x002CCF58 - 0x002CCF60 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF58: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCF60
 * Original: 0x002CCF60 - 0x002CCF6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF60: ;
    eax = 0x3536F0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCF70
 * Original: 0x002CCF70 - 0x002CCF78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00283F10(); return; /* tail jmp 0x00283F10 */

}

/**
 * sub_002CCF78
 * Original: 0x002CCF78 - 0x002CCF83 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF78: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00283F10(); return; /* tail jmp 0x00283F10 */

}

/**
 * sub_002CCF83
 * Original: 0x002CCF83 - 0x002CCF8E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF83: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00283F10(); return; /* tail jmp 0x00283F10 */

}

/**
 * sub_002CCF8E
 * Original: 0x002CCF8E - 0x002CCF98 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCF8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCF8E: ;
    eax = 0x353724;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCFA0
 * Original: 0x002CCFA0 - 0x002CCFAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFA0: ;
    ecx = ebp + -272;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCFAB
 * Original: 0x002CCFAB - 0x002CCFB5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFAB: ;
    eax = 0x353748;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCFC0
 * Original: 0x002CCFC0 - 0x002CCFCF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFC0: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCFCBu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CCFCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCFCF
 * Original: 0x002CCFCF - 0x002CCFD7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFCF: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CCFD7
 * Original: 0x002CCFD7 - 0x002CCFE1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFD7: ;
    eax = 0x353774;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CCFF0
 * Original: 0x002CCFF0 - 0x002CCFFF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFF0: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CCFFBu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CCFFB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CCFFF
 * Original: 0x002CCFFF - 0x002CD007 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCFFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCFFF: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD007
 * Original: 0x002CD007 - 0x002CD011 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD007: ;
    eax = 0x3537A0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD020
 * Original: 0x002CD020 - 0x002CD028 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD020: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD028
 * Original: 0x002CD028 - 0x002CD037 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD028: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD033u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD033: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD037
 * Original: 0x002CD037 - 0x002CD041 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD037(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD037: ;
    eax = 0x3537CC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD050
 * Original: 0x002CD050 - 0x002CD05F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD050: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD05Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD05B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD05F
 * Original: 0x002CD05F - 0x002CD067 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD05F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD05F: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD067
 * Original: 0x002CD067 - 0x002CD071 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD067(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD067: ;
    eax = 0x3537F8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD080
 * Original: 0x002CD080 - 0x002CD088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD080: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD088
 * Original: 0x002CD088 - 0x002CD097 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD088: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD093u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD093: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD097
 * Original: 0x002CD097 - 0x002CD09F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD097(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD097: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD09F
 * Original: 0x002CD09F - 0x002CD0A7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD09F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD09F: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD0A7
 * Original: 0x002CD0A7 - 0x002CD0B1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0A7: ;
    eax = 0x353834;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD0C0
 * Original: 0x002CD0C0 - 0x002CD0C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0C0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD0C8
 * Original: 0x002CD0C8 - 0x002CD0D7 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0C8: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD0D3u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD0D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD0D7
 * Original: 0x002CD0D7 - 0x002CD0DF (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0D7: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD0DF
 * Original: 0x002CD0DF - 0x002CD0E9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0DF: ;
    eax = 0x353868;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD0F0
 * Original: 0x002CD0F0 - 0x002CD0FF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0F0: ;
    PUSH32(esp, 0x2C);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD0FBu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD0FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD0FF
 * Original: 0x002CD0FF - 0x002CD109 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD0FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD0FF: ;
    eax = 0x35388C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD110
 * Original: 0x002CD110 - 0x002CD11F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD110: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD11Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD11B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD11F
 * Original: 0x002CD11F - 0x002CD127 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD11F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD11F: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD127
 * Original: 0x002CD127 - 0x002CD136 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD127(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD127: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD132u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD132: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD136
 * Original: 0x002CD136 - 0x002CD140 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD136(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD136: ;
    eax = 0x3538C0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD140
 * Original: 0x002CD140 - 0x002CD148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD140: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277D80(); return; /* tail jmp 0x00277D80 */

}

/**
 * sub_002CD148
 * Original: 0x002CD148 - 0x002CD150 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD148(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD148: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD150
 * Original: 0x002CD150 - 0x002CD15A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD150: ;
    eax = 0x353944;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD160
 * Original: 0x002CD160 - 0x002CD168 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD160: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD168
 * Original: 0x002CD168 - 0x002CD170 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD168(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD168: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277D80(); return; /* tail jmp 0x00277D80 */

}

/**
 * sub_002CD170
 * Original: 0x002CD170 - 0x002CD17A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD170: ;
    eax = 0x353918;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD180
 * Original: 0x002CD180 - 0x002CD188 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD180: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD188
 * Original: 0x002CD188 - 0x002CD192 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD188(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD188: ;
    eax = 0x353968;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD1A0
 * Original: 0x002CD1A0 - 0x002CD1A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD1A8
 * Original: 0x002CD1A8 - 0x002CD1B0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1A8: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277D80(); return; /* tail jmp 0x00277D80 */

}

/**
 * sub_002CD1B0
 * Original: 0x002CD1B0 - 0x002CD1BB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1B0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD1BB
 * Original: 0x002CD1BB - 0x002CD1C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1BB: ;
    eax = 0x35399C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD1D0
 * Original: 0x002CD1D0 - 0x002CD1D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1D0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD1D8
 * Original: 0x002CD1D8 - 0x002CD1E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1D8: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD1E0
 * Original: 0x002CD1E0 - 0x002CD1E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277D80(); return; /* tail jmp 0x00277D80 */

}

/**
 * sub_002CD1E8
 * Original: 0x002CD1E8 - 0x002CD1F3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1E8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD1F3
 * Original: 0x002CD1F3 - 0x002CD1FD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD1F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD1F3: ;
    eax = 0x3539D8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD200
 * Original: 0x002CD200 - 0x002CD20F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD200: ;
    PUSH32(esp, 0x2C);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD20Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD20B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD20F
 * Original: 0x002CD20F - 0x002CD21E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD20F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD20F: ;
    PUSH32(esp, 0x2C);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD21Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD21A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD21E
 * Original: 0x002CD21E - 0x002CD226 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD21E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD21E: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD226
 * Original: 0x002CD226 - 0x002CD235 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD226(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD226: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD231u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD231: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD235
 * Original: 0x002CD235 - 0x002CD244 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD235(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD235: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD240u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD240: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD244
 * Original: 0x002CD244 - 0x002CD253 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD244(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD244: ;
    PUSH32(esp, 0x64);
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD24Fu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD24F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD253
 * Original: 0x002CD253 - 0x002CD262 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD253: ;
    PUSH32(esp, 0x40);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD25Eu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD25E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD262
 * Original: 0x002CD262 - 0x002CD271 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD262(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD262: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD26Du); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD26D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD271
 * Original: 0x002CD271 - 0x002CD280 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD271: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD27Cu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD27C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD280
 * Original: 0x002CD280 - 0x002CD28F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD280: ;
    PUSH32(esp, 0x20);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD28Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD28B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD28F
 * Original: 0x002CD28F - 0x002CD29E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD28F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD28F: ;
    PUSH32(esp, 0x28);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD29Au); RECOMP_ABI_CALL(0x00282DE0u, sub_00282DE0); /* call 0x00282DE0 */

loc_002CD29A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD29E
 * Original: 0x002CD29E - 0x002CD2AD (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD29E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD29E: ;
    PUSH32(esp, 0x28);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD2A9u); RECOMP_ABI_CALL(0x00282DE0u, sub_00282DE0); /* call 0x00282DE0 */

loc_002CD2A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD2AD
 * Original: 0x002CD2AD - 0x002CD2BC (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD2AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD2AD: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD2B8u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD2B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD2BC
 * Original: 0x002CD2BC - 0x002CD2C4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD2BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD2BC: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD2C4
 * Original: 0x002CD2C4 - 0x002CD2D3 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD2C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD2C4: ;
    PUSH32(esp, 0x28);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD2CFu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD2CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD2D3
 * Original: 0x002CD2D3 - 0x002CD2E2 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD2D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD2D3: ;
    PUSH32(esp, 0x28);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD2DEu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD2DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD2E2
 * Original: 0x002CD2E2 - 0x002CD2F1 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD2E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD2E2: ;
    PUSH32(esp, 0x20);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD2EDu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD2ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD2F1
 * Original: 0x002CD2F1 - 0x002CD300 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD2F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD2F1: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD2FCu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD2FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD300
 * Original: 0x002CD300 - 0x002CD30A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD300: ;
    eax = 0x353A84;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD310
 * Original: 0x002CD310 - 0x002CD318 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD310: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD318
 * Original: 0x002CD318 - 0x002CD320 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD318(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD318: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD320
 * Original: 0x002CD320 - 0x002CD32A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD320: ;
    eax = 0x353AB0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD330
 * Original: 0x002CD330 - 0x002CD338 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD330: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD338
 * Original: 0x002CD338 - 0x002CD342 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD338(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD338: ;
    eax = 0x353AD4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD350
 * Original: 0x002CD350 - 0x002CD358 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD350: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD358
 * Original: 0x002CD358 - 0x002CD360 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD358(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD358: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD360
 * Original: 0x002CD360 - 0x002CD36F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD360: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD36Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD36B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD36F
 * Original: 0x002CD36F - 0x002CD379 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD36F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD36F: ;
    eax = 0x353B08;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD380
 * Original: 0x002CD380 - 0x002CD388 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD380: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD388
 * Original: 0x002CD388 - 0x002CD390 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD388: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD390
 * Original: 0x002CD390 - 0x002CD398 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD390: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD398
 * Original: 0x002CD398 - 0x002CD3A0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD398: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD3A0
 * Original: 0x002CD3A0 - 0x002CD3AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3A0: ;
    eax = 0x353B44;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD3B0
 * Original: 0x002CD3B0 - 0x002CD3B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3B0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD3B8
 * Original: 0x002CD3B8 - 0x002CD3C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3B8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD3C0
 * Original: 0x002CD3C0 - 0x002CD3CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3C0: ;
    eax = 0x353B70;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD3D0
 * Original: 0x002CD3D0 - 0x002CD3D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3D0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD3D8
 * Original: 0x002CD3D8 - 0x002CD3E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3D8: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD3E0
 * Original: 0x002CD3E0 - 0x002CD3E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3E0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD3E8
 * Original: 0x002CD3E8 - 0x002CD3F2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD3E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD3E8: ;
    eax = 0x353BA4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD400
 * Original: 0x002CD400 - 0x002CD408 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD400: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD408
 * Original: 0x002CD408 - 0x002CD410 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD408(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD408: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD410
 * Original: 0x002CD410 - 0x002CD41A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD410: ;
    eax = 0x353BD0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD420
 * Original: 0x002CD420 - 0x002CD428 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD420: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD428
 * Original: 0x002CD428 - 0x002CD432 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD428: ;
    eax = 0x353BF4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD440
 * Original: 0x002CD440 - 0x002CD44F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD440: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD44Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD44B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD44F
 * Original: 0x002CD44F - 0x002CD45E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD44F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD44F: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD45Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD45A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD45E
 * Original: 0x002CD45E - 0x002CD468 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD45E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD45E: ;
    eax = 0x353C20;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD470
 * Original: 0x002CD470 - 0x002CD478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD470: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD478
 * Original: 0x002CD478 - 0x002CD487 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD478(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD478: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD483u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD483: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD487
 * Original: 0x002CD487 - 0x002CD491 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD487(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD487: ;
    eax = 0x353C4C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD4A0
 * Original: 0x002CD4A0 - 0x002CD4A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4A0: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD4A8
 * Original: 0x002CD4A8 - 0x002CD4B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4A8: ;
    eax = 0x353C70;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD4C0
 * Original: 0x002CD4C0 - 0x002CD4C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4C0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD4C8
 * Original: 0x002CD4C8 - 0x002CD4D2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4C8: ;
    eax = 0x353C94;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD4E0
 * Original: 0x002CD4E0 - 0x002CD4E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4E0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD4E8
 * Original: 0x002CD4E8 - 0x002CD4F0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4E8: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD4F0
 * Original: 0x002CD4F0 - 0x002CD4FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD4F0: ;
    eax = 0x353CC0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD500
 * Original: 0x002CD500 - 0x002CD508 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD500: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD508
 * Original: 0x002CD508 - 0x002CD517 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD508(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD508: ;
    PUSH32(esp, 0x38);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD513u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD513: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD517
 * Original: 0x002CD517 - 0x002CD51F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD517(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD517: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD51F
 * Original: 0x002CD51F - 0x002CD529 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD51F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD51F: ;
    eax = 0x353CF4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD530
 * Original: 0x002CD530 - 0x002CD53F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD530: ;
    PUSH32(esp, 0x38);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD53Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD53B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD53F
 * Original: 0x002CD53F - 0x002CD547 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD53F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD53F: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD547
 * Original: 0x002CD547 - 0x002CD551 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD547(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD547: ;
    eax = 0x353D20;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD560
 * Original: 0x002CD560 - 0x002CD56F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD560: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD56Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD56B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD56F
 * Original: 0x002CD56F - 0x002CD577 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD56F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD56F: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD577
 * Original: 0x002CD577 - 0x002CD581 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD577(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD577: ;
    eax = 0x3538EC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD590
 * Original: 0x002CD590 - 0x002CD598 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD590: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD598
 * Original: 0x002CD598 - 0x002CD5A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD598: ;
    eax = 0x353D44;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD5B0
 * Original: 0x002CD5B0 - 0x002CD5B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5B0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD5B8
 * Original: 0x002CD5B8 - 0x002CD5C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5B8: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD5C0
 * Original: 0x002CD5C0 - 0x002CD5CF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5C0: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD5CBu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD5CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD5CF
 * Original: 0x002CD5CF - 0x002CD5D9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5CF: ;
    eax = 0x353D78;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD5E0
 * Original: 0x002CD5E0 - 0x002CD5E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5E0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD5E8
 * Original: 0x002CD5E8 - 0x002CD5F0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5E8: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD5F0
 * Original: 0x002CD5F0 - 0x002CD5F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5F0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD5F8
 * Original: 0x002CD5F8 - 0x002CD602 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD5F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD5F8: ;
    eax = 0x353DAC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD610
 * Original: 0x002CD610 - 0x002CD618 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD610: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD618
 * Original: 0x002CD618 - 0x002CD622 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD618(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD618: ;
    eax = 0x353DD0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD630
 * Original: 0x002CD630 - 0x002CD63F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD630: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD63Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD63B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD63F
 * Original: 0x002CD63F - 0x002CD647 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD63F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD63F: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD647
 * Original: 0x002CD647 - 0x002CD651 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD647(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD647: ;
    eax = 0x353DFC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD660
 * Original: 0x002CD660 - 0x002CD66B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD660: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00283F10(); return; /* tail jmp 0x00283F10 */

}

/**
 * sub_002CD66B
 * Original: 0x002CD66B - 0x002CD675 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD66B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD66B: ;
    eax = 0x353E20;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD680
 * Original: 0x002CD680 - 0x002CD688 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD680: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD688
 * Original: 0x002CD688 - 0x002CD690 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD688(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD688: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00170530(); return; /* tail jmp 0x00170530 */

}

/**
 * sub_002CD690
 * Original: 0x002CD690 - 0x002CD69A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD690: ;
    eax = 0x353E4C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD6A0
 * Original: 0x002CD6A0 - 0x002CD6A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6A0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00170530(); return; /* tail jmp 0x00170530 */

}

/**
 * sub_002CD6A8
 * Original: 0x002CD6A8 - 0x002CD6B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6A8: ;
    eax = 0x353E70;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD6C0
 * Original: 0x002CD6C0 - 0x002CD6C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6C0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00170530(); return; /* tail jmp 0x00170530 */

}

/**
 * sub_002CD6C8
 * Original: 0x002CD6C8 - 0x002CD6D0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6C8: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0029AB50(); return; /* tail jmp 0x0029AB50 */

}

/**
 * sub_002CD6D0
 * Original: 0x002CD6D0 - 0x002CD6DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6D0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00170530(); return; /* tail jmp 0x00170530 */

}

/**
 * sub_002CD6DB
 * Original: 0x002CD6DB - 0x002CD6E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6DB: ;
    eax = 0x353EA4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD6F0
 * Original: 0x002CD6F0 - 0x002CD6F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0029AB50(); return; /* tail jmp 0x0029AB50 */

}

/**
 * sub_002CD6F8
 * Original: 0x002CD6F8 - 0x002CD702 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD6F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD6F8: ;
    eax = 0x353EC8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD710
 * Original: 0x002CD710 - 0x002CD71B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD710: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028FC20(); return; /* tail jmp 0x0028FC20 */

}

/**
 * sub_002CD71B
 * Original: 0x002CD71B - 0x002CD729 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD71B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD71B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x820) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x820;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028FCC0(); return; /* tail jmp 0x0028FCC0 */

}

/**
 * sub_002CD729
 * Original: 0x002CD729 - 0x002CD737 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD729(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD729: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x924) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x924;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028FC20(); return; /* tail jmp 0x0028FC20 */

}

/**
 * sub_002CD737
 * Original: 0x002CD737 - 0x002CD745 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD737: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1128;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002A9200(); return; /* tail jmp 0x002A9200 */

}

/**
 * sub_002CD745
 * Original: 0x002CD745 - 0x002CD750 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD745: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD74Eu); RECOMP_ABI_CALL(0x00277810u, sub_00277810); /* call 0x00277810 */

loc_002CD74E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CD750
 * Original: 0x002CD750 - 0x002CD75A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD750: ;
    eax = 0x353F0C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD760
 * Original: 0x002CD760 - 0x002CD76B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD760: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028FC20(); return; /* tail jmp 0x0028FC20 */

}

/**
 * sub_002CD76B
 * Original: 0x002CD76B - 0x002CD779 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD76B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD76B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x820) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x820;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028FCC0(); return; /* tail jmp 0x0028FCC0 */

}

/**
 * sub_002CD779
 * Original: 0x002CD779 - 0x002CD787 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD779(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD779: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x924) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x924;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028FC20(); return; /* tail jmp 0x0028FC20 */

}

/**
 * sub_002CD787
 * Original: 0x002CD787 - 0x002CD795 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD787: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1128;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002A9200(); return; /* tail jmp 0x002A9200 */

}

/**
 * sub_002CD795
 * Original: 0x002CD795 - 0x002CD79F (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD795(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD795: ;
    eax = 0x353F48;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD7A0
 * Original: 0x002CD7A0 - 0x002CD7A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7A0: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD7A8
 * Original: 0x002CD7A8 - 0x002CD7B0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7A8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD7B0
 * Original: 0x002CD7B0 - 0x002CD7BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7B0: ;
    eax = 0x353F74;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD7C0
 * Original: 0x002CD7C0 - 0x002CD7C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD7C8
 * Original: 0x002CD7C8 - 0x002CD7D2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7C8: ;
    eax = 0x353F98;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD7E0
 * Original: 0x002CD7E0 - 0x002CD7EF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7E0: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD7EBu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CD7EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CD7EF
 * Original: 0x002CD7EF - 0x002CD7F7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7EF: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD7F7
 * Original: 0x002CD7F7 - 0x002CD801 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD7F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD7F7: ;
    eax = 0x353FC4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD810
 * Original: 0x002CD810 - 0x002CD818 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD810: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277D80(); return; /* tail jmp 0x00277D80 */

}

/**
 * sub_002CD818
 * Original: 0x002CD818 - 0x002CD823 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD818(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD818: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CD823
 * Original: 0x002CD823 - 0x002CD82B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD823(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD823: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CD82B
 * Original: 0x002CD82B - 0x002CD835 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD82B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD82B: ;
    eax = 0x353FF8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CD840
 * Original: 0x002CD840 - 0x002CD84F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CD840: ;
    PUSH32(esp, 0x20);
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CD84Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CD84B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
