/**
 * Medal of Honor European Assault - Recompiled code chunk 36
 * Functions: 250 (0x001389F0 - 0x0013F490)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001389F0
 * Original: 0x001389F0 - 0x001389F9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389F0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A00
 * Original: 0x00138A00 - 0x00138A09 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138A00: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A10
 * Original: 0x00138A10 - 0x00138A19 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138A10: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A20
 * Original: 0x00138A20 - 0x00138A29 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138A20: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A30
 * Original: 0x00138A30 - 0x00138A39 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138A30: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A40
 * Original: 0x00138A40 - 0x00138A4C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138A40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x1C));
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A50
 * Original: 0x00138A50 - 0x00138A5C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138A50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x1C));
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138A60
 * Original: 0x00138A60 - 0x00138A64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A60(void)
{

loc_00138A60: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00138A70
 * Original: 0x00138A70 - 0x00138ACC (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138A70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B550);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00138A83u); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138A83: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    eax = esp + 0xC;
    PUSH32(esp, 0x31B540);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138A9Bu); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138A9B: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x31B528);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138AAEu); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138AAE: ;
    eax = esp + 0x20;
    PUSH32(esp, 0x31B518);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138ABDu); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138ABD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0x00138AC9u); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00138AC9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138AD0
 * Original: 0x00138AD0 - 0x00138AD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138AD0(void)
{

loc_00138AD0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00138AE0
 * Original: 0x00138AE0 - 0x00138AE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138AE0(void)
{

loc_00138AE0: ;
    SET_LO16(eax, MEM16(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_00138AF0
 * Original: 0x00138AF0 - 0x00138AFD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138AF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00138B00
 * Original: 0x00138B00 - 0x00138B01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B00(void)
{

loc_00138B00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138B10
 * Original: 0x00138B10 - 0x00138B6A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138B10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B59C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00138B23u); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138B23: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x31B58C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138B35u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138B35: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x31B578);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138B48u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138B48: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, 0x31B560);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138B5Bu); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138B5B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0x00138B67u); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00138B67: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138B70
 * Original: 0x00138B70 - 0x00138B89 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138B70: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    fp_push((double)SMEM32(ecx + 4)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00138B81; /* jge: greater or equal (signed >=) */

loc_00138B7B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_00138B81: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF460)); /* fmul dword ptr [0x2ff460] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138B90
 * Original: 0x00138B90 - 0x00138B94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B90(void)
{

loc_00138B90: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00138BA0
 * Original: 0x00138BA0 - 0x00138BA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138BA0(void)
{

loc_00138BA0: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00138BB0
 * Original: 0x00138BB0 - 0x00138BB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138BB0(void)
{

loc_00138BB0: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_00138BC0
 * Original: 0x00138BC0 - 0x00138BC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138BC0(void)
{

loc_00138BC0: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00138BD0
 * Original: 0x00138BD0 - 0x00138BE0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138BD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00138BE0
 * Original: 0x00138BE0 - 0x00138BEF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138BE0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138BEE; /* je: equal / zero */

loc_00138BE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138BEDu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00138BED: ;
    POP32(esp, ecx);

loc_00138BEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138BF0
 * Original: 0x00138BF0 - 0x00138BF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138BF0(void)
{

loc_00138BF0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00138C00
 * Original: 0x00138C00 - 0x00138C5A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138C00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B5E0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00138C13u); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138C13: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x31B58C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138C25u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138C25: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x31B560);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138C38u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138C38: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, 0x31B5C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138C4Bu); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138C4B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0x00138C57u); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00138C57: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138C60
 * Original: 0x00138C60 - 0x00138C63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138C60(void)
{

loc_00138C60: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138C70
 * Original: 0x00138C70 - 0x00138C73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138C70(void)
{

loc_00138C70: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138C80
 * Original: 0x00138C80 - 0x00138CE2 (98 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138C80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B61C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00138C95u); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138C95: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x31B58C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138CA8u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138CA8: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x31B60C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138CB7u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138CB7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x31B600);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00138CCBu); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138CCB: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00138CD4u); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00138CD4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00138CDDu); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00138CDD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138CF0
 * Original: 0x00138CF0 - 0x00138CFA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138CF0: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138D00
 * Original: 0x00138D00 - 0x00138D0A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138D00: ;
    eax = MEM32(ecx + 0x28);
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138D10
 * Original: 0x00138D10 - 0x00138D19 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138D10: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138D20
 * Original: 0x00138D20 - 0x00138D2A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138D20: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138D30
 * Original: 0x00138D30 - 0x00138D76 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x31B634);
    esi = ecx;
    PUSH32(esp, 0x00138D44u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00138D44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138D6C; /* je: equal / zero */

loc_00138D4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x138810);
    PUSH32(esp, 0x138820);
    PUSH32(esp, 0);
    PUSH32(esp, 0x308DD4);
    ecx = eax;
    PUSH32(esp, 0x00138D64u); RECOMP_ABI_CALL(0x0014BEE0u, sub_0014BEE0); /* call 0x0014BEE0 */

loc_00138D64: ;
    MEM32(esi + 0xC0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00138D6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138D80
 * Original: 0x00138D80 - 0x00138DF2 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138D80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31B688);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00138D95u); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138D95: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x31B58C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138DA7u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138DA7: ;
    esi = MEM32(ebx + 0x1C);
    _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00138DE4; /* jle: less or equal (signed <=) */

loc_00138DB9: ;
    /* nop */

loc_00138DC0: ;
    edx = MEM32(ebx + 0x18);
    edi = eax + 1;
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x31B66C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138DDBu); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138DDB: ;
    eax = edi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138DC0; /* jl: less (signed <) */

loc_00138DE4: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00138DEDu); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00138DED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138E00
 * Original: 0x00138E00 - 0x00138E0D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138E00(void)
{

loc_00138E00: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138E10
 * Original: 0x00138E10 - 0x00138E1D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138E10: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00138E1C; /* jne: not equal / not zero */

loc_00138E17: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax);

loc_00138E1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138E20
 * Original: 0x00138E20 - 0x00138E2D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138E20(void)
{

loc_00138E20: ;
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138E30
 * Original: 0x00138E30 - 0x00138E3C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138E30(void)
{

loc_00138E30: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138E40
 * Original: 0x00138E40 - 0x00138E61 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138E40: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138E58; /* jl: less (signed <) */

loc_00138E53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00138E58: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138E70
 * Original: 0x00138E70 - 0x00138EF8 (136 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138E89u); RECOMP_ABI_CALL(0x0014C140u, sub_0014C140); /* call 0x0014C140 */

loc_00138E89: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00138ED2; /* jle: less or equal (signed <=) */

loc_00138E9A: ;
    /* nop */

loc_00138EA0: ;
    eax = MEM32(eax + edi * 4);
    edx = MEM32(eax + 4);
    ecx = MEM32(edx + 0xC0);
    edx = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x138860);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00138EC3u); RECOMP_ABI_CALL(0x0014BF40u, sub_0014BF40); /* call 0x0014BF40 */

loc_00138EC3: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138EA0; /* jl: less (signed <) */

loc_00138ED2: ;
    ecx = MEM32(esi + 0xC0);
    edx = MEM32(esi + 4);
    edi = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x138890);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x4F54ED00);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138EF5u); RECOMP_ABI_CALL(0x0014BF40u, sub_0014BF40); /* call 0x0014BF40 */

loc_00138EF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138F00
 * Original: 0x00138F00 - 0x00139010 (272 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138F00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B6E0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00138F17u); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138F17: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x31B58C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138F2Au); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138F2A: ;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00138F63; /* jle: less or equal (signed <=) */

loc_00138F3B: ;
    goto loc_00138F40;

    /* nop */

loc_00138F40: ;
    edx = MEM32(esi);
    ebx = eax + 1;
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x31B6C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138F5Au); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138F5A: ;
    eax = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138F40; /* jl: less (signed <) */

loc_00138F63: ;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00138F96; /* jle: less or equal (signed <=) */

loc_00138F72: ;
    edx = MEM32(esi + 0xC);
    ebx = eax + 1;
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x31B6A8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00138F8Du); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138F8D: ;
    eax = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138F72; /* jl: less (signed <) */

loc_00138F96: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x31B698);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138FA5u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138FA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B550);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00138FBAu); RECOMP_ABI_CALL(0x0013B760u, sub_0013B760); /* call 0x0013B760 */

loc_00138FBA: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x18;
    PUSH32(esp, 0x31B540);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138FD2u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138FD2: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, 0x31B528);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138FE5u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138FE5: ;
    eax = esp + 0x2C;
    PUSH32(esp, 0x31B518);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138FF4u); RECOMP_ABI_CALL(0x0013B6A0u, sub_0013B6A0); /* call 0x0013B6A0 */

loc_00138FF4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x00139000u); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00139000: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00139009u); RECOMP_ABI_CALL(0x0013B770u, sub_0013B770); /* call 0x0013B770 */

loc_00139009: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139010
 * Original: 0x00139010 - 0x00139023 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139010: ;
    ecx = MEM32(ecx + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00139020; /* je: equal / zero */

loc_0013901D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139020: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139030
 * Original: 0x00139030 - 0x00139043 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139030: ;
    ecx = MEM32(ecx + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00139040; /* je: equal / zero */

loc_0013903D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139040: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139050
 * Original: 0x00139050 - 0x001390DF (143 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFFFCu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001390B3; /* jle: less or equal (signed <=) */

loc_00139064: ;
    ecx = MEM32(esi + 0x18);
    edi = MEM32(ecx + ebx * 4);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x31B634);
    PUSH32(esp, 0x0013907Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013907B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013909D; /* je: equal / zero */

loc_00139082: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x138810);
    PUSH32(esp, 0x138820);
    PUSH32(esp, 0);
    PUSH32(esp, 0x308DD4);
    ecx = eax;
    PUSH32(esp, 0x0013909Bu); RECOMP_ABI_CALL(0x0014BEE0u, sub_0014BEE0); /* call 0x0014BEE0 */

loc_0013909B: ;
    goto loc_0013909F;

loc_0013909D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013909F: ;
    MEM32(edi + 0xC0) = eax;
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139064; /* jl: less (signed <) */

loc_001390B3: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001390DB; /* jle: less or equal (signed <=) */

loc_001390C2: ;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x001390CDu); RECOMP_ABI_CALL(0x00138E70u, sub_00138E70); /* call 0x00138E70 */

loc_001390CD: ;
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001390C2; /* jl: less (signed <) */

loc_001390DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001390E0
 * Original: 0x001390E0 - 0x0013910E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001390E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001390E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x31B510)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 8) = LO16(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00139110
 * Original: 0x00139110 - 0x00139135 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139110: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139123; /* je: equal / zero */

loc_0013911A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139120u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00139120: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139123: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139133; /* je: equal / zero */

loc_0013912A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00139130u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00139130: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139133: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00139140
 * Original: 0x00139140 - 0x001391D7 (151 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139140: ;
    eax = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x30) = LO8(ecx);
    MEM16(eax + 0x34) = LO16(ecx);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x18) = 0x31B514;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x28) = 0xFF;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x48) = 2;
    SET_LO8(edx, 1);
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x60) = 0x310C84;
    MEM8(eax + 0x74) = LO8(edx);
    MEM8(eax + 0x75) = LO8(edx);
    MEM8(eax + 0x76) = LO8(edx);
    MEM32(eax + 0xB0) = ecx;
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0xB8) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001391E0
 * Original: 0x001391E0 - 0x0013922F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001391E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001391E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001391FE; /* je: equal / zero */

loc_001391EE: ;
    ecx = edi;
    PUSH32(esp, 0x001391F5u); RECOMP_ABI_CALL(0x0014BF30u, sub_0014BF30); /* call 0x0014BF30 */

loc_001391F5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001391FBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001391FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001391FE: ;
    ecx = esi + 0x60;
    PUSH32(esp, 0x00139206u); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_00139206: ;
    MEM32(esi + 0x18) = 0x31B514;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013921D; /* je: equal / zero */

loc_00139214: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013921Au); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013921A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013921D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013922C; /* je: equal / zero */

loc_00139223: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00139229u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00139229: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013922C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00139230
 * Original: 0x00139230 - 0x0013927B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139230: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = 0x310C84;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    SET_LO8(edx, 1);
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    edx = 0xFFFFFFFFu;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00139280
 * Original: 0x00139280 - 0x001392AE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139293; /* je: equal / zero */

loc_0013928A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139290u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00139290: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139293: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001392A5; /* je: equal / zero */

loc_0013929A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001392A5; /* jne: not equal / not zero */

loc_0013929F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001392A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001392A3u); } /* indirect call */
    }

loc_001392A5: ;
    ecx = esi + 0x10;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014E890(); return; /* tail jmp 0x0014E890 */

}

/**
 * sub_001392B0
 * Original: 0x001392B0 - 0x001392CF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001392B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31B514;
    if (TEST_Z(_fa, _fb)) goto loc_001392C9; /* je: equal / zero */

loc_001392C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001392C6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001392C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001392C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001392D0
 * Original: 0x001392D0 - 0x001392FD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001392D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x31B6FC;
    PUSH32(esp, 0x001392E1u); RECOMP_ABI_CALL(0x000EF420u, sub_000EF420); /* call 0x000EF420 */

loc_001392E1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x316ED8;
    if (TEST_Z(_fa, _fb)) goto loc_001392F7; /* je: equal / zero */

loc_001392EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001392F4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001392F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001392F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139300
 * Original: 0x00139300 - 0x0013931A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139300: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x1C0);
    PUSH32(esp, 0x31B710);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00139319u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_00139319: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139320
 * Original: 0x00139320 - 0x00139328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EF3F0(); return; /* tail jmp 0x000EF3F0 */

}

/**
 * sub_00139330
 * Original: 0x00139330 - 0x00139338 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139330: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EF3E0(); return; /* tail jmp 0x000EF3E0 */

}

/**
 * sub_00139340
 * Original: 0x00139340 - 0x0013934B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139340: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EF330(); return; /* tail jmp 0x000EF330 */

}

/**
 * sub_00139350
 * Original: 0x00139350 - 0x00139365 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139350: ;
    ecx = MEM32(ecx + 0x118);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013935F; /* je: equal / zero */

loc_0013935A: ;
    g_seh_ebp = ebp; sub_00140370(); return; /* tail jmp 0x00140370 */

loc_0013935F: ;
    eax = MEM32(0x376D2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00139370
 * Original: 0x00139370 - 0x00139381 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139370: ;
    eax = MEM32(ecx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013937E; /* je: equal / zero */

loc_00139377: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_0013937E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00139390
 * Original: 0x00139390 - 0x001393A3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139390: ;
    eax = MEM32(ecx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013939E; /* je: equal / zero */

loc_00139397: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

loc_0013939E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001393B0
 * Original: 0x001393B0 - 0x001393B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393B0(void)
{

loc_001393B0: ;
    eax = MEM32(ecx + 0x78);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001393C0
 * Original: 0x001393C0 - 0x001393CA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393C0(void)
{

loc_001393C0: ;
    eax = MEM32(ecx + 0x130);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001393D0
 * Original: 0x001393D0 - 0x001393FA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001393D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, 0x001393DFu); RECOMP_ABI_CALL(0x00138AD0u, sub_00138AD0); /* call 0x00138AD0 */

loc_001393DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001393F1; /* jge: greater or equal (signed >=) */

loc_001393EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001393F1: ;
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139400
 * Original: 0x00139400 - 0x00139408 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139400(void)
{

loc_00139400: ;
    MEM8(ecx + 0x1A0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00139410
 * Original: 0x00139410 - 0x0013942C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139410: ;
    eax = MEM32(ecx + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139429; /* je: equal / zero */

loc_0013941A: ;
    ecx = MEM32(ecx + 0x108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139429; /* je: equal / zero */

loc_00139424: ;
    g_seh_ebp = ebp; sub_0012FB40(); return; /* tail jmp 0x0012FB40 */

loc_00139429: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139430
 * Original: 0x00139430 - 0x00139437 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139430(void)
{

loc_00139430: ;
    eax = MEM32(ecx + 0x134);
    esp += 4; return; /* ret */

}

/**
 * sub_00139440
 * Original: 0x00139440 - 0x00139445 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139440: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139450
 * Original: 0x00139450 - 0x00139464 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139450: ;
    ecx = MEM32(ecx + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013945F; /* je: equal / zero */

loc_0013945A: ;
    g_seh_ebp = ebp; sub_00066230(); return; /* tail jmp 0x00066230 */

loc_0013945F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139470
 * Original: 0x00139470 - 0x00139484 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139470: ;
    ecx = MEM32(ecx + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013947F; /* je: equal / zero */

loc_0013947A: ;
    g_seh_ebp = ebp; sub_000661F0(); return; /* tail jmp 0x000661F0 */

loc_0013947F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139490
 * Original: 0x00139490 - 0x001394A5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139490: ;
    ecx = MEM32(ecx + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013949F; /* je: equal / zero */

loc_0013949A: ;
    g_seh_ebp = ebp; sub_00065E20(); return; /* tail jmp 0x00065E20 */

loc_0013949F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001394B0
 * Original: 0x001394B0 - 0x001394C5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001394B0: ;
    ecx = MEM32(ecx + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001394BF; /* je: equal / zero */

loc_001394BA: ;
    g_seh_ebp = ebp; sub_00065E40(); return; /* tail jmp 0x00065E40 */

loc_001394BF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001394D0
 * Original: 0x001394D0 - 0x001394DF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001394D0: ;
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xEC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001394DBu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_001394DB: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001394E0
 * Original: 0x001394E0 - 0x00139511 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001394E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx + 0x10C;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001394F6u); RECOMP_ABI_CALL(0x00112330u, sub_00112330); /* call 0x00112330 */

loc_001394F6: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    edx = esp + 4;
    MEM8(esp + 0x10) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0013950Au); RECOMP_ABI_CALL(0x00112290u, sub_00112290); /* call 0x00112290 */

loc_0013950A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139520
 * Original: 0x00139520 - 0x0013953A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139520: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00139532u); RECOMP_ABI_CALL(0x00112330u, sub_00112330); /* call 0x00112330 */

loc_00139532: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00139540
 * Original: 0x00139540 - 0x0013956E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x0013954Eu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013954E: ;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x00139556u); RECOMP_ABI_CALL(0x00138BB0u, sub_00138BB0); /* call 0x00138BB0 */

loc_00139556: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013956A; /* jne: not equal / not zero */

loc_0013955A: ;
    ecx = MEM32(esi + 0x108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013956A; /* je: equal / zero */

loc_00139564: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012FBB0(); return; /* tail jmp 0x0012FBB0 */

loc_0013956A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139570
 * Original: 0x00139570 - 0x001395A3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139570: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x0013957Eu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013957E: ;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x00139586u); RECOMP_ABI_CALL(0x00138BB0u, sub_00138BB0); /* call 0x00138BB0 */

loc_00139586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013959F; /* jne: not equal / not zero */

loc_0013958A: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, 0x0013959Fu); RECOMP_ABI_CALL(0x0012FBC0u, sub_0012FBC0); /* call 0x0012FBC0 */

loc_0013959F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001395B0
 * Original: 0x001395B0 - 0x001395C1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001395B0: ;
    eax = MEM32(ecx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001395BC; /* je: equal / zero */

loc_001395BA: ;
    ecx = eax;

loc_001395BC: ;
    g_seh_ebp = ebp; sub_00131F50(); return; /* tail jmp 0x00131F50 */

}

/**
 * sub_001395D0
 * Original: 0x001395D0 - 0x001395D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001395D0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_001395E0
 * Original: 0x001395E0 - 0x001395F9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001395E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x114) = eax;
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00110320(); return; /* tail jmp 0x00110320 */

}

/**
 * sub_00139600
 * Original: 0x00139600 - 0x00139607 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139600(void)
{

loc_00139600: ;
    eax = MEM32(ecx + 0x114);
    esp += 4; return; /* ret */

}

/**
 * sub_00139610
 * Original: 0x00139610 - 0x00139621 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139610: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013961Bu); RECOMP_ABI_CALL(0x0013EB50u, sub_0013EB50); /* call 0x0013EB50 */

loc_0013961B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139630
 * Original: 0x00139630 - 0x00139665 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013965D; /* jne: not equal / not zero */

loc_0013963E: ;
    ecx = esi + 0xB8;
    PUSH32(esp, 0x00139649u); RECOMP_ABI_CALL(0x0014CBD0u, sub_0014CBD0); /* call 0x0014CBD0 */

loc_00139649: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD8) = eax;

loc_0013965D: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003C840(); return; /* tail jmp 0x0003C840 */

}

/**
 * sub_00139670
 * Original: 0x00139670 - 0x001396BA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139670: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + -196;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139682; /* je: equal / zero */

loc_0013967D: ;
    eax = esi + -12;
    goto loc_00139684;

loc_00139682: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00139684: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF9FA9C95u);
    PUSH32(esp, ecx);
    ecx = esi + 0xB8;
    PUSH32(esp, 0x0013969Au); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0013969A: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEM32(esi + 0xD0) = 0xF9FA9C95u;
    MEM32(esi + 0xD4) = edx;
    MEM32(esi + 0xD8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001396C0
 * Original: 0x001396C0 - 0x0013970C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001396C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001396C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x118) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001396DAu); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_001396DA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001396E6u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_001396E6: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001396F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001396EFu); } /* indirect call */
    }

loc_001396F5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139705u); RECOMP_ABI_CALL(0x001103B0u, sub_001103B0); /* call 0x001103B0 */

loc_00139705: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139710
 * Original: 0x00139710 - 0x00139797 (135 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139710: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013971F; /* je: equal / zero */

loc_00139717: ;
    eax = esi + 0xB8;
    goto loc_00139721;

loc_0013971F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00139721: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139727u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00139727: ;
    eax = MEM32(esi + 0x1AC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139763; /* je: equal / zero */

loc_00139734: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013973Bu); RECOMP_ABI_CALL(0x0003BEF0u, sub_0003BEF0); /* call 0x0003BEF0 */

loc_0013973B: ;
    edi = MEM32(esi + 0x1AC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139758; /* je: equal / zero */

loc_00139748: ;
    ecx = edi;
    PUSH32(esp, 0x0013974Fu); RECOMP_ABI_CALL(0x0003BF10u, sub_0003BF10); /* call 0x0003BF10 */

loc_0013974F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00139755u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00139755: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139758: ;
    MEM32(esi + 0x1AC) = 0;
    POP32(esp, edi);

loc_00139763: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013978C; /* je: equal / zero */

loc_0013976D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139773u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_00139773: ;
    eax = MEM32(esi + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013977Fu); RECOMP_ABI_CALL(0x0012F7D0u, sub_0012F7D0); /* call 0x0012F7D0 */

loc_0013977F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x108) = 0;

loc_0013978C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00139792u); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00139792: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001397A0
 * Original: 0x001397A0 - 0x00139843 (163 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001397A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001397A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001397B5u); RECOMP_ABI_CALL(0x001306D0u, sub_001306D0); /* call 0x001306D0 */

loc_001397B5: ;
    ecx = esi + 0xEC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001397C0u); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_001397C0: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001397CBu); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_001397CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001397F0; /* je: equal / zero */

loc_001397CF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001397DFu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_001397DF: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001397EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001397E8u); } /* indirect call */
    }

loc_001397EE: ;
    goto loc_00139812;

loc_001397F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 8); /* divss */
    PUSH32(esp, ecx);
    ecx = esi + 0x30;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139812u); RECOMP_ABI_CALL(0x001107F0u, sub_001107F0); /* call 0x001107F0 */

loc_00139812: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013983C; /* je: equal / zero */

loc_0013981C: ;
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */

loc_0013983C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139850
 * Original: 0x00139850 - 0x001398C2 (114 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x00139868u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139862u); } /* indirect call */
    }

loc_00139868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001398BA; /* je: equal / zero */

loc_0013986C: ;
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139881u); RECOMP_ABI_CALL(0x00112580u, sub_00112580); /* call 0x00112580 */

loc_00139881: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001398BA; /* je: equal / zero */

loc_00139885: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001398BA; /* je: equal / zero */

loc_0013988C: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139894u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_00139894: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001398BA; /* je: equal / zero */

loc_0013989D: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001398ABu); RECOMP_ABI_CALL(0x0017F7E0u, sub_0017F7E0); /* call 0x0017F7E0 */

loc_001398AB: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x001398BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001398B4u); } /* indirect call */
    }

loc_001398BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001398D0
 * Original: 0x001398D0 - 0x001398E1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001398D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001398D0: ;
    eax = MEM32(ecx + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001398DE; /* je: equal / zero */

loc_001398DA: ;
    SET_LO8(eax, MEM8(eax + 0x6C));
    esp += 4; return; /* ret */

loc_001398DE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001398F0
 * Original: 0x001398F0 - 0x00139904 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001398F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001398F0: ;
    eax = MEM32(ecx + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139901; /* je: equal / zero */

loc_001398FA: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x6C) = LO8(ecx);

loc_00139901: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139910
 * Original: 0x00139910 - 0x00139A02 (242 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00139910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001399F6; /* jne: not equal / not zero */

loc_0013992B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0xC4);
    ecx = esi + 0xC4;
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esi + 0x1A4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0013994Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139947u); } /* indirect call */
    }

loc_0013994A: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001399EF; /* jbe: below or equal (unsigned <=) */

loc_0013995F: ;
    /* nop */

loc_00139960: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139966u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00139966: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00139973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013996Du); } /* indirect call */
    }

loc_00139973: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001399D9; /* je: equal / zero */

loc_00139977: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001399A6u); RECOMP_ABI_CALL(0x00266320u, sub_00266320); /* call 0x00266320 */

loc_001399A6: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x1A4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_001399CB; /* ja: above (unsigned >) */

loc_001399B6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001399D9; /* jp: parity */

