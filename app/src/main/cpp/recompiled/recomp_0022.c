/**
 * Medal of Honor European Assault - Recompiled code chunk 22
 * Functions: 250 (0x000B1A80 - 0x000B96C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000B1A80
 * Original: 0x000B1A80 - 0x000B1A88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1A80(void)
{

loc_000B1A80: ;
    MEM8(0x3C6068) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1A90
 * Original: 0x000B1A90 - 0x000B1AA6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1A90(void)
{

loc_000B1A90: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1AB0
 * Original: 0x000B1AB0 - 0x000B1AD7 (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1AB0(void)
{

loc_000B1AB0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(ecx) = 2;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B1AE0
 * Original: 0x000B1AE0 - 0x000B1B07 (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1AE0(void)
{

loc_000B1AE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(ecx) = 1;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B1B10
 * Original: 0x000B1B10 - 0x000B1B32 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1B10: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1B2F; /* je: equal / zero */

loc_000B1B15: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1B2F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B1B29: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000B1B2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B40
 * Original: 0x000B1B40 - 0x000B1B72 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1B40: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1B6F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B1B69: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000B1B6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B80
 * Original: 0x000B1B80 - 0x000B1B94 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1B80: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1B91; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_000B1B8B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000B1B91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1BA0
 * Original: 0x000B1BA0 - 0x000B1BCA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1BA0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1BC7; /* je: equal / zero */

loc_000B1BA6: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1BC7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_000B1BBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1BC7; /* jne: not equal / not zero */

loc_000B1BC1: ;
    MEM32(ecx) = 0;

loc_000B1BC7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1BD0
 * Original: 0x000B1BD0 - 0x000B1C0A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1BD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B1BD0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1BFF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B1BFA: ;
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_000B1BFF: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B1C10
 * Original: 0x000B1C10 - 0x000B1C8E (126 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1C10(void)
{
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

loc_000B1C10: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1C1C; /* jne: not equal / not zero */

loc_000B1C17: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B1C1C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1C73; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B1C38: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1C73; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1C6E: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_000B1C73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1C80; /* jne: not equal / not zero */

loc_000B1C78: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B1C80: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B1C90
 * Original: 0x000B1C90 - 0x000B1CB6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1C90(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1C90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B1CAB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1CA3: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1CAE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B1CAB: ;
    xmm0 = xmm1; /* movaps */

loc_000B1CAE: ;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1CC0
 * Original: 0x000B1CC0 - 0x000B1CC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1CC0(void)
{

loc_000B1CC0: ;
    eax = ecx;
    MEM32(eax) = 0x30FE70;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1CD0
 * Original: 0x000B1CD0 - 0x000B1CD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1CD0(void)
{

loc_000B1CD0: ;
    MEM32(ecx) = 0x30FE70;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1CE0
 * Original: 0x000B1CE0 - 0x000B1CE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1CE0(void)
{

loc_000B1CE0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1CF0
 * Original: 0x000B1CF0 - 0x000B1CFB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1CF0: ;
    edx = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1D00
 * Original: 0x000B1D00 - 0x000B1D5E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1D00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1D13; /* jge: greater or equal (signed >=) */

loc_000B1D08: ;
    eax = 9;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

loc_000B1D13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B1D20; /* jle: less or equal (signed <=) */

loc_000B1D18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

loc_000B1D20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1D34; /* jne: not equal / not zero */

loc_000B1D25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x24) = 1;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

loc_000B1D34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1D47; /* jne: not equal / not zero */

loc_000B1D39: ;
    eax = 1;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

loc_000B1D47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1D58; /* jne: not equal / not zero */

loc_000B1D4C: ;
    eax = 2;
    MEM32(ecx + 0x24) = 1;

loc_000B1D58: ;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1D60
 * Original: 0x000B1D60 - 0x000B1D80 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1D60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1D73; /* jge: greater or equal (signed >=) */

loc_000B1D68: ;
    eax = 2;
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

loc_000B1D73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B1D7A; /* jle: less or equal (signed <=) */

loc_000B1D78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B1D7A: ;
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1D80
 * Original: 0x000B1D80 - 0x000B1DB1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1D80: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1D8A; /* jge: greater or equal (signed >=) */

loc_000B1D88: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B1D8A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1D94; /* jge: greater or equal (signed >=) */

loc_000B1D92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B1D94: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1D9F; /* jge: greater or equal (signed >=) */

loc_000B1D9D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B1D9F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edx; /* cmovg */
    MEM32(ecx + 0x34) = esi;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B1DC0
 * Original: 0x000B1DC0 - 0x000B1DCA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1DC0(void)
{

loc_000B1DC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1DD0
 * Original: 0x000B1DD0 - 0x000B1DE4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1DD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1DDE; /* jge: greater or equal (signed >=) */

loc_000B1DD9: ;
    eax = 1;

loc_000B1DDE: ;
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1DF0
 * Original: 0x000B1DF0 - 0x000B1E04 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1DF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1DFE; /* jge: greater or equal (signed >=) */

loc_000B1DF9: ;
    eax = 1;

loc_000B1DFE: ;
    MEM32(ecx + 0x70) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1E10
 * Original: 0x000B1E10 - 0x000B1E63 (83 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1E10(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1E10: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1E26; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000B1E1E: ;
    xmm2 = XMM_SCALAR(MEMF(0x306514)); /* movss */

loc_000B1E26: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1E46; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B1E31: ;
    xmm0 = XMM_SCALAR(MEMF(0x317A94)); /* movss */
    MEMF(ecx + 0x74) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000B1E46: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1E56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1E53: ;
    xmm0 = xmm1; /* movaps */

loc_000B1E56: ;
    MEMF(ecx + 0x74) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B1E70
 * Original: 0x000B1E70 - 0x000B1E8E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1E70(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1E70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1E86; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1E7E: ;
    MEMF(ecx + 0x7C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000B1E86: ;
    MEMF(ecx + 0x7C) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1E90
 * Original: 0x000B1E90 - 0x000B1EBD (45 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1E90(void)
{

loc_000B1E90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B1EC0
 * Original: 0x000B1EC0 - 0x000B1EE4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1EC0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1EC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1ED9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1ECE: ;
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000B1ED9: ;
    MEMF(ecx + 0xBC) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1EF0
 * Original: 0x000B1EF0 - 0x000B1F14 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1EF0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1EF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1F09; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1EFE: ;
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000B1F09: ;
    MEMF(ecx + 0xF8) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1F20
 * Original: 0x000B1F20 - 0x000B1F31 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F20(void)
{

loc_000B1F20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1F40
 * Original: 0x000B1F40 - 0x000B1F51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F40(void)
{

loc_000B1F40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1F60
 * Original: 0x000B1F60 - 0x000B1F71 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F60(void)
{

loc_000B1F60: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1F80
 * Original: 0x000B1F80 - 0x000B1F8D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F80(void)
{

loc_000B1F80: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xFC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1F90
 * Original: 0x000B1F90 - 0x000B1FB1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1F90: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B1FA8; /* jle: less or equal (signed <=) */

loc_000B1FA3: ;
    eax = 3;

loc_000B1FA8: ;
    MEM32(ecx + 0x104) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1FC0
 * Original: 0x000B1FC0 - 0x000B203D (125 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1FC0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000B2003; /* jne: not equal / not zero */

loc_000B1FD5: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B2003; /* jp: parity */

loc_000B1FE1: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B2003; /* jp: parity */

loc_000B1FEA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B2009; /* jp: parity */

loc_000B1FF9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    goto loc_000B2009;

loc_000B2003: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000B2009: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEMF(ecx + 0x118) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x11C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x120) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000B2034; /* jle: less or equal (signed <=) */

loc_000B2026: ;
    eax = 2;
    MEM32(ecx + 0x114) = eax;
    esp += 20; return; /* ret 16 */

loc_000B2034: ;
    MEM32(ecx + 0x114) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2040
 * Original: 0x000B2040 - 0x000B20D5 (149 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2040: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B2051; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B204E: ;
    xmm0 = xmm2; /* movaps */

loc_000B2051: ;
    xmm4 = XMM_SCALAR(MEMF(0x310C34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x124) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B2073; /* jnp: not parity */

loc_000B206A: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    goto loc_000B207B;

loc_000B2073: ;
    xmm1 = XMM_SCALAR(MEMF(0x310C30)); /* movss */

loc_000B207B: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2089; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B2086: ;
    xmm1 = xmm3; /* movaps */

loc_000B2089: ;
    MEMF(ecx + 0x128) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B209F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000B209C: ;
    xmm1 = xmm2; /* movaps */

loc_000B209F: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x130) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B20B9; /* jnp: not parity */

loc_000B20B0: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    goto loc_000B20BC;

loc_000B20B9: ;
    xmm0 = xmm2; /* movaps */

loc_000B20BC: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B20CA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000B20C7: ;
    xmm0 = xmm2; /* movaps */

loc_000B20CA: ;
    MEMF(ecx + 0x12C) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B20E0
 * Original: 0x000B20E0 - 0x000B2163 (131 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B20E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B20E0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x310C30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x310C34)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x134) = xmm2.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B2113; /* jnp: not parity */

loc_000B210A: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    goto loc_000B2116;

loc_000B2113: ;
    xmm1 = xmm0; /* movaps */

loc_000B2116: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2124; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000B2121: ;
    xmm1 = xmm3; /* movaps */

loc_000B2124: ;
    MEMF(ecx + 0x138) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x13C) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B214A; /* jnp: not parity */

loc_000B2143: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */

loc_000B214A: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2158; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000B2155: ;
    xmm0 = xmm2; /* movaps */

loc_000B2158: ;
    MEMF(ecx + 0x140) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2170
 * Original: 0x000B2170 - 0x000B217D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2170(void)
{

loc_000B2170: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x144) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2180
 * Original: 0x000B2180 - 0x000B2191 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2180(void)
{

loc_000B2180: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x148) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B21A0
 * Original: 0x000B21A0 - 0x000B21AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B21A0(void)
{

loc_000B21A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B21B0
 * Original: 0x000B21B0 - 0x000B21DD (45 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B21B0(void)
{

loc_000B21B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x158) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x160) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B21E0
 * Original: 0x000B21E0 - 0x000B220D (45 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B21E0(void)
{

loc_000B21E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x164) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x168) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x16C) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2210
 * Original: 0x000B2210 - 0x000B2229 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2210: ;
    SET_LO8(eax, MEM8(ecx + 0x171));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000B2220; /* jne: not equal / not zero */

loc_000B221C: ;
    SET_LO8(eax, MEM8(esp + 4));

loc_000B2220: ;
    MEM8(ecx + 0x170) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2230
 * Original: 0x000B2230 - 0x000B2248 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2230: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x171) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000B2245; /* je: equal / zero */

loc_000B223E: ;
    MEM8(ecx + 0x170) = 1;

loc_000B2245: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2250
 * Original: 0x000B2250 - 0x000B225D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2250(void)
{

loc_000B2250: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x172) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2260
 * Original: 0x000B2260 - 0x000B2271 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2260(void)
{

loc_000B2260: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2280
 * Original: 0x000B2280 - 0x000B22BD (61 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2280(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2280: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2296; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2293: ;
    xmm0 = xmm1; /* movaps */

loc_000B2296: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x14C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x150) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x154) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B22C0
 * Original: 0x000B22C0 - 0x000B22D0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B22C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B22C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B22CA; /* jge: greater or equal (signed >=) */

loc_000B22C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B22CA: ;
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B22D0
 * Original: 0x000B22D0 - 0x000B22F1 (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B22D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B22D0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B22E6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B22DE: ;
    xmm0 = XMM_SCALAR(MEMF(0x306514)); /* movss */

loc_000B22E6: ;
    MEMF(ecx + 0x178) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2300
 * Original: 0x000B2300 - 0x000B2314 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2300: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x310C38;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xD8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B2320
 * Original: 0x000B2320 - 0x000B234B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2320: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x310C38;
    if (CMP_EQ(_fa, _fb)) goto loc_000B2343; /* je: equal / zero */

loc_000B2333: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B2339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B2337u); } /* indirect call */
    }

loc_000B2339: ;
    MEM32(esi + 0xD8) = 0;

loc_000B2343: ;
    MEM32(esi) = 0x30FE70;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2350
 * Original: 0x000B2350 - 0x000B2353 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2350(void)
{

loc_000B2350: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2360
 * Original: 0x000B2360 - 0x000B239B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2360(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2360: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2371; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000B236E: ;
    xmm2 = xmm1; /* movaps */

loc_000B2371: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B237F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B237C: ;
    xmm0 = xmm1; /* movaps */

loc_000B237F: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B238E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000B238B: ;
    xmm0 = xmm2; /* movaps */

loc_000B238E: ;
    MEMF(ecx + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B23A0
 * Original: 0x000B23A0 - 0x000B23E0 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B23A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B23A0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B23B6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000B23AE: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FEFB4)); /* movss */

loc_000B23B6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B23C4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B23C1: ;
    xmm0 = xmm1; /* movaps */

loc_000B23C4: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B23D3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000B23D0: ;
    xmm0 = xmm2; /* movaps */

loc_000B23D3: ;
    MEMF(ecx + 0x24) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B23E0
 * Original: 0x000B23E0 - 0x000B2414 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B23E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B23E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEFB4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B23F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B23F3: ;
    xmm2 = xmm0; /* movaps */

loc_000B23F6: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2407; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2404: ;
    xmm0 = xmm1; /* movaps */

loc_000B2407: ;
    MEMF(ecx + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B2420
 * Original: 0x000B2420 - 0x000B2444 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2420(void)
{

loc_000B2420: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2450
 * Original: 0x000B2450 - 0x000B248F (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2450(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2450: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2461; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B245E: ;
    xmm3 = xmm0; /* movaps */

loc_000B2461: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B246F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B246C: ;
    xmm2 = xmm0; /* movaps */

loc_000B246F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B247D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B247A: ;
    xmm1 = xmm0; /* movaps */

loc_000B247D: ;
    MEMF(ecx + 0x40) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm1.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2490
 * Original: 0x000B2490 - 0x000B24BF (47 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2490(void)
{

loc_000B2490: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B24C0
 * Original: 0x000B24C0 - 0x000B24D9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B24C0(void)
{

loc_000B24C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B24E0
 * Original: 0x000B24E0 - 0x000B2527 (71 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B24E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B24E0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B24FB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B24EE: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B24FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B24FB: ;
    xmm0 = xmm1; /* movaps */

loc_000B24FE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2530
 * Original: 0x000B2530 - 0x000B2565 (53 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2530(void)
{

loc_000B2530: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2570
 * Original: 0x000B2570 - 0x000B25A8 (56 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2570(void)
{

loc_000B2570: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B25B0
 * Original: 0x000B25B0 - 0x000B25EB (59 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B25B0(void)
{

loc_000B25B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B25F0
 * Original: 0x000B25F0 - 0x000B266C (124 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B25F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B25F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2601; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000B25FE: ;
    xmm4 = xmm0; /* movaps */

loc_000B2601: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B260F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B260C: ;
    xmm3 = xmm0; /* movaps */

loc_000B260F: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B261E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B261B: ;
    xmm3 = xmm4; /* movaps */

loc_000B261E: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B262C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B2629: ;
    xmm2 = xmm0; /* movaps */

loc_000B262C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B263A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2637: ;
    xmm1 = xmm0; /* movaps */

loc_000B263A: ;
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2649; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_000B2646: ;
    xmm1 = xmm2; /* movaps */

loc_000B2649: ;
    MEMF(ecx + 0xA4) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0xA8) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0xAC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xB0) = xmm1.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2670
 * Original: 0x000B2670 - 0x000B26F6 (134 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2670(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2670: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2681; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000B267E: ;
    xmm4 = xmm0; /* movaps */

loc_000B2681: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B268F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B268C: ;
    xmm3 = xmm0; /* movaps */

loc_000B268F: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B269D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B269A: ;
    xmm2 = xmm0; /* movaps */

loc_000B269D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B26AB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B26A8: ;
    xmm1 = xmm0; /* movaps */

loc_000B26AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B26BB; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000B26B8: ;
    xmm4 = xmm0; /* movaps */

loc_000B26BB: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B26C3; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B26C0: ;
    xmm3 = xmm0; /* movaps */

loc_000B26C3: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B26CB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000B26C8: ;
    xmm2 = xmm0; /* movaps */

loc_000B26CB: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B26D3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B26D0: ;
    xmm1 = xmm0; /* movaps */

loc_000B26D3: ;
    MEMF(ecx + 0xB4) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0xBC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2700
 * Original: 0x000B2700 - 0x000B2786 (134 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2700(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2700: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2711; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000B270E: ;
    xmm4 = xmm0; /* movaps */

loc_000B2711: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B271F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B271C: ;
    xmm3 = xmm0; /* movaps */

loc_000B271F: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B272D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B272A: ;
    xmm2 = xmm0; /* movaps */

loc_000B272D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B273B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2738: ;
    xmm1 = xmm0; /* movaps */

loc_000B273B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B274B; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000B2748: ;
    xmm4 = xmm0; /* movaps */

loc_000B274B: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2753; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B2750: ;
    xmm3 = xmm0; /* movaps */

loc_000B2753: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B275B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000B2758: ;
    xmm2 = xmm0; /* movaps */

loc_000B275B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2763; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2760: ;
    xmm1 = xmm0; /* movaps */

loc_000B2763: ;
    MEMF(ecx + 0xC4) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0xC8) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B2790
 * Original: 0x000B2790 - 0x000B2797 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2790: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B27A0
 * Original: 0x000B27A0 - 0x000B2825 (133 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B27A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B27A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000B27A9u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_000B27A9: ;
    PUSH32(esp, 0x310C60);
    ebx = eax;
    PUSH32(esp, 0x000B27B5u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000B27B5: ;
    eax = MEM32(edi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B27CD; /* jne: not equal / not zero */

loc_000B27BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B27C5u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000B27C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B27CD: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000B27DDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B27D7u); } /* indirect call */
    }

loc_000B27DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B27F0; /* je: equal / zero */

loc_000B27E4: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000B27ECu); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_000B27EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B27FF; /* jne: not equal / not zero */

loc_000B27F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B27F6u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000B27F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B27FF: ;
    ecx = 3;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, ebx);
    MEM32(edi + 0x180) = eax;
    PUSH32(esp, 0x000B281Cu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000B281C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2830
 * Original: 0x000B2830 - 0x000B28AD (125 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2830: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xCC)); /* movss */
    edx = MEM32(ecx + 0xC8);
    eax = MEM32(esp + 4);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = edx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0xC4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC0)); /* movss */
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0xBC);
    MEM32(edx) = eax;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xF8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B289A; /* jnp: not parity */

loc_000B288C: ;
    eax = MEM32(esp + 0x10);
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

loc_000B289A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xBC)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B28B0
 * Original: 0x000B28B0 - 0x000B28F4 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B28B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B28B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B28BA; /* jge: greater or equal (signed >=) */

loc_000B28B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B28BA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B28C5; /* jge: greater or equal (signed >=) */

loc_000B28C3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B28C5: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B28CF; /* jge: greater or equal (signed >=) */

loc_000B28CD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B28CF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), eax (32-bit) */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = esi;
    MEM32(ecx + 0x58) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B28E0; /* jge: greater or equal (signed >=) */

loc_000B28DD: ;
    MEM32(ecx + 0x5C) = eax;

loc_000B28E0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x60), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B28E8; /* jge: greater or equal (signed >=) */

loc_000B28E5: ;
    MEM32(ecx + 0x60) = esi;

loc_000B28E8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x64), edx (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_000B28F1; /* jge: greater or equal (signed >=) */

loc_000B28EE: ;
    MEM32(ecx + 0x64) = edx;

loc_000B28F1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2900
 * Original: 0x000B2900 - 0x000B2944 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2900: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B290A; /* jge: greater or equal (signed >=) */

loc_000B2908: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B290A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B2915; /* jge: greater or equal (signed >=) */

loc_000B2913: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B2915: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B291F; /* jge: greater or equal (signed >=) */

loc_000B291D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B291F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), eax (32-bit) */
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x64) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B2930; /* jle: less or equal (signed <=) */

loc_000B292D: ;
    MEM32(ecx + 0x50) = eax;

loc_000B2930: ;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B2938; /* jle: less or equal (signed <=) */

loc_000B2935: ;
    MEM32(ecx + 0x54) = esi;

loc_000B2938: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), edx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_000B2941; /* jle: less or equal (signed <=) */

loc_000B293E: ;
    MEM32(ecx + 0x58) = edx;

loc_000B2941: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2950
 * Original: 0x000B2950 - 0x000B2994 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2950: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B295A; /* jge: greater or equal (signed >=) */

loc_000B2958: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B295A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B2965; /* jge: greater or equal (signed >=) */

loc_000B2963: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B2965: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B296F; /* jge: greater or equal (signed >=) */

loc_000B296D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B296F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), eax (32-bit) */
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = esi;
    MEM32(ecx + 0x40) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B2980; /* jge: greater or equal (signed >=) */

loc_000B297D: ;
    MEM32(ecx + 0x44) = eax;

loc_000B2980: ;
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x48), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B2988; /* jge: greater or equal (signed >=) */

loc_000B2985: ;
    MEM32(ecx + 0x48) = esi;

loc_000B2988: ;
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), edx (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_000B2991; /* jge: greater or equal (signed >=) */

loc_000B298E: ;
    MEM32(ecx + 0x4C) = edx;

loc_000B2991: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B29A0
 * Original: 0x000B29A0 - 0x000B29E4 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B29A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B29A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B29AA; /* jge: greater or equal (signed >=) */

loc_000B29A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B29AA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B29B5; /* jge: greater or equal (signed >=) */

loc_000B29B3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B29B5: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B29BF; /* jge: greater or equal (signed >=) */

loc_000B29BD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B29BF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), eax (32-bit) */
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = esi;
    MEM32(ecx + 0x4C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B29D0; /* jle: less or equal (signed <=) */

loc_000B29CD: ;
    MEM32(ecx + 0x38) = eax;

loc_000B29D0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B29D8; /* jle: less or equal (signed <=) */

loc_000B29D5: ;
    MEM32(ecx + 0x3C) = esi;

loc_000B29D8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x40), edx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_000B29E1; /* jle: less or equal (signed <=) */

loc_000B29DE: ;
    MEM32(ecx + 0x40) = edx;

loc_000B29E1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B29F0
 * Original: 0x000B29F0 - 0x000B2A50 (96 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B29F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B29F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x80); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x90) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x94) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2A2B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x80)) */

loc_000B2A23: ;
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */

loc_000B2A2B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x84); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2A3C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x84)) */

loc_000B2A34: ;
    MEMF(ecx + 0x84) = xmm1.f[0]; /* movss */

loc_000B2A3C: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x88); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2A4D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x88)) */

loc_000B2A45: ;
    MEMF(ecx + 0x88) = xmm2.f[0]; /* movss */

loc_000B2A4D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2A50
 * Original: 0x000B2A50 - 0x000B2ABC (108 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2A50(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2A50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x8C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x84) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x88) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2A8F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B2A87: ;
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */

loc_000B2A8F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x90)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2AA4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2A9C: ;
    MEMF(ecx + 0x90) = xmm1.f[0]; /* movss */

loc_000B2AA4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x94)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2AB9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B2AB1: ;
    MEMF(ecx + 0x94) = xmm2.f[0]; /* movss */

loc_000B2AB9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2AC0
 * Original: 0x000B2AC0 - 0x000B2B20 (96 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2AC0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2AC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xA4); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2AFB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xA4)) */

loc_000B2AF3: ;
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */

loc_000B2AFB: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0xA8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2B0C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0xA8)) */

loc_000B2B04: ;
    MEMF(ecx + 0xA8) = xmm1.f[0]; /* movss */

loc_000B2B0C: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0xAC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2B1D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0xAC)) */

loc_000B2B15: ;
    MEMF(ecx + 0xAC) = xmm2.f[0]; /* movss */

loc_000B2B1D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2B20
 * Original: 0x000B2B20 - 0x000B2B8C (108 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2B20(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2B20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xB0)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xAC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2B5F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B2B57: ;
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */

loc_000B2B5F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2B74; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2B6C: ;
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */

loc_000B2B74: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2B89; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B2B81: ;
    MEMF(ecx + 0xB8) = xmm2.f[0]; /* movss */

loc_000B2B89: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B2B90
 * Original: 0x000B2B90 - 0x000B2BF4 (100 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2B90(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2B90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB0)); /* movss */
    MEM32(ecx + 0xA4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xA8) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xAC) = edx;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2BC3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_000B2BBB: ;
    edx = MEM32(eax);
    MEM32(ecx + 0xB0) = edx;

loc_000B2BC3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2BDA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000B2BD1: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xB4) = edx;

loc_000B2BDA: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2BF1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000B2BE8: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xB8) = eax;

loc_000B2BF1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2C00
 * Original: 0x000B2C00 - 0x000B2C64 (100 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2C00(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2C00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0xB0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xB4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xB8) = edx;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xA4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2C33; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xA4)) */

loc_000B2C2B: ;
    edx = MEM32(eax);
    MEM32(ecx + 0xA4) = edx;

loc_000B2C33: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xA8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2C4A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xA8)) */

loc_000B2C41: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xA8) = edx;

loc_000B2C4A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xAC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2C61; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xAC)) */

loc_000B2C58: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xAC) = eax;

loc_000B2C61: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2C70
 * Original: 0x000B2C70 - 0x000B2CB1 (65 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2C70(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2C70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC4); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2C9D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC4)) */

loc_000B2C95: ;
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */

loc_000B2C9D: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0xC0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2CAE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0xC0)) */

loc_000B2CA6: ;
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */

loc_000B2CAE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B2CC0
 * Original: 0x000B2CC0 - 0x000B2D09 (73 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2CC0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2CC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2CF1; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000B2CE9: ;
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */

loc_000B2CF1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xCC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2D06; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2CFE: ;
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */

loc_000B2D06: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B2D10
 * Original: 0x000B2D10 - 0x000B2D32 (34 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2D10(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2D10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xE4); /* comiss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2D2F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xE4)) */

loc_000B2D27: ;
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */

loc_000B2D2F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2D40
 * Original: 0x000B2D40 - 0x000B2D66 (38 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2D40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2D40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xE0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2D63; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2D5B: ;
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */

loc_000B2D63: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2D70
 * Original: 0x000B2D70 - 0x000B2DAF (63 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2D70(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2D70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x301050)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B2D90; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2D83: ;
    xmm1 = XMM_SCALAR(MEMF(0x301058)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2D93; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2D90: ;
    xmm0 = xmm1; /* movaps */

loc_000B2D93: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xDC); /* comiss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2DAC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xDC)) */

loc_000B2DA4: ;
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */

loc_000B2DAC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2DB0
 * Original: 0x000B2DB0 - 0x000B2DF3 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2DB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2DB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x301050)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B2DD0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2DC3: ;
    xmm1 = XMM_SCALAR(MEMF(0x301058)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2DD3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2DD0: ;
    xmm0 = xmm1; /* movaps */

loc_000B2DD3: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xD8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2DF0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2DE8: ;
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */

loc_000B2DF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2E00
 * Original: 0x000B2E00 - 0x000B2E3D (61 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2E00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B2E1B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2E13: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E24; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2E1B: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000B2E24: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xF0); /* comiss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E3A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xF0)) */

loc_000B2E35: ;
    g_seh_ebp = ebp; sub_000B2E40(); return; /* tail jmp 0x000B2E40 */

loc_000B2E3A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2E40
 * Original: 0x000B2E40 - 0x000B2EA2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2E40: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000B2E51: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E5B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B2E56: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000B2E63;

loc_000B2E5B: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E63; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B2E60: ;
    xmm0 = xmm3; /* movaps */

loc_000B2E63: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xEC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E9F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2E78: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E85; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B2E80: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000B2E8D;

loc_000B2E85: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E8D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B2E8A: ;
    xmm1 = xmm3; /* movaps */

loc_000B2E8D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xEC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2E9F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2E9A: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000B2E51;

loc_000B2E9F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2EB0
 * Original: 0x000B2EB0 - 0x000B2EF5 (69 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2EB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B2EC0; /* jge: greater or equal (signed >=) */

loc_000B2EB9: ;
    eax = 1;
    goto loc_000B2ECC;

loc_000B2EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B2ECC; /* jle: less or equal (signed <=) */

loc_000B2EC7: ;
    eax = 0xFF;

loc_000B2ECC: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x10C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x110); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(ecx + 0x108) = eax;
    MEMF(ecx + 0x174) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2F00
 * Original: 0x000B2F00 - 0x000B2F45 (69 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2F00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B2F10; /* jge: greater or equal (signed >=) */

loc_000B2F09: ;
    eax = 1;
    goto loc_000B2F1C;

loc_000B2F10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B2F1C; /* jle: less or equal (signed <=) */

loc_000B2F17: ;
    eax = 0xFF;

loc_000B2F1C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x108); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x110); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(ecx + 0x10C) = eax;
    MEMF(ecx + 0x174) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2F50
 * Original: 0x000B2F50 - 0x000B2F9E (78 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2F50(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2F50: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FF028)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B2F70; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B2F63: ;
    xmm1 = XMM_SCALAR(MEMF(0x310C70)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2F73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B2F70: ;
    xmm0 = xmm1; /* movaps */

loc_000B2F73: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10C); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(ecx + 0x108); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x110) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x174) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2FA0
 * Original: 0x000B2FA0 - 0x000B3147 (423 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2FA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xDC); /* comiss */
    MEM32(eax) = 0x30FEF0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x180) = ecx;
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B2FE7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xDC)) */

loc_000B2FDF: ;
    MEMF(eax + 0xDC) = xmm0.f[0]; /* movss */

loc_000B2FE7: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FF028)); /* movss */
    MEMF(eax + 0x110) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x174) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x310C30)); /* movss */
    MEMF(eax + 0x128) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x310C80)); /* movss */
    MEMF(eax + 0x134) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x310C7C)); /* movss */
    MEMF(eax + 0x138) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x310C78)); /* movss */
    MEMF(eax + 0x13C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x310C74)); /* movss */
    MEMF(eax + 0x140) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x171)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x171), LO8(ecx) (8-bit) */
    MEMF(eax + 0xDC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = 1;
    MEM32(eax + 0x10C) = 1;
    MEMF(eax + 0x124) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x130) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x120) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x114) = ecx;
    MEMF(eax + 0x148) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x144) = ecx;
    MEMF(eax + 0x164) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x168) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x16C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x158) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x15C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x160) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B30F9; /* je: equal / zero */

loc_000B30F7: ;
    SET_LO8(edx, 1);

loc_000B30F9: ;
    xmm2 = XMM_SCALAR(MEMF(0x30105C)); /* movss */
    MEM8(eax + 0x170) = LO8(edx);
    MEM8(eax + 0x171) = LO8(ecx);
    MEM8(eax + 0x172) = LO8(ecx);
    MEMF(eax + 0x78) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x150) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x154) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x178) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3150
 * Original: 0x000B3150 - 0x000B318A (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x180);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x30FEF0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B3181; /* je: equal / zero */

loc_000B3164: ;
    ecx = edi;
    PUSH32(esp, 0x000B316Bu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000B316B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000B3174u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B316Eu); } /* indirect call */
    }

loc_000B3174: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x180) = 0;

loc_000B3181: ;
    POP32(esp, edi);
    MEM32(esi) = 0x30FE70;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3190
 * Original: 0x000B3190 - 0x000B31E1 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3190: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    esi = ecx;
    PUSH32(esp, 0x000B319Au); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000B319A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B31CE; /* je: equal / zero */

loc_000B31A3: ;
    MEM32(eax + 0x10) = ecx;
    SET_LO8(edx, 1);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax) = 0x310C84;
    MEM8(eax + 0x14) = LO8(edx);
    MEM8(eax + 0x15) = LO8(edx);
    MEM8(eax + 0x16) = LO8(edx);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = eax;

loc_000B31CE: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    MEM32(esi + 0xD8) = ecx;
    PUSH32(esp, 0x000B31DDu); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_000B31DD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B31F0
 * Original: 0x000B31F0 - 0x000B31FA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B31F0(void)
{

loc_000B31F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3200
 * Original: 0x000B3200 - 0x000B320A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3200(void)
{

loc_000B3200: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x14) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3210
 * Original: 0x000B3210 - 0x000B321A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3210(void)
{

loc_000B3210: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x15) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3220
 * Original: 0x000B3220 - 0x000B322A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3220(void)
{

loc_000B3220: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x16) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3230
 * Original: 0x000B3230 - 0x000B3234 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3230(void)
{

loc_000B3230: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    esp += 4; return; /* ret */

}

/**
 * sub_000B3240
 * Original: 0x000B3240 - 0x000B3244 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3240(void)
{

loc_000B3240: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    esp += 4; return; /* ret */

}

/**
 * sub_000B3250
 * Original: 0x000B3250 - 0x000B3254 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3250(void)
{

loc_000B3250: ;
    SET_LO8(eax, MEM8(ecx + 0x16));
    esp += 4; return; /* ret */

}

/**
 * sub_000B3260
 * Original: 0x000B3260 - 0x000B327E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B3268u); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_000B3268: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3278; /* je: equal / zero */

loc_000B326F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B3275u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000B3275: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3278: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3280
 * Original: 0x000B3280 - 0x000B3286 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3280(void)
{

loc_000B3280: ;
    PUSH32(esp, 0x000B3285u); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B3285: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3290
 * Original: 0x000B3290 - 0x000B3299 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3290(void)
{

loc_000B3290: ;
    MEMF(0x3C6074) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B32A0
 * Original: 0x000B32A0 - 0x000B32A9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B32A0(void)
{

loc_000B32A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B32B0
 * Original: 0x000B32B0 - 0x000B32DD (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B32B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B32B0: ;
    eax = MEM32(0x3C6074);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39B193);
    ecx = 0x3039;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B32E0
 * Original: 0x000B32E0 - 0x000B332A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B32E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B32E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    MEM32(esi) = 0x310D20;
    MEM32(esi + 8) = 0x310D18;
    MEM32(edi) = 0x310CC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000B331A; /* je: equal / zero */

loc_000B3307: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B330Du); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000B330D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x130) = 0;

loc_000B331A: ;
    ecx = edi;
    PUSH32(esp, 0x000B3321u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000B3321: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000B9410(); return; /* tail jmp 0x000B9410 */

}

/**
 * sub_000B3330
 * Original: 0x000B3330 - 0x000B3337 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3330(void)
{

loc_000B3330: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B3336u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3334u); } /* indirect call */
    }