loc_001399CB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x1A4) = xmm0.f[0]; /* movss */

loc_001399D9: ;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139960; /* jl: less (signed <) */

loc_001399EF: ;
    MEM8(esi + 0x1A0) = 1;

loc_001399F6: ;
    fp_push(MEMF(esi + 0x1A4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139A10
 * Original: 0x00139A10 - 0x00139A70 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139A56; /* je: equal / zero */

loc_00139A23: ;
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(esp, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00139A56: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139A70
 * Original: 0x00139A70 - 0x00139AC0 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139A85u); RECOMP_ABI_CALL(0x00130520u, sub_00130520); /* call 0x00130520 */

loc_00139A85: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esp + 0x10;
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esi + 0x10C;
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139AB9u); RECOMP_ABI_CALL(0x001103B0u, sub_001103B0); /* call 0x001103B0 */

loc_00139AB9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139AC0
 * Original: 0x00139AC0 - 0x00139B71 (177 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139AC0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00139B21; /* je: equal / zero */

loc_00139AD5: ;
    PUSH32(esp, edi);

loc_00139AD6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139B20; /* je: equal / zero */

loc_00139ADB: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00139AE6u); RECOMP_ABI_CALL(0x002BE7C0u, sub_002BE7C0); /* call 0x002BE7C0 */

loc_00139AE6: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00139B12; /* jbe: below or equal (unsigned <=) */

loc_00139AEF: ;
    PUSH32(esp, 0x200);
    ecx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00139AFFu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00139AFF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM8(esp + edi + 0x20) = 0;
    PUSH32(esp, 0x00139B0Fu); RECOMP_ABI_CALL(0x0013EB50u, sub_0013EB50); /* call 0x0013EB50 */

loc_00139B0F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139B12: ;
    SET_LO8(eax, MEM8(esi + edi));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139B1C; /* jne: not equal / not zero */

loc_00139B1B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00139B1C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139AD6; /* jne: not equal / not zero */

loc_00139B20: ;
    POP32(esp, edi);

loc_00139B21: ;
    SET_LO8(eax, MEM8(ebp + 0x179));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139B45; /* jne: not equal / not zero */

loc_00139B2B: ;
    ecx = ebp + 0xEC;
    PUSH32(esp, 0x00139B36u); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_00139B36: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x00139B41u); RECOMP_ABI_CALL(0x00138A40u, sub_00138A40); /* call 0x00138A40 */

loc_00139B41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139B4A; /* je: equal / zero */

loc_00139B45: ;
    PUSH32(esp, 0x00139B4Au); RECOMP_ABI_CALL(0x0013B780u, sub_0013B780); /* call 0x0013B780 */

loc_00139B4A: ;
    ecx = ebp + 0xEC;
    PUSH32(esp, 0x00139B55u); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_00139B55: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x00139B60u); RECOMP_ABI_CALL(0x00138A40u, sub_00138A40); /* call 0x00138A40 */

loc_00139B60: ;
    POP32(esp, esi);
    MEM8(ebp + 0x179) = LO8(eax);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139B80
 * Original: 0x00139B80 - 0x00139CC0 (320 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139B9Du); RECOMP_ABI_CALL(0x00138A60u, sub_00138A60); /* call 0x00138A60 */

loc_00139B9D: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139BA4u); RECOMP_ABI_CALL(0x00020200u, sub_00020200); /* call 0x00020200 */

loc_00139BA4: ;
    edi = eax;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139BCE; /* je: equal / zero */

loc_00139BB0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x13C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x13C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139BCE; /* je: equal / zero */

loc_00139BB8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00139BC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139BBDu); } /* indirect call */
    }

loc_00139BC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x13C) = eax;

loc_00139BCE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139C36; /* je: equal / zero */

loc_00139BD2: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139C36; /* jne: not equal / not zero */

loc_00139BDC: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00139BE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139BE1u); } /* indirect call */
    }

loc_00139BE4: ;
    edx = MEM32(esi + 0xB8);
    ecx = esp + 0x10;
    edi = esi + 0xB8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi + 0x138) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00139C00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139BFDu); } /* indirect call */
    }

loc_00139C00: ;
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139C08u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00139C08: ;
    ecx = MEM32(esi + 0x138);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00139C17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139C15u); } /* indirect call */
    }

loc_00139C17: ;
    ecx = MEM32(esi + 0x138);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00139C24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139C21u); } /* indirect call */
    }

loc_00139C24: ;
    ecx = MEM32(esi + 0x138);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00139C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139C2Du); } /* indirect call */
    }

loc_00139C30: ;
    MEM32(esi + 0x13C) = ebx;

loc_00139C36: ;
    ecx = MEM32(esp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139C3Fu); RECOMP_ABI_CALL(0x001389B0u, sub_001389B0); /* call 0x001389B0 */

loc_00139C3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139C9C; /* je: equal / zero */

loc_00139C43: ;
    eax = MEM32(esi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139CB7; /* jne: not equal / not zero */

loc_00139C4D: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x31B724);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139C5Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00139C5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139C83; /* je: equal / zero */

loc_00139C65: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139C6Cu); RECOMP_ABI_CALL(0x00140550u, sub_00140550); /* call 0x00140550 */

loc_00139C6C: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 0x140) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139C7Au); RECOMP_ABI_CALL(0x001405C0u, sub_001405C0); /* call 0x001405C0 */

loc_00139C7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00139C83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 0x140) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139C93u); RECOMP_ABI_CALL(0x001405C0u, sub_001405C0); /* call 0x001405C0 */

loc_00139C93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00139C9C: ;
    ecx = MEM32(esi + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139CAD; /* je: equal / zero */

loc_00139CA6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00139CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139CAAu); } /* indirect call */
    }

loc_00139CAD: ;
    MEM32(esi + 0x140) = 0;

loc_00139CB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139CC0
 * Original: 0x00139CC0 - 0x00139CF3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x00139CCEu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_00139CCE: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x00139CD9u); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_00139CD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139CEF; /* je: equal / zero */

loc_00139CDD: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139CEF; /* je: equal / zero */

loc_00139CE7: ;
    ecx = eax;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x44)); return; /* indirect tail jmp */

loc_00139CEF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139D00
 * Original: 0x00139D00 - 0x00139D33 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x00139D0Eu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_00139D0E: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x00139D19u); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_00139D19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139D2F; /* je: equal / zero */

loc_00139D1D: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139D2F; /* je: equal / zero */

loc_00139D27: ;
    ecx = eax;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

loc_00139D2F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139D40
 * Original: 0x00139D40 - 0x00139D7A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0xEC;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00139D51u); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_00139D51: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x00139D5Cu); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_00139D5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139D73; /* je: equal / zero */

loc_00139D60: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139D73; /* je: equal / zero */

loc_00139D6A: ;
    ecx = eax;
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

loc_00139D73: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139D80
 * Original: 0x00139D80 - 0x00139E41 (193 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x104);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00139DF6; /* je: equal / zero */

loc_00139D9A: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00139DA1u); RECOMP_ABI_CALL(0x000FD480u, sub_000FD480); /* call 0x000FD480 */

loc_00139DA1: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139E38; /* je: equal / zero */

loc_00139DB1: ;
    edi = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00139DCA; /* jle: less or equal (signed <=) */

loc_00139DBB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139DCA; /* jl: less (signed <) */

loc_00139DBF: ;
    ecx = ecx + ecx * 4 + 5;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00139DCC;

loc_00139DCA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00139DCC: ;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    edx = MEM32(ebp + 0xC);
    XMM_STORE(edx, xmm1); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(edx + 0x20, xmm1); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00139DF6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00139E00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139DFAu); } /* indirect call */
    }

loc_00139E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139E36; /* je: equal / zero */

loc_00139E0A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00139E15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139E0Fu); } /* indirect call */
    }

loc_00139E15: ;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    XMM_STORE(ecx, xmm1); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x20, xmm1); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */

loc_00139E36: ;
    SET_LO8(eax, LO8(ebx));

loc_00139E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139E50
 * Original: 0x00139E50 - 0x00139E70 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + -100);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + -96);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + -92);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139E70
 * Original: 0x00139E70 - 0x00139E90 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x60);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x68);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139E90
 * Original: 0x00139E90 - 0x00139EC4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + -132); /* movaps */
    xmm1 = XMM_MEM(ecx + -148); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + -100); /* movaps */
    xmm1 = XMM_MEM(ecx + -116); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139ED0
 * Original: 0x00139ED0 - 0x00139F06 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139ED0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139EDC; /* je: equal / zero */

loc_00139ED4: ;
    eax = ecx + 0xB8;
    goto loc_00139EDE;

loc_00139EDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00139EDE: ;
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00139F03u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00139F03: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139F10
 * Original: 0x00139F10 - 0x00139F70 (96 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139F10: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ebx + 0x10C;
    if (CMP_EQ(_fa, _fb)) goto loc_00139F6C; /* je: equal / zero */

loc_00139F23: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x1C);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139F35u); RECOMP_ABI_CALL(0x00112580u, sub_00112580); /* call 0x00112580 */

loc_00139F35: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x00139F44u); RECOMP_ABI_CALL(0x00139850u, sub_00139850); /* call 0x00139850 */

loc_00139F44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139F5B; /* je: equal / zero */

loc_00139F48: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00139F52u); RECOMP_ABI_CALL(0x001497B0u, sub_001497B0); /* call 0x001497B0 */

loc_00139F52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00139F5B: ;
    esi = 0x29;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00139F67u); RECOMP_ABI_CALL(0x001497B0u, sub_001497B0); /* call 0x001497B0 */

loc_00139F67: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00139F6C: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00139F70
 * Original: 0x00139F70 - 0x00139FB8 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139FA1; /* je: equal / zero */

loc_00139F7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00139F84u); RECOMP_ABI_CALL(0x000F2620u, sub_000F2620); /* call 0x000F2620 */

loc_00139F84: ;
    ecx = eax;
    PUSH32(esp, 0x00139F8Bu); RECOMP_ABI_CALL(0x000F2510u, sub_000F2510); /* call 0x000F2510 */

loc_00139F8B: ;
    ecx = MEM32(esi + 0x144);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00139F97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00139F95u); } /* indirect call */
    }

loc_00139F97: ;
    MEM32(esi + 0x144) = 0;

loc_00139FA1: ;
    ecx = esi;
    PUSH32(esp, 0x00139FA8u); RECOMP_ABI_CALL(0x00139710u, sub_00139710); /* call 0x00139710 */

loc_00139FA8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00139FB4u); RECOMP_ABI_CALL(0x00131F10u, sub_00131F10); /* call 0x00131F10 */

loc_00139FB4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00139FC0
 * Original: 0x00139FC0 - 0x0013A081 (193 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00139FC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00139FCEu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_00139FCE: ;
    SET_LO8(eax, MEM8(esi + 0x1B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139FF2; /* je: equal / zero */

loc_00139FD8: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139FF2; /* je: equal / zero */

loc_00139FE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139FE8u); RECOMP_ABI_CALL(0x0003BEA0u, sub_0003BEA0); /* call 0x0003BEA0 */

loc_00139FE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x1B0) = 0;

loc_00139FF2: ;
    ecx = esi;
    MEM8(esi + 0x1A0) = 0;
    PUSH32(esp, 0x0013A000u); RECOMP_ABI_CALL(0x00139910u, sub_00139910); /* call 0x00139910 */

loc_0013A000: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A042; /* je: equal / zero */

loc_0013A00C: ;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x0013A017u); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013A017: ;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x0013A01Fu); RECOMP_ABI_CALL(0x00138BB0u, sub_00138BB0); /* call 0x00138BB0 */

loc_0013A01F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A042; /* jne: not equal / not zero */

loc_0013A023: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x108);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013A042u); RECOMP_ABI_CALL(0x0012FBD0u, sub_0012FBD0); /* call 0x0012FBD0 */

loc_0013A042: ;
    ecx = MEM32(esi + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A052; /* je: equal / zero */

loc_0013A04C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013A052u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A04Fu); } /* indirect call */
    }

loc_0013A052: ;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x0013A05Du); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013A05D: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x0013A068u); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_0013A068: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A07C; /* je: equal / zero */

loc_0013A06C: ;
    ecx = MEM32(esi + 0x108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A07C; /* je: equal / zero */

loc_0013A076: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0013A07Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A079u); } /* indirect call */
    }

loc_0013A07C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A090
 * Original: 0x0013A090 - 0x0013A0C4 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A090: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xB8);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x2FF7D4;
    MEM32(esp + 8) = 0xD93CA11Du;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013A0B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A0B3u); } /* indirect call */
    }

loc_0013A0B6: ;
    ecx = esp;
    PUSH32(esp, 0x0013A0BEu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0013A0BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013A0D0
 * Original: 0x0013A0D0 - 0x0013A25A (394 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A0E9u); RECOMP_ABI_CALL(0x00138AE0u, sub_00138AE0); /* call 0x00138AE0 */

loc_0013A0E9: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = ZX16(LO16(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A251; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013A0FE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x11C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A251; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0013A113: ;
    ecx = MEM32(esi + 0xE8);
    MEM8(esp + 0x13) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A123u); RECOMP_ABI_CALL(0x00138AD0u, sub_00138AD0); /* call 0x00138AD0 */

loc_0013A123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0013A135; /* jge: greater or equal (signed >=) */

loc_0013A12F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0013A135: ;
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013A14A; /* jp: parity */

loc_0013A145: ;
    MEM8(esp + 0x13) = 1;

loc_0013A14A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x11C)); /* movss */
    ecx = MEM32(esi + 0xE8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esi + 0x11C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A170u); RECOMP_ABI_CALL(0x00138D00u, sub_00138D00); /* call 0x00138D00 */

loc_0013A170: ;
    ebx = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013A251; /* js: sign (negative) */

loc_0013A179: ;
    /* nop */

loc_0013A180: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A18Cu); RECOMP_ABI_CALL(0x00138E20u, sub_00138E20); /* call 0x00138E20 */

loc_0013A18C: ;
    edi = eax;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A195u); RECOMP_ABI_CALL(0x00138B70u, sub_00138B70); /* call 0x00138B70 */

loc_0013A195: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xE8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A1A4u); RECOMP_ABI_CALL(0x00138AD0u, sub_00138AD0); /* call 0x00138AD0 */

loc_0013A1A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0013A1B6; /* jge: greater or equal (signed >=) */

loc_0013A1B0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0013A1B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0013A251; /* ja: above (unsigned >) */

loc_0013A1CE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x11C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A1EC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x11C)) */

loc_0013A1DF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013A1EC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0013A1EA: ;
    SET_LO8(eax, 1);

loc_0013A1EC: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A216; /* je: equal / zero */

loc_0013A1F4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x317A94)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0013A21A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013A216: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A24A; /* je: equal / zero */

loc_0013A21A: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A221u); RECOMP_ABI_CALL(0x00138B90u, sub_00138B90); /* call 0x00138B90 */

loc_0013A221: ;
    edx = MEM32(esi + 0xB8);
    MEM32(esp + 0x24) = eax;
    ecx = esi + 0xB8;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0x2FF7D4;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013A241u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A23Eu); } /* indirect call */
    }

loc_0013A241: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A24Au); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0013A24A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0013A180; /* jns: not sign (positive) */

loc_0013A251: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A260
 * Original: 0x0013A260 - 0x0013A690 (1072 bytes, 330 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A27Eu); RECOMP_ABI_CALL(0x00138D20u, sub_00138D20); /* call 0x00138D20 */

loc_0013A27E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013A28E; /* jg: greater (signed >) */

loc_0013A282: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A321; /* je: equal / zero */

loc_0013A28E: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A296u); RECOMP_ABI_CALL(0x00138BB0u, sub_00138BB0); /* call 0x00138BB0 */

loc_0013A296: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013A2F0; /* je: equal / zero */

loc_0013A29A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013A321; /* jne: not equal / not zero */

loc_0013A2A1: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A2AAu); RECOMP_ABI_CALL(0x00138E40u, sub_00138E40); /* call 0x00138E40 */

loc_0013A2AA: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A2B6u); RECOMP_ABI_CALL(0x00139010u, sub_00139010); /* call 0x00139010 */

loc_0013A2B6: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A2C7; /* je: equal / zero */

loc_0013A2BC: ;
    ecx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    MEM32(eax + 4) = ecx;

loc_0013A2C7: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A2E4; /* je: equal / zero */

loc_0013A2CF: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0013A2E4; /* jne: not equal / not zero */

loc_0013A2DE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013A2E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A2E2u); } /* indirect call */
    }

loc_0013A2E4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1B4) (32-bit) */
    goto loc_0013A316;

loc_0013A2F0: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A309; /* jne: not equal / not zero */

loc_0013A2FA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A300u); RECOMP_ABI_CALL(0x00138E40u, sub_00138E40); /* call 0x00138E40 */

loc_0013A300: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A307u); RECOMP_ABI_CALL(0x00138C60u, sub_00138C60); /* call 0x00138C60 */

loc_0013A307: ;
    edi = eax;

loc_0013A309: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A321; /* je: equal / zero */

loc_0013A313: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x10) (32-bit) */

loc_0013A316: ;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A56A; /* je: equal / zero */

loc_0013A321: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A346; /* je: equal / zero */

loc_0013A32B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A331u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_0013A331: ;
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A33Du); RECOMP_ABI_CALL(0x0012F7D0u, sub_0012F7D0); /* call 0x0012F7D0 */

loc_0013A33D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x108) = ebx;

loc_0013A346: ;
    ecx = MEM32(esi + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A35C; /* je: equal / zero */

loc_0013A350: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013A356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A354u); } /* indirect call */
    }

loc_0013A356: ;
    MEM32(esi + 0x104) = ebx;

loc_0013A35C: ;
    ecx = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A377; /* je: equal / zero */

loc_0013A366: ;
    MEM32(esi + 0x1B4) = ebx;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013A377; /* jne: not equal / not zero */

loc_0013A371: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013A377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A375u); } /* indirect call */
    }

loc_0013A377: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A457; /* je: equal / zero */

loc_0013A37F: ;
    ecx = MEM32(esi + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A395; /* je: equal / zero */

loc_0013A389: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013A38Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A38Du); } /* indirect call */
    }

loc_0013A38F: ;
    MEM32(esi + 0x134) = ebx;

loc_0013A395: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x31B85C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A3A6u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013A3A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A3B7; /* je: equal / zero */

loc_0013A3AD: ;
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A3B5u); RECOMP_ABI_CALL(0x0014F070u, sub_0014F070); /* call 0x0014F070 */

loc_0013A3B5: ;
    goto loc_0013A3B9;

loc_0013A3B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013A3B9: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x104) = eax;
    ebx = MEM32(eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A3CEu); RECOMP_ABI_CALL(0x001389F0u, sub_001389F0); /* call 0x001389F0 */

loc_0013A3CE: ;
    ecx = MEM32(esi + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x0013A3D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A3D5u); } /* indirect call */
    }

loc_0013A3D8: ;
    eax = MEM32(esi + 0x104);
    ebx = MEM32(eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A3E7u); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_0013A3E7: ;
    ecx = MEM32(esi + 0x104);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x0013A3F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A3EEu); } /* indirect call */
    }

loc_0013A3F1: ;
    PUSH32(esp, 0x3B9EB4C8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A3FBu); RECOMP_ABI_CALL(0x0012F8D0u, sub_0012F8D0); /* call 0x0012F8D0 */

loc_0013A3FB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x108) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A445; /* je: equal / zero */

loc_0013A40A: ;
    ecx = MEM32(esi + 0x104);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A418u); RECOMP_ABI_CALL(0x0012FB20u, sub_0012FB20); /* call 0x0012FB20 */

loc_0013A418: ;
    eax = MEM32(esi + 0xE8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x31B6F8); /* addss */
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x108);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A440u); RECOMP_ABI_CALL(0x0012FB40u, sub_0012FB40); /* call 0x0012FB40 */

loc_0013A440: ;
    goto loc_0013A522;

loc_0013A445: ;
    PUSH32(esp, 0x31B818);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A44Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013A44F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013A522;

loc_0013A457: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A522; /* je: equal / zero */

loc_0013A466: ;
    _fa = (uint32_t)(MEM32(esi + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x134), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A497; /* jne: not equal / not zero */

loc_0013A46E: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x31B7D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A47Fu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013A47F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A48F; /* je: equal / zero */

loc_0013A486: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A48Du); RECOMP_ABI_CALL(0x00065EB0u, sub_00065EB0); /* call 0x00065EB0 */

loc_0013A48D: ;
    goto loc_0013A491;

loc_0013A48F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013A491: ;
    MEM32(esi + 0x134) = eax;

loc_0013A497: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A49Fu); RECOMP_ABI_CALL(0x00138BC0u, sub_00138BC0); /* call 0x00138BC0 */

loc_0013A49F: ;
    ecx = MEM32(esi + 0x134);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A4ABu); RECOMP_ABI_CALL(0x00066560u, sub_00066560); /* call 0x00066560 */

loc_0013A4AB: ;
    PUSH32(esp, 0xAAB4AD23u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A4B5u); RECOMP_ABI_CALL(0x0012F8D0u, sub_0012F8D0); /* call 0x0012F8D0 */

loc_0013A4B5: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x108) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A4C8u); RECOMP_ABI_CALL(0x00133690u, sub_00133690); /* call 0x00133690 */

loc_0013A4C8: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A4D9; /* je: equal / zero */

loc_0013A4D6: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013A4D9: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A4E0u); RECOMP_ABI_CALL(0x00133CA0u, sub_00133CA0); /* call 0x00133CA0 */

loc_0013A4E0: ;
    MEM8(edi + 0xFC) = LO8(ebx);
    edi = MEM32(ebp + 8);
    ebx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A4F5u); RECOMP_ABI_CALL(0x001389F0u, sub_001389F0); /* call 0x001389F0 */

loc_0013A4F5: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x160); PUSH32(esp, 0x0013A4FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A4F8u); } /* indirect call */
    }

loc_0013A4FE: ;
    ebx = MEM32(esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A507u); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_0013A507: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x168); PUSH32(esp, 0x0013A510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A50Au); } /* indirect call */
    }

loc_0013A510: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 0x1B4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A520u); RECOMP_ABI_CALL(0x000E95F0u, sub_000E95F0); /* call 0x000E95F0 */

loc_0013A520: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013A522: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = esi + 0x10C;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A56A; /* je: equal / zero */

loc_0013A532: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A53Cu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0013A53C: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A56A; /* je: equal / zero */

loc_0013A546: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */

loc_0013A56A: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A577u); RECOMP_ABI_CALL(0x00138990u, sub_00138990); /* call 0x00138990 */

loc_0013A577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A5EE; /* je: equal / zero */

loc_0013A57B: ;
    _fa = (uint32_t)(MEM32(esi + 0x1AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1AC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A5B5; /* jne: not equal / not zero */

loc_0013A583: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x31B79C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A594u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013A594: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A5A4; /* je: equal / zero */

loc_0013A59B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A5A2u); RECOMP_ABI_CALL(0x0003B8B0u, sub_0003B8B0); /* call 0x0003B8B0 */

loc_0013A5A2: ;
    goto loc_0013A5A6;

loc_0013A5A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013A5A6: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x1AC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A5B2u); RECOMP_ABI_CALL(0x0003BEB0u, sub_0003BEB0); /* call 0x0003BEB0 */

loc_0013A5B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013A5B5: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A674; /* je: equal / zero */

loc_0013A5C3: ;
    PUSH32(esp, ebx);

loc_0013A5C4: ;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x24) = ebx;
    ecx = MEM32(esi + 0x1AC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A5E2u); RECOMP_ABI_CALL(0x0003B6B0u, sub_0003B6B0); /* call 0x0003B6B0 */

loc_0013A5E2: ;
    MEM8(esi + 0x1B0) = 1;
    goto loc_0013A674;

loc_0013A5EE: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A5F5u); RECOMP_ABI_CALL(0x00138A00u, sub_00138A00); /* call 0x00138A00 */

loc_0013A5F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A641; /* je: equal / zero */

loc_0013A5F9: ;
    _fa = (uint32_t)(MEM32(esi + 0x1AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1AC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A633; /* jne: not equal / not zero */

loc_0013A601: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x31B760);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A612u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013A612: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A622; /* je: equal / zero */

loc_0013A619: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A620u); RECOMP_ABI_CALL(0x0003B8B0u, sub_0003B8B0); /* call 0x0003B8B0 */

loc_0013A620: ;
    goto loc_0013A624;

loc_0013A622: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013A624: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x1AC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A630u); RECOMP_ABI_CALL(0x0003BEB0u, sub_0003BEB0); /* call 0x0003BEB0 */

loc_0013A630: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013A633: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A674; /* je: equal / zero */

loc_0013A63D: ;
    PUSH32(esp, 2);
    goto loc_0013A5C4;

loc_0013A641: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A674; /* je: equal / zero */

loc_0013A64B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A651u); RECOMP_ABI_CALL(0x0003BEF0u, sub_0003BEF0); /* call 0x0003BEF0 */

loc_0013A651: ;
    edi = MEM32(esi + 0x1AC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A66E; /* je: equal / zero */

loc_0013A65E: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A665u); RECOMP_ABI_CALL(0x0003BF10u, sub_0003BF10); /* call 0x0003BF10 */

loc_0013A665: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A66Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013A66B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013A66E: ;
    MEM32(esi + 0x1AC) = ebx;

loc_0013A674: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A687; /* je: equal / zero */

loc_0013A67C: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013A687; /* jne: not equal / not zero */

loc_0013A681: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013A687u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A685u); } /* indirect call */
    }

loc_0013A687: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013A690
 * Original: 0x0013A690 - 0x0013A6F8 (104 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A690: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x144);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013A6A3u); RECOMP_ABI_CALL(0x000F2620u, sub_000F2620); /* call 0x000F2620 */