loc_000B3336: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3340
 * Original: 0x000B3340 - 0x000B3347 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B3340: ;
    fp_push(MEMF(ecx + 0x1FC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B3350
 * Original: 0x000B3350 - 0x000B3357 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B3350: ;
    fp_push(MEMF(ecx + 0x200)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B3360
 * Original: 0x000B3360 - 0x000B3371 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3360(void)
{

loc_000B3360: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1FC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3380
 * Original: 0x000B3380 - 0x000B338B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3380: ;
    ecx = MEM32(ecx + 0x1E0);
    g_seh_ebp = ebp; sub_000B1D00(); return; /* tail jmp 0x000B1D00 */

}

/**
 * sub_000B3390
 * Original: 0x000B3390 - 0x000B3393 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3390(void)
{

loc_000B3390: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B33A0
 * Original: 0x000B33A0 - 0x000B33A3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33A0(void)
{

loc_000B33A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B33B0
 * Original: 0x000B33B0 - 0x000B33B3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33B0(void)
{

loc_000B33B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B33C0
 * Original: 0x000B33C0 - 0x000B33D1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33C0(void)
{

loc_000B33C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x200) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B33E0
 * Original: 0x000B33E0 - 0x000B33E3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33E0(void)
{

loc_000B33E0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B33F0
 * Original: 0x000B33F0 - 0x000B33F3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33F0(void)
{

loc_000B33F0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3400
 * Original: 0x000B3400 - 0x000B3403 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3400(void)
{

loc_000B3400: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3410
 * Original: 0x000B3410 - 0x000B3413 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3410(void)
{

loc_000B3410: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3420
 * Original: 0x000B3420 - 0x000B3423 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3420(void)
{

loc_000B3420: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3430
 * Original: 0x000B3430 - 0x000B3433 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3430(void)
{

loc_000B3430: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B3440
 * Original: 0x000B3440 - 0x000B3443 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3440(void)
{

loc_000B3440: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3450
 * Original: 0x000B3450 - 0x000B3453 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3450(void)
{

loc_000B3450: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B3460
 * Original: 0x000B3460 - 0x000B3463 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3460(void)
{

loc_000B3460: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3470
 * Original: 0x000B3470 - 0x000B3473 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3470(void)
{

loc_000B3470: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3480
 * Original: 0x000B3480 - 0x000B3481 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3480(void)
{

loc_000B3480: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3490
 * Original: 0x000B3490 - 0x000B34B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3490(void)
{

loc_000B3490: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B34A3u); RECOMP_ABI_CALL(0x000B2C00u, sub_000B2C00); /* call 0x000B2C00 */

loc_000B34A3: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x000B34B3u); RECOMP_ABI_CALL(0x000B2B90u, sub_000B2B90); /* call 0x000B2B90 */

loc_000B34B3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B34C0
 * Original: 0x000B34C0 - 0x000B34D0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B34C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B34C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B34C8u); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B34C8: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1E4)); /* fsub dword ptr [esi + 0x1e4] */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B34E0
 * Original: 0x000B34E0 - 0x000B34EF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B34E0(void)
{

loc_000B34E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B34F0
 * Original: 0x000B34F0 - 0x000B34FF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B34F0(void)
{

loc_000B34F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3500
 * Original: 0x000B3500 - 0x000B35C9 (201 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3500(void)
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

loc_000B3500: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(0x3C6074) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_000B356D; /* jbe: below or equal (unsigned <=) */

loc_000B3518: ;
    eax = MEM32(0x3C6074);
    edx = edi;
    /* nop */

loc_000B3520: ;
    esi = MEM32(ecx + 0x1E0);
    _fa = (uint32_t)(MEM8(esi + 0x171)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x171), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B354A; /* jne: not equal / not zero */

loc_000B352F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x23A807);
    esi = 0x1F1C8A;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi & 0x7FFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x3F800000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;

loc_000B354A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x23A807);
    esi = 0x1F1C8A;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi & 0x7FFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x3F800000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(0x3C6074) = eax;
    if ((_fa != 0)) goto loc_000B3520; /* jne: not equal / not zero */

loc_000B356D: ;
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    SET_LO8(edx, MEM8(eax + 0x171));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    if (CMP_EQ(_fa, _fb)) goto loc_000B35C4; /* je: equal / zero */

loc_000B358F: ;
    esi = MEM32(ecx + 0x134);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B35B2; /* jb: below (unsigned <) */

loc_000B3599: ;
    POP32(esp, edi);
    MEM32(ecx + 0x140) = 0;
    MEM32(ecx + 0x138) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B35B2: ;
    eax = MEM32(ecx + 0x138);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 0x138) = edx;

loc_000B35C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B35D0
 * Original: 0x000B35D0 - 0x000B3821 (593 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B35D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B35D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    xmm7 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    xmm1 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x3C6074) = xmm0.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    eax = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = eax;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    eax = MEM32(ebp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    ebx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx & 0x7FFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x3F800000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ebx;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    ebx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx & 0x7FFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x3F800000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ebx;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x3C6074) = xmm4.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    ecx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    xmm4 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    edx = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    xmm5 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    ecx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    MEM32(0x3C6074) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(ebp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    xmm6 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    ecx = MEM32(ebp + 0x1C);
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x301050)); /* fmul dword ptr [0x301050] */
    POP32(esp, ebx);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) - fp_top()); /* fsubr dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm4 = xmm2; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ebp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(0x3C6074) = xmm7.f[0]; /* movss */
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
 * sub_000B3830
 * Original: 0x000B3830 - 0x000B387E (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3830(void)
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

loc_000B3830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x20C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B387B; /* je: equal / zero */

loc_000B383E: ;
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x20C) = LO8(eax);
    PUSH32(esp, 0x000B384Bu); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B384B: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1E4)); /* fsub dword ptr [esi + 0x1e4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1F0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000B3873; /* ja: above (unsigned >) */

loc_000B386B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1F0)); /* movss */

loc_000B3873: ;
    MEMF(esi + 0x1E8) = xmm0.f[0]; /* movss */

loc_000B387B: ;
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
 * sub_000B3880
 * Original: 0x000B3880 - 0x000B3AA1 (545 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B3880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xE4);
    PUSH32(esp, edi);
    edi = esi + 0x1A0;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000B38A0: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B38B6u); RECOMP_ABI_CALL(0x000B8FA0u, sub_000B8FA0); /* call 0x000B8FA0 */

loc_000B38B6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3A8F; /* je: equal / zero */

loc_000B38C1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000B38A0; /* jle: less or equal (signed <=) */

loc_000B38CA: ;
    ecx = MEM32(ebp + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B39AD; /* jnp: not parity */

loc_000B38DD: ;
    eax = MEM32(esi + 0x2E4);
    edx = MEM32(esi + 0x2E0);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x2E8);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B3912u); RECOMP_ABI_CALL(0x00267080u, sub_00267080); /* call 0x00267080 */

loc_000B3912: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3985; /* jnp: not parity */

loc_000B3948: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_000B3985: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B399Fu); RECOMP_ABI_CALL(0x000B8FA0u, sub_000B8FA0); /* call 0x000B8FA0 */

loc_000B399F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3A8F; /* je: equal / zero */

loc_000B39AA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000B39AD: ;
    ecx = MEM32(ebp + 0x20);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3A98; /* jnp: not parity */

loc_000B39BD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = MEM32(esi + 0x304);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(esi + 0x300);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0xE4);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x308);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B39FBu); RECOMP_ABI_CALL(0x00267080u, sub_00267080); /* call 0x00267080 */

loc_000B39FB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3A6E; /* jnp: not parity */

loc_000B3A31: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_000B3A6E: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B3A88u); RECOMP_ABI_CALL(0x000B8FA0u, sub_000B8FA0); /* call 0x000B8FA0 */

loc_000B3A88: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B3A98; /* jne: not equal / not zero */

loc_000B3A8F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B3A98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
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
 * sub_000B3AB0
 * Original: 0x000B3AB0 - 0x000B3CEA (570 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B3AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xE4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x1A8;
    /* nop */

loc_000B3AD0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 4); /* mulss */
    edx = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca > _fcb)) goto loc_000B3CDA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx)) */

loc_000B3B05: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000B3AD0; /* jle: less or equal (signed <=) */

loc_000B3B0E: ;
    ecx = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3BF6; /* jnp: not parity */

loc_000B3B21: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    eax = MEM32(esi + 0x2E0);
    edx = MEM32(esi + 0x2E4);
    ecx = esi + 0x30;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x2E8);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B3B56u); RECOMP_ABI_CALL(0x00267080u, sub_00267080); /* call 0x00267080 */

loc_000B3B56: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3BB9; /* jnp: not parity */

loc_000B3B98: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_000B3BBF;

loc_000B3BB9: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000B3BBF: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    edx = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca > _fcb)) goto loc_000B3CDA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx)) */

loc_000B3BF3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000B3BF6: ;
    ecx = MEM32(ebp + 0x14);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3CE2; /* jnp: not parity */

loc_000B3C06: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esi + 0x300);
    ecx = MEM32(ebx + 0xE4);
    edx = MEM32(esi + 0x304);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x308);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B3C41u); RECOMP_ABI_CALL(0x00267080u, sub_00267080); /* call 0x00267080 */

loc_000B3C41: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3CA4; /* jnp: not parity */

loc_000B3C83: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_000B3CAA;

loc_000B3CA4: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000B3CAA: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    edx = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B3CE2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000B3CDA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B3CE2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
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
 * sub_000B3CF0
 * Original: 0x000B3CF0 - 0x000B3CFA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3CF0(void)
{

loc_000B3CF0: ;
    eax = MEM32(ecx + 0x1E0);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3D00
 * Original: 0x000B3D00 - 0x000B3D29 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x1A0);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1A4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x1A8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3D30
 * Original: 0x000B3D30 - 0x000B3D48 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D30(void)
{

loc_000B3D30: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3D50
 * Original: 0x000B3D50 - 0x000B3D5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D50(void)
{

loc_000B3D50: ;
    eax = MEM32(ecx + 0x1E0);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3D60
 * Original: 0x000B3D60 - 0x000B3D6A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D60(void)
{

loc_000B3D60: ;
    eax = MEM32(ecx + 0x1E0);
    eax = MEM32(eax + 0x70);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3D70
 * Original: 0x000B3D70 - 0x000B3D7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D70(void)
{

loc_000B3D70: ;
    eax = MEM32(ecx + 0x1E0);
    eax = MEM32(eax + 0x6C);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3D80
 * Original: 0x000B3D80 - 0x000B3D8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B3D80: ;
    eax = MEM32(ecx + 0x1E0);
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B3D90
 * Original: 0x000B3D90 - 0x000B3DB7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D90(void)
{

loc_000B3D90: ;
    eax = MEM32(ecx + 0x1E0);
    edx = MEM32(eax + 0xE0);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x1E0);
    edx = MEM32(ecx + 0xE4);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3DC0
 * Original: 0x000B3DC0 - 0x000B3DFC (60 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3DC0(void)
{

loc_000B3DC0: ;
    eax = MEM32(ecx + 0x1E0);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x2C); /* cvtsi2ss */
    edx = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1E0);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x30); /* cvtsi2ss */
    edx = MEM32(esp + 8);
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1E0);
    ecx = MEM32(esp + 0xC);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x34); /* cvtsi2ss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B3E00
 * Original: 0x000B3E00 - 0x000B3E27 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3E00(void)
{

loc_000B3E00: ;
    eax = MEM32(ecx + 0x1E0);
    edx = MEM32(eax + 0xEC);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x1E0);
    edx = MEM32(ecx + 0xF0);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3E30
 * Original: 0x000B3E30 - 0x000B3E45 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3E30(void)
{

loc_000B3E30: ;
    eax = MEM32(ecx + 0x1E0);
    ecx = MEM32(eax + 0xF4);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3E50
 * Original: 0x000B3E50 - 0x000B3EEB (155 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3E50(void)
{

loc_000B3E50: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x1E0);
    SET_LO8(edx, MEM8(eax + 0x54));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x50));
    SET_LO8(eax, MEM8(eax + 0x58));
    MEM8(esp + 5) = LO8(edx);
    edx = MEM32(esp + 0xC);
    MEM8(edx) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 5));
    MEM8(edx + 1) = LO8(ebx);
    MEM8(edx + 2) = LO8(eax);
    MEM8(edx + 3) = 0xFF;
    eax = MEM32(ecx + 0x1E0);
    SET_LO8(edx, MEM8(eax + 0x60));
    SET_LO8(ebx, MEM8(eax + 0x5C));
    SET_LO8(eax, MEM8(eax + 0x64));
    MEM8(esp + 0xD) = LO8(edx);
    edx = MEM32(esp + 0x10);
    MEM8(edx) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xD));
    MEM8(edx + 1) = LO8(ebx);
    MEM8(edx + 2) = LO8(eax);
    MEM8(edx + 3) = 0xFF;
    eax = MEM32(ecx + 0x1E0);
    SET_LO8(edx, MEM8(eax + 0x3C));
    SET_LO8(ebx, MEM8(eax + 0x38));
    SET_LO8(eax, MEM8(eax + 0x40));
    MEM8(esp + 0xD) = LO8(edx);
    edx = MEM32(esp + 0x14);
    MEM8(edx) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xD));
    MEM8(edx + 1) = LO8(ebx);
    MEM8(edx + 2) = LO8(eax);
    eax = MEM32(esp + 0x18);
    MEM8(edx + 3) = 0xFF;
    ecx = MEM32(ecx + 0x1E0);
    SET_LO8(ebx, MEM8(ecx + 0x48));
    SET_LO8(edx, MEM8(ecx + 0x44));
    SET_LO8(ecx, MEM8(ecx + 0x4C));
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = 0xFF;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B3EF0
 * Original: 0x000B3EF0 - 0x000B3F4B (91 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3EF0(void)
{

loc_000B3EF0: ;
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    edx = MEM32(eax + 0x8C);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    ecx = MEM32(eax + 0x80);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3F50
 * Original: 0x000B3F50 - 0x000B3FAB (91 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3F50(void)
{

loc_000B3F50: ;
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    edx = MEM32(eax + 0xB0);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    ecx = MEM32(eax + 0xA4);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3FB0
 * Original: 0x000B3FB0 - 0x000B3FD9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x1C0);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1C4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x1C8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3FE0
 * Original: 0x000B3FE0 - 0x000B400F (47 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3FE0(void)
{

loc_000B3FE0: ;
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    ecx = MEM32(eax + 0x98);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4010
 * Original: 0x000B4010 - 0x000B4063 (83 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x15C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x1C0); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x1C4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x1C8); /* mulss */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4070
 * Original: 0x000B4070 - 0x000B409F (47 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4070(void)
{

loc_000B4070: ;
    eax = MEM32(ecx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x16C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x168)); /* movss */
    ecx = MEM32(eax + 0x164);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B40A0
 * Original: 0x000B40A0 - 0x000B40B3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B40A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B40A0: ;
    eax = MEM32(ecx + 0x1E0);
    SET_LO8(edx, MEM8(eax + 0x68));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_000B40C0
 * Original: 0x000B40C0 - 0x000B410B (75 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B40C0(void)
{

loc_000B40C0: ;
    eax = MEM32(ecx + 0x1E0);
    edx = MEM32(eax + 0x104);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1E0);
    eax = MEM32(edx + 0x108);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1E0);
    edx = MEM32(eax + 0x10C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x1E0);
    edx = MEM32(ecx + 0x110);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4110
 * Original: 0x000B4110 - 0x000B4163 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4110(void)
{

loc_000B4110: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B4129u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_000B4129: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B413Fu); RECOMP_ABI_CALL(0x000B2CC0u, sub_000B2CC0); /* call 0x000B2CC0 */

loc_000B413F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B414Fu); RECOMP_ABI_CALL(0x000B1EC0u, sub_000B1EC0); /* call 0x000B1EC0 */

loc_000B414F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x000B415Fu); RECOMP_ABI_CALL(0x000B1EF0u, sub_000B1EF0); /* call 0x000B1EF0 */

loc_000B415F: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B4170
 * Original: 0x000B4170 - 0x000B421A (170 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B4214; /* ja: above (unsigned >) */

loc_000B4186: ;
    eax = ZX8(MEM8(eax + 0xB4228));
    { uint32_t _jt = MEM32(eax * 4 + 0xB421C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000B4194u) goto loc_000B4194;
    if (_jt == 0x000B41D0u) goto loc_000B41D0;
    if (_jt == 0x000B4214u) goto loc_000B4214;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B4194: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    edx = MEM32(ecx + -8);
    XMM_STORE(esp, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000B41CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B41C4u); } /* indirect call */
    }