loc_0013A6A3: ;
    ecx = eax;
    PUSH32(esp, 0x0013A6AAu); RECOMP_ABI_CALL(0x000F2510u, sub_000F2510); /* call 0x000F2510 */

loc_0013A6AA: ;
    ecx = esi + 0xEC;
    MEM32(esi + 0x144) = 0;
    PUSH32(esp, 0x0013A6BFu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013A6BF: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    PUSH32(esp, 0x0013A6CAu); RECOMP_ABI_CALL(0x00138980u, sub_00138980); /* call 0x00138980 */

loc_0013A6CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A6F3; /* je: equal / zero */

loc_0013A6CE: ;
    ecx = esi + 0xB8;
    edx = esp + 4;
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 8) = 0x2FF7D4;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013A6EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A6E7u); } /* indirect call */
    }

loc_0013A6EA: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0013A6F3u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0013A6F3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013A700
 * Original: 0x0013A700 - 0x0013A9F4 (756 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A71Bu); RECOMP_ABI_CALL(0x00138BB0u, sub_00138BB0); /* call 0x00138BB0 */

loc_0013A71B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A74F; /* jne: not equal / not zero */

loc_0013A71F: ;
    ecx = MEM32(esi + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A74F; /* je: equal / zero */

loc_0013A729: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A733u); RECOMP_ABI_CALL(0x0014DD80u, sub_0014DD80); /* call 0x0014DD80 */

loc_0013A733: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x104);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A74Du); RECOMP_ABI_CALL(0x0014DDC0u, sub_0014DDC0); /* call 0x0014DDC0 */

loc_0013A74D: ;
    goto loc_0013A7AE;

loc_0013A74F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A756u); RECOMP_ABI_CALL(0x00138BB0u, sub_00138BB0); /* call 0x00138BB0 */

loc_0013A756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A7AE; /* jne: not equal / not zero */

loc_0013A75B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */

loc_0013A7AE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A7B8u); RECOMP_ABI_CALL(0x001389C0u, sub_001389C0); /* call 0x001389C0 */

loc_0013A7B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A863; /* je: equal / zero */

loc_0013A7C0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A7C7u); RECOMP_ABI_CALL(0x00138910u, sub_00138910); /* call 0x00138910 */

loc_0013A7C7: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A7D2u); RECOMP_ABI_CALL(0x00138920u, sub_00138920); /* call 0x00138920 */

loc_0013A7D2: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A7DDu); RECOMP_ABI_CALL(0x00138930u, sub_00138930); /* call 0x00138930 */

loc_0013A7DD: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    MEM8(esp + 0x2C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A7EDu); RECOMP_ABI_CALL(0x00138950u, sub_00138950); /* call 0x00138950 */

loc_0013A7ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0013A80B; /* ja: above (unsigned >) */

loc_0013A7F2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x13A9F4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0013A7F9u) goto loc_0013A7F9;
    if (_jt == 0x0013A7FDu) goto loc_0013A7FD;
    if (_jt == 0x0013A804u) goto loc_0013A804;
    if (_jt == 0x0013A80Bu) goto loc_0013A80B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0013A7F9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013A810;

loc_0013A7FD: ;
    ebx = 1;
    goto loc_0013A810;

loc_0013A804: ;
    ebx = 3;
    goto loc_0013A810;

loc_0013A80B: ;
    ebx = 2;

loc_0013A810: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, esi);
    ecx = edi;
    XMM_STORE(esp + 0xA4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A845u); RECOMP_ABI_CALL(0x00138960u, sub_00138960); /* call 0x00138960 */

loc_0013A845: ;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A861u); RECOMP_ABI_CALL(0x001129B0u, sub_001129B0); /* call 0x001129B0 */

loc_0013A861: ;
    goto loc_0013A86E;

loc_0013A863: ;
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A86Eu); RECOMP_ABI_CALL(0x00112A60u, sub_00112A60); /* call 0x00112A60 */

loc_0013A86E: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A875u); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_0013A875: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi + 0x10C;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A883; /* je: equal / zero */

loc_0013A87F: ;
    PUSH32(esp, 1);
    goto loc_0013A885;

loc_0013A883: ;
    PUSH32(esp, 6);

loc_0013A885: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A88Au); RECOMP_ABI_CALL(0x00110230u, sub_00110230); /* call 0x00110230 */

loc_0013A88A: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A891u); RECOMP_ABI_CALL(0x00138940u, sub_00138940); /* call 0x00138940 */

loc_0013A891: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A8A7; /* jne: not equal / not zero */

loc_0013A897: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A89Eu); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_0013A89E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A8A7; /* jne: not equal / not zero */

loc_0013A8A2: ;
    ebx = 0x1E;

loc_0013A8A7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0013A8AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A8ACu); } /* indirect call */
    }

loc_0013A8AF: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A8B6u); RECOMP_ABI_CALL(0x00138990u, sub_00138990); /* call 0x00138990 */

loc_0013A8B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013A9B0; /* je: equal / zero */

loc_0013A8C2: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A8C9u); RECOMP_ABI_CALL(0x00138970u, sub_00138970); /* call 0x00138970 */

loc_0013A8C9: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x31B898);
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A8E1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013A8E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A9EB; /* je: equal / zero */

loc_0013A8EC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A8F3u); RECOMP_ABI_CALL(0x000F28A0u, sub_000F28A0); /* call 0x000F28A0 */

loc_0013A8F3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A9EB; /* je: equal / zero */

loc_0013A8FD: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    eax = esp + 0x70;
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(esp + 0xA4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A936u); RECOMP_ABI_CALL(0x000F2820u, sub_000F2820); /* call 0x000F2820 */

loc_0013A936: ;
    edx = MEM32(edi);
    eax = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0013A945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A93Fu); } /* indirect call */
    }

loc_0013A945: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A94Du); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0013A94D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A957u); RECOMP_ABI_CALL(0x000F2620u, sub_000F2620); /* call 0x000F2620 */

loc_0013A957: ;
    ecx = MEM32(esp + 0x18);
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A965u); RECOMP_ABI_CALL(0x000F2650u, sub_000F2650); /* call 0x000F2650 */

loc_0013A965: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A971u); RECOMP_ABI_CALL(0x000F24F0u, sub_000F24F0); /* call 0x000F24F0 */

loc_0013A971: ;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A97Au); RECOMP_ABI_CALL(0x000F2500u, sub_000F2500); /* call 0x000F2500 */

loc_0013A97A: ;
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A988u); RECOMP_ABI_CALL(0x000F2510u, sub_000F2510); /* call 0x000F2510 */

loc_0013A988: ;
    PUSH32(esp, 6);
    ecx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A995u); RECOMP_ABI_CALL(0x00110230u, sub_00110230); /* call 0x00110230 */

loc_0013A995: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A9A1u); RECOMP_ABI_CALL(0x00131F50u, sub_00131F50); /* call 0x00131F50 */

loc_0013A9A1: ;
    MEM32(esi + 0x144) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013A9B0: ;
    eax = MEM32(esi + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A9E1; /* je: equal / zero */

loc_0013A9BA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A9C1u); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_0013A9C1: ;
    ecx = MEM32(esi + 0x144);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A9CEu); RECOMP_ABI_CALL(0x000F2620u, sub_000F2620); /* call 0x000F2620 */

loc_0013A9CE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013A9D5u); RECOMP_ABI_CALL(0x000F2510u, sub_000F2510); /* call 0x000F2510 */

loc_0013A9D5: ;
    ecx = MEM32(esi + 0x144);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013A9E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013A9DFu); } /* indirect call */
    }

loc_0013A9E1: ;
    MEM32(esi + 0x144) = 0;

loc_0013A9EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013AA10
 * Original: 0x0013AA10 - 0x0013AAAF (159 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0013AA10: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0x45));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA9F; /* je: equal / zero */

loc_0013AA29: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x11C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013AA9F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x11C)) */

loc_0013AA32: ;
    ecx = MEM32(esi + 0x118);
    PUSH32(esp, 0x56CDDB60);
    PUSH32(esp, 0x0013AA42u); RECOMP_ABI_CALL(0x00140380u, sub_00140380); /* call 0x00140380 */

loc_0013AA42: ;
    ecx = eax;
    PUSH32(esp, 0x0013AA49u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0013AA49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA9F; /* je: equal / zero */

loc_0013AA4D: ;
    ecx = MEM32(esi + 0x118);
    PUSH32(esp, 0x55FA7718);
    PUSH32(esp, 0x0013AA5Du); RECOMP_ABI_CALL(0x00140380u, sub_00140380); /* call 0x00140380 */

loc_0013AA5D: ;
    ecx = eax;
    PUSH32(esp, 0x0013AA64u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0013AA64: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x178));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0013AA94; /* jne: not equal / not zero */

loc_0013AA78: ;
    ecx = MEM32(esp + 8);
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x909DF6B6u);
    PUSH32(esp, ecx);
    ecx = esi + 0x148;
    PUSH32(esp, 0x0013AA94u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0013AA94: ;
    MEM8(esi + 0x178) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0013AA9F: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0013AAABu); RECOMP_ABI_CALL(0x0013A0D0u, sub_0013A0D0); /* call 0x0013A0D0 */

loc_0013AAAB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013AAB0
 * Original: 0x0013AAB0 - 0x0013AAF5 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AAB0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AAF3; /* je: equal / zero */

loc_0013AABD: ;
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0;
    if ((_fa == 0)) goto loc_0013AAF1; /* je: equal / zero */

loc_0013AADD: ;
    /* nop */

loc_0013AAE0: ;
    ecx = MEM32(ebx + 0x104);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013AAECu); RECOMP_ABI_CALL(0x0014E2D0u, sub_0014E2D0); /* call 0x0014E2D0 */

loc_0013AAEC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013AAE0; /* jb: below (unsigned <) */

loc_0013AAF1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0013AAF3: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB00
 * Original: 0x0013AB00 - 0x0013AB35 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013AB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x124) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013AB31; /* jge: greater or equal (signed >=) */

loc_0013AB11: ;
    edx = MEM32(esi + 0x128);
    ecx = eax + eax * 8;
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AB2B; /* je: equal / zero */

loc_0013AB21: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013AB2Bu); RECOMP_ABI_CALL(0x0017FC80u, sub_0017FC80); /* call 0x0017FC80 */

loc_0013AB2B: ;
    MEM32(esi + 0x120) = MEM32(esi + 0x120) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013AB31: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013AB40
 * Original: 0x0013AB40 - 0x0013ADD7 (663 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013AB40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x0013AB5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AB58u); } /* indirect call */
    }

loc_0013AB5E: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0013AB6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AB66u); } /* indirect call */
    }

loc_0013AB6C: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x0013AB7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AB74u); } /* indirect call */
    }

loc_0013AB7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013AB99; /* jne: not equal / not zero */

loc_0013AB82: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x0013AB90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AB8Au); } /* indirect call */
    }

loc_0013AB90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0013AB99: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ABA5u); RECOMP_ABI_CALL(0x00139F10u, sub_00139F10); /* call 0x00139F10 */

loc_0013ABA5: ;
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ABAEu); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_0013ABAE: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ABC1u); RECOMP_ABI_CALL(0x000165B0u, sub_000165B0); /* call 0x000165B0 */

loc_0013ABC1: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AD47; /* je: equal / zero */

loc_0013ABCD: ;
    eax = MEM32(ebx + 0x10C);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0013ABDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013ABDCu); } /* indirect call */
    }

loc_0013ABDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013ACAD; /* je: equal / zero */

loc_0013ABE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013ACAD; /* je: equal / zero */

loc_0013ABF1: ;
    eax = MEM32(esi);
    edi = MEM32(edi + 0x1C);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x0013AC03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013ABFDu); } /* indirect call */
    }

loc_0013AC03: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0013AC0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AC07u); } /* indirect call */
    }

loc_0013AC0D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31B6F8)); /* fmul dword ptr [0x31b6f8] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACAAu); RECOMP_ABI_CALL(0x00102BF0u, sub_00102BF0); /* call 0x00102BF0 */

loc_0013ACAA: ;
    edi = MEM32(ebp + 0xC);

loc_0013ACAD: ;
    esi = ebx + 0xEC;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACBAu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013ACBA: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACC5u); RECOMP_ABI_CALL(0x00138A50u, sub_00138A50); /* call 0x00138A50 */

loc_0013ACC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013ACD6; /* je: equal / zero */

loc_0013ACC9: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x0013ACD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013ACD0u); } /* indirect call */
    }

loc_0013ACD6: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AD1C; /* je: equal / zero */

loc_0013ACDE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACE5u); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013ACE5: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACF0u); RECOMP_ABI_CALL(0x001389A0u, sub_001389A0); /* call 0x001389A0 */

loc_0013ACF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AD1C; /* je: equal / zero */

loc_0013ACF4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ACFBu); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013ACFB: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD06u); RECOMP_ABI_CALL(0x001389A0u, sub_001389A0); /* call 0x001389A0 */

loc_0013AD06: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM8(esp + 0xF) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x0013AD14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AD0Eu); } /* indirect call */
    }

loc_0013AD14: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AD9B; /* je: equal / zero */

loc_0013AD1C: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x0013AD28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AD22u); } /* indirect call */
    }

loc_0013AD28: ;
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 0xB8);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xB8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013AD45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AD42u); } /* indirect call */
    }

loc_0013AD45: ;
    goto loc_0013AD9B;

loc_0013AD47: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AD9B; /* je: equal / zero */

loc_0013AD4F: ;
    ecx = ebx + 0xEC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD5Au); RECOMP_ABI_CALL(0x0014BDC0u, sub_0014BDC0); /* call 0x0014BDC0 */

loc_0013AD5A: ;
    eax = MEM32(eax + 0x14);
    ecx = eax + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AD65u); RECOMP_ABI_CALL(0x00138A50u, sub_00138A50); /* call 0x00138A50 */

loc_0013AD65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AD9B; /* je: equal / zero */

loc_0013AD69: ;
    xmm0 = XMM_SCALAR(MEMF(0x31B6F4)); /* movss */
    edx = MEM32(ebx + 0xB8);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xB8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013AD90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AD8Du); } /* indirect call */
    }

loc_0013AD90: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x0013AD9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AD95u); } /* indirect call */
    }

loc_0013AD9B: ;
    ecx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x58) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0013ADB5; /* je: equal / zero */

loc_0013ADAB: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ADB5u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0013ADB5: ;
    ecx = esp + 0x50;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x50) = 0x2FF1B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013ADCEu); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_0013ADCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013ADE0
 * Original: 0x0013ADE0 - 0x0013AF84 (420 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ADE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013ADE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013AE52; /* je: equal / zero */

loc_0013ADFD: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AE04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AE01u); } /* indirect call */
    }

loc_0013AE04: ;
    _fa = (uint32_t)(MEM32(esi + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xDC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013AE52; /* jne: not equal / not zero */

loc_0013AE0C: ;
    ecx = MEM32(esi + 0xE4);
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, ecx);
    ebx = esi + 0xC;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AE24u); RECOMP_ABI_CALL(0x0003C820u, sub_0003C820); /* call 0x0003C820 */

loc_0013AE24: ;
    eax = esi + -184;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0xE4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AE49u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_0013AE49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013AE52: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013AE59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AE56u); } /* indirect call */
    }

loc_0013AE59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x909DF6B6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x909DF6B6u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013AE78; /* jne: not equal / not zero */

loc_0013AE60: ;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    ecx = esi + -184;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AE6Fu); RECOMP_ABI_CALL(0x0013A0D0u, sub_0013A0D0); /* call 0x0013A0D0 */

loc_0013AE6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013AE78: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013AE7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AE7Cu); } /* indirect call */
    }

loc_0013AE7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB3567E62u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB3567E62u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013AE9A; /* jne: not equal / not zero */

loc_0013AE86: ;
    ecx = esi + -184;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AE91u); RECOMP_ABI_CALL(0x0013A690u, sub_0013A690); /* call 0x0013A690 */

loc_0013AE91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013AE9A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AEA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AE9Eu); } /* indirect call */
    }

loc_0013AEA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0D20092u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0D20092u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013AEC0; /* jne: not equal / not zero */

loc_0013AEA8: ;
    ecx = MEM32(ebx + 0x30);
    PUSH32(esp, ecx);
    ecx = esi + -184;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AEB7u); RECOMP_ABI_CALL(0x0013A0D0u, sub_0013A0D0); /* call 0x0013A0D0 */

loc_0013AEB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013AEC0: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013AEC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AEC4u); } /* indirect call */
    }

loc_0013AEC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7E56828u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7E56828u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013AF3B; /* jne: not equal / not zero */

loc_0013AECE: ;
    eax = MEM32(0x51D65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF7B; /* je: equal / zero */

loc_0013AEDF: ;
    _fa = (uint32_t)(MEM32(eax + 0x355C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x355C), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF7B; /* je: equal / zero */

loc_0013AEEB: ;
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x10;
    edi = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0013AEFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AEF8u); } /* indirect call */
    }

loc_0013AEFB: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0013AF02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AEFFu); } /* indirect call */
    }

loc_0013AF02: ;
    edx = MEM32(edi);
    ebx = eax;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x355C);
    MEM32(esp + 0xC) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0013AF19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AF16u); } /* indirect call */
    }

loc_0013AF19: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xFFFFFF48u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFF48u)) >> 32) & 1);
    esi = esi + 0xFFFFFF48u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF32u); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_0013AF32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013AF3B: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013AF42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AF3Fu); } /* indirect call */
    }

loc_0013AF42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE3426A98u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE3426A98u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013AF71; /* jne: not equal / not zero */

loc_0013AF49: ;
    eax = MEM32(0x51D65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF7B; /* je: equal / zero */

loc_0013AF52: ;
    ecx = MEM32(eax + 0x355C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013AF7B; /* je: equal / zero */

loc_0013AF5C: ;
    _fb = (uint32_t)(0xFFFFFF48u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFF48u)) >> 32) & 1);
    esi = esi + 0xFFFFFF48u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013AF68u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_0013AF68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013AF71: ;
    eax = MEM32(esi + 0x34);
    ecx = esi + 0x34;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013AF7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013AF78u); } /* indirect call */
    }

loc_0013AF7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013AF90
 * Original: 0x0013AF90 - 0x0013AFB3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF90(void)
{

loc_0013AF90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013AF9Eu); RECOMP_ABI_CALL(0x0013A260u, sub_0013A260); /* call 0x0013A260 */

loc_0013AF9E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013AFA6u); RECOMP_ABI_CALL(0x0013A700u, sub_0013A700); /* call 0x0013A700 */

loc_0013AFA6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013AFAEu); RECOMP_ABI_CALL(0x00139B80u, sub_00139B80); /* call 0x00139B80 */

loc_0013AFAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013AFC0
 * Original: 0x0013AFC0 - 0x0013B028 (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013AFC0: ;
    eax = MEM32(ecx + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B027; /* je: equal / zero */

loc_0013AFCA: ;
    edx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = edx;
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0;
    if ((_fa == 0)) goto loc_0013B025; /* je: equal / zero */

loc_0013AFEA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0013AFF0: ;
    esi = MEM32(ecx + 0x104);
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013B01B; /* jae: above or equal (unsigned >=) */

loc_0013B013: ;
    edx = MEM32(esi + 0x50);
    MEM8(edx + ebp + 0x10) = 0;

loc_0013B01B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013AFF0; /* jb: below (unsigned <) */

loc_0013B023: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0013B025: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0013B027: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B030
 * Original: 0x0013B030 - 0x0013B098 (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B030: ;
    eax = MEM32(ecx + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B097; /* je: equal / zero */

loc_0013B03A: ;
    edx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = edx;
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0;
    if ((_fa == 0)) goto loc_0013B095; /* je: equal / zero */

loc_0013B05A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0013B060: ;
    esi = MEM32(ecx + 0x104);
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013B08B; /* jae: above or equal (unsigned >=) */

loc_0013B083: ;
    edx = MEM32(esi + 0x50);
    MEM8(edx + ebp + 0x10) = 1;

loc_0013B08B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013B060; /* jb: below (unsigned <) */

loc_0013B093: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0013B095: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0013B097: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B0A0
 * Original: 0x0013B0A0 - 0x0013B1F3 (339 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013B0ABu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0013B0AB: ;
    MEM32(esi) = 0x3152D8;
    MEM32(esi + 8) = 0x307CBC;
    MEM32(esi + 0xB0) = 0x300534;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xC4;
    MEM32(esi + 0xB8) = 0x2FF764;
    MEM32(esi + 0xBC) = ebx;
    edi = esi + 0xC0;
    ecx = ebp;
    MEM32(edi) = 0x2FF77C;
    PUSH32(esp, 0x0013B0EDu); RECOMP_ABI_CALL(0x0003CD90u, sub_0003CD90); /* call 0x0003CD90 */

loc_0013B0ED: ;
    MEM32(ebp) = 0x31BA98;
    ebp = esi + 0xEC;
    ecx = ebp;
    MEM32(esi) = 0x31B900;
    MEM32(esi + 8) = 0x31B8F8;
    MEM32(esi + 0xB0) = 0x31B8F0;
    MEM32(esi + 0xB8) = 0x31B8D8;
    MEM32(edi) = 0x31B8D4;
    MEM32(esi + 0xE8) = ebx;
    PUSH32(esp, 0x0013B12Eu); RECOMP_ABI_CALL(0x0014C120u, sub_0014C120); /* call 0x0014C120 */

loc_0013B12E: ;
    ecx = esi + 0x10C;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x108) = ebx;
    PUSH32(esp, 0x0013B145u); RECOMP_ABI_CALL(0x00110220u, sub_00110220); /* call 0x00110220 */

loc_0013B145: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x118) = ebx;
    MEMF(esi + 0x11C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM8(esi + 0x12C) = 1;
    ecx = esi + 0x148;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x144) = ebx;
    PUSH32(esp, 0x0013B192u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0013B192: ;
    ecx = esi + 0x160;
    PUSH32(esp, 0x0013B19Du); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0013B19D: ;
    ecx = esi + 0x17C;
    PUSH32(esp, 0x0013B1A8u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0013B1A8: ;
    MEM8(esi + 0x1A0) = LO8(ebx);
    MEM8(esi + 0x1A8) = 1;
    MEM8(esi + 0x1A9) = 1;
    MEM32(esi + 0x1AC) = ebx;
    MEM8(esi + 0x1B0) = 1;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esi + 0x1B4) = ebx;
    PUSH32(esp, 0x0013B1D7u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0013B1D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013B1DDu); RECOMP_ABI_CALL(0x0013BCA0u, sub_0013BCA0); /* call 0x0013BCA0 */

loc_0013B1DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x178) = LO8(ebx);
    MEM8(esi + 0x179) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B200
 * Original: 0x0013B200 - 0x0013B38E (398 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0xB8;
    ebp = esi + 0xC4;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31B900;
    MEM32(esi + 8) = 0x31B8F8;
    MEM32(esi + 0xB0) = 0x31B8F0;
    MEM32(ebx) = 0x31B8D8;
    MEM32(esi + 0xC0) = 0x31B8D4;
    MEM32(ebp) = 0x31BA98;
    PUSH32(esp, 0x0013B246u); RECOMP_ABI_CALL(0x0013BA50u, sub_0013BA50); /* call 0x0013BA50 */

loc_0013B246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0013B250u); RECOMP_ABI_CALL(0x00139710u, sub_00139710); /* call 0x00139710 */

loc_0013B250: ;
    eax = MEM32(esi + 0x138);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B27B; /* je: equal / zero */

loc_0013B25C: ;
    PUSH32(esp, 0x0013B261u); RECOMP_ABI_CALL(0x00020200u, sub_00020200); /* call 0x00020200 */

loc_0013B261: ;
    ecx = MEM32(esi + 0x138);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013B26Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B26Cu); } /* indirect call */
    }

loc_0013B26F: ;
    MEM32(esi + 0x138) = edi;
    MEM32(esi + 0x13C) = edi;

loc_0013B27B: ;
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B2A4; /* je: equal / zero */

loc_0013B285: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013B28Bu); RECOMP_ABI_CALL(0x000F2620u, sub_000F2620); /* call 0x000F2620 */

loc_0013B28B: ;
    ecx = eax;
    PUSH32(esp, 0x0013B292u); RECOMP_ABI_CALL(0x000F2510u, sub_000F2510); /* call 0x000F2510 */

loc_0013B292: ;
    ecx = MEM32(esi + 0x144);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013B29Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B29Cu); } /* indirect call */
    }

loc_0013B29E: ;
    MEM32(esi + 0x144) = edi;

loc_0013B2A4: ;
    ecx = MEM32(esi + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B2BA; /* je: equal / zero */

loc_0013B2AE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013B2B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B2B2u); } /* indirect call */
    }

loc_0013B2B4: ;
    MEM32(esi + 0x104) = edi;

loc_0013B2BA: ;
    ecx = MEM32(esi + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B2D0; /* je: equal / zero */

loc_0013B2C4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013B2CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B2C8u); } /* indirect call */
    }

loc_0013B2CA: ;
    MEM32(esi + 0x134) = edi;

loc_0013B2D0: ;
    ecx = MEM32(esi + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B2E7; /* je: equal / zero */

loc_0013B2DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013B2E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B2DEu); } /* indirect call */
    }

loc_0013B2E1: ;
    MEM32(esi + 0x130) = edi;

loc_0013B2E7: ;
    ecx = MEM32(esi + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B2F8; /* je: equal / zero */

loc_0013B2F1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013B2F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B2F5u); } /* indirect call */
    }

loc_0013B2F8: ;
    MEM32(esi + 0x140) = edi;
    MEM32(esi + 0xE8) = edi;
    MEM32(esi + 0x118) = edi;
    ecx = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B31F; /* je: equal / zero */

loc_0013B314: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013B31F; /* jne: not equal / not zero */

loc_0013B319: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013B31Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B31Du); } /* indirect call */
    }