loc_000B41CA: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B41D0: ;
    eax = MEM32(ecx + 0x208);
    eax = eax << 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1E) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B41F0; /* jne: not equal / not zero */

loc_000B41E0: ;
    edx = MEM32(ecx + -8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B41EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B41E8u); } /* indirect call */
    }

loc_000B41EA: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B41F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4207; /* jne: not equal / not zero */

loc_000B41F5: ;
    eax = MEM32(ecx + -8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x000B4201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B41FBu); } /* indirect call */
    }

loc_000B4201: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B4207: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4214; /* jne: not equal / not zero */

loc_000B420C: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4214u); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_000B4214: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B4230
 * Original: 0x000B4230 - 0x000B4244 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4230: ;
    SET_LO8(eax, MEM8(ecx + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B423F; /* jne: not equal / not zero */

loc_000B423A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B423F: ;
    g_seh_ebp = ebp; sub_000B9030(); return; /* tail jmp 0x000B9030 */

}

/**
 * sub_000B4250
 * Original: 0x000B4250 - 0x000B4508 (696 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4250(void)
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

loc_000B4250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1E0);
    SET_LO8(ecx, MEM8(eax + 0xFC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4501; /* je: equal / zero */

loc_000B4273: ;
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x90); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xA0); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x60)); /* fsub dword ptr [esp + 0x60] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B4364; /* jnp: not parity */

loc_000B4336: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x24); /* divss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    goto loc_000B436A;

loc_000B4364: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000B436A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x310EC0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000B4427; /* jbe: below or equal (unsigned <=) */

loc_000B4396: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x310EC0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000B4427; /* jbe: below or equal (unsigned <=) */

loc_000B43AC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x310EC0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000B4427; /* jbe: below or equal (unsigned <=) */

loc_000B43C2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000B4406; /* jbe: below or equal (unsigned <=) */

loc_000B43EE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x28); /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca > _fcb)) goto loc_000B4416; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x28)) */

loc_000B43FE: ;
    xmm6 = xmm5; /* movaps */
    xmm3 = xmm1; /* movaps */
    goto loc_000B4427;

loc_000B4406: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B441E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x28)) */

loc_000B4413: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_000B4416: ;
    xmm6 = xmm1; /* movaps */
    xmm3 = xmm5; /* movaps */
    goto loc_000B4427;

loc_000B441E: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = xmm3; /* movaps */
    xmm1 = xmm5; /* movaps */

loc_000B4427: ;
    xmm5 = xmm3; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    ecx = esp + 0x70;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    ecx = esp + 0x34;
    MEMF(esp + 0x74) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B44BCu); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000B44BC: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B44CAu); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000B44CA: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B44DBu); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000B44DB: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B44ECu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000B44EC: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B44F5u); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_000B44F5: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4501u); RECOMP_ABI_CALL(0x001329A0u, sub_001329A0); /* call 0x001329A0 */

loc_000B4501: ;
    POP32(esp, esi);
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
 * sub_000B4510
 * Original: 0x000B4510 - 0x000B45DA (202 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4510(void)
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

loc_000B4510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x1E0);
    _fa = (uint32_t)(MEM32(eax + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x114), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B45D6; /* jne: not equal / not zero */

loc_000B452C: ;
    edx = MEM32(eax + 0x118);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x11C);
    eax = MEM32(eax + 0x120);
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEM32(esp + 0x14) = edx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B45B0; /* jnp: not parity */

loc_000B4594: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_000B45B6;

loc_000B45B0: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000B45B6: ;
    MEMF(ecx + 0x120) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x124) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x128) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x12C) = xmm4.f[0]; /* movss */

loc_000B45D6: ;
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
 * sub_000B45E0
 * Original: 0x000B45E0 - 0x000B45E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B45E0(void)
{

loc_000B45E0: ;
    MEM8(ecx + 0x110) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B45F0
 * Original: 0x000B45F0 - 0x000B477B (395 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B45F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B45F0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x200)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B474A; /* jnp: not parity */

loc_000B4608: ;
    eax = MEM32(ecx + 0x1E0);
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x1C0)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x1C4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x1C8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x15C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    MEMF(ecx + 0x1D4) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(ecx + 0x1D0) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    MEMF(ecx + 0x1D8) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1D0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x305098); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x1D0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1D4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x1D4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1D8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x1D8) = xmm2.f[0]; /* movss */
    eax = MEM32(ecx + 0x1E0);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x164)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x168)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x16C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x1B0) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x1B4) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x1B8) = xmm3.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x1B0); /* mulss */
    MEMF(ecx + 0x1B0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x1B4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1B8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x1B8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000B474A: ;
    MEMF(ecx + 0x1D0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1D4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1D8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1B0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1B4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4780
 * Original: 0x000B4780 - 0x000B498F (527 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x000B4794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B478Eu); } /* indirect call */
    }

loc_000B4794: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B47DA; /* je: equal / zero */

loc_000B4798: ;
    eax = MEM32(0x3E8D08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B47DA; /* je: equal / zero */

loc_000B47A1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x000B47DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B47D4u); } /* indirect call */
    }

loc_000B47DA: ;
    eax = MEM32(esi + 0x1E0);
    SET_LO8(ecx, MEM8(eax + 0x171));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48CF; /* jne: not equal / not zero */

loc_000B47EE: ;
    SET_LO8(ecx, MEM8(eax + 0x170));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B48CF; /* je: equal / zero */

loc_000B47FC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    ecx = esi + 0x30;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4833u); RECOMP_ABI_CALL(0x002650A0u, sub_002650A0); /* call 0x002650A0 */

loc_000B4833: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C8) = xmm2.f[0]; /* movss */

loc_000B48CF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B48D6u); RECOMP_ABI_CALL(0x000B45F0u, sub_000B45F0); /* call 0x000B45F0 */

loc_000B48D6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x178); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x174); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x174); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x174); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x170)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x178); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x170); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x178); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x170); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x68); /* addss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4990
 * Original: 0x000B4990 - 0x000B4D03 (883 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4990(void)
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

loc_000B4990: ;
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
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0x20C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20C), 2 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000B49C3; /* jne: not equal / not zero */

loc_000B49AA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x1E8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B49C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x1E8)) */

loc_000B49BB: ;
    fp_push(MEMF(ebx + 0x1E8)); /* fld float */
    goto loc_000B49C9;

loc_000B49C3: ;
    fp_push(MEMF(ebx + 0x1F0)); /* fld float */

loc_000B49C9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x307540)); /* fadd qword ptr [0x307540] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B49D4u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000B49D4: ;
    edx = MEM32(0x3C6070);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 0x13C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0x1E0);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    ecx = MEM32(eax + 0x6C);
    xmm6 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x88); /* subss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x30); /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x70);
    MEM32(0x3C6074) = edx;
    xmm0 = XMM_MEM(ebx + 0x30); /* movaps */
    eax = MEM32(ebx + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x50); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x60); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x80) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm7.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm5.f[0]; /* movss */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    MEM32(esp + 0x24) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000B4CE0; /* jg: greater (signed >) */

loc_000B4B20: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B4CCA; /* jle: less or equal (signed <=) */

loc_000B4B28: ;
    MEM32(esp + 0x20) = ecx;
    /* nop */

loc_000B4B30: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x130);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4B59u); RECOMP_ABI_CALL(0x000B8AE0u, sub_000B8AE0); /* call 0x000B8AE0 */

loc_000B4B59: ;
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4B6Cu); RECOMP_ABI_CALL(0x000B8AE0u, sub_000B8AE0); /* call 0x000B8AE0 */

loc_000B4B6C: ;
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x88); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x8C); /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x90); /* addss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x78); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x7C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x6C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x134)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x134) (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B4CB8; /* jb: below (unsigned <) */

loc_000B4CB0: ;
    MEM32(esp + 0x18) = 0;

loc_000B4CB8: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B4B30; /* jne: not equal / not zero */

loc_000B4CC2: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x2C);

loc_000B4CCA: ;
    esi = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B4B20; /* jle: less or equal (signed <=) */

loc_000B4CE0: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx + 0x13C) = ecx;
    MEM32(ebx + 0x140) = eax;
    edx = MEM32(0x3C6074);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x3C6070) = edx;
    POP32(esp, ebx);
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
 * sub_000B4D10
 * Original: 0x000B4D10 - 0x000B4D3A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4D10: ;
    PUSH32(esp, 0x15E);
    ecx = 0x3735B4;
    MEM8(0x3C607C) = 1;
    PUSH32(esp, 0x000B4D26u); RECOMP_ABI_CALL(0x00156730u, sub_00156730); /* call 0x00156730 */

loc_000B4D26: ;
    PUSH32(esp, 0x000B4D2Bu); RECOMP_ABI_CALL(0x000E6FC0u, sub_000E6FC0); /* call 0x000E6FC0 */

loc_000B4D2B: ;
    MEM32(0x3C6070) = eax;
    ecx = 0x3C6088;
    g_seh_ebp = ebp; sub_001D0830(); return; /* tail jmp 0x001D0830 */

}

/**
 * sub_000B4D40
 * Original: 0x000B4D40 - 0x000B5387 (1607 bytes, 343 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4D40(void)
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

loc_000B4D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x200)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B4E43u); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B4E43: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1D4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x1D8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x1D0); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x34); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x24); /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x38); /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esp + 0x54) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x40); /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x20); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x44); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x24); /* addss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_000B4F7A; /* ja: above (unsigned >) (xmm6.f[0] vs xmm2.f[0]) */

loc_000B4F77: ;
    xmm4 = xmm6; /* movaps */

loc_000B4F7A: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4F8E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_000B4F8B: ;
    xmm3 = xmm7; /* movaps */

loc_000B4F8E: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4FA8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_000B4F93: ;
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4FA0; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm2.f[0]) */

loc_000B4F98: ;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    goto loc_000B4FBF;

loc_000B4FA0: ;
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    goto loc_000B4FBF;

loc_000B4FA8: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B4FBF; /* ja: above (unsigned >) (xmm3.f[0] vs xmm7.f[0]) */

loc_000B4FB9: ;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */

loc_000B4FBF: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B4FCD; /* ja: above (unsigned >) (xmm5.f[0] vs xmm4.f[0]) */

loc_000B4FCA: ;
    xmm4 = xmm5; /* movaps */

loc_000B4FCD: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4FE1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_000B4FDE: ;
    xmm3 = xmm7; /* movaps */

loc_000B4FE1: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4FF9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_000B4FE6: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B500A; /* ja: above (unsigned >) (xmm5.f[0] vs xmm3.f[0]) */

loc_000B4FF1: ;
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    goto loc_000B5010;

loc_000B4FF9: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B5010; /* ja: above (unsigned >) (xmm3.f[0] vs xmm7.f[0]) */

loc_000B500A: ;
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */

loc_000B5010: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B501E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_000B501B: ;
    xmm4 = xmm0; /* movaps */

loc_000B501E: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm3 = xmm7; /* movaps */
    if ((_fca > _fcb)) goto loc_000B502F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm7.f[0]) */

loc_000B502C: ;
    xmm3 = xmm1; /* movaps */

loc_000B502F: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B504F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_000B5034: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5047; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B503F: ;
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    goto loc_000B5060;

loc_000B5047: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    goto loc_000B5060;

loc_000B504F: ;
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B5060; /* ja: above (unsigned >) (xmm1.f[0] vs xmm7.f[0]) */

loc_000B505A: ;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */

loc_000B5060: ;
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm4 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_000B506B; /* ja: above (unsigned >) (xmm2.f[0] vs xmm6.f[0]) */

loc_000B5068: ;
    xmm4 = xmm6; /* movaps */

loc_000B506B: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B507F; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm3.f[0]) */

loc_000B507C: ;
    xmm3 = xmm7; /* movaps */

loc_000B507F: ;
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5091; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_000B5084: ;
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B50A2; /* ja: above (unsigned >) (xmm2.f[0] vs xmm6.f[0]) */

loc_000B5089: ;
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    goto loc_000B50A8;

loc_000B5091: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B50A8; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_000B50A2: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_000B50A8: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm3 = xmm7; /* movaps */
    if ((_fca > _fcb)) goto loc_000B50B9; /* ja: above (unsigned >) (xmm7.f[0] vs xmm5.f[0]) */

loc_000B50B6: ;
    xmm3 = xmm5; /* movaps */

loc_000B50B9: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm2 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_000B50D0; /* ja: above (unsigned >) (xmm4.f[0] vs xmm6.f[0]) */

loc_000B50CD: ;
    xmm2 = xmm6; /* movaps */

loc_000B50D0: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B50EA; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000B50D5: ;
    _fca = xmm7.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B50E2; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm5.f[0]) */

loc_000B50DA: ;
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    goto loc_000B50FB;

loc_000B50E2: ;
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    goto loc_000B50FB;

loc_000B50EA: ;
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B50FB; /* ja: above (unsigned >) (xmm4.f[0] vs xmm6.f[0]) */

loc_000B50F5: ;
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */

loc_000B50FB: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = xmm5; /* movaps */
    if ((_fca > _fcb)) goto loc_000B510C; /* ja: above (unsigned >) (xmm5.f[0] vs xmm0.f[0]) */

loc_000B5109: ;
    xmm3 = xmm0; /* movaps */

loc_000B510C: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_000B511D; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_000B511A: ;
    xmm2 = xmm1; /* movaps */

loc_000B511D: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5137; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000B5122: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B512F; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_000B5127: ;
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    goto loc_000B5148;

loc_000B512F: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_000B5148;

loc_000B5137: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B5148; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_000B5142: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_000B5148: ;
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B516Du); RECOMP_ABI_CALL(0x000B2830u, sub_000B2830); /* call 0x000B2830 */

loc_000B516D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B5183; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B5180: ;
    xmm1 = xmm0; /* movaps */

loc_000B5183: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B5191; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000B518E: ;
    xmm2 = xmm0; /* movaps */

loc_000B5191: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B51B3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B51B0: ;
    xmm0 = xmm1; /* movaps */

loc_000B51B3: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esi + 0x190) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x150) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 0x154) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x158) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x164) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0x160) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x168) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x170) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x174) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x178) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x174); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x174); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x170); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x174); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x170); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x178); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0x170); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x68); /* addss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm2.f[0]; /* movss */
    MEM8(esi + 0x20C) = MEM8(esi + 0x20C) | 4;
    _fa = (uint32_t)(MEM8(esi + 0x20C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
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
 * sub_000B5390
 * Original: 0x000B5390 - 0x000B53E4 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B5390: ;
    eax = MEM32(ecx + 0x1E0);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xEC)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm1 = xmm0; /* movaps */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B53C2; /* jnp: not parity */

loc_000B53BE: ;
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */

loc_000B53C2: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x204) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B53DB; /* jnp: not parity */

loc_000B53D3: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */

loc_000B53DB: ;
    MEMF(ecx + 0x208) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B53F0
 * Original: 0x000B53F0 - 0x000B7C42 (10322 bytes, 1806 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B53F0(void)
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

loc_000B53F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1E0);
    ecx = MEM32(eax + 0x180);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = 0x3C6088;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5418u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000B5418: ;
    ecx = 0x3C608C;
    PUSH32(esp, 1);
    MEM32(0x3C6078) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B542Au); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000B542A: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5437u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000B5437: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0x203);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5447u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000B5447: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5454u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000B5454: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5461u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000B5461: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0x204);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5471u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000B5471: ;
    edx = MEM32(ebx + 0x1E0);
    eax = MEM32(edx + 0x28);
    ecx = MEM32(0x3C6078);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5486u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000B5486: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5493u); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_000B5493: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(0x310ED4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xC0); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B54CB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B54C2: ;
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */

loc_000B54CB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20D)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20D), 4 (8-bit) */
    ecx = MEM32(0x4F7414);
    MEM32(esp + 0x98) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000B54F4; /* jne: not equal / not zero */

loc_000B54E1: ;
    edx = MEM32(ebx + 0x1E0);
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B54F4; /* je: equal / zero */

loc_000B54EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5501; /* jne: not equal / not zero */

loc_000B54F4: ;
    PUSH32(esp, 0x1000000);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5501u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000B5501: ;
    eax = MEM32(ebx + 0x1E0);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B55F5; /* ja: above (unsigned >) */

loc_000B5513: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB7C44); /* switch: 10 entries, 8 targets */
    if (_jt == 0x000B551Au) goto loc_000B551A;
    if (_jt == 0x000B5521u) goto loc_000B5521;
    if (_jt == 0x000B5528u) goto loc_000B5528;
    if (_jt == 0x000B552Fu) goto loc_000B552F;
    if (_jt == 0x000B554Eu) goto loc_000B554E;
    if (_jt == 0x000B5586u) goto loc_000B5586;
    if (_jt == 0x000B55CEu) goto loc_000B55CE;
    if (_jt == 0x000B55F5u) goto loc_000B55F5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B551A: ;
    PUSH32(esp, 1);
    goto loc_000B55EA;

loc_000B5521: ;
    PUSH32(esp, 2);
    goto loc_000B55EA;

loc_000B5528: ;
    PUSH32(esp, 5);
    goto loc_000B55EA;