loc_0013B31F: ;
    ecx = esi + 0x17C;
    PUSH32(esp, 0x0013B32Au); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0013B32A: ;
    ecx = esi + 0x160;
    PUSH32(esp, 0x0013B335u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0013B335: ;
    ecx = esi + 0x148;
    PUSH32(esp, 0x0013B340u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0013B340: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x0013B34Bu); RECOMP_ABI_CALL(0x0013B590u, sub_0013B590); /* call 0x0013B590 */

loc_0013B34B: ;
    ecx = esi + 0x10C;
    PUSH32(esp, 0x0013B356u); RECOMP_ABI_CALL(0x001129A0u, sub_001129A0); /* call 0x001129A0 */

loc_0013B356: ;
    ecx = esi + 0xEC;
    PUSH32(esp, 0x0013B361u); RECOMP_ABI_CALL(0x0014C280u, sub_0014C280); /* call 0x0014C280 */

loc_0013B361: ;
    ecx = ebp;
    PUSH32(esp, 0x0013B368u); RECOMP_ABI_CALL(0x0003CDC0u, sub_0003CDC0); /* call 0x0003CDC0 */

loc_0013B368: ;
    ecx = ebx;
    MEM32(esi + 0xC0) = 0x2FF77C;
    PUSH32(esp, 0x0013B379u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0013B379: ;
    POP32(esp, edi);
    MEM32(esi + 0xB0) = 0x300534;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_0013B390
 * Original: 0x0013B390 - 0x0013B51E (398 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B390: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0013B3B4; /* jne: not equal / not zero */

loc_0013B3A3: ;
    ecx = MEM32(esi + 0x118);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B3B4; /* je: equal / zero */

loc_0013B3AD: ;
    PUSH32(esp, 0x0013B3B2u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013B3B2: ;
    ebp = eax;

loc_0013B3B4: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x31BAE8);
    PUSH32(esp, 0x0013B3C5u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013B3C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B3F0; /* je: equal / zero */

loc_0013B3CC: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = 0x302610;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x14) = 0x2FF02C;
    goto loc_0013B3F2;

loc_0013B3F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013B3F2: ;
    edi = eax + 0x14;
    MEM32(esi + 0x130) = eax;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B408; /* je: equal / zero */

loc_0013B402: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013B408u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0013B408: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x0013B413u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_0013B413: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B43C; /* je: equal / zero */

loc_0013B417: ;
    eax = MEM32(esi + 0x130);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x31BADC);
    PUSH32(esp, 0x0013B42Du); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_0013B42D: ;
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B439u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0013B439: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013B43C: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F2DEC);
    PUSH32(esp, 0x0013B44Cu); RECOMP_ABI_CALL(0x0013BA20u, sub_0013BA20); /* call 0x0013BA20 */

loc_0013B44C: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0xE8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B514; /* je: equal / zero */

loc_0013B45C: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B46D; /* je: equal / zero */

loc_0013B465: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B46Bu); RECOMP_ABI_CALL(0x00138E00u, sub_00138E00); /* call 0x00138E00 */

loc_0013B46B: ;
    goto loc_0013B472;

loc_0013B46D: ;
    PUSH32(esp, 0x0013B472u); RECOMP_ABI_CALL(0x00138E10u, sub_00138E10); /* call 0x00138E10 */

loc_0013B472: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x0013B47Bu); RECOMP_ABI_CALL(0x00138BA0u, sub_00138BA0); /* call 0x00138BA0 */

loc_0013B47B: ;
    PUSH32(esp, eax);
    ecx = esi + 0xEC;
    PUSH32(esp, 0x0013B487u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0013B487: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013B48Fu); RECOMP_ABI_CALL(0x0013A260u, sub_0013A260); /* call 0x0013A260 */

loc_0013B48F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013B497u); RECOMP_ABI_CALL(0x0013A700u, sub_0013A700); /* call 0x0013A700 */

loc_0013B497: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013B49Fu); RECOMP_ABI_CALL(0x00139B80u, sub_00139B80); /* call 0x00139B80 */

loc_0013B49F: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, 0x0013B4AAu); RECOMP_ABI_CALL(0x00138AD0u, sub_00138AD0); /* call 0x00138AD0 */

loc_0013B4AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0013B4BC; /* jge: greater or equal (signed >=) */

loc_0013B4B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0013B4BC: ;
    ecx = edi + 0x18;
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0013B4CAu); RECOMP_ABI_CALL(0x00138A40u, sub_00138A40); /* call 0x00138A40 */

loc_0013B4CA: ;
    MEM8(esi + 0x179) = LO8(eax);
    PUSH32(esp, 0x0013B4D5u); RECOMP_ABI_CALL(0x0007E940u, sub_0007E940); /* call 0x0007E940 */

loc_0013B4D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B4E7; /* jne: not equal / not zero */

loc_0013B4DA: ;
    _fa = (uint32_t)(MEM8(esi + 0x179)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x179), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B4E7; /* je: equal / zero */

loc_0013B4E2: ;
    PUSH32(esp, 0x0013B4E7u); RECOMP_ABI_CALL(0x0013B780u, sub_0013B780); /* call 0x0013B780 */

loc_0013B4E7: ;
    edx = MEM32(esi + 0xB8);
    ecx = esi + 0xB8;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x2FF7D4;
    MEM32(esp + 0x18) = 0x9750ED52u;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013B50Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B508u); } /* indirect call */
    }

loc_0013B50B: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0013B514u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0013B514: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B520
 * Original: 0x0013B520 - 0x0013B543 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B520(void)
{

loc_0013B520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013B52Eu); RECOMP_ABI_CALL(0x0013A260u, sub_0013A260); /* call 0x0013A260 */

loc_0013B52E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013B536u); RECOMP_ABI_CALL(0x0013A700u, sub_0013A700); /* call 0x0013A700 */

loc_0013B536: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013B53Eu); RECOMP_ABI_CALL(0x00139B80u, sub_00139B80); /* call 0x00139B80 */

loc_0013B53E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B550
 * Original: 0x0013B550 - 0x0013B582 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B550: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013B565u); RECOMP_ABI_CALL(0x0013B620u, sub_0013B620); /* call 0x0013B620 */

loc_0013B565: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B57B; /* jne: not equal / not zero */

loc_0013B569: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31BB24);
    PUSH32(esp, 0x0013B578u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013B578: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013B57B: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B590
 * Original: 0x0013B590 - 0x0013B5CE (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B590: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);

loc_0013B597: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    eax = eax + eax * 8;
    edx = ecx + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B5B2; /* je: equal / zero */

loc_0013B5A6: ;
    ecx = edi;
    PUSH32(esp, 0x0013B5ADu); RECOMP_ABI_CALL(0x0017F6C0u, sub_0017F6C0); /* call 0x0017F6C0 */

loc_0013B5AD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013B597;

loc_0013B5B2: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B5CB; /* je: equal / zero */

loc_0013B5BF: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B5C8u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0013B5C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013B5CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B5D0
 * Original: 0x0013B5D0 - 0x0013B5D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B5D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013B690(); return; /* tail jmp 0x0013B690 */

}

/**
 * sub_0013B5E0
 * Original: 0x0013B5E0 - 0x0013B5EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B5E0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013B690(); return; /* tail jmp 0x0013B690 */

}

/**
 * sub_0013B5F0
 * Original: 0x0013B5F0 - 0x0013B5FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B5F0: ;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013B690(); return; /* tail jmp 0x0013B690 */

}

/**
 * sub_0013B600
 * Original: 0x0013B600 - 0x0013B60B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B600: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013B690(); return; /* tail jmp 0x0013B690 */

}

/**
 * sub_0013B610
 * Original: 0x0013B610 - 0x0013B61B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013B610: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013B690(); return; /* tail jmp 0x0013B690 */

}

/**
 * sub_0013B620
 * Original: 0x0013B620 - 0x0013B68B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B620: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013B685; /* jge: greater or equal (signed >=) */

loc_0013B62B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0013B64Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0013B64A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B657; /* je: equal / zero */

loc_0013B64E: ;
    ecx = eax;
    PUSH32(esp, 0x0013B655u); RECOMP_ABI_CALL(0x0013B0A0u, sub_0013B0A0); /* call 0x0013B0A0 */

loc_0013B655: ;
    goto loc_0013B659;

loc_0013B657: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013B659: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B666; /* je: equal / zero */

loc_0013B65F: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013B668;

loc_0013B666: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013B668: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0013B675u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0013B675: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013B685; /* je: equal / zero */

loc_0013B67C: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0013B685: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B690
 * Original: 0x0013B690 - 0x0013B69E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B690(void)
{

loc_0013B690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013B698u); RECOMP_ABI_CALL(0x0013B200u, sub_0013B200); /* call 0x0013B200 */

loc_0013B698: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B6A0
 * Original: 0x0013B6A0 - 0x0013B6A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6A0(void)
{

loc_0013B6A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6B0
 * Original: 0x0013B6B0 - 0x0013B6CB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B6B0: ;
    ecx = MEM32(0x3F2DEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B6C0; /* je: equal / zero */

loc_0013B6BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013B6C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013B6BEu); } /* indirect call */
    }

loc_0013B6C0: ;
    MEM32(0x3F2DEC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6D0
 * Original: 0x0013B6D0 - 0x0013B6D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6D0(void)
{

loc_0013B6D0: ;
    eax = MEM32(0x3F2DE8);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6E0
 * Original: 0x0013B6E0 - 0x0013B6EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6E0(void)
{

loc_0013B6E0: ;
    MEM32(0x3F2DF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6F0
 * Original: 0x0013B6F0 - 0x0013B6F3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6F0(void)
{

loc_0013B6F0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013B700
 * Original: 0x0013B700 - 0x0013B703 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B700(void)
{

loc_0013B700: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013B710
 * Original: 0x0013B710 - 0x0013B715 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B710(void)
{

loc_0013B710: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B720
 * Original: 0x0013B720 - 0x0013B725 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B720(void)
{

loc_0013B720: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B730
 * Original: 0x0013B730 - 0x0013B74D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B730: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0013B747u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0013B747: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B750
 * Original: 0x0013B750 - 0x0013B75A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B750: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B756u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013B756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B760
 * Original: 0x0013B760 - 0x0013B76B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B760: ;
    eax = ecx;
    MEM32(0x3F2DF4) = MEM32(0x3F2DF4) + 1;
    _fa = (uint32_t)(MEM32(0x3F2DF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B770
 * Original: 0x0013B770 - 0x0013B777 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B770: ;
    MEM32(0x3F2DF4) = MEM32(0x3F2DF4) - 1;
    _fa = (uint32_t)(MEM32(0x3F2DF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B780
 * Original: 0x0013B780 - 0x0013B7FB (123 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B780: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013B789u); RECOMP_ABI_CALL(0x000182F0u, sub_000182F0); /* call 0x000182F0 */

loc_0013B789: ;
    eax = MEM32(0x3F2DE8);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B7D4; /* je: equal / zero */

loc_0013B795: ;
    PUSH32(esp, esi);

loc_0013B796: ;
    esi = MEM32(edi);
    ecx = esi;
    PUSH32(esp, 0x0013B79Fu); RECOMP_ABI_CALL(0x001394D0u, sub_001394D0); /* call 0x001394D0 */

loc_0013B79F: ;
    ecx = MEM32(esi + 0x10C);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B7C4; /* je: equal / zero */

loc_0013B7AF: ;
    ecx = eax + 0x18;
    PUSH32(esp, 0x0013B7B7u); RECOMP_ABI_CALL(0x00138A40u, sub_00138A40); /* call 0x00138A40 */

loc_0013B7B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B7C4; /* je: equal / zero */

loc_0013B7BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013B7C1u); RECOMP_ABI_CALL(0x0001ABE0u, sub_0001ABE0); /* call 0x0001ABE0 */

loc_0013B7C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013B7C4: ;
    eax = MEM32(0x3F2DE8);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B796; /* jne: not equal / not zero */

loc_0013B7D3: ;
    POP32(esp, esi);

loc_0013B7D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9E900D50u);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0013B7E4u); RECOMP_ABI_CALL(0x0014B530u, sub_0014B530); /* call 0x0014B530 */

loc_0013B7E4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0013B7EDu); RECOMP_ABI_CALL(0x0014BC70u, sub_0014BC70); /* call 0x0014BC70 */

loc_0013B7ED: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0013B7F6u); RECOMP_ABI_CALL(0x0014B420u, sub_0014B420); /* call 0x0014B420 */

loc_0013B7F6: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B800
 * Original: 0x0013B800 - 0x0013B8CD (205 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x3F2DF4) = MEM32(0x3F2DF4) + 1;
    _fa = (uint32_t)(MEM32(0x3F2DF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edi = eax + eax * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B82E; /* je: equal / zero */

loc_0013B81F: ;
    /* nop */

loc_0013B820: ;
    ecx = ebx;
    PUSH32(esp, 0x0013B827u); RECOMP_ABI_CALL(0x00138D80u, sub_00138D80); /* call 0x00138D80 */

loc_0013B827: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B820; /* jne: not equal / not zero */

loc_0013B82E: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    eax = eax + eax * 2;
    ebx = ecx + eax * 4;
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B84E; /* je: equal / zero */

loc_0013B840: ;
    ecx = edi;
    PUSH32(esp, 0x0013B847u); RECOMP_ABI_CALL(0x00138B10u, sub_00138B10); /* call 0x00138B10 */

loc_0013B847: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B840; /* jne: not equal / not zero */

loc_0013B84E: ;
    ebx = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x2C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B873; /* je: equal / zero */

loc_0013B862: ;
    ecx = edi;
    PUSH32(esp, 0x0013B869u); RECOMP_ABI_CALL(0x00138F00u, sub_00138F00); /* call 0x00138F00 */

loc_0013B869: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B862; /* jne: not equal / not zero */

loc_0013B873: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x54);
    ebx = eax + eax * 8;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B898; /* je: equal / zero */

loc_0013B887: ;
    ecx = edi;
    PUSH32(esp, 0x0013B88Eu); RECOMP_ABI_CALL(0x00138C80u, sub_00138C80); /* call 0x00138C80 */

loc_0013B88E: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B887; /* jne: not equal / not zero */

loc_0013B898: ;
    edi = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x74);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B8BE; /* je: equal / zero */

loc_0013B8A9: ;
    /* nop */

loc_0013B8B0: ;
    ecx = esi;
    PUSH32(esp, 0x0013B8B7u); RECOMP_ABI_CALL(0x00138C00u, sub_00138C00); /* call 0x00138C00 */

loc_0013B8B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B8B0; /* jne: not equal / not zero */

loc_0013B8BE: ;
    eax = MEM32(0x3F2DF4);
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x3F2DF4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B8D0
 * Original: 0x0013B8D0 - 0x0013B921 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B8D0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = eax + eax * 2;
    esi = ecx + eax * 4 + -12;
    ecx = edi;
    PUSH32(esp, 0x0013B8EAu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0013B8EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74590CC9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74590CC9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B902; /* jne: not equal / not zero */

loc_0013B8F1: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013B8FAu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013B8FA: ;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0013B902: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5911522u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB5911522u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B91C; /* jne: not equal / not zero */

loc_0013B909: ;
    ecx = edi;
    PUSH32(esp, 0x0013B910u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013B910: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B916u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013B916: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_0013B91C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013B930
 * Original: 0x0013B930 - 0x0013B94F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B930: ;
    edx = MEM32(ecx + 8);
    eax = edx + edx * 2;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B950
 * Original: 0x0013B950 - 0x0013B96D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B950: ;
    eax = MEM32(ecx + 8);
    edx = eax + eax * 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0xC);
    edx = esi + edx * 4;
    MEM32(edx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B970
 * Original: 0x0013B970 - 0x0013B98E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B970: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x44) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B990
 * Original: 0x0013B990 - 0x0013B9B0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B990: ;
    edx = MEM32(ecx + 8);
    eax = edx + edx * 8;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x70) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013B9B0
 * Original: 0x0013B9B0 - 0x0013BA00 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B9B0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = eax + ecx + -144;
    eax = MEM32(edi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B9F4; /* je: equal / zero */

loc_0013B9CB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x80);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B9F2; /* je: equal / zero */

loc_0013B9DA: ;
    /* nop */

loc_0013B9E0: ;
    edx = MEM32(esi);
    ecx = MEM32(edi + 0x74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013B9EBu); RECOMP_ABI_CALL(0x00049140u, sub_00049140); /* call 0x00049140 */

loc_0013B9EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013B9E0; /* jne: not equal / not zero */

loc_0013B9F2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0013B9F4: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013BA00
 * Original: 0x0013BA00 - 0x0013BA1E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BA00: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013BA20
 * Original: 0x0013BA20 - 0x0013BA46 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BA20: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BA41; /* je: equal / zero */

loc_0013BA32: ;
    edx = MEM32(esp + 4);

loc_0013BA36: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BA43; /* je: equal / zero */

loc_0013BA3A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BA36; /* jne: not equal / not zero */

loc_0013BA41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013BA43: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013BA50
 * Original: 0x0013BA50 - 0x0013BA94 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BA50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x3F2DE8);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013BA6Fu); RECOMP_ABI_CALL(0x00045310u, sub_00045310); /* call 0x00045310 */

loc_0013BA6F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BA90; /* je: equal / zero */

loc_0013BA76: ;
    ecx = edi;
    edx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BA8C; /* je: equal / zero */

loc_0013BA7F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013BA89u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013BA89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013BA8C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013BA90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013BAA0
 * Original: 0x0013BAA0 - 0x0013BACC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x0013BAABu); RECOMP_ABI_CALL(0x0013D4F0u, sub_0013D4F0); /* call 0x0013D4F0 */

loc_0013BAAB: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x0013BAB3u); RECOMP_ABI_CALL(0x0013D3B0u, sub_0013D3B0); /* call 0x0013D3B0 */

loc_0013BAB3: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x0013BABBu); RECOMP_ABI_CALL(0x0013D450u, sub_0013D450); /* call 0x0013D450 */

loc_0013BABB: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0013BAC3u); RECOMP_ABI_CALL(0x0013D400u, sub_0013D400); /* call 0x0013D400 */

loc_0013BAC3: ;
    ecx = esi + 0x6C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D4A0(); return; /* tail jmp 0x0013D4A0 */

}

/**
 * sub_0013BAD0
 * Original: 0x0013BAD0 - 0x0013BB09 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BAD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x31BBEC);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0013BAE9u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013BAE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BB00; /* je: equal / zero */

loc_0013BAF0: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(0x3F2DE8) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013BB00: ;
    MEM32(0x3F2DE8) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB10
 * Original: 0x0013BB10 - 0x0013BB3E (46 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BB10: ;
    ecx = MEM32(0x3F2DE8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0013BB27; /* jne: not equal / not zero */

loc_0013BB23: ;
    MEM32(edi) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013BB27: ;
    PUSH32(esp, esi);
    esi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013BB34u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013BB34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB40
 * Original: 0x0013BB40 - 0x0013BC0E (206 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BB40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3F2DF8);
    PUSH32(esp, esi);
    MEM32(0x3F2DF0) = eax;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BBB4; /* je: equal / zero */

loc_0013BB58: ;
    edi = eax + 8;
    goto loc_0013BB60;

    /* nop */

loc_0013BB60: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0013BB6Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0013BB6B: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 8) = LO16(eax);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013BB8F; /* je: equal / zero */

loc_0013BB7B: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BBA8; /* je: equal / zero */

loc_0013BB84: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BB84; /* jne: not equal / not zero */

loc_0013BB8D: ;
    goto loc_0013BBA8;

loc_0013BB8F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BBA1; /* jne: not equal / not zero */

loc_0013BB97: ;
    eax = ecx;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BB97; /* je: equal / zero */

loc_0013BBA1: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BBA8; /* je: equal / zero */

loc_0013BBA6: ;
    eax = ecx;

loc_0013BBA8: ;
    ecx = MEM32(0x3F2DF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013BB60; /* jne: not equal / not zero */

loc_0013BBB4: ;
    eax = MEM32(0x3F2DFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC0B; /* je: equal / zero */

loc_0013BBBD: ;
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BBEA; /* je: equal / zero */

loc_0013BBC4: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    ecx = 0x3F2DF8;
    PUSH32(esp, 0x0013BBD2u); RECOMP_ABI_CALL(0x0013D580u, sub_0013D580); /* call 0x0013D580 */

loc_0013BBD2: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013BBDBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013BBDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013BBC4; /* jne: not equal / not zero */

loc_0013BBE4: ;
    ecx = MEM32(0x3F2DF8);

loc_0013BBEA: ;
    MEM32(ecx + 8) = ecx;
    eax = MEM32(0x3F2DF8);
    MEM32(eax + 4) = 0;
    eax = MEM32(0x3F2DF8);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3F2DFC) = 0;

loc_0013BC0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013BC10
 * Original: 0x0013BC10 - 0x0013BC98 (136 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BC10: ;
    ecx = MEM32(0x3F2DE8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0013BC28; /* jne: not equal / not zero */

loc_0013BC24: ;
    eax = ecx;
    goto loc_0013BC39;

loc_0013BC28: ;
    esi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013BC34u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013BC34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013BC39: ;
    MEM32(edi) = eax;
    eax = MEM32(0x3F2DE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC5E; /* je: equal / zero */

loc_0013BC46: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BC55; /* je: equal / zero */

loc_0013BC4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013BC52u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013BC52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013BC55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013BC5Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013BC5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013BC5E: ;
    esi = MEM32(0x3F2DEC);
    ecx = esi + 4;
    MEM32(0x3F2DF0) = 0;
    PUSH32(esp, 0x0013BC76u); RECOMP_ABI_CALL(0x0013D4F0u, sub_0013D4F0); /* call 0x0013D4F0 */

loc_0013BC76: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x0013BC7Eu); RECOMP_ABI_CALL(0x0013D3B0u, sub_0013D3B0); /* call 0x0013D3B0 */

loc_0013BC7E: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x0013BC86u); RECOMP_ABI_CALL(0x0013D450u, sub_0013D450); /* call 0x0013D450 */

loc_0013BC86: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0013BC8Eu); RECOMP_ABI_CALL(0x0013D400u, sub_0013D400); /* call 0x0013D400 */

loc_0013BC8E: ;
    POP32(esp, edi);
    ecx = esi + 0x6C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D4A0(); return; /* tail jmp 0x0013D4A0 */

}

/**
 * sub_0013BCA0
 * Original: 0x0013BCA0 - 0x0013BCDB (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BCA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F2DE8);
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    edx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013BCC5; /* je: equal / zero */

loc_0013BCB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BCC0; /* je: equal / zero */

loc_0013BCBA: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;

loc_0013BCC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + 4;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0013BCC5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0xB;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013BCD9u); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_0013BCD9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013BCE0
 * Original: 0x0013BCE0 - 0x0013BDF7 (279 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BCE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x0013BCF0u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0013BCF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A8B5C53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A8B5C53 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BD32; /* jne: not equal / not zero */

loc_0013BCF7: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013BD05u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013BD05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013BD0Bu); RECOMP_ABI_CALL(0x000E4E50u, sub_000E4E50); /* call 0x000E4E50 */

loc_0013BD0B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ecx = ecx + ecx * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + -144;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013BD2Cu); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0013BD2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013BD32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x900C08D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x900C08D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BDB8; /* jne: not equal / not zero */

loc_0013BD39: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013BD44u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0013BD44: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ecx = ecx + ecx * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + edx + -144;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013BD67u); RECOMP_ABI_CALL(0x000491E0u, sub_000491E0); /* call 0x000491E0 */

loc_0013BD67: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BD8C; /* je: equal / zero */

loc_0013BD73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013BD7D; /* je: equal / zero */

loc_0013BD7A: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013BD7D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BD8C; /* je: equal / zero */

loc_0013BD81: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013BD8C; /* jne: not equal / not zero */

loc_0013BD86: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013BD8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BD8Au); } /* indirect call */
    }

loc_0013BD8C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BDAB; /* je: equal / zero */

loc_0013BD94: ;
    edi = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013BDAB; /* jne: not equal / not zero */

loc_0013BDA5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013BDABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013BDA9u); } /* indirect call */
    }

loc_0013BDAB: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x78) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013BDB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82660D72u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82660D72u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BDF1; /* jne: not equal / not zero */

loc_0013BDBF: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ecx = eax + eax * 8;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    esi = ecx + edx + -144;
    PUSH32(esp, 0x0013BDDDu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0013BDDD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi + 0x7C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0013BDF1u); RECOMP_ABI_CALL(0x0013DAA0u, sub_0013DAA0); /* call 0x0013DAA0 */

loc_0013BDF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013BE00
 * Original: 0x0013BE00 - 0x0013BF41 (321 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BE00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = eax + ecx + -16;
    ecx = edi;
    PUSH32(esp, 0x0013BE1Du); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0013BE1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8AFE3CBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA8AFE3CBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BE51; /* jne: not equal / not zero */

loc_0013BE24: ;
    ecx = edi;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0013BE2Fu); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013BE2F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    edi = eax;
    PUSH32(esp, 0x0013BE3Eu); RECOMP_ABI_CALL(0x0013DBD0u, sub_0013DBD0); /* call 0x0013DBD0 */

loc_0013BE3E: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0013BE46u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013BE46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0013BE51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3BAE0AA7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3BAE0AA7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BE71; /* jne: not equal / not zero */

loc_0013BE58: ;
    ecx = edi;
    PUSH32(esp, 0x0013BE5Fu); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013BE5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013BE65u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013BE65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0013BE71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47CC8C92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47CC8C92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BF3B; /* jne: not equal / not zero */

loc_0013BE7C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0013BE84u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013BE84: ;
    ebx = eax;
    edx = eax + 1;
    /* nop */

loc_0013BE90: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BE90; /* jne: not equal / not zero */

loc_0013BE97: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013BF14; /* je: equal / zero */

loc_0013BEA2: ;
    eax = ecx;
    edi = eax + 1;

loc_0013BEA7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BEA7; /* jne: not equal / not zero */

loc_0013BEAE: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    eax = eax + esi + 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31BC8C);
    PUSH32(esp, 0x0013BEC5u); RECOMP_ABI_CALL(0x00155330u, sub_00155330); /* call 0x00155330 */

loc_0013BEC5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0013BED0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BED0; /* jne: not equal / not zero */

loc_0013BED8: ;
    SET_LO16(ecx, MEM16(0x305A98));
    edi = eax;
    eax = ebx;
    MEM16(edi) = LO16(ecx);
    ecx = eax;

loc_0013BEE8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BEE8; /* jne: not equal / not zero */

loc_0013BEEF: ;
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013BEF7: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BEF7; /* jne: not equal / not zero */

loc_0013BEFF: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    POP32(esp, ebx);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0013BF14: ;
    PUSH32(esp, 0x400);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x31BC50);
    PUSH32(esp, 0x0013BF25u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013BF25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    ecx = ebx;
    edx = eax;
    /* nop */

loc_0013BF30: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BF30; /* jne: not equal / not zero */

loc_0013BF3A: ;
    POP32(esp, ebx);

loc_0013BF3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013BF50
 * Original: 0x0013BF50 - 0x0013BFFB (171 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013BF50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BFB0; /* je: equal / zero */

loc_0013BF67: ;
    ebx = MEM32(esp + 0x14);
    goto loc_0013BF70;

    /* nop */

loc_0013BF70: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0013BF81u); RECOMP_ABI_CALL(0x0013DBD0u, sub_0013DBD0); /* call 0x0013DBD0 */

loc_0013BF81: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BFA4; /* je: equal / zero */

loc_0013BF93: ;
    eax = MEM32(eax);

loc_0013BF95: ;
    _fa = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x44), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BFA6; /* je: equal / zero */

loc_0013BF9A: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BF95; /* jne: not equal / not zero */

loc_0013BFA4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013BFA6: ;
    MEM32(esi + 4) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013BF70; /* jne: not equal / not zero */

loc_0013BFB0: ;
    eax = MEM32(ebp + 0x14);
    edi = ebp + 0x10;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BFF4; /* je: equal / zero */

loc_0013BFBC: ;
    ecx = MEM32(edi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013BFE2; /* je: equal / zero */

loc_0013BFC5: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0013BFD0u); RECOMP_ABI_CALL(0x0013D540u, sub_0013D540); /* call 0x0013D540 */

loc_0013BFD0: ;
    ebx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013BFD9u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013BFD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    esi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0013BFC5; /* jne: not equal / not zero */

loc_0013BFE2: ;
    eax = MEM32(edi);
    MEM32(eax + 8) = eax;
    eax = MEM32(edi);
    MEM32(eax + 4) = ebp;
    eax = MEM32(edi);
    MEM32(eax + 0xC) = eax;
    MEM32(edi + 4) = ebp;

loc_0013BFF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013C000
 * Original: 0x0013C000 - 0x0013C113 (275 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 4;
    MEM32(esi) = 0x31BCC8;
    PUSH32(esp, 0x0013C013u); RECOMP_ABI_CALL(0x0013D4F0u, sub_0013D4F0); /* call 0x0013D4F0 */

loc_0013C013: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x0013C01Bu); RECOMP_ABI_CALL(0x0013D3B0u, sub_0013D3B0); /* call 0x0013D3B0 */

loc_0013C01B: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x0013C023u); RECOMP_ABI_CALL(0x0013D450u, sub_0013D450); /* call 0x0013D450 */

loc_0013C023: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0013C02Bu); RECOMP_ABI_CALL(0x0013D400u, sub_0013D400); /* call 0x0013D400 */

loc_0013C02B: ;
    ecx = esi + 0x6C;
    PUSH32(esp, 0x0013C033u); RECOMP_ABI_CALL(0x0013D4A0u, sub_0013D4A0); /* call 0x0013D4A0 */

loc_0013C033: ;
    eax = MEM32(esi + 0x94);
    edi = esi + 0x90;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C064; /* je: equal / zero */

loc_0013C045: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0013C052u); RECOMP_ABI_CALL(0x0013DCA0u, sub_0013DCA0); /* call 0x0013DCA0 */

loc_0013C052: ;
    eax = MEM32(edi);
    MEM32(eax + 8) = eax;
    edx = MEM32(edi);
    MEM32(edx + 4) = ebx;
    eax = MEM32(edi);
    MEM32(eax + 0xC) = eax;
    MEM32(edi + 4) = ebx;

loc_0013C064: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C073; /* je: equal / zero */

loc_0013C06A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013C070u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013C070: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013C073: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = esi + 0x84;
    if (CMP_EQ(_fa, _fb)) goto loc_0013C0A2; /* je: equal / zero */

loc_0013C083: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0013C090u); RECOMP_ABI_CALL(0x0013DCA0u, sub_0013DCA0); /* call 0x0013DCA0 */

loc_0013C090: ;
    eax = MEM32(edi);
    MEM32(eax + 8) = eax;
    edx = MEM32(edi);
    MEM32(edx + 4) = ebx;
    eax = MEM32(edi);
    MEM32(eax + 0xC) = eax;
    MEM32(edi + 4) = ebx;

loc_0013C0A2: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C0B1; /* je: equal / zero */

loc_0013C0A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013C0AEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013C0AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013C0B1: ;
    ecx = esi + 0x68;
    PUSH32(esp, 0x0013C0B9u); RECOMP_ABI_CALL(0x0013DA30u, sub_0013DA30); /* call 0x0013DA30 */

loc_0013C0B9: ;
    edi = esi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x60) = 0x2FF0D4;
    MEM32(esi + 0x58) = 0x2FF0D4;
    if (CMP_EQ(_fa, _fb)) goto loc_0013C0D3; /* je: equal / zero */

loc_0013C0CE: ;
    ecx = edi + 4;
    goto loc_0013C0D5;

loc_0013C0D3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013C0D5: ;
    PUSH32(esp, 0x0013C0DAu); RECOMP_ABI_CALL(0x0013D400u, sub_0013D400); /* call 0x0013D400 */

loc_0013C0DA: ;
    ecx = esi + 0x20;
    MEM32(edi) = 0x2FF0D4;
    PUSH32(esp, 0x0013C0E8u); RECOMP_ABI_CALL(0x0013E090u, sub_0013E090); /* call 0x0013E090 */

loc_0013C0E8: ;
    edi = esi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C0F4; /* je: equal / zero */

loc_0013C0EF: ;
    ecx = edi + 4;
    goto loc_0013C0F6;

loc_0013C0F4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013C0F6: ;
    PUSH32(esp, 0x0013C0FBu); RECOMP_ABI_CALL(0x0013D3B0u, sub_0013D3B0); /* call 0x0013D3B0 */

loc_0013C0FB: ;
    ecx = esi + 4;
    MEM32(edi) = 0x2FF0D4;
    PUSH32(esp, 0x0013C109u); RECOMP_ABI_CALL(0x0013D4F0u, sub_0013D4F0); /* call 0x0013D4F0 */

loc_0013C109: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C120
 * Original: 0x0013C120 - 0x0013C2BA (410 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013C120: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = 0x31BCC8;
    ebp = esi + 0x10;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    MEM32(ebp) = 0x31BB9C;
    PUSH32(esp, 0x0013C153u); RECOMP_ABI_CALL(0x0013E2B0u, sub_0013E2B0); /* call 0x0013E2B0 */

loc_0013C153: ;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x48) = 0x31BBC4;
    MEM32(esi + 0x58) = 0x31BB4C;
    MEM32(esi + 0x60) = 0x31BB74;
    edi = esi + 0x68;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi) = 0x31BC28;
    PUSH32(esp, 0x18);
    MEM32(edi + 0x10) = ebx;
    PUSH32(esp, 0x0013C18Du); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013C18D: ;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ebx;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(edi + 0x10);
    MEM32(eax + 4) = ebx;
    eax = MEM32(edi + 0x10);
    MEM32(eax + 8) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x84) = ebx;
    PUSH32(esp, 0x0013C1B4u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013C1B4: ;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = ebx;
    MEM8(eax) = LO8(ebx);
    ecx = MEM32(esi + 0x84);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(esi + 0x84);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 0x84);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x90) = ebx;
    PUSH32(esp, 0x0013C1EAu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013C1EA: ;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = ebx;
    MEM8(eax) = LO8(ebx);
    edx = MEM32(esi + 0x90);
    MEM32(edx + 4) = ebx;
    eax = MEM32(esi + 0x90);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 0x90);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31BD84);
    ecx = esp + 0x14;
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x0013C224u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0013C224: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013C22Bu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0013C22B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31BD68);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0013C23Cu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0013C23C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013C243u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0013C243: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31BD58);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0013C254u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0013C254: ;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C25Eu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0013C25E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31BD48);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0013C26Fu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0013C26F: ;
    PUSH32(esp, eax);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C279u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0013C279: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31BD30);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0013C28Au); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0013C28A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013C291u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0013C291: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31BD18);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0013C2A2u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0013C2A2: ;
    PUSH32(esp, eax);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C2ACu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0013C2AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C2C0
 * Original: 0x0013C2C0 - 0x0013C412 (338 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C2C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax + ecx + -48;
    ecx = esi;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0013C2E5u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0013C2E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA393D2FBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA393D2FBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C346; /* jne: not equal / not zero */

loc_0013C2EC: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0013C2F5u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C2F5: ;
    edx = esp + 0xC;
    esi = eax;
    PUSH32(esp, edx);
    ecx = edi + 0x90;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0013C30Bu); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013C30B: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C329; /* je: equal / zero */

loc_0013C313: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C319; /* je: equal / zero */

loc_0013C317: ;
    MEM32(ecx) = esi;

loc_0013C319: ;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C329: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013C33Fu); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_0013C33F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C346: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40495730) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40495730 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C360; /* jne: not equal / not zero */

loc_0013C34D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0013C356u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C356: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60E146C3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60E146C3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C3BB; /* jne: not equal / not zero */

loc_0013C367: ;
    eax = MEM32(0x3F2DF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013C391; /* je: equal / zero */

loc_0013C372: ;
    PUSH32(esp, 0x0013C377u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C377: ;
    ecx = MEM32(0x3F2DF0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013C386u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_0013C386: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebx + 8) = LO16(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C391: ;
    PUSH32(esp, 0x0013C396u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C396: ;
    esi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x3F2DF8;
    PUSH32(esp, 0x0013C3A7u); RECOMP_ABI_CALL(0x0013DBD0u, sub_0013DBD0); /* call 0x0013DBD0 */

loc_0013C3A7: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0013C3AFu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013C3AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C3BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90431869u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90431869u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C3DB; /* jne: not equal / not zero */

loc_0013C3C2: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0013C3CBu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C3CB: ;
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    POP32(esp, esi);
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C3DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8017288Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8017288Bu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C40B; /* jne: not equal / not zero */

loc_0013C3E2: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0013C3EBu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C3EB: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi + 0x84;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0013C404u); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013C404: ;
    ecx = eax;
    PUSH32(esp, 0x0013C40Bu); RECOMP_ABI_CALL(0x0013DAA0u, sub_0013DAA0); /* call 0x0013DAA0 */

loc_0013C40B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013C420
 * Original: 0x0013C420 - 0x0013CC9C (2172 bytes, 835 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013C420: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = eax + ecx + -208;
    ecx = edi;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0013C448u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0013C448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB4D386ADu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB4D386ADu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C46B; /* jne: not equal / not zero */

loc_0013C44F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C458u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C458: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C460: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x34) = MEM8(ebx + 0x34) | 0x80;
    _fa = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C46B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B7C3DD3u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B7C3DD3u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C4B3; /* jne: not equal / not zero */

loc_0013C472: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C47Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C47B: ;
    edx = esp + 0xC;
    edi = eax;
    PUSH32(esp, edx);
    ecx = esi + 0x1C;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x0013C48Eu); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013C48E: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C4DE; /* jne: not equal / not zero */

loc_0013C496: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013C4ACu); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_0013C4AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C4B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB28276EAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB28276EAu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C4F4; /* jne: not equal / not zero */

loc_0013C4BA: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C4C3u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C4C3: ;
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x0013C4D6u); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013C4D6: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013C496; /* je: equal / zero */

loc_0013C4DE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C4E4; /* je: equal / zero */

loc_0013C4E2: ;
    MEM32(ecx) = edi;

loc_0013C4E4: ;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C4F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BCD23BE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5BCD23BE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C517; /* jne: not equal / not zero */

loc_0013C4FB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C504u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C50C: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x34) = MEM8(ebx + 0x34) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C517: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5FEA1E8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF5FEA1E8u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C53A; /* jne: not equal / not zero */

loc_0013C51E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C527u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C52F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x34) = MEM8(ebx + 0x34) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F66DA47u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F66DA47u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C55D; /* jne: not equal / not zero */

loc_0013C541: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C54Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C54A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C552: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x35) = MEM8(ebx + 0x35) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x35)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C55D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4414B56A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4414B56A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C580; /* jne: not equal / not zero */

loc_0013C564: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C56Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C56D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C575: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x34) = MEM8(ebx + 0x34) | 0x10;
    _fa = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C580: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x613C1A15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x613C1A15 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C5A3; /* jne: not equal / not zero */

loc_0013C587: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C590u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C598: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x34) = MEM8(ebx + 0x34) | 8;
    _fa = (uint32_t)(MEM8(ebx + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C5A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE7525692u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE7525692u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C5C6; /* jne: not equal / not zero */

loc_0013C5AA: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C5B3u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C5B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC95; /* je: equal / zero */

loc_0013C5BB: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x35) = MEM8(ebx + 0x35) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0x35)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C5C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4E0A61Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC4E0A61Fu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0013C673; /* jne: not equal / not zero */

loc_0013C5D2: ;
    ecx = edi;
    PUSH32(esp, 0x0013C5D9u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C5D9: ;
    ebp = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013C5E0: ;
    esi = MEM32(edi * 4 + 0x376DD0);
    ecx = ebp;
    /* nop */

loc_0013C5F0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C614; /* jne: not equal / not zero */

loc_0013C5F8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C610; /* je: equal / zero */

loc_0013C5FC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C614; /* jne: not equal / not zero */

loc_0013C606: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C5F0; /* jne: not equal / not zero */

loc_0013C610: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C619;

loc_0013C614: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0013C619: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C632; /* je: equal / zero */

loc_0013C61D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0013C5E0; /* jb: below (unsigned <) */

loc_0013C623: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x32) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C632: ;
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0013C65F; /* je: equal / zero */

loc_0013C637: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0013C64B; /* je: equal / zero */

loc_0013C63A: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM8(ecx + 0x32) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C64B: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    MEM8(ecx + 0x32) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C65F: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    MEM8(ecx + 0x32) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C673: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0A86AFAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0A86AFAu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C6F9; /* jne: not equal / not zero */

loc_0013C67A: ;
    ecx = edi;
    PUSH32(esp, 0x0013C681u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C681: ;
    ebp = eax;
    MEM32(esp + 0x20) = 3;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013C690: ;
    esi = MEM32(edi * 4 + 0x376DB4);
    ecx = ebp;
    /* nop */

loc_0013C6A0: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C6C4; /* jne: not equal / not zero */

loc_0013C6A8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C6C0; /* je: equal / zero */

loc_0013C6AC: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C6C4; /* jne: not equal / not zero */

loc_0013C6B6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C6A0; /* jne: not equal / not zero */

loc_0013C6C0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C6C9;

loc_0013C6C4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0013C6C9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C6D5; /* je: equal / zero */

loc_0013C6CD: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013C690; /* jl: less (signed <) */

loc_0013C6D3: ;
    goto loc_0013C6D9;

loc_0013C6D5: ;
    MEM32(esp + 0x20) = edi;

loc_0013C6D9: ;
    fp_push(MEMD(0x31BE88)); /* fld double */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    PUSH32(esp, 0x0013C6E8u); RECOMP_ABI_CALL(0x002BF8D4u, sub_002BF8D4); /* call 0x002BF8D4 */

loc_0013C6E8: ;
    POP32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x31BE80)); /* fadd dword ptr [0x31be80] */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C6F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x120C180B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x120C180B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C774; /* jne: not equal / not zero */

loc_0013C700: ;
    ecx = edi;
    PUSH32(esp, 0x0013C707u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C707: ;
    ebp = eax;
    eax = 2;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013C710: ;
    esi = MEM32(edi * 4 + 0x376DA0);
    ecx = ebp;
    /* nop */

loc_0013C720: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C744; /* jne: not equal / not zero */

loc_0013C728: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C740; /* je: equal / zero */

loc_0013C72C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C744; /* jne: not equal / not zero */

loc_0013C736: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C720; /* jne: not equal / not zero */

loc_0013C740: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C749;

loc_0013C744: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0013C749: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C755; /* je: equal / zero */

loc_0013C74D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013C710; /* jl: less (signed <) */

loc_0013C753: ;
    goto loc_0013C757;

loc_0013C755: ;
    eax = edi;

loc_0013C757: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF224); /* mulss */
    POP32(esp, esi);
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C774: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA75C38A2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA75C38A2u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C7F4; /* jne: not equal / not zero */

loc_0013C77B: ;
    ecx = edi;
    PUSH32(esp, 0x0013C782u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C782: ;
    ebp = eax;
    eax = 1;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C790;

    /* nop */

loc_0013C790: ;
    esi = MEM32(edi * 4 + 0x376D94);
    ecx = ebp;
    /* nop */

loc_0013C7A0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C7C4; /* jne: not equal / not zero */

loc_0013C7A8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C7C0; /* je: equal / zero */

loc_0013C7AC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C7C4; /* jne: not equal / not zero */

loc_0013C7B6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C7A0; /* jne: not equal / not zero */

loc_0013C7C0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C7C9;

loc_0013C7C4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0013C7C9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C7D5; /* je: equal / zero */

loc_0013C7CD: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013C790; /* jl: less (signed <) */

loc_0013C7D3: ;
    goto loc_0013C7D7;

loc_0013C7D5: ;
    eax = edi;

loc_0013C7D7: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    POP32(esp, esi);
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C7F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78C8F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78C8F1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C873; /* jne: not equal / not zero */

loc_0013C7FB: ;
    ecx = edi;
    PUSH32(esp, 0x0013C802u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C802: ;
    ebp = eax;
    eax = 2;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C810;

    /* nop */

loc_0013C810: ;
    esi = MEM32(edi * 4 + 0x376D84);
    ecx = ebp;
    /* nop */

loc_0013C820: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C844; /* jne: not equal / not zero */

loc_0013C828: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C840; /* je: equal / zero */

loc_0013C82C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C844; /* jne: not equal / not zero */

loc_0013C836: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C820; /* jne: not equal / not zero */

loc_0013C840: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C849;

loc_0013C844: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0013C849: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C862; /* je: equal / zero */

loc_0013C84D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013C810; /* jl: less (signed <) */

loc_0013C853: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x31) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C862: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x31) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C873: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2536C624) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2536C624 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC88; /* je: equal / zero */

loc_0013C87E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0F9FC78u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0F9FC78u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC88; /* je: equal / zero */

loc_0013C889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D5284DCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8D5284DCu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C8B8; /* jne: not equal / not zero */

loc_0013C890: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C89Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C89E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C8A4u); RECOMP_ABI_CALL(0x000E4E50u, sub_000E4E50); /* call 0x000E4E50 */

loc_0013C8A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C8AAu); RECOMP_ABI_CALL(0x0014DB60u, sub_0014DB60); /* call 0x0014DB60 */

loc_0013C8AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x38) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C8B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC209B2Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAC209B2Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C933; /* jne: not equal / not zero */

loc_0013C8BF: ;
    ecx = edi;
    PUSH32(esp, 0x0013C8C6u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C8C6: ;
    ebp = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013C8D0: ;
    esi = MEM32(edi * 4 + 0x376D78);
    ecx = ebp;
    /* nop */

loc_0013C8E0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C904; /* jne: not equal / not zero */

loc_0013C8E8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C900; /* je: equal / zero */

loc_0013C8EC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C904; /* jne: not equal / not zero */

loc_0013C8F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C8E0; /* jne: not equal / not zero */

loc_0013C900: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013C909;

loc_0013C904: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0013C909: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C922; /* je: equal / zero */

loc_0013C90D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013C8D0; /* jl: less (signed <) */

loc_0013C913: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x30) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C922: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x30) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F95BC34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F95BC34 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C94E; /* jne: not equal / not zero */

loc_0013C93A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C943u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C943: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x3C) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C94E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDD04B2Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFDD04B2Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C9A3; /* jne: not equal / not zero */

loc_0013C955: ;
    ecx = edi;
    PUSH32(esp, 0x0013C95Cu); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_0013C95C: ;
    edx = MEM32(0x376D70);
    esi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013C96Bu); RECOMP_ABI_CALL(0x002C0B98u, sub_002C0B98); /* call 0x002C0B98 */

loc_0013C96B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013C97D; /* jne: not equal / not zero */

loc_0013C972: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x48) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C97D: ;
    eax = MEM32(0x376D74);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013C989u); RECOMP_ABI_CALL(0x002C0B98u, sub_002C0B98); /* call 0x002C0B98 */

loc_0013C989: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013CC94; /* jne: not equal / not zero */

loc_0013C994: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x48) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C9A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD912A15u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD912A15u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013C9D5; /* jne: not equal / not zero */

loc_0013C9AA: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013C9B8u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013C9B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C9BEu); RECOMP_ABI_CALL(0x000E4E50u, sub_000E4E50); /* call 0x000E4E50 */

loc_0013C9BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx + 0x60;
    MEM32(ebx + 0x54) = eax;
    PUSH32(esp, 0x0013C9CDu); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0013C9CD: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013C9D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDD8A92Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDD8A92Au (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CA07; /* jne: not equal / not zero */

loc_0013C9DC: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013C9E7u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0013C9E7: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C9F2u); RECOMP_ABI_CALL(0x00065D50u, sub_00065D50); /* call 0x00065D50 */

loc_0013C9F2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx + 0x4C) = eax;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x50) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CA07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF29CEA7Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF29CEA7Bu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CC4D; /* jne: not equal / not zero */

loc_0013CA12: ;
    ecx = edi;
    PUSH32(esp, 0x0013CA19u); RECOMP_ABI_CALL(0x00264400u, sub_00264400); /* call 0x00264400 */

loc_0013CA19: ;
    ebx = eax;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0013CAE8; /* jle: less or equal (signed <=) */

loc_0013CA27: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0013CA2Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013CA2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE84F776Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE84F776Au (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0013CA81; /* jg: greater (signed >) */

loc_0013CA36: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CA79; /* je: equal / zero */

loc_0013CA38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9FB57F53u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9FB57F53u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0013CA61; /* jg: greater (signed >) */

loc_0013CA3F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CA5C; /* je: equal / zero */

loc_0013CA41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83D1A4CAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x83D1A4CAu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CA54; /* je: equal / zero */

loc_0013CA48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F418371u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F418371u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CAC6; /* jne: not equal / not zero */

loc_0013CA4F: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CA54: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x400;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CA5C: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CA61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0BA51F5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0BA51F5u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CA74; /* je: equal / zero */

loc_0013CA68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCB41D8F7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCB41D8F7u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CAC6; /* jne: not equal / not zero */

loc_0013CA6F: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CA74: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CA79: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CA81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41531FEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41531FEF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0013CAAD; /* jg: greater (signed >) */

loc_0013CA88: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CAA5; /* je: equal / zero */

loc_0013CA8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A5D68A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A5D68A8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CAA0; /* je: equal / zero */

loc_0013CA91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FD71A0D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FD71A0D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CAC6; /* jne: not equal / not zero */

loc_0013CA98: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CAA0: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CAA5: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x200;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CAAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A1FF687) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A1FF687 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CAC0; /* je: equal / zero */

loc_0013CAB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D163001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D163001 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CAC6; /* jne: not equal / not zero */

loc_0013CABB: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013CAC6;

loc_0013CAC0: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0x7FE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013CAC6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0013CA27; /* jl: less (signed <) */

loc_0013CACF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x380) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x380 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0013CBB1; /* jg: greater (signed >) */

loc_0013CADB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB9D; /* je: equal / zero */

loc_0013CAE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0013CB4B; /* jg: greater (signed >) */

loc_0013CAE6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB37; /* je: equal / zero */

loc_0013CAE8: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0));
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013CB23; /* je: equal / zero */

loc_0013CAED: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013CB0F; /* je: equal / zero */

loc_0013CAF2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0013CC28; /* jne: not equal / not zero */

loc_0013CAFB: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x10;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB0F: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x13;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB23: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0xFF;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB37: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x1C;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB89; /* je: equal / zero */

loc_0013CB50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x44 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB75; /* je: equal / zero */

loc_0013CB55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2C0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CC28; /* jne: not equal / not zero */

loc_0013CB61: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x1B;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB75: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x18;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB89: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x12;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CB9D: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x19;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CBB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6C2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0013CC1D; /* jg: greater (signed >) */

loc_0013CBB9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC09; /* je: equal / zero */

loc_0013CBBB: ;
    _fb = (uint32_t)(0x3FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x3FC));
    esi = esi - 0x3FC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013CBF5; /* je: equal / zero */

loc_0013CBC3: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x40));
    esi = esi - 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013CBE1; /* je: equal / zero */

loc_0013CBC8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0013CC28; /* jne: not equal / not zero */

loc_0013CBCD: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x17;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CBE1: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x1A;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CBF5: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x1D;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CC09: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x16;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CC1D: ;
    _fb = (uint32_t)(0x7FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x7FC));
    esi = esi - 0x7FC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0013CC39; /* je: equal / zero */