loc_000B552F: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B553Cu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000B553C: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5549u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000B5549: ;
    goto loc_000B55E8;

loc_000B554E: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5554u); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_000B5554: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B555Bu); RECOMP_ABI_CALL(0x000A6EB0u, sub_000A6EB0); /* call 0x000A6EB0 */

loc_000B555B: ;
    ecx = MEM32(ebx + 0x1E0);
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = ecx;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 1);
    if (CMP_GE(_fas, _fbs)) esi = eax; /* cmovge */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5578u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000B5578: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5584u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000B5584: ;
    goto loc_000B55E8;

loc_000B5586: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B558Cu); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_000B558C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5593u); RECOMP_ABI_CALL(0x000A6EB0u, sub_000A6EB0); /* call 0x000A6EB0 */

loc_000B5593: ;
    edx = MEM32(ebx + 0x1E0);
    ecx = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = ecx;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 1);
    if (CMP_GE(_fas, _fbs)) esi = eax; /* cmovge */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B55B0u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000B55B0: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B55BCu); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000B55BC: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0x207);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B55CCu); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000B55CC: ;
    goto loc_000B55E8;

loc_000B55CE: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B55DBu); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000B55DB: ;
    ecx = MEM32(0x3C6078);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B55E8u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000B55E8: ;
    PUSH32(esp, 0);

loc_000B55EA: ;
    ecx = MEM32(0x3C6078);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B55F5u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000B55F5: ;
    xmm0 = XMM_MEM(ebx + 0x30); /* movaps */
    eax = MEM32(ebx + 0x1E0);
    XMM_STORE(esp + 0x290, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    XMM_STORE(esp + 0x2A0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x50); /* movaps */
    XMM_STORE(esp + 0x2B0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x60); /* movaps */
    XMM_STORE(esp + 0x2C0, xmm0); /* movaps */
    _fa = (uint32_t)(MEM32(eax + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x114), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5692; /* jne: not equal / not zero */

loc_000B5634: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x120)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x11C)); /* movss */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x118)); /* movss */
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0x15C;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B568Au); RECOMP_ABI_CALL(0x000B8BE0u, sub_000B8BE0); /* call 0x000B8BE0 */

loc_000B568A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B5AD2;

loc_000B5692: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xE4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B56A2u); RECOMP_ABI_CALL(0x00131360u, sub_00131360); /* call 0x00131360 */

loc_000B56A2: ;
    ecx = MEM32(edi + 0xE4);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B56B2u); RECOMP_ABI_CALL(0x001313A0u, sub_001313A0); /* call 0x001313A0 */

loc_000B56B2: ;
    eax = MEM32(ebx + 0x1E0);
    _fa = (uint32_t)(MEM32(eax + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x114), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5908; /* jne: not equal / not zero */

loc_000B56C5: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    eax = MEM32(edi + 0xE4);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2B8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + 0x178); /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2B0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x178); /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x174); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x290)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x170); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2A4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x174); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C0); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2B4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 0x178); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x294)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 0x170); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2A8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 0x174); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C4); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x298)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + 0x170); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x2C8); /* addss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x124)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x128)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x120)); /* movss */
    MEMF(esp + 0x264) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x128)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x264); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x124)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xE0) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xE4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = MEMF(0x2FF028); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5A6F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(0x2FF028)) */

loc_000B58BC: ;
    ecx = esp + 0xE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B58C8u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000B58C8: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x120)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x124)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x128)); /* movss */
    goto loc_000B5A4F;

loc_000B5908: ;
    ecx = esp + 0x290;
    PUSH32(esp, ecx);
    ecx = esp + 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B591Cu); RECOMP_ABI_CALL(0x002651E0u, sub_002651E0); /* call 0x002651E0 */

loc_000B591C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xF0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x100)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0xF4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xF8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x118)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xF4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xF8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x118)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */

loc_000B5A4F: ;
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    goto loc_000B5A81;

loc_000B5A6F: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */

loc_000B5A81: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x150) = xmm4.f[0]; /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x154) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x158) = xmm3.f[0]; /* movss */

loc_000B5AD2: ;
    esi = MEM32(esp + 0x98);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x230) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5AEFu); RECOMP_ABI_CALL(0x001C33E0u, sub_001C33E0); /* call 0x001C33E0 */

loc_000B5AEF: ;
    MEM8(esp + 0x40) = LO8(eax);
    eax = MEM32(ebx + 0x1E0);
    SET_LO8(ecx, MEM8(eax + 0x68));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B09u); RECOMP_ABI_CALL(0x001C33A0u, sub_001C33A0); /* call 0x001C33A0 */

loc_000B5B09: ;
    eax = MEM32(ebx + 0x1E0);
    MEM32(esp + 0x3C) = 0;
    SET_LO8(edx, MEM8(eax + 0x68));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = MEM32(eax + 0x20);
    MEM8(esp + 0x37) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000B5B4D; /* jne: not equal / not zero */

loc_000B5B26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5B2F; /* je: equal / zero */

loc_000B5B2A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5B4D; /* jne: not equal / not zero */

loc_000B5B2F: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B3Du); RECOMP_ABI_CALL(0x001C35A0u, sub_001C35A0); /* call 0x001C35A0 */

loc_000B5B3D: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B45u); RECOMP_ABI_CALL(0x001C3570u, sub_001C3570); /* call 0x001C3570 */

loc_000B5B45: ;
    edi = MEM32(ebp + 8);
    MEM8(esp + 0x37) = 1;

loc_000B5B4D: ;
    eax = MEM32(ebx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x178)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B5B87; /* jp: parity */

loc_000B5B75: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B5BE8; /* jnp: not parity */

loc_000B5B87: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B93u); RECOMP_ABI_CALL(0x001C3490u, sub_001C3490); /* call 0x001C3490 */

loc_000B5B93: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5B9Fu); RECOMP_ABI_CALL(0x001C34F0u, sub_001C34F0); /* call 0x001C34F0 */

loc_000B5B9F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xB0); /* mulss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5BBBu); RECOMP_ABI_CALL(0x001C3450u, sub_001C3450); /* call 0x001C3450 */

loc_000B5BBB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xB0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x94); /* mulss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5BE0u); RECOMP_ABI_CALL(0x001C34B0u, sub_001C34B0); /* call 0x001C34B0 */

loc_000B5BE0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_000B5BE8: ;
    eax = MEM32(ebx + 0x1E0);
    SET_LO8(ecx, MEM8(eax + 0x171));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5C2D; /* jne: not equal / not zero */

loc_000B5BF8: ;
    ecx = MEM32(edi + 0xE4);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x294;
    PUSH32(esp, edx);
    ecx = esp + 0x398;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5C19u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000B5C19: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    esi = esp + 0x290;
    goto loc_000B5D05;

loc_000B5C2D: ;
    eax = MEM32(edi + 0xE4);
    xmm0 = XMM_MEM(eax + 0xD0); /* movaps */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x390, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0x3A0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x3B0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x3C0, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x118) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x120) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x124) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm1.f[0]; /* movss */
    esi = esp + 0xF0;

loc_000B5D05: ;
    edi = 0x3C60E8;
    ecx = 0x10;
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
    eax = MEM32(ebx + 0x1E0);
    edi = MEM32(eax + 0x6C);
    eax = MEM32(eax + 0x70);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x200)); /* movss */
    MEM32(esp + 0x1CC) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0x20C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20C), 2 (8-bit) */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3727C4); /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEM32(esp + 0x244) = edi;
    MEMF(esp + 0x174) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5D7C; /* jne: not equal / not zero */

loc_000B5D5A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x1E8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5D7C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x1E8)) */

loc_000B5D6B: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(ebx + 0x1E8), g_mxcsr, 1); /* cvttss2si */
    MEM32(esp + 0xAC) = ecx;
    goto loc_000B5D8B;

loc_000B5D7C: ;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(ebx + 0x1F0), g_mxcsr, 1); /* cvttss2si */
    MEM32(esp + 0xAC) = edx;

loc_000B5D8B: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x1E0);
    edx = esp + 0x1B8;
    PUSH32(esp, edx);
    eax = esp + 0x13C;
    PUSH32(esp, eax);
    MEM8(esp + 0x30) = 0;
    MEM8(esp + 0x31) = 0;
    MEM8(esp + 0x32) = 0;
    MEM8(esp + 0x2C) = 0;
    MEM8(esp + 0x2D) = 0;
    MEM8(esp + 0x2E) = 0;
    MEM8(esp + 0x28) = 0;
    MEM8(esp + 0x29) = 0;
    MEM8(esp + 0x2A) = 0;
    MEM8(esp + 0x38) = 0;
    MEM8(esp + 0x39) = 0;
    MEM8(esp + 0x3A) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5DECu); RECOMP_ABI_CALL(0x000B2830u, sub_000B2830); /* call 0x000B2830 */

loc_000B5DEC: ;
    eax = MEM32(ebx + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    MEMF(esp + 0x270) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    MEMF(esp + 0x274) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x278) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    MEMF(esp + 0x280) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    MEMF(esp + 0x284) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    MEMF(esp + 0x288) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    MEMF(esp + 0x268) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1A0)); /* movss */
    MEMF(esp + 0x2F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1A4)); /* movss */
    MEMF(esp + 0x2F4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1A8)); /* movss */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEMF(esp + 0x2FC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C0)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEMF(esp + 0x308) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C4)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x314) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C8)); /* movss */
    ecx = ebx;
    MEMF(esp + 0x318) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5F12u); RECOMP_ABI_CALL(0x000B3E50u, sub_000B3E50); /* call 0x000B3E50 */

loc_000B5F12: ;
    eax = MEM32(ebx + 0x1E0);
    xmm6.f[0] = (float)(int32_t)MEM32(eax + 0x2C); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE0)); /* movss */
    MEMF(esp + 0x48) = xmm6.f[0]; /* movss */
    xmm6.f[0] = (float)(int32_t)MEM32(eax + 0x30); /* cvtsi2ss */
    MEMF(esp + 0x78) = xmm6.f[0]; /* movss */
    xmm6.f[0] = (float)(int32_t)MEM32(eax + 0x34); /* cvtsi2ss */
    MEMF(esp + 0x7C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0xEC)); /* movss */
    MEMF(esp + 0x254) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    MEMF(esp + 0x20C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE4)); /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm6.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ebx + 0x20D)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20D), 8 (8-bit) */
    MEMF(esp + 0x1A0) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x19C) = xmm6.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000B600E; /* je: equal / zero */

loc_000B5F9E: ;
    eax = MEM32(ebx + 0x1E0);
    esi = MEM32(eax + 0x104);
    ecx = MEM32(eax + 0x108);
    edx = MEM32(eax + 0x10C);
    xmm7 = XMM_SCALAR(MEMF(eax + 0x110)); /* movss */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5FD2; /* je: equal / zero */

loc_000B5FCD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5FDB; /* jne: not equal / not zero */

loc_000B5FD2: ;
    MEMF(esp + 0x19C) = xmm6.f[0]; /* movss */

loc_000B5FDB: ;
    xmm6.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x74) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x1F8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ebx + 0x1F4); /* subss */
    xmm6.f[0] = xmm6.f[0] / xmm7.f[0]; /* divss */
    MEMF(esp + 0x1A0) = xmm6.f[0]; /* movss */
    goto loc_000B6059;

loc_000B600E: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(0x3735E0) = xmm6.f[0]; /* movss */
    MEMF(0x3735E4) = xmm6.f[0]; /* movss */
    MEMF(0x373600) = xmm7.f[0]; /* movss */
    MEMF(0x373604) = xmm6.f[0]; /* movss */
    MEMF(0x373620) = xmm7.f[0]; /* movss */
    MEMF(0x373624) = xmm7.f[0]; /* movss */
    MEMF(0x373640) = xmm6.f[0]; /* movss */
    MEMF(0x373644) = xmm7.f[0]; /* movss */

loc_000B6059: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x270); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x274); /* subss */
    xmm6 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = MEM32(ebx + 0x1E0);
    ecx = ZX8(MEM8(esp + 0x20));
    edx = ZX8(MEM8(esp + 0x21));
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x278); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x280); /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x284); /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x360) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x268)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x288); /* subss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1B0)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x130); /* subss */
    MEMF(esp + 0x348) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x301054)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x364) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1E8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm7.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD8)); /* movss */
    MEMF(esp + 0x1C8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xDC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xD8); /* subss */
    eax = ZX8(MEM8(esp + 0x22));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(esp + 0x1C));
    MEMF(esp + 0xB4) = xmm2.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(esp + 0x1D));
    MEMF(esp + 0x380) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1B4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x134); /* subss */
    MEMF(esp + 0x368) = xmm3.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 0x1E));
    MEMF(esp + 0x340) = xmm4.f[0]; /* movss */
    xmm4.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(esp + 0x18));
    MEMF(esp + 0x344) = xmm5.f[0]; /* movss */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(esp + 0x19));
    MEMF(esp + 0x24C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x384) = xmm6.f[0]; /* movss */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 0x1A));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(esp + 0x29));
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm7.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(esp + 0x28));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 0x2A));
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x160) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x164) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x168) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x180) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x184) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x188) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18C) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x160)); /* movss */
    ecx = MEM32(ebx + 0x1E0);
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x180); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18C); /* subss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x168)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x164)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0xC0); /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xCC); /* subss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x78)); /* movss */
    MEMF(esp + 0x1D8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x184); /* subss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x188); /* subss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0xC4); /* subss */
    eax = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x78); /* subss */
    MEMF(esp + 0x1D0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x1EC); /* subss */
    MEMF(esp + 0xEC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x1FC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x300C0C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xE0) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x310ED0); /* mulss */
    MEMF(esp + 0x1F0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x174)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x128)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x1E4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x130)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x94); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x124)); /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x12C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    MEMF(esp + 0x1F4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1F8) = xmm6.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x1E4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x230) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B64AC; /* jp: parity */

loc_000B649B: ;
    xmm0 = XMM_SCALAR(MEMF(0x310CC0)); /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */

loc_000B64AC: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B64C9; /* jp: parity */

loc_000B64B8: ;
    xmm1 = XMM_SCALAR(MEMF(0x310CBC)); /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */

loc_000B64C9: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x138)); /* movss */
    MEMF(esp + 0x238) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x134)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x140)); /* movss */
    MEMF(esp + 0x1EC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x13C)); /* movss */
    MEMF(esp + 0x250) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x240) = xmm4.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x208) = xmm3.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEMF(esp + 0x248) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1FC)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    PUSH32(esp, 8);
    ecx = 0x3C6088;
    MEMF(esp + 0x204) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x218) = xmm1.f[0]; /* movss */
    MEMF(0x3C6074) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6581u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000B6581: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(ebx + 0x1E0);
    SET_LO8(edx, MEM8(ecx + 0x171));
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    edi = MEM32(ebx + 0x138);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x24); /* divss */
    MEMF(esp + 0x178) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x74); /* divss */
    MEMF(esp + 0x1AC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esp + 0x4F) = LO8(edx);
    edx = MEM32(ebx + 0x134);
    MEM32(esp + 0x218) = eax;
    eax = MEM32(ebx + 0x130);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp + 0x1A8) = xmm0.f[0]; /* movss */
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xA0); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x258) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x154)); /* movss */
    MEMF(esp + 0x17C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x150)); /* movss */
    MEM32(esp + 0x1E0) = edx;
    edx = MEM32(eax + 0x144);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x1A4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x1DC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1D4) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000B668B; /* jle: less or equal (signed <=) */

loc_000B6679: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x144); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FE99C); /* subss */
    goto loc_000B668E;

loc_000B668B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000B668E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x204)); /* movss */
    MEMF(esp + 0x234) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x208)); /* movss */
    MEMF(esp + 0x210) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B7B92; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000B66C6: ;
    ecx = MEM32(ebx + 0x1E0);
    eax = MEM32(ecx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000B6779; /* jle: less or equal (signed <=) */

loc_000B66E3: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x1EC); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1FC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x300C0C)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x174); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x1E4); /* subss */
    MEMF(0x3C6074) = xmm3.f[0]; /* movss */
    eax = MEM32(ebx + 0x1E0);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x148)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x144); /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1A8) = xmm0.f[0]; /* movss */
    goto loc_000B6785;

loc_000B6779: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000B6785: ;
    eax = MEM32(esp + 0x218);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xAC) (32-bit) */
    MEM32(esp + 0x48) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000B7B6B; /* jg: greater (signed >) */

loc_000B679D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000B67B0;

loc_000B67A2: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edi = edi;

loc_000B67B0: ;
    edx = MEM32(ebx + 0x1E0);
    eax = MEM32(edx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B67FF; /* jle: less or equal (signed <=) */

loc_000B67C0: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B67FF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_000B67C5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    goto loc_000B7B4B;

loc_000B67FF: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x300)); /* movss */
    SET_LO8(eax, MEM8(ebx + 0x20C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x310) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x304)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x314) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x308)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x318) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1D0)); /* movss */
    MEMF(esp + 0x228) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x330) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1D4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x334) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1D8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2F4)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x338) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2F8)); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2F0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x320) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x324) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x328) = xmm3.f[0]; /* movss */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000B6949; /* jns: not sign (positive) */

loc_000B6900: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x254)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B692C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B6914: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x234)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    goto loc_000B695A;

loc_000B692C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B6949; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x20C)) */

loc_000B6936: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FE99C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x210); /* mulss */
    goto loc_000B6951;

loc_000B6949: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_000B6951: ;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */

loc_000B695A: ;
    eax = MEM32(esp + 0x1CC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000B7B13; /* js: sign (negative) */

loc_000B6968: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xA0) = eax;

loc_000B6970: ;
    eax = MEM32(ebx + 0x1E0);
    ecx = MEM32(eax + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A8)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_000B698F; /* jg: greater (signed >) */

loc_000B6989: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_000B698F: ;
    ecx = MEM32(0x3C6074);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    eax = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm5 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(0x3C6074) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39B193);
    xmm1 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1F4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1F8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1FC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    ecx = 0x3039;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1D0); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1D8); /* addss */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esp + 0x4F));
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x184); /* addss */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0x3D4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xEC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1F0); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x180); /* addss */
    xmm7 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x188); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x18C); /* addss */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(0x3C6074) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xCC); /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0xC4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC8); /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0xE0); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0xC0); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm7.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x80) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3D4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x9C); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x84) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6BD1; /* je: equal / zero */

loc_000B6B68: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    ecx = MEM32(esp + 0x1E0);
    MEMF(esp + 0x140) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    MEMF(esp + 0x144) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    MEMF(esp + 0x148) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEMF(esp + 0x160) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x164) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x168) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000B6C13; /* jne: not equal / not zero */

loc_000B6BC9: ;
    edi = MEM32(ebx + 0x130);
    goto loc_000B6C13;

loc_000B6BD1: ;
    edx = esp + 0x360;
    PUSH32(esp, edx);
    eax = esp + 0x274;
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6BEEu); RECOMP_ABI_CALL(0x000B8AE0u, sub_000B8AE0); /* call 0x000B8AE0 */

loc_000B6BEE: ;
    edx = esp + 0x34C;
    PUSH32(esp, edx);
    eax = esp + 0x290;
    PUSH32(esp, eax);
    ecx = esp + 0x174;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6C0Bu); RECOMP_ABI_CALL(0x000B8AE0u, sub_000B8AE0); /* call 0x000B8AE0 */

loc_000B6C0B: ;
    eax = MEM32(0x3C6074);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6C13: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39B193);
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = 0x3039;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x384)); /* movss */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    xmm1 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x380)); /* movss */
    eax = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39B193);
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x134); /* addss */
    MEMF(esp + 0x2D4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x138); /* addss */
    MEMF(esp + 0x2D8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    edx = 0x3039;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = edx;
    xmm0 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    eax = MEM32(ebx);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1E8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xB4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x130)); /* movss */
    MEMF(esp + 0x204) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    ecx = ebx;
    MEMF(esp + 0x2D0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x174); PUSH32(esp, 0x000B6D2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6D27u); } /* indirect call */
    }

loc_000B6D2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6D9F; /* je: equal / zero */

loc_000B6D31: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x204)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(ebx + 0x1E0);
    eax = MEM32(ecx + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x258); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C8); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6DA2; /* je: equal / zero */

loc_000B6D90: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x74) = xmm2.f[0]; /* movss */
    goto loc_000B6DA2;

loc_000B6D9F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_000B6DA2: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x8C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000B7AFA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs MEMF(esp + 0x8C)) */

loc_000B6DB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FE99C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000B7AFA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x2FE99C)) */

loc_000B6DC6: ;
    edx = MEM32(ebx + 0x1E0);
    eax = MEM32(edx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B6EA0; /* jle: less or equal (signed <=) */

loc_000B6DDA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1A4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B6DFA; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_000B6DE8: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x17C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B6EA0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000B6DFA: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x17C)); /* movss */
    eax = esp + 0x1D4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1A8);
    ecx = esp + 0x224;
    PUSH32(esp, ecx);
    edx = esp + 0x1E4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    eax = esp + 0x388;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x23C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B6E4Au); RECOMP_ABI_CALL(0x000B8CE0u, sub_000B8CE0); /* call 0x000B8CE0 */

loc_000B6E4A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x15C); /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x390)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x160); /* addss */
    MEMF(esp + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x394)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x164); /* addss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x144) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x148) = xmm0.f[0]; /* movss */
    goto loc_000B6EA9;

loc_000B6EA0: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x144)); /* movss */

loc_000B6EA9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x228)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x164)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x168)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1B4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1B8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x1B0)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x160)); /* movss */
    SET_LO8(eax, MEM8(ebx + 0x20D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x310); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x314)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x330); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x140); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x320); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x318); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x338); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x148); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x328); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x334)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x324)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x2E0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2E4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2E8) = xmm4.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000B7068; /* je: equal / zero */

loc_000B6FBD: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x3A8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x398); /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x3B8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C8); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1E4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000B7AFA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B6FFE: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xBC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000B7AFA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B7010: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x230)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B703F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B701E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x8C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1EC); /* mulss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    goto loc_000B7068;

loc_000B703F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xDC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B7068; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xDC)) */

loc_000B7049: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x8C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x238); /* mulss */
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */

loc_000B7068: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B70E8; /* je: equal / zero */

loc_000B706C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x200)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000B7AFA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm4.f[0]) */

loc_000B707E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x240)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000B7AFA; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000B7090: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x208)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B70BF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_000B709E: ;
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x8C); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x248); /* mulss */
    MEMF(esp + 0x8C) = xmm4.f[0]; /* movss */
    goto loc_000B70E8;

loc_000B70BF: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x250); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B70E8; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp + 0x250)) */

loc_000B70C9: ;
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x8C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x214); /* mulss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */

loc_000B70E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x2D0); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x2D4); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x260) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x350) = xmm5.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    if (TEST_Z(_fa, _fb)) goto loc_000B7236; /* je: equal / zero */

loc_000B717B: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x19C); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x1A0); /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x178)); /* movss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm5.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm5.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x1AC); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm5.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm6.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(0x3735E4) = xmm5.f[0]; /* movss */
    MEMF(0x373604) = xmm5.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x1AC); /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x178); /* addss */
    MEMF(0x373624) = xmm5.f[0]; /* movss */
    MEMF(0x373644) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x350)); /* movss */
    MEMF(0x3735E0) = xmm2.f[0]; /* movss */
    MEMF(0x373600) = xmm6.f[0]; /* movss */
    MEMF(0x373620) = xmm6.f[0]; /* movss */
    MEMF(0x373640) = xmm2.f[0]; /* movss */

loc_000B7236: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(0x3735D4) = xmm2.f[0]; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x3735D8) = xmm2.f[0]; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(0x3735F4) = xmm2.f[0]; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x3735F8) = xmm2.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x350); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(0x373614) = xmm2.f[0]; /* movss */
    MEMF(0x373610) = xmm7.f[0]; /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(0x373618) = xmm2.f[0]; /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(0x373630) = xmm2.f[0]; /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3735F4); /* subss */
    MEMF(0x373634) = xmm2.f[0]; /* movss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3735F8); /* subss */
    MEMF(0x3735D0) = xmm6.f[0]; /* movss */
    MEMF(0x3735F0) = xmm5.f[0]; /* movss */
    MEMF(0x373638) = xmm2.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ebx + 0x20C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20C), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B743A; /* je: equal / zero */

loc_000B7301: ;
    eax = MEM32(ebx + 0x1E0);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x260); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x268) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xD4); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x3735D4); /* addss */
    MEMF(0x3735D4) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x268); /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x350); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x3735D8); /* addss */
    MEMF(0x3735D8) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x3735F4); /* addss */
    MEMF(0x3735F4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x3735F8); /* addss */
    MEMF(0x3735F8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x373610)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x373610) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x373614); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x373634); /* addss */
    MEMF(0x373614) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x373618); /* addss */
    MEMF(0x373618) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x373630)); /* movss */
    MEMF(0x373634) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373638)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x3735D0) = xmm6.f[0]; /* movss */
    MEMF(0x3735F0) = xmm5.f[0]; /* movss */
    MEMF(0x373630) = xmm3.f[0]; /* movss */
    MEMF(0x373638) = xmm0.f[0]; /* movss */

loc_000B743A: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x000B7444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B743Eu); } /* indirect call */
    }

loc_000B7444: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7753; /* je: equal / zero */

loc_000B744C: ;
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    ecx = esp + 0xF8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7465u); RECOMP_ABI_CALL(0x002659B0u, sub_002659B0); /* call 0x002659B0 */

loc_000B7465: ;
    xmm6 = XMM_SCALAR(MEMF(0x3735D0)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x3735D8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3735D4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xF0); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x100)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xF4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x118)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x3735D4); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x3735D0); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(0x3735F4)); /* movss */
    MEMF(0x3735D4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x3735F8)); /* movss */
    MEMF(0x3735D8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(0x3735D0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xF0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3735F0); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x118)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3735F8); /* mulss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x3735F0); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    MEMF(0x3735F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373610)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xF0); /* mulss */
    MEMF(0x3735F4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x373618)); /* movss */
    MEMF(0x3735F8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x373614)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x373610); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x118)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x373618); /* mulss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x373610); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(0x373610) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373638)); /* movss */
    MEMF(0x373618) = xmm6.f[0]; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x110); /* mulss */
    MEMF(0x373614) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x373630)); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0xF0); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(0x373634)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x114); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x118); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_000B776B;

loc_000B7753: ;
    xmm0 = XMM_SCALAR(MEMF(0x373638)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x373634)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x373630)); /* movss */

loc_000B776B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2E0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3735D0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x3735D4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x3735F4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x3735D0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2E4)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x3735F4) = xmm5.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x3735D4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2E8)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(0x3735F8); /* addss */
    MEMF(0x3735F8) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x373610)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x373610) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x373614)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(0x3735D8); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(0x3735D8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x3735F0)); /* movss */
    MEMF(0x373614) = xmm5.f[0]; /* movss */
    MEMF(0x373634) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(0x373638) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(0x373618); /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x3735F0) = xmm7.f[0]; /* movss */
    MEMF(0x373618) = xmm5.f[0]; /* movss */
    MEMF(0x373630) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B787A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B7871: ;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */

loc_000B787A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B7891; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B7888: ;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */

loc_000B7891: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B78A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B789F: ;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */

loc_000B78A8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B78BF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B78B6: ;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */

loc_000B78BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esp + 0x23C) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x23C), g_mxcsr, 0); /* cvtss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    edx = eax;
    MEMF(esp + 0x21C) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x21C), g_mxcsr, 0); /* cvtss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    esi = eax;
    MEMF(esp + 0x25C) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x25C), g_mxcsr, 0); /* cvtss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    ecx = eax;
    MEMF(esp + 0x224) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x224), g_mxcsr, 0); /* cvtss2si */
    xmm0 = XMM_SCALAR(MEMF(0x3735D0)); /* movss */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x373650) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735D4)); /* movss */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x373654) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735D8)); /* movss */
    PUSH32(esp, 0x3C6138);
    MEMF(0x373658) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735E0)); /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    MEMF(0x3C6138) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735E4)); /* movss */
    PUSH32(esp, 0x373650);
    ecx = 0x3C6088;
    MEMF(0x3C613C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B79BFu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000B79BF: ;
    xmm0 = XMM_SCALAR(MEMF(0x3735F0)); /* movss */
    MEMF(0x373650) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735F4)); /* movss */
    MEMF(0x373654) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3735F8)); /* movss */
    PUSH32(esp, 0x3C6138);
    MEMF(0x373658) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373600)); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(0x3C6138) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373604)); /* movss */
    PUSH32(esp, 0x373650);
    ecx = 0x3C6088;
    MEMF(0x3C613C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A28u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000B7A28: ;
    xmm0 = XMM_SCALAR(MEMF(0x373610)); /* movss */
    MEMF(0x373650) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373614)); /* movss */
    MEMF(0x373654) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373618)); /* movss */
    PUSH32(esp, 0x3C6138);
    MEMF(0x373658) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373620)); /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(0x3C6138) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373624)); /* movss */
    PUSH32(esp, 0x373650);
    ecx = 0x3C6088;
    MEMF(0x3C613C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A91u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000B7A91: ;
    xmm0 = XMM_SCALAR(MEMF(0x373630)); /* movss */
    MEMF(0x373650) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373634)); /* movss */
    MEMF(0x373654) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373638)); /* movss */
    MEMF(0x373658) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373640)); /* movss */
    MEMF(0x3C6138) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373644)); /* movss */
    PUSH32(esp, 0x3C6138);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x373650);
    ecx = 0x3C6088;
    MEMF(0x3C613C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7AFAu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000B7AFA: ;
    MEM32(esp + 0xA0) = MEM32(esp + 0xA0) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6970; /* jne: not equal / not zero */

loc_000B7B07: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000B7B13: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000B7B4B: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x244);
    ecx = MEM32(esp + 0xAC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x48) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B67A2; /* jle: less or equal (signed <=) */

loc_000B7B6B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FE99C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_000B66C6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000B7B92: ;
    ecx = 0x3C6088;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7B9Cu); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000B7B9C: ;
    ecx = 0x3C6088;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BA6u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000B7BA6: ;
    eax = MEM32(esp + 0x40);
    esi = MEM32(esp + 0x22C);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BB9u); RECOMP_ABI_CALL(0x001C33A0u, sub_001C33A0); /* call 0x001C33A0 */

loc_000B7BB9: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20D)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20D), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7BD5; /* jne: not equal / not zero */

loc_000B7BC2: ;
    ecx = MEM32(ebx + 0x1E0);
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7BD5; /* je: equal / zero */

loc_000B7BD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7BE1; /* jne: not equal / not zero */

loc_000B7BD5: ;
    PUSH32(esp, 0x1010101);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BE1u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000B7BE1: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7BF5; /* je: equal / zero */

loc_000B7BE9: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BF5u); RECOMP_ABI_CALL(0x001C3570u, sub_001C3570); /* call 0x001C3570 */

loc_000B7BF5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B7C21; /* jp: parity */

loc_000B7C0F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B7C39; /* jnp: not parity */

loc_000B7C21: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C2Du); RECOMP_ABI_CALL(0x001C3450u, sub_001C3450); /* call 0x001C3450 */

loc_000B7C2D: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C39u); RECOMP_ABI_CALL(0x001C34B0u, sub_001C34B0); /* call 0x001C34B0 */

loc_000B7C39: ;
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
 * sub_000B7C70
 * Original: 0x000B7C70 - 0x000B7C7D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7C70: ;
    ecx = MEM32(0x3735A8);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7C80
 * Original: 0x000B7C80 - 0x000B7D08 (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7C80(void)
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

loc_000B7C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x1A0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x1A4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1A8) = eax;
    SET_LO8(eax, MEM8(ecx + 0x20C));
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 0x20C) = LO8(eax);
    fp_push(MEMF(ecx + 0x1A4)); /* fld float */
    fp_push(MEMF(ecx + 0x1A0)); /* fld float */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(ecx + 0x1A8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2FF028)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000B7CEB; /* jbe: below or equal (unsigned <=) */

loc_000B7CE7: ;
    SET_LO8(edx, 1);
    goto loc_000B7CED;

loc_000B7CEB: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000B7CED: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x20C) = LO8(edx);
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
 * sub_000B7D10
 * Original: 0x000B7D10 - 0x000B7D21 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D10(void)
{

loc_000B7D10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7D20u); RECOMP_ABI_CALL(0x000B53F0u, sub_000B53F0); /* call 0x000B53F0 */

loc_000B7D20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D30
 * Original: 0x000B7D30 - 0x000B7EFF (463 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D30(void)
{
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

loc_000B7D30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B7D3Du); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000B7D3D: ;
    SET_LO8(ecx, MEM8(esi + 0x20C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7EFB; /* je: equal / zero */

loc_000B7D4C: ;
    SET_LO8(eax, MEM8(esi + 0x20D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1E0);
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x174)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000B7D7D; /* je: equal / zero */

loc_000B7D6B: ;
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF224); /* mulss */
    goto loc_000B7D89;

loc_000B7D7D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000B7D89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEMF(esi + 0x1F0) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000B7DCA; /* je: equal / zero */

loc_000B7D95: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1F4); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B7DCA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B7DB6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1F4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */

loc_000B7DCA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7EC3; /* je: equal / zero */

loc_000B7DD3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1F0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x200)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1EC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3727C4); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B7E5A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B7DF8: ;
    fp_push(MEMF(esi + 0x1EC)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = MEM32(ebx + 0x6C);
    PUSH32(esp, 0x000B7E0Bu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000B7E0B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B7E25; /* jge: greater or equal (signed >=) */

loc_000B7E1F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_000B7E25: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1EC)); /* fadd dword ptr [esi + 0x1ec] */
    MEMF(esi + 0x1EC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, 0x000B7E38u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000B7E38: ;
    fp_pop(); /* fstp st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = MEM32(ebx + 0x70);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1FC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B7E53u); RECOMP_ABI_CALL(0x000B3500u, sub_000B3500); /* call 0x000B3500 */

loc_000B7E53: ;
    POP32(esp, edi);
    MEMF(esi + 0x1FC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B7E5A: ;
    edx = MEM32(esi + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x7C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B7EA7; /* jnp: not parity */

loc_000B7E78: ;
    fp_push(MEMF(0x3727C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B7E8Bu); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B7E8B: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1E4)); /* fsub dword ptr [esi + 0x1e4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000B7EA7; /* jb: below (unsigned <) */

loc_000B7E9D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x000B7EA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7EA1u); } /* indirect call */
    }