loc_0013CC25: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0013CC28: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CC39: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0x1E;
    POP32(esp, esi);
    MEM32(ecx + 0x28) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CC4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD9AA5966u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD9AA5966u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CC68; /* jne: not equal / not zero */

loc_0013CC54: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013CC5Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013CC5D: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x40) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CC68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E02FFB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E02FFB0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013CC94; /* jne: not equal / not zero */

loc_0013CC6F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013CC78u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013CC78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CC94; /* je: equal / zero */

loc_0013CC7C: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x35) = MEM8(ebx + 0x35) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0x35)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0013CC88: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0013CC91u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0013CC91: ;
    MEM32(ebx + 0x2C) = eax;

loc_0013CC94: ;
    POP32(esp, ebp);

loc_0013CC95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013CCA0
 * Original: 0x0013CCA0 - 0x0013CF4C (684 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CCA0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xC);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CEE5; /* je: equal / zero */

loc_0013CCCC: ;
    PUSH32(esp, ebp);
    esi = edi + 0x1C;
    goto loc_0013CCE0;

loc_0013CCD2: ;
    edi = MEM32(esp + 0x18);
    goto loc_0013CCE0;

    /* nop */
    /* nop */

loc_0013CCE0: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx + 0x90;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x0013CCF4u); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013CCF4: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx + 0x84;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x0013CD0Cu); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013CD0C: ;
    ecx = MEM32(esi + -4);
    ebp = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CD1B; /* jne: not equal / not zero */

loc_0013CD17: ;
    eax = ecx;
    goto loc_0013CD2C;

loc_0013CD1B: ;
    edi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013CD27u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013CD27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013CD2C: ;
    MEM32(esi) = eax;
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFFCu (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013CDB2; /* jle: less or equal (signed <=) */

loc_0013CD40: ;
    ebx = esi + 8;

loc_0013CD43: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(ecx + 0x18);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CD6B; /* je: equal / zero */

loc_0013CD5A: ;
    /* nop */

loc_0013CD60: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CD6D; /* je: equal / zero */

loc_0013CD64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CD60; /* jne: not equal / not zero */

loc_0013CD6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013CD6D: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    MEM8(esp + 0x28) = 0;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = esp + 0x18;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013CD8Eu); RECOMP_ABI_CALL(0x0013D5C0u, sub_0013D5C0); /* call 0x0013D5C0 */

loc_0013CD8E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013CD9Eu); RECOMP_ABI_CALL(0x000467F0u, sub_000467F0); /* call 0x000467F0 */

loc_0013CD9E: ;
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013CD43; /* jl: less (signed <) */

loc_0013CDAE: ;
    ebx = MEM32(esp + 0x14);

loc_0013CDB2: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFCu (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013CECA; /* jle: less or equal (signed <=) */

loc_0013CDCF: ;
    /* nop */

loc_0013CDD0: ;
    edx = MEM32(eax + ebp * 4);
    eax = MEM32(ebx + 0x28);
    ecx = MEM32(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CDF4; /* je: equal / zero */

loc_0013CDE5: ;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE15; /* je: equal / zero */

loc_0013CDEA: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CDE5; /* jne: not equal / not zero */

loc_0013CDF4: ;
    MEM32(esp + 0x10) = 0;

loc_0013CDFC: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE1B; /* je: equal / zero */

loc_0013CE03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE0D; /* je: equal / zero */

loc_0013CE07: ;
    edx = MEM32(esp + 0x10);
    MEM32(edi) = edx;

loc_0013CE0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013CEA1;

loc_0013CE15: ;
    MEM32(esp + 0x10) = ecx;
    goto loc_0013CDFC;

loc_0013CE1B: ;
    ebx = MEM32(esi + -4);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x28) = 1;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x28;
    if (CMP_B(_fa, _fb)) goto loc_0013CE3E; /* jb: below (unsigned <) */

loc_0013CE3A: ;
    ecx = esp + 0x2C;

loc_0013CE3E: ;
    ebx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0013CE58; /* je: equal / zero */

loc_0013CE44: ;
    eax = ebx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013CE51u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013CE51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    goto loc_0013CE5A;

loc_0013CE58: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013CE5A: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013CE65; /* jne: not equal / not zero */

loc_0013CE61: ;
    eax = ebp;
    goto loc_0013CE74;

loc_0013CE65: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013CE6Fu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013CE6F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013CE74: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    edi = eax + 4;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CE8D; /* je: equal / zero */

loc_0013CE84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013CE8Au); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013CE8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013CE8D: ;
    edx = ebp + ebx * 4;
    ebx = MEM32(esp + 0x14);
    MEM32(esi + -4) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(esi) = edi;
    MEM32(esi + 4) = edx;

loc_0013CEA1: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0013CEAF; /* jns: not sign (positive) */

loc_0013CEAC: ;
    MEM32(esi + -8) = eax;

loc_0013CEAF: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0013CDD0; /* jl: less (signed <) */

loc_0013CECA: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013CCD2; /* jne: not equal / not zero */

loc_0013CEE4: ;
    POP32(esp, ebp);

loc_0013CEE5: ;
    eax = MEM32(ebx + 0x94);
    esi = ebx + 0x90;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CF16; /* je: equal / zero */

loc_0013CEF7: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013CF04u); RECOMP_ABI_CALL(0x0013DCA0u, sub_0013DCA0); /* call 0x0013DCA0 */

loc_0013CF04: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_0013CF16: ;
    eax = MEM32(ebx + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ebx + 0x84;
    if (CMP_EQ(_fa, _fb)) goto loc_0013CF45; /* je: equal / zero */

loc_0013CF26: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013CF33u); RECOMP_ABI_CALL(0x0013DCA0u, sub_0013DCA0); /* call 0x0013DCA0 */

loc_0013CF33: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_0013CF45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF50
 * Original: 0x0013CF50 - 0x0013D2A5 (853 bytes, 294 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CF50: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    edx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D248; /* je: equal / zero */

loc_0013CF7C: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x10;
    goto loc_0013CF86;

loc_0013CF82: ;
    esi = MEM32(esp + 0x10);

loc_0013CF86: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebp + 0x1C;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0013CF97u); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013CF97: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebp + 0x10;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0013CFACu); RECOMP_ABI_CALL(0x0013E200u, sub_0013E200); /* call 0x0013E200 */

loc_0013CFAC: ;
    ecx = MEM32(esi);
    ebp = eax;
    eax = MEM32(ebx + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0013CFBF; /* jne: not equal / not zero */

loc_0013CFBB: ;
    eax = ecx;
    goto loc_0013CFD0;

loc_0013CFBF: ;
    esi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013CFCBu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013CFCB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013CFD0: ;
    MEM32(ebx + -12) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    ecx = MEM32(ebx + -4);
    if (CMP_NE(_fa, _fb)) goto loc_0013CFE0; /* jne: not equal / not zero */

loc_0013CFDC: ;
    eax = ecx;
    goto loc_0013CFF1;

loc_0013CFE0: ;
    esi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013CFECu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013CFEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013CFF1: ;
    MEM32(ebx) = eax;
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFFCu (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013D10B; /* jle: less or equal (signed <=) */

loc_0013D00D: ;
    /* nop */

loc_0013D010: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D031; /* je: equal / zero */

loc_0013D026: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D054; /* je: equal / zero */

loc_0013D02A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D026; /* jne: not equal / not zero */

loc_0013D031: ;
    MEM32(esp + 0x14) = 0;

loc_0013D039: ;
    esi = MEM32(ebx + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D05A; /* je: equal / zero */

loc_0013D041: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D04B; /* je: equal / zero */

loc_0013D045: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = eax;

loc_0013D04B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + -12) = MEM32(ebx + -12) + 4;
    _fa = (uint32_t)(MEM32(ebx + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013D0F3;

loc_0013D054: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0013D039;

loc_0013D05A: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx);
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = eax;
    ecx = esp + 0x24;
    if (CMP_B(_fa, _fb)) goto loc_0013D080; /* jb: below (unsigned <) */

loc_0013D07C: ;
    ecx = esp + 0x28;

loc_0013D080: ;
    ebp = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0013D09A; /* je: equal / zero */

loc_0013D086: ;
    edx = ebp * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013D093u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013D093: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_0013D09C;

loc_0013D09A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D09C: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D0AA; /* jne: not equal / not zero */

loc_0013D0A6: ;
    eax = edi;
    goto loc_0013D0C0;

loc_0013D0AA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013D0B4u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013D0B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0013D0C0: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    esi = eax + 4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D0DC; /* je: equal / zero */

loc_0013D0D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D0D9u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D0D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D0DC: ;
    eax = MEM32(esp + 0x10);
    ecx = edi + ebp * 4;
    ebp = MEM32(esp + 0x2C);
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(ebx + -12) = esi;
    MEM32(ebx + -8) = ecx;

loc_0013D0F3: ;
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013D010; /* jl: less (signed <) */

loc_0013D10B: ;
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFCu (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013D224; /* jle: less or equal (signed <=) */

loc_0013D129: ;
    /* nop */

loc_0013D130: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    ecx = ecx + ecx * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D15E; /* je: equal / zero */

loc_0013D149: ;
    /* nop */

loc_0013D150: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D17F; /* je: equal / zero */

loc_0013D155: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D150; /* jne: not equal / not zero */

loc_0013D15E: ;
    MEM32(esp + 0x14) = 0;

loc_0013D166: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D185; /* je: equal / zero */

loc_0013D16D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D177; /* je: equal / zero */

loc_0013D171: ;
    edx = MEM32(esp + 0x14);
    MEM32(esi) = edx;

loc_0013D177: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + 4;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013D20C;

loc_0013D17F: ;
    MEM32(esp + 0x14) = eax;
    goto loc_0013D166;

loc_0013D185: ;
    edi = MEM32(ebx + -4);
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x28) = eax;
    ecx = esp + 0x2C;
    if (CMP_B(_fa, _fb)) goto loc_0013D1A8; /* jb: below (unsigned <) */

loc_0013D1A4: ;
    ecx = esp + 0x28;

loc_0013D1A8: ;
    ebp = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0013D1C2; /* je: equal / zero */

loc_0013D1AE: ;
    eax = ebp * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D1BBu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013D1BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_0013D1C4;

loc_0013D1C2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D1C4: ;
    eax = MEM32(ebx + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D1CF; /* jne: not equal / not zero */

loc_0013D1CB: ;
    eax = edi;
    goto loc_0013D1E0;

loc_0013D1CF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013D1D9u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013D1D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_0013D1E0: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    esi = eax + 4;
    eax = MEM32(ebx + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D1F9; /* je: equal / zero */

loc_0013D1F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D1F6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D1F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D1F9: ;
    edx = edi + ebp * 4;
    ebp = MEM32(esp + 0x1C);
    MEM32(ebx + -4) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = edx;

loc_0013D20C: ;
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013D130; /* jl: less (signed <) */

loc_0013D224: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x30);
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013CF82; /* jne: not equal / not zero */

loc_0013D247: ;
    POP32(esp, ebx);

loc_0013D248: ;
    eax = MEM32(ebp + 0x20);
    esi = ebp + 0x1C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D273; /* je: equal / zero */

loc_0013D254: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013D261u); RECOMP_ABI_CALL(0x0013DC50u, sub_0013DC50); /* call 0x0013DC50 */

loc_0013D261: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_0013D273: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ebp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D29C; /* je: equal / zero */

loc_0013D27D: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013D28Au); RECOMP_ABI_CALL(0x0013DC50u, sub_0013DC50); /* call 0x0013DC50 */

loc_0013D28A: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_0013D29C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D2B0
 * Original: 0x0013D2B0 - 0x0013D2E3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D2B0: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x31BE90);
    PUSH32(esp, 0x0013D2C4u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013D2C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D2D8; /* je: equal / zero */

loc_0013D2CB: ;
    ecx = eax;
    PUSH32(esp, 0x0013D2D2u); RECOMP_ABI_CALL(0x0013C120u, sub_0013C120); /* call 0x0013C120 */

loc_0013D2D2: ;
    MEM32(0x3F2DEC) = eax;
    esp += 4; return; /* ret */

loc_0013D2D8: ;
    MEM32(0x3F2DEC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2F0
 * Original: 0x0013D2F0 - 0x0013D318 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013D2FAu); RECOMP_ABI_CALL(0x0013CCA0u, sub_0013CCA0); /* call 0x0013CCA0 */

loc_0013D2FA: ;
    edi = esi + 0x68;
    ebx = esi + 0x20;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0013D30Cu); RECOMP_ABI_CALL(0x0013CF50u, sub_0013CF50); /* call 0x0013CF50 */

loc_0013D30C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0013D314u); RECOMP_ABI_CALL(0x0013BF50u, sub_0013BF50); /* call 0x0013BF50 */

loc_0013D314: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D320
 * Original: 0x0013D320 - 0x0013D394 (116 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D390; /* jne: not equal / not zero */

loc_0013D32B: ;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x31BEC8);
    PUSH32(esp, 0x0013D344u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013D344: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0013D34Eu); RECOMP_ABI_CALL(0x0013CCA0u, sub_0013CCA0); /* call 0x0013CCA0 */

loc_0013D34E: ;
    edi = esi + 0x68;
    PUSH32(esp, edi);
    edx = esi + 0x48;
    ebx = esi + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0013D360u); RECOMP_ABI_CALL(0x0013CF50u, sub_0013CF50); /* call 0x0013CF50 */

loc_0013D360: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0013D368u); RECOMP_ABI_CALL(0x0013BF50u, sub_0013BF50); /* call 0x0013BF50 */

loc_0013D368: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(esi + 0xC);
    edi = eax + eax * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D38E; /* je: equal / zero */

loc_0013D37C: ;
    /* nop */

loc_0013D380: ;
    ecx = ebx;
    PUSH32(esp, 0x0013D387u); RECOMP_ABI_CALL(0x00139050u, sub_00139050); /* call 0x00139050 */

loc_0013D387: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D380; /* jne: not equal / not zero */

loc_0013D38E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0013D390: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D3A0
 * Original: 0x0013D3A0 - 0x0013D3AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3A0(void)
{

loc_0013D3A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D3B0
 * Original: 0x0013D3B0 - 0x0013D3F5 (69 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D3B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D3F3; /* je: equal / zero */

loc_0013D3BA: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    edx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx + edx * 4;
    if ((_fas < 0)) goto loc_0013D3DE; /* js: sign (negative) */

loc_0013D3CB: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;
    /* nop */

loc_0013D3D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D3DAu); RECOMP_ABI_CALL(0x00138B00u, sub_00138B00); /* call 0x00138B00 */

loc_0013D3DA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D3D0; /* jne: not equal / not zero */

loc_0013D3DD: ;
    POP32(esp, ebx);

loc_0013D3DE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013D3E4u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D3E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, ebp);

loc_0013D3F3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D400
 * Original: 0x0013D400 - 0x0013D449 (73 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D400: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D447; /* je: equal / zero */

loc_0013D40A: ;
    eax = MEM32(ecx + -16);
    PUSH32(esp, ebp);
    ebp = ecx + -16;
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013D432; /* js: sign (negative) */

loc_0013D41D: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;

loc_0013D421: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D42Eu); RECOMP_ABI_CALL(0x00139280u, sub_00139280); /* call 0x00139280 */

loc_0013D42E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D421; /* jne: not equal / not zero */

loc_0013D431: ;
    POP32(esp, ebx);

loc_0013D432: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013D438u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D438: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, ebp);

loc_0013D447: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D450
 * Original: 0x0013D450 - 0x0013D49B (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D450: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D499; /* je: equal / zero */

loc_0013D45A: ;
    eax = MEM32(ecx + -16);
    PUSH32(esp, ebp);
    ebp = ecx + -16;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013D484; /* js: sign (negative) */

loc_0013D46F: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;

loc_0013D473: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D480u); RECOMP_ABI_CALL(0x001391E0u, sub_001391E0); /* call 0x001391E0 */

loc_0013D480: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D473; /* jne: not equal / not zero */

loc_0013D483: ;
    POP32(esp, ebx);

loc_0013D484: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013D48Au); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D48A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, ebp);

loc_0013D499: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D4A0
 * Original: 0x0013D4A0 - 0x0013D4E5 (69 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D4A0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D4E3; /* je: equal / zero */

loc_0013D4AA: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013D4CE; /* js: sign (negative) */

loc_0013D4BC: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;

loc_0013D4C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D4CAu); RECOMP_ABI_CALL(0x00138BE0u, sub_00138BE0); /* call 0x00138BE0 */

loc_0013D4CA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D4C0; /* jne: not equal / not zero */

loc_0013D4CD: ;
    POP32(esp, ebx);

loc_0013D4CE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013D4D4u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D4D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, ebp);

loc_0013D4E3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D4F0
 * Original: 0x0013D4F0 - 0x0013D536 (70 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D4F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D534; /* je: equal / zero */

loc_0013D4FA: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013D51F; /* js: sign (negative) */

loc_0013D50D: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;

loc_0013D511: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D51Bu); RECOMP_ABI_CALL(0x00139110u, sub_00139110); /* call 0x00139110 */

loc_0013D51B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D511; /* jne: not equal / not zero */

loc_0013D51E: ;
    POP32(esp, ebx);

loc_0013D51F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0013D525u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D525: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edi + 8) = eax;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, ebp);

loc_0013D534: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D540
 * Original: 0x0013D540 - 0x0013D573 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D56E; /* je: equal / zero */

loc_0013D54C: ;
    PUSH32(esp, edi);
    /* nop */

loc_0013D550: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013D55Bu); RECOMP_ABI_CALL(0x0013D540u, sub_0013D540); /* call 0x0013D540 */

loc_0013D55B: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D564u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D564: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013D550; /* jne: not equal / not zero */

loc_0013D56D: ;
    POP32(esp, edi);

loc_0013D56E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D580
 * Original: 0x0013D580 - 0x0013D5B3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D5AE; /* je: equal / zero */

loc_0013D58C: ;
    PUSH32(esp, edi);
    /* nop */

loc_0013D590: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013D59Bu); RECOMP_ABI_CALL(0x0013D580u, sub_0013D580); /* call 0x0013D580 */

loc_0013D59B: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D5A4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D5A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013D590; /* jne: not equal / not zero */

loc_0013D5AD: ;
    POP32(esp, edi);

loc_0013D5AE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D5C0
 * Original: 0x0013D5C0 - 0x0013D618 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D5C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ebx));
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((2) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0013D613; /* jle: less or equal (signed <=) */

loc_0013D5D3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_0013D5D5: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax);
    esi = edi;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((1) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = MEM32(ebx + esi * 4);
    PUSH32(esp, 0x0013D5E7u); RECOMP_ABI_CALL(0x00138B70u, sub_00138B70); /* call 0x00138B70 */

loc_0013D5E7: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    PUSH32(esp, 0x0013D5F2u); RECOMP_ABI_CALL(0x00138B70u, sub_00138B70); /* call 0x00138B70 */

loc_0013D5F2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0013D602; /* jbe: below or equal (unsigned <=) */

loc_0013D5FE: ;
    edi = esi;
    goto loc_0013D60D;

loc_0013D602: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx + esi * 4 + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D60D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0013D5D5; /* jg: greater (signed >) */

loc_0013D611: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0013D613: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013D620
 * Original: 0x0013D620 - 0x0013D632 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D620: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013D62Fu); RECOMP_ABI_CALL(0x0013D640u, sub_0013D640); /* call 0x0013D640 */

loc_0013D62F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D640
 * Original: 0x0013D640 - 0x0013D6EF (175 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D640: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D686; /* je: equal / zero */

loc_0013D652: ;
    edi = ecx + -4;
    MEM32(ebp + 4) = 0;
    eax = MEM32(edi);
    edx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx + edx * 4;
    if ((_fas < 0)) goto loc_0013D67D; /* js: sign (negative) */

loc_0013D667: ;
    ebx = eax + 1;
    /* nop */

loc_0013D670: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xC));
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D67Au); RECOMP_ABI_CALL(0x00138B00u, sub_00138B00); /* call 0x00138B00 */

loc_0013D67A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D670; /* jne: not equal / not zero */

loc_0013D67D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013D683u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D683: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D686: ;
    edi = MEM32(esp + 0x18);
    eax = edi + edi * 2;
    ecx = eax * 4 + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013D69Au); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_0013D69A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D6D9; /* je: equal / zero */

loc_0013D6A1: ;
    ebx = eax + 4;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0013D6C3; /* jl: less (signed <) */

loc_0013D6AF: ;
    ebp = eax + 1;

loc_0013D6B2: ;
    ecx = esi;
    PUSH32(esp, 0x0013D6B9u); RECOMP_ABI_CALL(0x00138AF0u, sub_00138AF0); /* call 0x00138AF0 */

loc_0013D6B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D6B2; /* jne: not equal / not zero */

loc_0013D6BF: ;
    ebp = MEM32(esp + 0x10);

loc_0013D6C3: ;
    eax = ebx;
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013D6D9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D6F0
 * Original: 0x0013D6F0 - 0x0013D702 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D6F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013D6FFu); RECOMP_ABI_CALL(0x0013D710u, sub_0013D710); /* call 0x0013D710 */

loc_0013D6FF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D710
 * Original: 0x0013D710 - 0x0013D7C4 (180 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D710: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D759; /* je: equal / zero */

loc_0013D722: ;
    edi = ecx + -16;
    MEM32(ebp + 4) = 0;
    eax = MEM32(edi);
    esi = eax + eax * 8;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013D750; /* js: sign (negative) */

loc_0013D739: ;
    ebx = eax + 1;
    /* nop */

loc_0013D740: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x90));
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013D74Du); RECOMP_ABI_CALL(0x00139280u, sub_00139280); /* call 0x00139280 */

loc_0013D74D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D740; /* jne: not equal / not zero */

loc_0013D750: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013D756u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013D756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D759: ;
    edi = MEM32(esp + 0x18);
    eax = edi + edi * 8;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D76Cu); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_0013D76C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D7AE; /* je: equal / zero */

loc_0013D773: ;
    ebx = eax + 0x10;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0013D798; /* jl: less (signed <) */

loc_0013D781: ;
    ebp = eax + 1;

loc_0013D784: ;
    ecx = esi;
    PUSH32(esp, 0x0013D78Bu); RECOMP_ABI_CALL(0x00139230u, sub_00139230); /* call 0x00139230 */

loc_0013D78B: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x90)) >> 32) & 1);
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D784; /* jne: not equal / not zero */

loc_0013D794: ;
    ebp = MEM32(esp + 0x10);

loc_0013D798: ;
    eax = ebx;
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013D7AE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D7D0
 * Original: 0x0013D7D0 - 0x0013D884 (180 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D7D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D808; /* je: equal / zero */

loc_0013D7E8: ;
    edx = MEM32(ebx);
    /* nop */

loc_0013D7F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D801; /* je: equal / zero */

loc_0013D7FC: ;
    esi = MEM32(esi + 8);
    goto loc_0013D804;

loc_0013D801: ;
    esi = MEM32(esi + 0xC);

loc_0013D804: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D7F0; /* jne: not equal / not zero */

loc_0013D808: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D848; /* je: equal / zero */

loc_0013D812: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D83B; /* jne: not equal / not zero */

loc_0013D817: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0013D828u); RECOMP_ABI_CALL(0x00151C00u, sub_00151C00); /* call 0x00151C00 */

loc_0013D828: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013D83B: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0013D844u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_0013D844: ;
    edx = MEM32(esp + 0x18);

loc_0013D848: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013D873; /* jae: above or equal (unsigned >=) */

loc_0013D84F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0013D860u); RECOMP_ABI_CALL(0x00151C00u, sub_00151C00); /* call 0x00151C00 */

loc_0013D860: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 1;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013D873: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D890
 * Original: 0x0013D890 - 0x0013D8BF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D890: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D89C; /* je: equal / zero */

loc_0013D897: ;
    ecx = esi + 4;
    goto loc_0013D89E;

loc_0013D89C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D89E: ;
    PUSH32(esp, 0x0013D8A3u); RECOMP_ABI_CALL(0x0013D3B0u, sub_0013D3B0); /* call 0x0013D3B0 */

loc_0013D8A3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_0013D8B9; /* je: equal / zero */

loc_0013D8B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D8B6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D8B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D8B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D8C0
 * Original: 0x0013D8C0 - 0x0013D8EF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D8CC; /* je: equal / zero */

loc_0013D8C7: ;
    ecx = esi + 4;
    goto loc_0013D8CE;

loc_0013D8CC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D8CE: ;
    PUSH32(esp, 0x0013D8D3u); RECOMP_ABI_CALL(0x0013D400u, sub_0013D400); /* call 0x0013D400 */

loc_0013D8D3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_0013D8E9; /* je: equal / zero */

loc_0013D8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D8E6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D8E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D8E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D8F0
 * Original: 0x0013D8F0 - 0x0013D9C8 (216 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D8F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    ecx = esp + 0x20;
    if (CMP_B(_fa, _fb)) goto loc_0013D913; /* jb: below (unsigned <) */

loc_0013D90F: ;
    ecx = esp + 0xC;

loc_0013D913: ;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    if ((_fa == 0)) goto loc_0013D935; /* je: equal / zero */

loc_0013D91D: ;
    eax = ecx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D92Au); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013D92A: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;
    goto loc_0013D941;

loc_0013D935: ;
    MEM32(esp + 0x20) = 0;
    ecx = MEM32(esp + 0x20);

loc_0013D941: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D951; /* jne: not equal / not zero */

loc_0013D94D: ;
    eax = ecx;
    goto loc_0013D962;

loc_0013D951: ;
    esi = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013D95Du); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013D95D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D962: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0013D97A; /* jbe: below or equal (unsigned <=) */

loc_0013D966: ;
    edx = MEM32(esp + 0x1C);
    ecx = edi;
    /* nop */

loc_0013D970: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D970; /* jne: not equal / not zero */