loc_000B7EA7: ;
    ecx = MEM32(esi + 0x1E0);
    SET_LO8(eax, MEM8(ecx + 0x171));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7EFA; /* je: equal / zero */

loc_000B7EB7: ;
    ecx = esi;
    PUSH32(esp, 0x000B7EBEu); RECOMP_ABI_CALL(0x000B4990u, sub_000B4990); /* call 0x000B4990 */

loc_000B7EBE: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B7EC3: ;
    fp_push(MEMF(0x3727C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x200)); /* fmul dword ptr [esi + 0x200] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B7ED8u); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B7ED8: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1E4)); /* fsub dword ptr [esi + 0x1e4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1E8)); /* fadd dword ptr [esi + 0x1e8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000B7EFA; /* jbe: below or equal (unsigned <=) */

loc_000B7EF0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000B7EFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7EF4u); } /* indirect call */
    }

loc_000B7EFA: ;
    POP32(esp, ebx);

loc_000B7EFB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7F00
 * Original: 0x000B7F00 - 0x000B7F2A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7F00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B7F0Du); RECOMP_ABI_CALL(0x001306D0u, sub_001306D0); /* call 0x001306D0 */

loc_000B7F0D: ;
    SET_LO8(eax, MEM8(esi + 0x20C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7F26; /* je: equal / zero */

loc_000B7F17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7F1F; /* jne: not equal / not zero */

loc_000B7F1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7F26; /* jne: not equal / not zero */

loc_000B7F1F: ;
    ecx = esi;
    PUSH32(esp, 0x000B7F26u); RECOMP_ABI_CALL(0x000B4D40u, sub_000B4D40); /* call 0x000B4D40 */

loc_000B7F26: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7F30
 * Original: 0x000B7F30 - 0x000B801E (238 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B7F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x15C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x15C), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000B8015; /* je: equal / zero */

loc_000B7F49: ;
    SET_LO8(eax, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi + -176;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8015; /* je: equal / zero */

loc_000B7F5A: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7F63u); RECOMP_ABI_CALL(0x000B9030u, sub_000B9030); /* call 0x000B9030 */

loc_000B7F63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8015; /* je: equal / zero */

loc_000B7F6B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x13C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x140); /* comiss */
    if ((_fca > _fcb)) goto loc_000B8015; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x140)) */

loc_000B7F80: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7F87u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000B7F87: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -80)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -76)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -72)); /* movss */
    edi = eax;
    eax = MEM32(ebx + 0xE4);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x64); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x68); /* subss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x40) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0x130);
    ecx = MEM32(eax + 0xF4);
    eax = esi + -176;
    MEM32(edi + 0x44) = ecx;
    MEM32(edi + 0x58) = 0xB7D10;
    MEM32(edi + 0x48) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x15D)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x15D), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8009; /* je: equal / zero */

loc_000B7FFA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8000u); RECOMP_ABI_CALL(0x000BD570u, sub_000BD570); /* call 0x000BD570 */

loc_000B8000: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8006u); RECOMP_ABI_CALL(0x000BD580u, sub_000BD580); /* call 0x000BD580 */

loc_000B8006: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8009: ;
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8015u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000B8015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8020
 * Original: 0x000B8020 - 0x000B8034 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8020: ;
    SET_LO8(eax, MEM8(ecx + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B802F; /* jne: not equal / not zero */

loc_000B802A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B802F: ;
    g_seh_ebp = ebp; sub_000B9030(); return; /* tail jmp 0x000B9030 */

}

/**
 * sub_000B8040
 * Original: 0x000B8040 - 0x000B8057 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8040: ;
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF50u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8052; /* jne: not equal / not zero */

loc_000B804D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B8052: ;
    g_seh_ebp = ebp; sub_000B9030(); return; /* tail jmp 0x000B9030 */

}

/**
 * sub_000B8060
 * Original: 0x000B8060 - 0x000B8069 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8060: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000B4780(); return; /* tail jmp 0x000B4780 */

}

/**
 * sub_000B8070
 * Original: 0x000B8070 - 0x000B808B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8070(void)
{

loc_000B8070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x000B8080u); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000B8080: ;
    ecx = esi;
    PUSH32(esp, 0x000B8087u); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B8087: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8090
 * Original: 0x000B8090 - 0x000B80B0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8090(void)
{

loc_000B8090: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x000B80A5u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000B80A5: ;
    ecx = esi;
    PUSH32(esp, 0x000B80ACu); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B80AC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B80B0
 * Original: 0x000B80B0 - 0x000B80FF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B80B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B80B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    esi = ecx;
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B80F1u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000B80F1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B80F8u); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B80F8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8100
 * Original: 0x000B8100 - 0x000B814F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    esi = ecx;
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8141u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000B8141: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8148u); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B8148: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8150
 * Original: 0x000B8150 - 0x000B819F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    esi = ecx;
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8191u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000B8191: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8198u); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B8198: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B81A0
 * Original: 0x000B81A0 - 0x000B81D7 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B81A0(void)
{

loc_000B81A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B81B3u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000B81B3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B81BFu); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000B81BF: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B81CBu); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000B81CB: ;
    ecx = edi;
    PUSH32(esp, 0x000B81D2u); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B81D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B81E0
 * Original: 0x000B81E0 - 0x000B8245 (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B81E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B81E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x3735A4;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x218;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B81FC; /* je: equal / zero */

loc_000B81F4: ;
    esi = eax + -544;
    goto loc_000B81FE;

loc_000B81FC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B81FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8242; /* je: equal / zero */

loc_000B8202: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_000B8210;

    /* nop */

loc_000B8210: ;
    ecx = MEM32(esi + 0x1E0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B821Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8218u); } /* indirect call */
    }

loc_000B821B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8229; /* jne: not equal / not zero */

loc_000B821F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000B8229u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8223u); } /* indirect call */
    }

loc_000B8229: ;
    esi = MEM32(esi + 0x224);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B823B; /* je: equal / zero */

loc_000B8233: ;
    _fb = (uint32_t)(0xFFFFFDE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFDE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B823D;

loc_000B823B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B823D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8210; /* jne: not equal / not zero */

loc_000B8241: ;
    POP32(esp, ebx);

loc_000B8242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8250
 * Original: 0x000B8250 - 0x000B85DD (909 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8250: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1E0);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x7C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B826F; /* jp: parity */

loc_000B826B: ;
    SET_LO8(eax, 1);
    goto loc_000B8271;

loc_000B826F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000B8271: ;
    SET_LO8(edx, MEM8(esi + 0x20D));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x20D));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20D) = LO8(ebx);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xE0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B82D4; /* jp: parity */

loc_000B829D: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xE4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B82D4; /* jp: parity */

loc_000B82AE: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xD8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B82D4; /* jp: parity */

loc_000B82BF: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xDC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B82D4; /* jp: parity */

loc_000B82D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000B82D6;

loc_000B82D4: ;
    SET_LO8(eax, 1);

loc_000B82D6: ;
    SET_LO8(ebx, MEM8(esi + 0x20C));
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20C) = LO8(ebx);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xEC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    SET_LO8(edx, LO8(ebx));
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8313; /* jp: parity */

loc_000B82FE: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8313; /* jp: parity */

loc_000B830F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000B8315;

loc_000B8313: ;
    SET_LO8(eax, 1);

loc_000B8315: ;
    SET_LO8(eax, LO8(eax) << 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x20C) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x20D));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20D) = LO8(eax);
    edx = MEM32(ecx + 0x104);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8357; /* jl: less (signed <) */

loc_000B834E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B8357; /* jg: greater (signed >) */

loc_000B8353: ;
    SET_LO8(edx, 1);
    goto loc_000B8359;

loc_000B8357: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000B8359: ;
    SET_LO8(edx, LO8(edx) << 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20D) = LO8(edx);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x124)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B83B1; /* jp: parity */

loc_000B837A: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x128)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B83B1; /* jp: parity */

loc_000B838B: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x12C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B83B1; /* jp: parity */

loc_000B839C: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x130)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B83B1; /* jp: parity */

loc_000B83AD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000B83B3;

loc_000B83B1: ;
    SET_LO8(eax, 1);

loc_000B83B3: ;
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20D) = LO8(ebx);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x138)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x310C7C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000B83EA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs MEMF(0x310C7C)) */

loc_000B83D5: ;
    xmm1 = XMM_SCALAR(MEMF(0x310C78)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x13C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000B83EA; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs MEMF(ecx + 0x13C)) */

loc_000B83E6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000B83EC;

loc_000B83EA: ;
    SET_LO8(eax, 1);

loc_000B83EC: ;
    SET_LO8(eax, LO8(eax) << 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20D) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xD0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8421; /* jp: parity */

loc_000B840C: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xD4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8421; /* jp: parity */

loc_000B841D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000B8423;

loc_000B8421: ;
    SET_LO8(eax, 1);

loc_000B8423: ;
    SET_LO8(edx, MEM8(esp + 0xF));
    SET_LO8(eax, LO8(eax) << 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x20C) = LO8(eax);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xA0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */
    eax = MEM32(ecx + 0x98);
    ecx = esi;
    MEM32(esi + 0x1C0) = eax;
    MEMF(esi + 0x1C4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B8469u); RECOMP_ABI_CALL(0x000B4780u, sub_000B4780); /* call 0x000B4780 */

loc_000B8469: ;
    ecx = MEM32(esi + 0x1E0);
    SET_LO8(eax, MEM8(ecx + 0x171));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B84E1; /* je: equal / zero */

loc_000B8479: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3727C4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE9A0); /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B849B; /* jne: not equal / not zero */

loc_000B8496: ;
    eax = 1;

loc_000B849B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x6C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x6C))); }
    PUSH32(esp, 0x400);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 0x70));
    ecx = edi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x310ED8);
    MEM32(esi + 0x134) = edi;
    PUSH32(esp, 0x000B84C0u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000B84C0: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B84D9; /* je: equal / zero */

loc_000B84C9: ;
    PUSH32(esp, 0xE8840);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B84D7u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_000B84D7: ;
    goto loc_000B84DB;

loc_000B84D9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B84DB: ;
    MEM32(esi + 0x130) = ebx;

loc_000B84E1: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(esi + 0x110) = 0;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_000B856F; /* ja: above (unsigned >) */

loc_000B84F8: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xB85E0); /* switch: 10 entries, 6 targets */
    if (_jt == 0x000B84FFu) goto loc_000B84FF;
    if (_jt == 0x000B8523u) goto loc_000B8523;
    if (_jt == 0x000B8536u) goto loc_000B8536;
    if (_jt == 0x000B8549u) goto loc_000B8549;
    if (_jt == 0x000B855Cu) goto loc_000B855C;
    if (_jt == 0x000B856Fu) goto loc_000B856F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B84FF: ;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = 0x12;
    if (CMP_NE(_fa, _fb)) goto loc_000B8513; /* jne: not equal / not zero */

loc_000B850C: ;
    ecx = 0x20;
    goto loc_000B8574;

loc_000B8513: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8574; /* je: equal / zero */

loc_000B8517: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8574; /* jne: not equal / not zero */

loc_000B851C: ;
    ecx = 0x11;
    goto loc_000B8574;

loc_000B8523: ;
    eax = 0x15;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    goto loc_000B8580;

loc_000B8536: ;
    eax = 0x1C;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    goto loc_000B8580;

loc_000B8549: ;
    eax = 0x1D;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    goto loc_000B8580;

loc_000B855C: ;
    eax = 6;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    goto loc_000B8580;

loc_000B856F: ;
    ecx = 0x12;

loc_000B8574: ;
    MEM32(esi + 0x114) = ecx;
    MEM32(esi + 0x118) = ecx;

loc_000B8580: ;
    ecx = esi;
    PUSH32(esp, 0x000B8587u); RECOMP_ABI_CALL(0x000B4510u, sub_000B4510); /* call 0x000B4510 */

loc_000B8587: ;
    eax = MEM32(esi + 0x1E0);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xEC)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm1 = xmm0; /* movaps */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B85B9; /* jnp: not parity */

loc_000B85B5: ;
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */

loc_000B85B9: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esi + 0x204) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B85D2; /* jnp: not parity */

loc_000B85CA: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */

loc_000B85D2: ;
    MEMF(esi + 0x208) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8610
 * Original: 0x000B8610 - 0x000B880D (509 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8610(void)
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

loc_000B8610: ;
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
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8623u); RECOMP_ABI_CALL(0x000BBB90u, sub_000BBB90); /* call 0x000BBB90 */

loc_000B8623: ;
    edi = esi + 0xB0;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8630u); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000B8630: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi) = 0x310CC8;
    edi = MEM32(esi + 0x210);
    MEM32(esi + 0x1E0) = eax;
    edi = edi & 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x310D20;
    MEM32(esi + 8) = 0x310D18;
    MEM32(esi + 0x210) = edi;
    MEM32(esi + 0x130) = ebx;
    MEMF(esi + 0x1A8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1A4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1A0) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1E0);
    MEM32(esi + 0x28) = 0xB8060;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x7C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B86A3; /* jp: parity */

loc_000B8699: ;
    xmm0 = XMM_SCALAR(MEMF(0x310CB8)); /* movss */
    goto loc_000B86B0;

loc_000B86A3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3727C4); /* mulss */

loc_000B86B0: ;
    SET_LO8(ecx, MEM8(esi + 0x20C));
    SET_LO8(eax, MEM8(esi + 0x20D));
    SET_LO8(ecx, LO8(ecx) & 0xC3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & 0xBE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEMF(esi + 0x1E8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x20C) = LO8(ecx);
    MEM8(esi + 0x20D) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B86DDu); RECOMP_ABI_CALL(0x000B96C0u, sub_000B96C0); /* call 0x000B96C0 */

loc_000B86DD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = esp + 0x10;
    MEMF(esi + 0x1E4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B875Au); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_000B875A: ;
    eax = MEM32(esi + 0x1E0);
    ecx = MEM32(eax + 0x74);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x200) = ecx;
    MEMF(esi + 0x1EC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(eax + 0x172)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x172), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8791; /* je: equal / zero */

loc_000B8784: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3727C4); /* mulss */

loc_000B8791: ;
    MEMF(esi + 0x1F0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x134) = ebx;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B87DE; /* je: equal / zero */

loc_000B87C0: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esi;
    MEMF(esi + 0x1FC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B87D3u); RECOMP_ABI_CALL(0x000B8250u, sub_000B8250); /* call 0x000B8250 */

loc_000B87D3: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000B87DE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B87E3u); RECOMP_ABI_CALL(0x000E6FC0u, sub_000E6FC0); /* call 0x000E6FC0 */

loc_000B87E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000B87F5; /* jge: greater or equal (signed >=) */

loc_000B87EF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_000B87F5: ;
    ecx = esi;
    MEMF(esi + 0x1FC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8802u); RECOMP_ABI_CALL(0x000B8250u, sub_000B8250); /* call 0x000B8250 */

loc_000B8802: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_000B8810
 * Original: 0x000B8810 - 0x000B881A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8810: ;
    ecx = 0x3735A4;
    g_seh_ebp = ebp; sub_000B9200(); return; /* tail jmp 0x000B9200 */

}

/**
 * sub_000B8820
 * Original: 0x000B8820 - 0x000B885E (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8820: ;
    SET_LO8(eax, MEM8(0x3C607C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8846; /* je: equal / zero */

loc_000B8829: ;
    ecx = 0x3735A4;
    PUSH32(esp, 0x000B8833u); RECOMP_ABI_CALL(0x000B9200u, sub_000B9200); /* call 0x000B9200 */

loc_000B8833: ;
    PUSH32(esp, 0);
    ecx = 0x3735B4;
    PUSH32(esp, 0x000B883Fu); RECOMP_ABI_CALL(0x00156730u, sub_00156730); /* call 0x00156730 */

loc_000B883F: ;
    MEM8(0x3C607C) = 0;

loc_000B8846: ;
    PUSH32(esp, 0x310F30);
    PUSH32(esp, 0x000B8850u); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_000B8850: ;
    PUSH32(esp, 0x310F04);
    PUSH32(esp, 0x000B885Au); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_000B885A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8860
 * Original: 0x000B8860 - 0x000B88AA (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8860: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3735A8);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0x310EC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8894; /* je: equal / zero */