loc_0013D97A: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013D99C; /* jne: not equal / not zero */

loc_0013D984: ;
    esi = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D99C; /* je: equal / zero */

loc_0013D98B: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D995u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013D995: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D99C: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D9AD; /* je: equal / zero */

loc_0013D9A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D9AAu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013D9AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013D9AD: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0xC);
    MEM32(ebp + 4) = edi;
    POP32(esp, edi);
    edx = eax + ecx * 4;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    MEM32(ebp + 8) = edx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0013D9D0
 * Original: 0x0013D9D0 - 0x0013DA2F (95 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D9D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA01; /* je: equal / zero */

loc_0013D9F1: ;
    eax = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D9FEu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013D9FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DA01: ;
    ecx = eax + edi * 4;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    edi = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA24; /* je: equal / zero */

loc_0013DA15: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013DA1Fu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0013DA1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DA24: ;
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DA30
 * Original: 0x0013DA30 - 0x0013DA99 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DA30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA65; /* je: equal / zero */

loc_0013DA3E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013DA4Bu); RECOMP_ABI_CALL(0x0013D540u, sub_0013D540); /* call 0x0013D540 */

loc_0013DA4B: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = 0;

loc_0013DA65: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA74; /* je: equal / zero */

loc_0013DA6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DA71u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013DA71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DA74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA89; /* je: equal / zero */

loc_0013DA78: ;
    ecx = edi + 4;
    PUSH32(esp, 0x0013DA80u); RECOMP_ABI_CALL(0x0013D4A0u, sub_0013D4A0); /* call 0x0013D4A0 */

loc_0013DA80: ;
    MEM32(edi) = 0x2FF0D4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013DA89: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0013DA90u); RECOMP_ABI_CALL(0x0013D4A0u, sub_0013D4A0); /* call 0x0013D4A0 */

loc_0013DA90: ;
    MEM32(edi) = 0x2FF0D4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013DAA0
 * Original: 0x0013DAA0 - 0x0013DAD2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DAA0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DABB; /* je: equal / zero */

loc_0013DAA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DAB4; /* je: equal / zero */

loc_0013DAAC: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    MEM32(eax) = edx;

loc_0013DAB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0013DABB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013DACFu); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_0013DACF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DAE0
 * Original: 0x0013DAE0 - 0x0013DAF2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DAE0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013DAEFu); RECOMP_ABI_CALL(0x0013DB00u, sub_0013DB00); /* call 0x0013DB00 */

loc_0013DAEF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DB00
 * Original: 0x0013DB00 - 0x0013DBAD (173 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DB00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB46; /* je: equal / zero */

loc_0013DB12: ;
    edi = ecx + -4;
    MEM32(ebp + 4) = 0;
    eax = MEM32(edi);
    esi = eax;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013DB3D; /* js: sign (negative) */

loc_0013DB28: ;
    ebx = eax + 1;
    goto loc_0013DB30;

    /* nop */

loc_0013DB30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x10));
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013DB3Au); RECOMP_ABI_CALL(0x00138BE0u, sub_00138BE0); /* call 0x00138BE0 */

loc_0013DB3A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013DB30; /* jne: not equal / not zero */

loc_0013DB3D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013DB43u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013DB43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DB46: ;
    edi = MEM32(esp + 0x18);
    eax = edi;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013DB58u); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_0013DB58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB97; /* je: equal / zero */

loc_0013DB5F: ;
    ebx = eax + 4;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0013DB81; /* jl: less (signed <) */

loc_0013DB6D: ;
    ebp = eax + 1;

loc_0013DB70: ;
    ecx = esi;
    PUSH32(esp, 0x0013DB77u); RECOMP_ABI_CALL(0x00138BD0u, sub_00138BD0); /* call 0x00138BD0 */

loc_0013DB77: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013DB70; /* jne: not equal / not zero */

loc_0013DB7D: ;
    ebp = MEM32(esp + 0x10);

loc_0013DB81: ;
    eax = ebx;
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013DB97: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DBB0
 * Original: 0x0013DBB0 - 0x0013DBCE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013DBB8u); RECOMP_ABI_CALL(0x0013DA30u, sub_0013DA30); /* call 0x0013DA30 */

loc_0013DBB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013DBC8; /* je: equal / zero */

loc_0013DBBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DBC5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013DBC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DBC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DBD0
 * Original: 0x0013DBD0 - 0x0013DC43 (115 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DBD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DBFA; /* je: equal / zero */

loc_0013DBE5: ;
    ebx = MEM32(edi);

loc_0013DBE7: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013DBF3; /* jb: below (unsigned <) */

loc_0013DBEC: ;
    edx = eax;
    eax = MEM32(eax + 8);
    goto loc_0013DBF6;

loc_0013DBF3: ;
    eax = MEM32(eax + 0xC);

loc_0013DBF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DBE7; /* jne: not equal / not zero */

loc_0013DBFA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC05; /* je: equal / zero */

loc_0013DBFE: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013DC37; /* jae: above or equal (unsigned >=) */

loc_0013DC05: ;
    eax = MEM32(edi);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0013DC27u); RECOMP_ABI_CALL(0x0004F590u, sub_0004F590); /* call 0x0004F590 */

loc_0013DC27: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0013DC37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + 0x14;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DC50
 * Original: 0x0013DC50 - 0x0013DC93 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DC50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC8E; /* je: equal / zero */

loc_0013DC5C: ;
    PUSH32(esp, edi);
    /* nop */

loc_0013DC60: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013DC6Bu); RECOMP_ABI_CALL(0x0013DC50u, sub_0013DC50); /* call 0x0013DC50 */

loc_0013DC6B: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC7E; /* je: equal / zero */

loc_0013DC75: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013DC7Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013DC7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DC7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DC84u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013DC84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013DC60; /* jne: not equal / not zero */

loc_0013DC8D: ;
    POP32(esp, edi);

loc_0013DC8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DCA0
 * Original: 0x0013DCA0 - 0x0013DCE3 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DCA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DCDE; /* je: equal / zero */

loc_0013DCAC: ;
    PUSH32(esp, edi);
    /* nop */

loc_0013DCB0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013DCBBu); RECOMP_ABI_CALL(0x0013DCA0u, sub_0013DCA0); /* call 0x0013DCA0 */

loc_0013DCBB: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DCCE; /* je: equal / zero */

loc_0013DCC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013DCCBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013DCCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013DCCE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DCD4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013DCD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013DCB0; /* jne: not equal / not zero */

loc_0013DCDD: ;
    POP32(esp, edi);

loc_0013DCDE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DCF0
 * Original: 0x0013DCF0 - 0x0013DDBA (202 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DCF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD4D; /* je: equal / zero */

loc_0013DD02: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DD1A; /* jne: not equal / not zero */

loc_0013DD0A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DD4D; /* jne: not equal / not zero */

loc_0013DD12: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013DD4D; /* jb: below (unsigned <) */

loc_0013DD1A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0013DD21u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013DD21: ;
    esi = eax;
    eax = esi + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD3E; /* je: equal / zero */

loc_0013DD2D: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    PUSH32(esp, ebp);
    ecx = eax + 4;
    PUSH32(esp, 0x0013DD3Eu); RECOMP_ABI_CALL(0x0013D9D0u, sub_0013D9D0); /* call 0x0013D9D0 */

loc_0013DD3E: ;
    MEM32(ebx + 0xC) = esi;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DD8C; /* jne: not equal / not zero */

loc_0013DD48: ;
    MEM32(eax + 0xC) = esi;
    goto loc_0013DD8C;

loc_0013DD4D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0013DD54u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013DD54: ;
    esi = eax;
    eax = esi + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD71; /* je: equal / zero */

loc_0013DD60: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = eax + 4;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0013DD71u); RECOMP_ABI_CALL(0x0013D9D0u, sub_0013D9D0); /* call 0x0013D9D0 */

loc_0013DD71: ;
    MEM32(ebx + 8) = esi;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DD84; /* jne: not equal / not zero */

loc_0013DD7A: ;
    MEM32(eax + 4) = esi;
    eax = MEM32(edi);
    MEM32(eax + 0xC) = esi;
    goto loc_0013DD8C;

loc_0013DD84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DD8C; /* jne: not equal / not zero */

loc_0013DD89: ;
    MEM32(eax + 8) = esi;

loc_0013DD8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DDA3u); RECOMP_ABI_CALL(0x00036060u, sub_00036060); /* call 0x00036060 */

loc_0013DDA3: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0013DDC0
 * Original: 0x0013DDC0 - 0x0013DE74 (180 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DDC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DDF8; /* je: equal / zero */

loc_0013DDD8: ;
    edx = MEM32(ebx);
    /* nop */

loc_0013DDE0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DDF1; /* je: equal / zero */

loc_0013DDEC: ;
    esi = MEM32(esi + 8);
    goto loc_0013DDF4;

loc_0013DDF1: ;
    esi = MEM32(esi + 0xC);

loc_0013DDF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DDE0; /* jne: not equal / not zero */

loc_0013DDF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE38; /* je: equal / zero */

loc_0013DE02: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013DE2B; /* jne: not equal / not zero */

loc_0013DE07: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0013DE18u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DE18: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013DE2B: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0013DE34u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_0013DE34: ;
    edx = MEM32(esp + 0x18);

loc_0013DE38: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013DE63; /* jae: above or equal (unsigned >=) */

loc_0013DE3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0013DE50u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DE50: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 1;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013DE63: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DE80
 * Original: 0x0013DE80 - 0x0013E086 (518 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DE80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013DF7F; /* jne: not equal / not zero */

loc_0013DE98: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_A(_fa, _fb)) goto loc_0013DEC2; /* ja: above (unsigned >) */

loc_0013DE9F: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0013DEB0u); RECOMP_ABI_CALL(0x0013DDC0u, sub_0013DDC0); /* call 0x0013DDC0 */

loc_0013DEB0: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DEC2: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(ebx);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0013DEEC; /* jbe: below or equal (unsigned <=) */

loc_0013DECF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0013DEE0u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DEE0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DEEC: ;
    if (CMP_B(_fa, _fb)) goto loc_0013DEFE; /* jb: below (unsigned <) */

loc_0013DEEE: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DEFE: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x0013DF0Bu); RECOMP_ABI_CALL(0x0014C970u, sub_0014C970); /* call 0x0014C970 */

loc_0013DF0B: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013DF30; /* jne: not equal / not zero */

loc_0013DF13: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0013DF24u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DF24: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DF30: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0013DF74; /* jae: above or equal (unsigned >=) */

loc_0013DF35: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013DF59; /* jne: not equal / not zero */

loc_0013DF3E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DF4Du); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DF4D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DF59: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DF68u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DF68: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DF74: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_0013E06D;

loc_0013DF7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013DFB9; /* jne: not equal / not zero */

loc_0013DF83: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0013DFAE; /* jae: above or equal (unsigned >=) */

loc_0013DF91: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0013DFA2u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DFA2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013DFAE: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_0013E06D;

loc_0013DFB9: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0013DFC6u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_0013DFC6: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x24) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0013E022; /* je: equal / zero */

loc_0013DFDA: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0013E022; /* jae: above or equal (unsigned >=) */

loc_0013DFE3: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0013E007; /* jne: not equal / not zero */

loc_0013DFEC: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DFFBu); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013DFFB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013E007: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E016u); RECOMP_ABI_CALL(0x0013DCF0u, sub_0013DCF0); /* call 0x0013DCF0 */

loc_0013E016: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0013E022: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0013E02Fu); RECOMP_ABI_CALL(0x0014C970u, sub_0014C970); /* call 0x0014C970 */

loc_0013E02F: ;
    SET_LO8(edx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013E05F; /* jne: not equal / not zero */

loc_0013E03C: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEEE; /* je: equal / zero */

loc_0013E04A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF35; /* je: equal / zero */

loc_0013E056: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0013DF35; /* jb: below (unsigned <) */

loc_0013E05F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEEE; /* je: equal / zero */

loc_0013E067: ;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_0013E06D: ;
    ecx = edi;
    PUSH32(esp, 0x0013E074u); RECOMP_ABI_CALL(0x0013DDC0u, sub_0013DDC0); /* call 0x0013DDC0 */

loc_0013E074: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013E090
 * Original: 0x0013E090 - 0x0013E12E (158 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    esi = ebx + 0x1C;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0C0; /* je: equal / zero */

loc_0013E0A1: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013E0AEu); RECOMP_ABI_CALL(0x0013DC50u, sub_0013DC50); /* call 0x0013DC50 */

loc_0013E0AE: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_0013E0C0: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0CF; /* je: equal / zero */

loc_0013E0C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E0CCu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013E0CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E0CF: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ebx + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0F8; /* je: equal / zero */

loc_0013E0D9: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013E0E6u); RECOMP_ABI_CALL(0x0013DC50u, sub_0013DC50); /* call 0x0013DC50 */

loc_0013E0E6: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_0013E0F8: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E107; /* je: equal / zero */

loc_0013E0FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E104u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013E104: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E107: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E11D; /* je: equal / zero */

loc_0013E10B: ;
    ecx = ebx + 4;
    PUSH32(esp, 0x0013E113u); RECOMP_ABI_CALL(0x0013D450u, sub_0013D450); /* call 0x0013D450 */

loc_0013E113: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0x2FF0D4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0013E11D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0013E124u); RECOMP_ABI_CALL(0x0013D450u, sub_0013D450); /* call 0x0013D450 */

loc_0013E124: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0x2FF0D4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E130
 * Original: 0x0013E130 - 0x0013E142 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E130: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013E13Fu); RECOMP_ABI_CALL(0x0013E150u, sub_0013E150); /* call 0x0013E150 */

loc_0013E13F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E150
 * Original: 0x0013E150 - 0x0013E1FE (174 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E150: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E196; /* je: equal / zero */

loc_0013E162: ;
    edi = ecx + -4;
    MEM32(ebp + 4) = 0;
    eax = MEM32(edi);
    esi = eax + eax * 2;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013E18D; /* js: sign (negative) */

loc_0013E179: ;
    ebx = eax + 1;
    /* nop */

loc_0013E180: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x30));
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013E18Au); RECOMP_ABI_CALL(0x00139110u, sub_00139110); /* call 0x00139110 */

loc_0013E18A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013E180; /* jne: not equal / not zero */

loc_0013E18D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013E193u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013E193: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E196: ;
    edi = MEM32(esp + 0x18);
    eax = edi + edi * 2;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E1A9u); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_0013E1A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E1E8; /* je: equal / zero */

loc_0013E1B0: ;
    ebx = eax + 4;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0013E1D2; /* jl: less (signed <) */

loc_0013E1BE: ;
    ebp = eax + 1;

loc_0013E1C1: ;
    ecx = esi;
    PUSH32(esp, 0x0013E1C8u); RECOMP_ABI_CALL(0x001390E0u, sub_001390E0); /* call 0x001390E0 */

loc_0013E1C8: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x30)) >> 32) & 1);
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013E1C1; /* jne: not equal / not zero */

loc_0013E1CE: ;
    ebp = MEM32(esp + 0x10);

loc_0013E1D2: ;
    eax = ebx;
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013E1E8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E200
 * Original: 0x0013E200 - 0x0013E2A1 (161 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E200: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E233; /* je: equal / zero */

loc_0013E217: ;
    ebp = MEM32(edx);
    /* nop */

loc_0013E220: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013E22C; /* jb: below (unsigned <) */

loc_0013E225: ;
    esi = eax;
    eax = MEM32(eax + 8);
    goto loc_0013E22F;

loc_0013E22C: ;
    eax = MEM32(eax + 0xC);

loc_0013E22F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E220; /* jne: not equal / not zero */

loc_0013E233: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E23E; /* je: equal / zero */

loc_0013E237: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013E295; /* jae: above or equal (unsigned >=) */

loc_0013E23E: ;
    ecx = MEM32(edx);
    edx = esp + 0xC;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0013E26Au); RECOMP_ABI_CALL(0x0013D9D0u, sub_0013D9D0); /* call 0x0013D9D0 */

loc_0013E26A: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0013E280u); RECOMP_ABI_CALL(0x0013DE80u, sub_0013DE80); /* call 0x0013DE80 */

loc_0013E280: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_0013E295; /* je: equal / zero */

loc_0013E28C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E292u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013E292: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E295: ;
    POP32(esp, edi);
    eax = esi + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E2B0
 * Original: 0x0013E2B0 - 0x0013E315 (101 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E2B0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = 0x31BCF0;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x0013E2CFu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013E2CF: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 0x10);
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x0013E2F3u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013E2F3: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ebx;
    MEM8(eax) = LO8(ebx);
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E320
 * Original: 0x0013E320 - 0x0013E332 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E320: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013E32Fu); RECOMP_ABI_CALL(0x0013E340u, sub_0013E340); /* call 0x0013E340 */

loc_0013E32F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E340
 * Original: 0x0013E340 - 0x0013E3F6 (182 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E340: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E389; /* je: equal / zero */

loc_0013E352: ;
    edi = ecx + -16;
    MEM32(ebp + 4) = 0;
    eax = MEM32(edi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0013E380; /* js: sign (negative) */

loc_0013E36B: ;
    ebx = eax + 1;
    edi = edi;

loc_0013E370: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xD0));
    esi = esi - 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0013E37Du); RECOMP_ABI_CALL(0x001391E0u, sub_001391E0); /* call 0x001391E0 */

loc_0013E37D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013E370; /* jne: not equal / not zero */

loc_0013E380: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013E386u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0013E386: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E389: ;
    edi = MEM32(esp + 0x18);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E39Eu); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_0013E39E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E3E0; /* je: equal / zero */

loc_0013E3A5: ;
    ebx = eax + 0x10;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0013E3CA; /* jl: less (signed <) */

loc_0013E3B3: ;
    ebp = eax + 1;

loc_0013E3B6: ;
    ecx = esi;
    PUSH32(esp, 0x0013E3BDu); RECOMP_ABI_CALL(0x00139140u, sub_00139140); /* call 0x00139140 */

loc_0013E3BD: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD0)) >> 32) & 1);
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013E3B6; /* jne: not equal / not zero */

loc_0013E3C6: ;
    ebp = MEM32(esp + 0x10);

loc_0013E3CA: ;
    eax = ebx;
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013E3E0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E400
 * Original: 0x0013E400 - 0x0013E41E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E400: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013E408u); RECOMP_ABI_CALL(0x0013E090u, sub_0013E090); /* call 0x0013E090 */

loc_0013E408: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013E418; /* je: equal / zero */

loc_0013E40F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E415u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013E415: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E418: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E420
 * Original: 0x0013E420 - 0x0013E43E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013E428u); RECOMP_ABI_CALL(0x0013C000u, sub_0013C000); /* call 0x0013C000 */

loc_0013E428: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013E438; /* je: equal / zero */

loc_0013E42F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E435u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013E435: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E438: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E440
 * Original: 0x0013E440 - 0x0013E45C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E440: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E459; /* je: equal / zero */

loc_0013E448: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E459; /* jne: not equal / not zero */

loc_0013E44D: ;
    ecx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E458u); RECOMP_ABI_CALL(0x0003A8E0u, sub_0003A8E0); /* call 0x0003A8E0 */

loc_0013E458: ;
    esp += 4; return; /* ret */

loc_0013E459: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013E460
 * Original: 0x0013E460 - 0x0013E472 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E460(void)
{

loc_0013E460: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E480
 * Original: 0x0013E480 - 0x0013E4A3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E480: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013E493; /* jae: above or equal (unsigned >=) */

loc_0013E48D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0013E493: ;
    if (CMP_A(_fa, _fb)) goto loc_0013E49D; /* ja: above (unsigned >) */

loc_0013E495: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013E48D; /* jb: below (unsigned <) */

loc_0013E49D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E4B0
 * Original: 0x0013E4B0 - 0x0013E4BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E4B0(void)
{

loc_0013E4B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013E4BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E4B8u); } /* indirect call */
    }

loc_0013E4BA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E4C0
 * Original: 0x0013E4C0 - 0x0013E4EB (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E4C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x138); PUSH32(esp, 0x0013E4D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E4CCu); } /* indirect call */
    }

loc_0013E4D2: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x31BF40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E4E2u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0013E4E2: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E4F0
 * Original: 0x0013E4F0 - 0x0013E51B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E4F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E4F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x138); PUSH32(esp, 0x0013E502u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E4FCu); } /* indirect call */
    }

loc_0013E502: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x31BF40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E512u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0013E512: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E520
 * Original: 0x0013E520 - 0x0013E570 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E520: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E56E; /* je: equal / zero */

loc_0013E52B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013E530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E52Du); } /* indirect call */
    }

loc_0013E530: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E56E; /* je: equal / zero */

loc_0013E534: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x31BF90;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013E542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E53Fu); } /* indirect call */
    }

loc_0013E542: ;
    esi = eax;
    ecx = 0xE;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags == 0)) goto loc_0013E56E; /* jne: not equal / not zero */

loc_0013E551: ;
    ecx = MEM32(0x3F2E18);
    edx = MEM32(0x3F2E14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E567u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0013E567: ;
    ecx = eax;
    PUSH32(esp, 0x0013E56Eu); RECOMP_ABI_CALL(0x0009D6D0u, sub_0009D6D0); /* call 0x0009D6D0 */

loc_0013E56E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E570
 * Original: 0x0013E570 - 0x0013E580 (16 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E570(void)
{

loc_0013E570: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E580
 * Original: 0x0013E580 - 0x0013E58A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E580: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E586u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E586: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013E590
 * Original: 0x0013E590 - 0x0013E5B2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E590: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E59E; /* jne: not equal / not zero */

loc_0013E598: ;
    eax = 0x3021CE;
    esp += 4; return; /* ret */

loc_0013E59E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E5B1; /* jne: not equal / not zero */

loc_0013E5A3: ;
    ecx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013E5B1u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013E5B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E5C0
 * Original: 0x0013E5C0 - 0x0013E5EB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013E5C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E5CF; /* jne: not equal / not zero */

loc_0013E5C8: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 4; return; /* ret */

loc_0013E5CF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E5E3; /* jne: not equal / not zero */

loc_0013E5D4: ;
    ecx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013E5E2u); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_0013E5E2: ;
    esp += 4; return; /* ret */

loc_0013E5E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E5E9u); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_0013E5E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013E5F0
 * Original: 0x0013E5F0 - 0x0013E617 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E5F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E5F9; /* jne: not equal / not zero */

loc_0013E5F8: ;
    esp += 4; return; /* ret */

loc_0013E5F9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E60D; /* jne: not equal / not zero */

loc_0013E5FE: ;
    ecx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013E60Cu); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_0013E60C: ;
    esp += 4; return; /* ret */

loc_0013E60D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E613u); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_0013E613: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013E620
 * Original: 0x0013E620 - 0x0013E653 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013E620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013E62B; /* jne: not equal / not zero */

loc_0013E628: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0013E62B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013E63F; /* jne: not equal / not zero */

loc_0013E630: ;
    ecx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013E63Eu); RECOMP_ABI_CALL(0x00036C60u, sub_00036C60); /* call 0x00036C60 */

loc_0013E63E: ;
    esp += 4; return; /* ret */

loc_0013E63F: ;
    PUSH32(esp, 0x31A528);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E64Au); RECOMP_ABI_CALL(0x002C0B98u, sub_002C0B98); /* call 0x002C0B98 */

loc_0013E64A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0013E660
 * Original: 0x0013E660 - 0x0013E785 (293 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E660: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x118);
    PUSH32(esp, 0x0013E67Cu); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013E67C: ;
    ecx = edi + 0xB8;
    ebp = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013E689u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E686u); } /* indirect call */
    }

loc_0013E689: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E739; /* jne: not equal / not zero */

loc_0013E694: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0013E69Du); RECOMP_ABI_CALL(0x0003A8E0u, sub_0003A8E0); /* call 0x0003A8E0 */

loc_0013E69D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E77E; /* je: equal / zero */

loc_0013E6A7: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E6F7; /* jne: not equal / not zero */

loc_0013E6AC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013E6B3u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E6B3: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E77E; /* jle: less or equal (signed <=) */

loc_0013E6C6: ;
    ebp = esi + 4;
    /* nop */

loc_0013E6D0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013E6E3u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0013E6E3: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E6D0; /* jl: less (signed <) */

loc_0013E6F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013E6F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013E6FDu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E6FD: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E77E; /* jle: less or equal (signed <=) */

loc_0013E70C: ;
    ebp = esi + 4;
    /* nop */

loc_0013E710: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E725u); RECOMP_ABI_CALL(0x00035260u, sub_00035260); /* call 0x00035260 */

loc_0013E725: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E710; /* jl: less (signed <) */

loc_0013E732: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013E739: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E73Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E73F: ;
    esi = eax;
    SET_LO8(eax, MEM8(ebx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E767; /* jne: not equal / not zero */

loc_0013E74A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013E751u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E751: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E75Du); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0013E75D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013E767: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013E76Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E76D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E77Bu); RECOMP_ABI_CALL(0x00035260u, sub_00035260); /* call 0x00035260 */

loc_0013E77B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E77E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E790
 * Original: 0x0013E790 - 0x0013E7A8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E790: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E7A0; /* je: equal / zero */

loc_0013E79E: ;
    ecx = eax;

loc_0013E7A0: ;
    PUSH32(esp, 0x0013E7A5u); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_0013E7A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E7B0
 * Original: 0x0013E7B0 - 0x0013E848 (152 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E7B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx + 0x118);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013E7C2u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013E7C2: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E7DE; /* jne: not equal / not zero */

loc_0013E7CC: ;
    eax = 0x3021CE;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E7D7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E7D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_0013E804;

loc_0013E7DE: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E7EF; /* jne: not equal / not zero */

loc_0013E7E3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0013E7EDu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013E7ED: ;
    goto loc_0013E7F1;