loc_000B887B: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3735A4;
    PUSH32(esp, 0x000B8890u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000B8890: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8894: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3735A4;
    PUSH32(esp, 0x000B88A6u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000B88A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B88B0
 * Original: 0x000B88B0 - 0x000B88F7 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B88B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x3735A8);
    MEM32(esp) = 0x310EC8;
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B88E1; /* je: equal / zero */

loc_000B88C7: ;
    eax = ecx + 0x220;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3735A4;
    PUSH32(esp, 0x000B88DDu); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000B88DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B88E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3735A4;
    PUSH32(esp, 0x000B88F3u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000B88F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8900
 * Original: 0x000B8900 - 0x000B898C (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8900: ;
    edx = MEM32(0x3735A8);
    eax = MEM32(edx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8924; /* jl: less (signed <) */

loc_000B891F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B892C; /* ja: above (unsigned >) */

loc_000B8924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8986; /* jne: not equal / not zero */

loc_000B8928: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8986; /* jbe: below or equal (unsigned <=) */

loc_000B892C: ;
    esi = 0x3735A4;
    PUSH32(esp, edi);
    ecx = 0x3735A4;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x218;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000B8942u); RECOMP_ABI_CALL(0x000B9290u, sub_000B9290); /* call 0x000B9290 */

loc_000B8942: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B894E; /* je: equal / zero */

loc_000B8946: ;
    ecx = eax + 0x220;
    goto loc_000B8950;

loc_000B894E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B8950: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B895C; /* je: equal / zero */

loc_000B8954: ;
    eax = esi + 0x220;
    goto loc_000B895E;

loc_000B895C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B895E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x3735A4;
    PUSH32(esp, 0x000B896Au); RECOMP_ABI_CALL(0x001568B0u, sub_001568B0); /* call 0x001568B0 */

loc_000B896A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8975; /* je: equal / zero */

loc_000B896E: ;
    _fb = (uint32_t)(0xFFFFFDE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFDE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B8977;

loc_000B8975: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B8977: ;
    ecx = 0x3735A4;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x218;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8988; /* jne: not equal / not zero */

loc_000B8986: ;
    eax = ebx;

loc_000B8988: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8990
 * Original: 0x000B8990 - 0x000B89DA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    MEM32(esi) = 0x310D20;
    MEM32(esi + 8) = 0x310D18;
    MEM32(edi) = 0x310CC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000B89CA; /* je: equal / zero */

loc_000B89B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B89BDu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000B89BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x130) = 0;

loc_000B89CA: ;
    ecx = edi;
    PUSH32(esp, 0x000B89D1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000B89D1: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000B9410(); return; /* tail jmp 0x000B9410 */

}

/**
 * sub_000B89E0
 * Original: 0x000B89E0 - 0x000B89E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B89E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B89E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000B8F40(); return; /* tail jmp 0x000B8F40 */

}

/**
 * sub_000B89F0
 * Original: 0x000B89F0 - 0x000B89FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B89F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B89F0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000B8F40(); return; /* tail jmp 0x000B8F40 */

}

/**
 * sub_000B8A00
 * Original: 0x000B8A00 - 0x000B8A2C (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A00: ;
    SET_LO8(edx, MEM8(ecx + 0x60));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A29; /* je: equal / zero */

loc_000B8A09: ;
    SET_LO8(edx, MEM8(ecx + 0x61));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x62));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, MEM8(esp + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A22; /* je: equal / zero */

loc_000B8A18: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A28; /* je: equal / zero */

loc_000B8A1C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B8A22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8A28; /* jne: not equal / not zero */

loc_000B8A26: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000B8A28: ;
    POP32(esp, ebx);

loc_000B8A29: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8A30
 * Original: 0x000B8A30 - 0x000B8A38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8A30: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x150)); return; /* indirect tail jmp */

}

/**
 * sub_000B8A40
 * Original: 0x000B8A40 - 0x000B8A48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A40: ;
    MEM8(ecx + 0x20C) = MEM8(ecx + 0x20C) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0x20C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8A50
 * Original: 0x000B8A50 - 0x000B8A6B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A50: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x20D));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x20D) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8A70
 * Original: 0x000B8A70 - 0x000B8A79 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A70: ;
    SET_LO8(eax, MEM8(ecx + 0x20D));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8A80
 * Original: 0x000B8A80 - 0x000B8A8B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A80: ;
    SET_LO8(eax, MEM8(ecx + 0x20C));
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8A90
 * Original: 0x000B8A90 - 0x000B8A9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A90: ;
    SET_LO8(eax, MEM8(ecx + 0x20C));
    SET_LO8(eax, LO8(eax) >> 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8AA0
 * Original: 0x000B8AA0 - 0x000B8AAC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8AA0: ;
    SET_LO8(eax, MEM8(ecx + 0x20C));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8AB0
 * Original: 0x000B8AB0 - 0x000B8ABC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8AB0: ;
    SET_LO8(eax, MEM8(ecx + 0x20C));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8AC0
 * Original: 0x000B8AC0 - 0x000B8ACD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AC0(void)
{

loc_000B8AC0: ;
    eax = MEM32(ecx + 0x1E0);
    SET_LO8(eax, MEM8(eax + 0xFC));
    esp += 4; return; /* ret */

}

/**
 * sub_000B8AD0
 * Original: 0x000B8AD0 - 0x000B8ADE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8AD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8ADB; /* je: equal / zero */

loc_000B8AD4: ;
    eax = ecx + 0xB0;
    esp += 4; return; /* ret */

loc_000B8ADB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8AE0
 * Original: 0x000B8AE0 - 0x000B8BDA (250 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8AE0: ;
    eax = MEM32(0x3C6074);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39B193);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = 0x3039;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = edx;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    PUSH32(esp, esi);
    esi = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi & 0x7FFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x3F800000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = esi;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(0x3C6074);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    edx = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = edx;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8BE0
 * Original: 0x000B8BE0 - 0x000B8CD4 (244 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8BE0(void)
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

loc_000B8BE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esp + 0x24);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = xmm5; /* movaps */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8CE0
 * Original: 0x000B8CE0 - 0x000B8F31 (593 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B8CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    xmm7 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    xmm1 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x3C6074) = xmm0.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    eax = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = eax;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    eax = MEM32(ebp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    ebx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx & 0x7FFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x3F800000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ebx;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    ebx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx & 0x7FFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x3F800000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ebx;
    xmm2 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x3C6074) = xmm4.f[0]; /* movss */
    edx = MEM32(0x3C6074);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    ecx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    xmm4 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    edx = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C6074) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x39B193);
    xmm5 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    ecx = 0x3039;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    MEM32(0x3C6074) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(ebp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    xmm6 = XMM_SCALAR(MEMF(0x3C6074)); /* movss */
    ecx = MEM32(ebp + 0x1C);
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x301050)); /* fmul dword ptr [0x301050] */
    POP32(esp, ebx);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) - fp_top()); /* fsubr dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm4 = xmm2; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ebp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(0x3C6074) = xmm7.f[0]; /* movss */
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
 * sub_000B8F40
 * Original: 0x000B8F40 - 0x000B8F9F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    MEM32(esi) = 0x310D20;
    MEM32(esi + 8) = 0x310D18;
    MEM32(edi) = 0x310CC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8F7A; /* je: equal / zero */

loc_000B8F67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8F6Du); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000B8F6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x130) = 0;

loc_000B8F7A: ;
    ecx = edi;
    PUSH32(esp, 0x000B8F81u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000B8F81: ;
    ecx = esi;
    PUSH32(esp, 0x000B8F88u); RECOMP_ABI_CALL(0x000B9410u, sub_000B9410); /* call 0x000B9410 */

loc_000B8F88: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8F98; /* je: equal / zero */

loc_000B8F8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B8F95u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000B8F95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8F98: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8FA0
 * Original: 0x000B8FA0 - 0x000B902C (140 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8FA0(void)
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

loc_000B8FA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000B9029; /* jb: below (unsigned <) */

loc_000B9023: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000B9029: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9030
 * Original: 0x000B9030 - 0x000B91FD (461 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9030: ;
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
    _fa = (uint32_t)(MEM8(esi + 0x20C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x20C), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000B9074; /* je: equal / zero */

loc_000B9047: ;
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(esi + 0x110));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(ebx + 0xE4);
    SET_LO8(eax, MEM8(eax + 0x39EC));
    if (CMP_EQ(_fa, _fb)) goto loc_000B9083; /* je: equal / zero */

loc_000B9060: ;
    SET_LO8(ecx, MEM8(esi + 0x111));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x112));
    if (CMP_EQ(_fa, _fb)) goto loc_000B907F; /* je: equal / zero */

loc_000B9070: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9083; /* je: equal / zero */

loc_000B9074: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000B907F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9074; /* je: equal / zero */

loc_000B9083: ;
    ecx = MEM32(esi + 0x1E0);
    SET_LO8(eax, MEM8(ecx + 0x171));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B909E; /* je: equal / zero */

loc_000B9093: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000B909E: ;
    eax = MEM32(esi + 0x1E0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x12C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x124)); /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0x190;
    PUSH32(esp, ebx);
    edi = esi + 0x180;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B90DDu); RECOMP_ABI_CALL(0x000B3AB0u, sub_000B3AB0); /* call 0x000B3AB0 */

loc_000B90DD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9074; /* je: equal / zero */

loc_000B90E4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x160)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x150); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x164)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x154); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x168)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x158); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    esi = MEM32(esi + 0x1E0);
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x12C)); /* movss */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x124)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B91F1u); RECOMP_ABI_CALL(0x000B3880u, sub_000B3880); /* call 0x000B3880 */

loc_000B91F1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9200
 * Original: 0x000B9200 - 0x000B9260 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = esi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = 0x310EC8;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9225; /* je: equal / zero */

loc_000B921D: ;
    eax = esi + -536;
    goto loc_000B9227;

loc_000B9225: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9227: ;
    eax = MEM32(eax + 0x224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B923F; /* je: equal / zero */

loc_000B9231: ;
    _fb = (uint32_t)(0xFFFFFDE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFDE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_000B923F; /* je: equal / zero */

loc_000B9238: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B9241;

loc_000B923F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9241: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B924Fu); RECOMP_ABI_CALL(0x001565A0u, sub_001565A0); /* call 0x001565A0 */

loc_000B924F: ;
    MEM32(esi + 0xC) = edi;
    MEM32(edi) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9260
 * Original: 0x000B9260 - 0x000B9290 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9260: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9274; /* je: equal / zero */

loc_000B926C: ;
    esi = eax + -544;
    goto loc_000B9276;

loc_000B9274: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9276: ;
    ecx = esi;
    PUSH32(esp, 0x000B927Du); RECOMP_ABI_CALL(0x000B8990u, sub_000B8990); /* call 0x000B8990 */

loc_000B927D: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B9286u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9283u); } /* indirect call */
    }

loc_000B9286: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9290
 * Original: 0x000B9290 - 0x000B92E2 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9290: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B929Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9299u); } /* indirect call */
    }

loc_000B929C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B92C9; /* je: equal / zero */

loc_000B92A2: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B92AEu); RECOMP_ABI_CALL(0x000B8610u, sub_000B8610); /* call 0x000B8610 */

loc_000B92AE: ;
    POP32(esp, edi);
    MEM32(esi + 0x220) = 0;
    MEM32(esi + 0x224) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B92C9: ;
    edx = edi + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B92DB; /* je: equal / zero */

loc_000B92D0: ;
    eax = edi + -536;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B92DB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B92F0
 * Original: 0x000B92F0 - 0x000B92F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B92F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B92F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B9300
 * Original: 0x000B9300 - 0x000B9305 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9300: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B9310
 * Original: 0x000B9310 - 0x000B9315 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9310(void)
{

loc_000B9310: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B9320
 * Original: 0x000B9320 - 0x000B935A (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    eax = MEM32(edi + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x184);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_000B9355; /* je: equal / zero */

loc_000B9334: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B9340u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B933Du); } /* indirect call */
    }

loc_000B9340: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B9347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9344u); } /* indirect call */
    }

loc_000B9347: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B934Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B934Bu); } /* indirect call */
    }

loc_000B934E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9355; /* je: equal / zero */

loc_000B9352: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9355: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B9360
 * Original: 0x000B9360 - 0x000B9380 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9360: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9370; /* je: equal / zero */

loc_000B9367: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B9375; /* jle: less or equal (signed <=) */

loc_000B9370: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B9375: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x184);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9380
 * Original: 0x000B9380 - 0x000B9390 (16 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9380: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B9390
 * Original: 0x000B9390 - 0x000B9395 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9390: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B93A0
 * Original: 0x000B93A0 - 0x000B93A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B93A0(void)
{

loc_000B93A0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B93B0
 * Original: 0x000B93B0 - 0x000B93E4 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B93B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B93B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    eax = MEM32(edi + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xDC);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B93CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B93CBu); } /* indirect call */
    }

loc_000B93CE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B93D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B93D2u); } /* indirect call */
    }

loc_000B93D5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B93DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B93D9u); } /* indirect call */
    }

loc_000B93DC: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B93F0
 * Original: 0x000B93F0 - 0x000B9410 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B93F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B93F0: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9400; /* je: equal / zero */

loc_000B93F7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B9405; /* jle: less or equal (signed <=) */

loc_000B9400: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B9405: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xDC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9410
 * Original: 0x000B9410 - 0x000B9422 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9410: ;
    MEM32(ecx) = 0x310F60;
    MEM32(ecx + 8) = 0x310F54;
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000B9430
 * Original: 0x000B9430 - 0x000B9431 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9430(void)
{

loc_000B9430: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9440
 * Original: 0x000B9440 - 0x000B9441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9440(void)
{

loc_000B9440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9450
 * Original: 0x000B9450 - 0x000B9451 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9450(void)
{

loc_000B9450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9460
 * Original: 0x000B9460 - 0x000B9461 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9460(void)
{

loc_000B9460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9470
 * Original: 0x000B9470 - 0x000B9471 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9470(void)
{

loc_000B9470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9480
 * Original: 0x000B9480 - 0x000B9483 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9480(void)
{

loc_000B9480: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9490
 * Original: 0x000B9490 - 0x000B9493 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9490: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94A0
 * Original: 0x000B94A0 - 0x000B94A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94B0
 * Original: 0x000B94B0 - 0x000B94B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94C0
 * Original: 0x000B94C0 - 0x000B94C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94D0
 * Original: 0x000B94D0 - 0x000B94D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94E0
 * Original: 0x000B94E0 - 0x000B94E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94F0
 * Original: 0x000B94F0 - 0x000B94F3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94F0(void)
{

loc_000B94F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9500
 * Original: 0x000B9500 - 0x000B9503 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9500: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9510
 * Original: 0x000B9510 - 0x000B9513 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9510: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9520
 * Original: 0x000B9520 - 0x000B9523 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9520: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9530
 * Original: 0x000B9530 - 0x000B9533 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9530: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9540
 * Original: 0x000B9540 - 0x000B9541 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9540(void)
{

loc_000B9540: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9550
 * Original: 0x000B9550 - 0x000B9551 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9550(void)
{

loc_000B9550: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9560
 * Original: 0x000B9560 - 0x000B9563 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9560(void)
{

loc_000B9560: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9570
 * Original: 0x000B9570 - 0x000B9571 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9570(void)
{

loc_000B9570: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9580
 * Original: 0x000B9580 - 0x000B9599 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9580: ;
    eax = MEM32(0x3C6150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9598; /* jne: not equal / not zero */

loc_000B9589: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000B9590u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000B9590: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6150) = eax;

loc_000B9598: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B95A0
 * Original: 0x000B95A0 - 0x000B95A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B95A0: ;
    g_seh_ebp = ebp; sub_000B8810(); return; /* tail jmp 0x000B8810 */

}

/**
 * sub_000B95B0
 * Original: 0x000B95B0 - 0x000B9623 (115 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B95B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3C6174);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B95E2; /* je: equal / zero */

loc_000B95C1: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B95D3; /* je: equal / zero */

loc_000B95CB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B95D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95CFu); } /* indirect call */
    }

loc_000B95D1: ;
    goto loc_000B95DC;

loc_000B95D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B95D9u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000B95D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B95DC: ;
    MEM32(esi) = 0;

loc_000B95E2: ;
    esi = MEM32(0x3C6178);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B961D; /* je: equal / zero */

loc_000B95F2: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B960E; /* je: equal / zero */

loc_000B95FC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B9602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9600u); } /* indirect call */
    }

loc_000B9602: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AFFF0(); return; /* tail jmp 0x000AFFF0 */

loc_000B960E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9614u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000B9614: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_000B961D: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AFFF0(); return; /* tail jmp 0x000AFFF0 */

}

/**
 * sub_000B9630
 * Original: 0x000B9630 - 0x000B9642 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9630: ;
    eax = MEM32(0x3C6178);
    ecx = MEM32(0x3C6174);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9650
 * Original: 0x000B9650 - 0x000B969F (79 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9650: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x3C6174);
    edx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B967F; /* jge: greater or equal (signed >=) */

loc_000B9664: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B966F; /* jne: not equal / not zero */

loc_000B966B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B966F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B966B; /* jg: greater (signed >) */

loc_000B9673: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x184);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B967F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3C6178);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B969D; /* jge: greater or equal (signed >=) */

loc_000B968C: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B966B; /* je: equal / zero */

loc_000B9693: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xDC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_000B969D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B96A0
 * Original: 0x000B96A0 - 0x000B96B7 (23 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B96A0(void)
{

loc_000B96A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C6170)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(0x3C6170) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B96C0
 * Original: 0x000B96C0 - 0x000B96C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B96C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B96C0: ;
    fp_push(MEMF(0x3C6170)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