loc_0013E7EF: ;
    eax = ecx;

loc_0013E7F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E802; /* je: equal / zero */

loc_0013E7F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E7FBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E7FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_0013E804;

loc_0013E802: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013E804: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0013E80Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E80Cu); } /* indirect call */
    }

loc_0013E80F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E842; /* je: equal / zero */

loc_0013E815: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0013E821u); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_0013E821: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0013E82Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E827u); } /* indirect call */
    }

loc_0013E82A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0013E836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E833u); } /* indirect call */
    }

loc_0013E836: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x300);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0013E842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E83Fu); } /* indirect call */
    }

loc_0013E842: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E850
 * Original: 0x0013E850 - 0x0013E8A9 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E850: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0013E85Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E859u); } /* indirect call */
    }

loc_0013E85C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E8A5; /* je: equal / zero */

loc_0013E862: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E898; /* jne: not equal / not zero */

loc_0013E86B: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0013E873u); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_0013E873: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0013E87Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E879u); } /* indirect call */
    }

loc_0013E87C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0013E888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E885u); } /* indirect call */
    }

loc_0013E888: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x300);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0013E894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E891u); } /* indirect call */
    }

loc_0013E894: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0013E898: ;
    PUSH32(esp, 0x31BFA0);
    PUSH32(esp, 0x0013E8A2u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013E8A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013E8A5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E8B0
 * Original: 0x0013E8B0 - 0x0013E977 (199 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E8B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 0x118);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013E8C3u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013E8C3: ;
    edi = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E8E5; /* je: equal / zero */

loc_0013E8D1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E8E5; /* jne: not equal / not zero */

loc_0013E8D6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013E8DFu); RECOMP_ABI_CALL(0x0003A8E0u, sub_0003A8E0); /* call 0x0003A8E0 */

loc_0013E8DF: ;
    ebx = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013E8E7;

loc_0013E8E5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013E8E7: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E8F5; /* jne: not equal / not zero */

loc_0013E8EE: ;
    eax = 0x3021CE;
    goto loc_0013E906;

loc_0013E8F5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E906; /* jne: not equal / not zero */

loc_0013E8FA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0013E904u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013E904: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013E906: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x3F2E14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E922; /* je: equal / zero */

loc_0013E910: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E916u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013E916: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3F2E18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013E928;

loc_0013E922: ;
    MEM32(0x3F2E18) = ecx;

loc_0013E928: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E964; /* je: equal / zero */

loc_0013E92C: ;
    eax = MEM32(ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E964; /* jle: less or equal (signed <=) */

loc_0013E934: ;
    edi = ebx + 4;

loc_0013E937: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x13E520);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E944u); RECOMP_ABI_CALL(0x0014B700u, sub_0014B700); /* call 0x0014B700 */

loc_0013E944: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E937; /* jl: less (signed <) */

loc_0013E951: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM32(0x3F2E14) = eax;
    MEM32(0x3F2E18) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013E964: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x3F2E14) = ecx;
    MEM32(0x3F2E18) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E980
 * Original: 0x0013E980 - 0x0013EB06 (390 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x118);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E99Au); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013E99A: ;
    edi = MEM32(ebp + 0xC);
    esi = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E9AF; /* jne: not equal / not zero */

loc_0013E9A5: ;
    MEM32(esp + 0x1C) = 0x3021CE;
    goto loc_0013E9C2;

loc_0013E9AF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E9BE; /* jne: not equal / not zero */

loc_0013E9B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E9BEu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013E9BE: ;
    MEM32(esp + 0x1C) = eax;

loc_0013E9C2: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E9D0; /* jne: not equal / not zero */

loc_0013E9C9: ;
    edi = 0x3021CE;
    goto loc_0013E9E1;

loc_0013E9D0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E9DF; /* jne: not equal / not zero */

loc_0013E9D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013E9DFu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013E9DF: ;
    edi = eax;

loc_0013E9E1: ;
    ecx = MEM32(0x3E8CF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013EAFD; /* je: equal / zero */

loc_0013E9F8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x138); PUSH32(esp, 0x0013EA00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E9FAu); } /* indirect call */
    }

loc_0013EA00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EAE3; /* je: equal / zero */

loc_0013EA08: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EA13u); RECOMP_ABI_CALL(0x002C0B98u, sub_002C0B98); /* call 0x002C0B98 */

loc_0013EA13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EAE3; /* jne: not equal / not zero */

loc_0013EA1E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EA2F; /* je: equal / zero */

loc_0013EA22: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EA28u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013EA28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_0013EA31;

loc_0013EA2F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013EA31: ;
    ecx = MEM32(ebx + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0013EA4F; /* jne: not equal / not zero */

loc_0013EA3E: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EA4Au); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_0013EA4A: ;
    goto loc_0013EAE3;

loc_0013EA4F: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EA59u); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_0013EA59: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0x18);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0013EAD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013EAD0u); } /* indirect call */
    }

loc_0013EAD3: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x144);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EAE3u); RECOMP_ABI_CALL(0x000F2820u, sub_000F2820); /* call 0x000F2820 */

loc_0013EAE3: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013EAECu); RECOMP_ABI_CALL(0x001313C0u, sub_001313C0); /* call 0x001313C0 */

loc_0013EAEC: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013E9F8; /* jne: not equal / not zero */

loc_0013EAFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013EB10
 * Original: 0x0013EB10 - 0x0013EB4A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EB10: ;
    edx = MEM32(0x3F2E20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3F2E2D));
    PUSH32(esp, esi);
    esi = MEM32(0x3F2E24);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EB33u); RECOMP_ABI_CALL(0x0003D7C0u, sub_0003D7C0); /* call 0x0003D7C0 */

loc_0013EB33: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013EB47; /* je: equal / zero */

loc_0013EB3B: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013EB47; /* jb: below (unsigned <) */

loc_0013EB43: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

loc_0013EB47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EB50
 * Original: 0x0013EB50 - 0x0013EC56 (262 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EB50: ;
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x230;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x238);
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013EB6Du); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0013EB6D: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x31AC28);
    PUSH32(esp, edx);
    MEM8(esp + 0x243) = 0;
    PUSH32(esp, 0x0013EB84u); RECOMP_ABI_CALL(0x002BE050u, sub_002BE050); /* call 0x002BE050 */

loc_0013EB84: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EB95; /* jne: not equal / not zero */

loc_0013EB8B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x230;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013EB95: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EB9Eu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013EB9E: ;
    esi = MEM32(0x3F2E24);
    edx = MEM32(0x3F2E20);
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3F2E2D));
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EBC6u); RECOMP_ABI_CALL(0x0003D7C0u, sub_0003D7C0); /* call 0x0003D7C0 */

loc_0013EBC6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EC49; /* je: equal / zero */

loc_0013EBCD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013EC49; /* jb: below (unsigned <) */

loc_0013EBD1: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EC49; /* je: equal / zero */

loc_0013EBD8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013EBE0: ;
    PUSH32(esp, 0x31BFDC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013EBECu); RECOMP_ABI_CALL(0x002BE050u, sub_002BE050); /* call 0x002BE050 */

loc_0013EBEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + esi * 4 + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013EBFD; /* je: equal / zero */

loc_0013EBF7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EBE0; /* jl: less (signed <) */

loc_0013EBFD: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0013EC04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013EC01u); } /* indirect call */
    }

loc_0013EC04: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EC49; /* jl: less (signed <) */

loc_0013EC08: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013EC0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013EC0Cu); } /* indirect call */
    }

loc_0013EC0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013EC49; /* jg: greater (signed >) */

loc_0013EC13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013EC49; /* jg: greater (signed >) */

loc_0013EC18: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0013EC29; /* jge: greater or equal (signed >=) */

loc_0013EC1A: ;
    ecx = 0xB;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp + esi * 4 + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0013EC29: ;
    edx = MEM32(esp + 0x240);
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013EC3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013EC3Au); } /* indirect call */
    }

loc_0013EC3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x230;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013EC49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x230;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EC60
 * Original: 0x0013EC60 - 0x0013EC91 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC60(void)
{

loc_0013EC60: ;
    PUSH32(esp, 0x64);
    ecx = 0x3F2E30;
    PUSH32(esp, 0x0013EC6Cu); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013EC6C: ;
    PUSH32(esp, 0x32);
    ecx = 0x3F2E40;
    PUSH32(esp, 0x0013EC78u); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013EC78: ;
    PUSH32(esp, 0x64);
    ecx = 0x3F2E50;
    PUSH32(esp, 0x0013EC84u); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013EC84: ;
    PUSH32(esp, 0x32);
    ecx = 0x3F2E60;
    PUSH32(esp, 0x0013EC90u); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013EC90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ECA0
 * Original: 0x0013ECA0 - 0x0013ECD1 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ECA0(void)
{

loc_0013ECA0: ;
    PUSH32(esp, 0);
    ecx = 0x3F2E30;
    PUSH32(esp, 0x0013ECACu); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013ECAC: ;
    PUSH32(esp, 0);
    ecx = 0x3F2E40;
    PUSH32(esp, 0x0013ECB8u); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013ECB8: ;
    PUSH32(esp, 0);
    ecx = 0x3F2E50;
    PUSH32(esp, 0x0013ECC4u); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013ECC4: ;
    PUSH32(esp, 0);
    ecx = 0x3F2E60;
    PUSH32(esp, 0x0013ECD0u); RECOMP_ABI_CALL(0x0013FAE0u, sub_0013FAE0); /* call 0x0013FAE0 */

loc_0013ECD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ECE0
 * Original: 0x0013ECE0 - 0x0013ED61 (129 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ECE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ECE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3F2E30);
    PUSH32(esp, 0);
    eax = esp + 7;
    PUSH32(esp, eax);
    eax = MEM32(0x3F2E34);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013ECFBu); RECOMP_ABI_CALL(0x0013F920u, sub_0013F920); /* call 0x0013F920 */

loc_0013ECFB: ;
    PUSH32(esp, 0);
    MEM32(0x3F2E34) = eax;
    eax = MEM32(0x3F2E40);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x3F2E44);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013ED19u); RECOMP_ABI_CALL(0x0013F920u, sub_0013F920); /* call 0x0013F920 */

loc_0013ED19: ;
    edx = MEM32(0x3F2E50);
    PUSH32(esp, 0);
    ecx = esp + 0x2F;
    PUSH32(esp, ecx);
    MEM32(0x3F2E44) = eax;
    eax = MEM32(0x3F2E54);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013ED38u); RECOMP_ABI_CALL(0x0013F920u, sub_0013F920); /* call 0x0013F920 */

loc_0013ED38: ;
    ecx = MEM32(0x3F2E60);
    MEM32(0x3F2E54) = eax;
    PUSH32(esp, 0);
    eax = esp + 0x43;
    PUSH32(esp, eax);
    eax = MEM32(0x3F2E64);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013ED57u); RECOMP_ABI_CALL(0x0013F920u, sub_0013F920); /* call 0x0013F920 */

loc_0013ED57: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3F2E64) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ED70
 * Original: 0x0013ED70 - 0x0013EDCE (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013ED70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3F2E30);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3F2E3D));
    PUSH32(esp, edi);
    edi = MEM32(0x3F2E34);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EDA8u); RECOMP_ABI_CALL(0x0013FA70u, sub_0013FA70); /* call 0x0013FA70 */

loc_0013EDA8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EDBE; /* je: equal / zero */

loc_0013EDAF: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013EDBC; /* jb: below (unsigned <) */

loc_0013EDB5: ;
    if (CMP_A(_fa, _fb)) goto loc_0013EDBE; /* ja: above (unsigned >) */

loc_0013EDB7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013EDBE; /* jae: above or equal (unsigned >=) */

loc_0013EDBC: ;
    eax = edi;

loc_0013EDBE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EDD0
 * Original: 0x0013EDD0 - 0x0013EDF5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EDD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = esp;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x3F2E30;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0013EDF1u); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013EDF1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EE00
 * Original: 0x0013EE00 - 0x0013EE5E (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EE00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3F2E40);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3F2E4D));
    PUSH32(esp, edi);
    edi = MEM32(0x3F2E44);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EE38u); RECOMP_ABI_CALL(0x0013FA70u, sub_0013FA70); /* call 0x0013FA70 */

loc_0013EE38: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EE4E; /* je: equal / zero */

loc_0013EE3F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013EE4C; /* jb: below (unsigned <) */

loc_0013EE45: ;
    if (CMP_A(_fa, _fb)) goto loc_0013EE4E; /* ja: above (unsigned >) */

loc_0013EE47: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013EE4E; /* jae: above or equal (unsigned >=) */

loc_0013EE4C: ;
    eax = edi;

loc_0013EE4E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EE60
 * Original: 0x0013EE60 - 0x0013EE85 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EE60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = esp;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x3F2E40;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0013EE81u); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013EE81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EE90
 * Original: 0x0013EE90 - 0x0013EEEE (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EE90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3F2E50);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3F2E5D));
    PUSH32(esp, edi);
    edi = MEM32(0x3F2E54);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EEC8u); RECOMP_ABI_CALL(0x0013FA70u, sub_0013FA70); /* call 0x0013FA70 */

loc_0013EEC8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EEDE; /* je: equal / zero */

loc_0013EECF: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013EEDC; /* jb: below (unsigned <) */

loc_0013EED5: ;
    if (CMP_A(_fa, _fb)) goto loc_0013EEDE; /* ja: above (unsigned >) */

loc_0013EED7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013EEDE; /* jae: above or equal (unsigned >=) */

loc_0013EEDC: ;
    eax = edi;

loc_0013EEDE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EEF0
 * Original: 0x0013EEF0 - 0x0013EF15 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EEF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = esp;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x3F2E50;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0013EF11u); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013EF11: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EF20
 * Original: 0x0013EF20 - 0x0013EF7E (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EF20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3F2E60);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3F2E6D));
    PUSH32(esp, edi);
    edi = MEM32(0x3F2E64);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EF58u); RECOMP_ABI_CALL(0x0013FA70u, sub_0013FA70); /* call 0x0013FA70 */

loc_0013EF58: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EF6E; /* je: equal / zero */

loc_0013EF5F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013EF6C; /* jb: below (unsigned <) */

loc_0013EF65: ;
    if (CMP_A(_fa, _fb)) goto loc_0013EF6E; /* ja: above (unsigned >) */

loc_0013EF67: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0013EF6E; /* jae: above or equal (unsigned >=) */

loc_0013EF6C: ;
    eax = edi;

loc_0013EF6E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EF80
 * Original: 0x0013EF80 - 0x0013EFA5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EF80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = esp;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x3F2E60;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0013EFA1u); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013EFA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013EFB0
 * Original: 0x0013EFB0 - 0x0013F047 (151 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EFB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x118);
    PUSH32(esp, 0x0013EFC4u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013EFC4: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EFD5; /* jne: not equal / not zero */

loc_0013EFCE: ;
    eax = 0x3021CE;
    goto loc_0013EFE8;

loc_0013EFD5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EFE6; /* jne: not equal / not zero */

loc_0013EFDA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0013EFE4u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013EFE4: ;
    goto loc_0013EFE8;

loc_0013EFE6: ;
    eax = ecx;

loc_0013EFE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EFEEu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013EFEE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F032; /* je: equal / zero */

loc_0013EFF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013EFFEu); RECOMP_ABI_CALL(0x0013ED70u, sub_0013ED70); /* call 0x0013ED70 */

loc_0013EFFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F032; /* je: equal / zero */

loc_0013F005: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x3F2E30;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0013F01Cu); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013F01C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F03F; /* je: equal / zero */

loc_0013F020: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0013F02Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013F024u); } /* indirect call */
    }

loc_0013F02A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F032: ;
    PUSH32(esp, 0x31BFE0);
    PUSH32(esp, 0x0013F03Cu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013F03C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013F03F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F050
 * Original: 0x0013F050 - 0x0013F0E6 (150 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F050: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x118);
    PUSH32(esp, 0x0013F064u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013F064: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F075; /* jne: not equal / not zero */

loc_0013F06E: ;
    eax = 0x3021CE;
    goto loc_0013F088;

loc_0013F075: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F086; /* jne: not equal / not zero */

loc_0013F07A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0013F084u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F084: ;
    goto loc_0013F088;

loc_0013F086: ;
    eax = ecx;

loc_0013F088: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F08Eu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013F08E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F0D1; /* je: equal / zero */

loc_0013F097: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F09Eu); RECOMP_ABI_CALL(0x0013EF20u, sub_0013EF20); /* call 0x0013EF20 */

loc_0013F09E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F0D1; /* je: equal / zero */

loc_0013F0A5: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x3F2E60;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0013F0BCu); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013F0BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F0C2u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0013F0C2: ;
    ecx = eax;
    PUSH32(esp, 0x0013F0C9u); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_0013F0C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F0D1: ;
    PUSH32(esp, 0x31C030);
    PUSH32(esp, 0x0013F0DBu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013F0DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F0F0
 * Original: 0x0013F0F0 - 0x0013F18A (154 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F0F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x118);
    PUSH32(esp, 0x0013F104u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013F104: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F115; /* jne: not equal / not zero */

loc_0013F10E: ;
    eax = 0x3021CE;
    goto loc_0013F128;

loc_0013F115: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F126; /* jne: not equal / not zero */

loc_0013F11A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0013F124u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F124: ;
    goto loc_0013F128;

loc_0013F126: ;
    eax = ecx;

loc_0013F128: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F12Eu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013F12E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F175; /* je: equal / zero */

loc_0013F137: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F13Eu); RECOMP_ABI_CALL(0x0013EE00u, sub_0013EE00); /* call 0x0013EE00 */

loc_0013F13E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F175; /* je: equal / zero */

loc_0013F145: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x3F2E40;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0013F15Cu); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013F15C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F182; /* je: equal / zero */

loc_0013F160: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F166u); RECOMP_ABI_CALL(0x0018F2D0u, sub_0018F2D0); /* call 0x0018F2D0 */

loc_0013F166: ;
    ecx = eax;
    PUSH32(esp, 0x0013F16Du); RECOMP_ABI_CALL(0x0018F2F0u, sub_0018F2F0); /* call 0x0018F2F0 */

loc_0013F16D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F175: ;
    PUSH32(esp, 0x31C070);
    PUSH32(esp, 0x0013F17Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013F17F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013F182: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F190
 * Original: 0x0013F190 - 0x0013F22A (154 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F190: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x118);
    PUSH32(esp, 0x0013F1A4u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013F1A4: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F1B5; /* jne: not equal / not zero */

loc_0013F1AE: ;
    eax = 0x3021CE;
    goto loc_0013F1C8;

loc_0013F1B5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F1C6; /* jne: not equal / not zero */

loc_0013F1BA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0013F1C4u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F1C4: ;
    goto loc_0013F1C8;

loc_0013F1C6: ;
    eax = ecx;

loc_0013F1C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F1CEu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013F1CE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F215; /* je: equal / zero */

loc_0013F1D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F1DEu); RECOMP_ABI_CALL(0x0013EE90u, sub_0013EE90); /* call 0x0013EE90 */

loc_0013F1DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F215; /* je: equal / zero */

loc_0013F1E5: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x3F2E50;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0013F1FCu); RECOMP_ABI_CALL(0x0013FDA0u, sub_0013FDA0); /* call 0x0013FDA0 */

loc_0013F1FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F222; /* je: equal / zero */

loc_0013F200: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F206u); RECOMP_ABI_CALL(0x000A5D80u, sub_000A5D80); /* call 0x000A5D80 */

loc_0013F206: ;
    ecx = eax;
    PUSH32(esp, 0x0013F20Du); RECOMP_ABI_CALL(0x000A6550u, sub_000A6550); /* call 0x000A6550 */

loc_0013F20D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F215: ;
    PUSH32(esp, 0x31C0B8);
    PUSH32(esp, 0x0013F21Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013F21F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013F222: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F230
 * Original: 0x0013F230 - 0x0013F271 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F230: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x3F2E20;
    MEM32(esi) = 0x31BF2C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0013F263u); RECOMP_ABI_CALL(0x0003DBD0u, sub_0003DBD0); /* call 0x0003DBD0 */

loc_0013F263: ;
    edx = MEM32(eax);
    MEM32(edx + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013F280
 * Original: 0x0013F280 - 0x0013F2B8 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F280: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3F2E30;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0013F2AFu); RECOMP_ABI_CALL(0x0013FE20u, sub_0013FE20); /* call 0x0013FE20 */

loc_0013F2AF: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013F2C0
 * Original: 0x0013F2C0 - 0x0013F2F8 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F2C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3F2E40;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0013F2EFu); RECOMP_ABI_CALL(0x0013FE20u, sub_0013FE20); /* call 0x0013FE20 */

loc_0013F2EF: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013F300
 * Original: 0x0013F300 - 0x0013F338 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F300: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3F2E50;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0013F32Fu); RECOMP_ABI_CALL(0x0013FE20u, sub_0013FE20); /* call 0x0013FE20 */

loc_0013F32F: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013F340
 * Original: 0x0013F340 - 0x0013F378 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F340: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3F2E60;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0013F36Fu); RECOMP_ABI_CALL(0x0013FE20u, sub_0013FE20); /* call 0x0013FE20 */

loc_0013F36F: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013F380
 * Original: 0x0013F380 - 0x0013F484 (260 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013F393u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013F393: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F3A6; /* jne: not equal / not zero */

loc_0013F39F: ;
    edi = 0x3021CE;
    goto loc_0013F3B7;

loc_0013F3A6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F3B5; /* jne: not equal / not zero */

loc_0013F3AB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0013F3B5u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F3B5: ;
    edi = eax;

loc_0013F3B7: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F3C5; /* jne: not equal / not zero */

loc_0013F3BE: ;
    ebp = 0x3021CE;
    goto loc_0013F3D6;

loc_0013F3C5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F3D4; /* jne: not equal / not zero */

loc_0013F3CA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0013F3D4u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F3D4: ;
    ebp = eax;

loc_0013F3D6: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F3E4; /* jne: not equal / not zero */

loc_0013F3DD: ;
    ebx = 0x3021CE;
    goto loc_0013F3F5;

loc_0013F3E4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F3F3; /* jne: not equal / not zero */

loc_0013F3E9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0013F3F3u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F3F3: ;
    ebx = eax;

loc_0013F3F5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013F3FBu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0013F3FB: ;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0013F403u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013F403: ;
    ebp = MEM32(esp + 0x1C);
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F432; /* je: equal / zero */

loc_0013F410: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F417u); RECOMP_ABI_CALL(0x0013ED70u, sub_0013ED70); /* call 0x0013ED70 */

loc_0013F417: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F432; /* je: equal / zero */

loc_0013F41E: ;
    PUSH32(esp, 0x31C130);
    PUSH32(esp, 0x0013F428u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013F428: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0013F432: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013F43Au); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0013F43A: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F47D; /* je: equal / zero */

loc_0013F443: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F452; /* je: equal / zero */

loc_0013F447: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013F44Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013F44D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013F454;

loc_0013F452: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013F454: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0013F45Fu); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_0013F45F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F47D; /* je: equal / zero */

loc_0013F463: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0013F46Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013F467u); } /* indirect call */
    }

loc_0013F46D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F47D; /* je: equal / zero */

loc_0013F471: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F478u); RECOMP_ABI_CALL(0x0013F280u, sub_0013F280); /* call 0x0013F280 */

loc_0013F478: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;

loc_0013F47D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013F490
 * Original: 0x0013F490 - 0x0013F609 (377 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F490: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013F4A5u); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_0013F4A5: ;
    edi = MEM32(esp + 0x58);
    ebp = eax;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F600; /* je: equal / zero */

loc_0013F4B7: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F4C8; /* jne: not equal / not zero */

loc_0013F4BC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0x0013F4C6u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_0013F4C6: ;
    goto loc_0013F4D1;

loc_0013F4C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F4CEu); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_0013F4CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013F4D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013F600; /* je: equal / zero */

loc_0013F4DD: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F4EB; /* jne: not equal / not zero */

loc_0013F4E4: ;
    eax = 0x3021CE;
    goto loc_0013F4FA;

loc_0013F4EB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F4FA; /* jne: not equal / not zero */

loc_0013F4F0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0x0013F4FAu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F4FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F501u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0013F501: ;
    esi = eax;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F51C; /* je: equal / zero */

loc_0013F50D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013F51C; /* jne: not equal / not zero */

loc_0013F512: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0x0013F51Cu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_0013F51C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    ebp = MEM32(esp + 0x58);
    if (CMP_EQ(_fa, _fb)) goto loc_0013F549; /* je: equal / zero */

loc_0013F524: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F52Bu); RECOMP_ABI_CALL(0x0013EF20u, sub_0013EF20); /* call 0x0013EF20 */

loc_0013F52B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013F549; /* je: equal / zero */

loc_0013F532: ;
    PUSH32(esp, 0x31C194);
    PUSH32(esp, 0x0013F53Cu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0013F53C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0013F549: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM32(esp + 0x14) = 0x2FFA54;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x1C) = 0x2FF02C;
    PUSH32(esp, 0x0013F573u); RECOMP_ABI_CALL(0x00141AF0u, sub_00141AF0); /* call 0x00141AF0 */

loc_0013F573: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x5C);
    ecx = esp + 0x10;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x28;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x28) = 0x2FF9EC;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x50) = LO8(ebx);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x0013F5C3u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_0013F5C3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013F5D5; /* je: equal / zero */

loc_0013F5C9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013F5D0u); RECOMP_ABI_CALL(0x0013F340u, sub_0013F340); /* call 0x0013F340 */

loc_0013F5D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;

loc_0013F5D5: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x28) = 0x2FF9D4;
    MEM32(esp + 0x10) = 0x2FFA54;
    MEM32(esp + 0x18) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0013F5FF; /* je: equal / zero */

loc_0013F5F5: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013F5FFu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0013F5FF: ;
    POP32(esp, esi);

loc_0013F600: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
