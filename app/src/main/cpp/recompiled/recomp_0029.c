/**
 * Medal of Honor European Assault - Recompiled code chunk 29
 * Functions: 250 (0x000F3AF0 - 0x000FD560)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000F3AF0
 * Original: 0x000F3AF0 - 0x000F3B54 (100 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3AF0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = MEM32(esi + 0x1128);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F3B14u); RECOMP_ABI_CALL(0x00187DC0u, sub_00187DC0); /* call 0x00187DC0 */

loc_000F3B14: ;
    ecx = MEM32(esi + 0x1274);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3B23; /* je: equal / zero */

loc_000F3B1E: ;
    PUSH32(esp, 0x000F3B23u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_000F3B23: ;
    ecx = MEM32(esi + 0x1128);
    edx = MEM32(ecx + 0x1C0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x12E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF084); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x12E0) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F3B60
 * Original: 0x000F3B60 - 0x000F3B72 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3B60: ;
    MEM8(ecx + 0x1290) = 0;
    ecx = MEM32(ecx + 0x1128);
    g_seh_ebp = ebp; sub_00188B60(); return; /* tail jmp 0x00188B60 */

}

/**
 * sub_000F3B80
 * Original: 0x000F3B80 - 0x000F3B97 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3B80(void)
{

loc_000F3B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1128);
    PUSH32(esp, 0x000F3B8Eu); RECOMP_ABI_CALL(0x00187AE0u, sub_00187AE0); /* call 0x00187AE0 */

loc_000F3B8E: ;
    MEM8(esi + 0x1290) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3BA0
 * Original: 0x000F3BA0 - 0x000F3BC2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3BA0(void)
{

loc_000F3BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1128);
    MEM8(esi + 0x1290) = 1;
    PUSH32(esp, 0x000F3BB5u); RECOMP_ABI_CALL(0x00187B20u, sub_00187B20); /* call 0x00187B20 */

loc_000F3BB5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x12E0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3BD0
 * Original: 0x000F3BD0 - 0x000F3BED (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3BD0: ;
    eax = MEM32(ecx + 0x1120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31053DC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31053DC7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3BE7; /* je: equal / zero */

loc_000F3BDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF9D3436u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF9D3436u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3BE7; /* je: equal / zero */

loc_000F3BE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F3BE7: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3BF0
 * Original: 0x000F3BF0 - 0x000F3C09 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3BF0(void)
{

loc_000F3BF0: ;
    eax = MEM32(ecx + 0x12E0);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(edx) = 2;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F3C10
 * Original: 0x000F3C10 - 0x000F3C21 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C10(void)
{

loc_000F3C10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1284) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3C30
 * Original: 0x000F3C30 - 0x000F3C37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000F3C30: ;
    fp_push(MEMF(ecx + 0x1284)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F3C40
 * Original: 0x000F3C40 - 0x000F3C51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C40(void)
{

loc_000F3C40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1288) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3C60
 * Original: 0x000F3C60 - 0x000F3C67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000F3C60: ;
    fp_push(MEMF(ecx + 0x1288)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F3C70
 * Original: 0x000F3C70 - 0x000F3C7F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3C70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x104) = eax;
    MEM32(ecx + 0x208) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3C80
 * Original: 0x000F3C80 - 0x000F3C95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3C80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F3C8Fu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000F3C8F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F3CA0
 * Original: 0x000F3CA0 - 0x000F3CA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3CA0(void)
{

loc_000F3CA0: ;
    eax = MEM32(ecx + 0x210);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3CB0
 * Original: 0x000F3CB0 - 0x000F3CDB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3CB0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x210);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F3CD5; /* jbe: below or equal (unsigned <=) */

loc_000F3CBD: ;
    eax = MEM32(ecx + 0x20C);
    ecx = MEM32(esp + 8);

loc_000F3CC7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3CD7; /* je: equal / zero */

loc_000F3CCB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x164;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F3CC7; /* jb: below (unsigned <) */

loc_000F3CD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F3CD7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3CE0
 * Original: 0x000F3CE0 - 0x000F3CEA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3CE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F3CE6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F3CE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F3CF0
 * Original: 0x000F3CF0 - 0x000F3E9F (431 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3CFDu); RECOMP_ABI_CALL(0x00065800u, sub_00065800); /* call 0x00065800 */

loc_000F3CFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E53; /* jne: not equal / not zero */

loc_000F3D05: ;
    eax = MEM32(esi + 0x1120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31053DC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31053DC7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3D1D; /* je: equal / zero */

loc_000F3D12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF9D3436u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF9D3436u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E53; /* jne: not equal / not zero */

loc_000F3D1D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000F3D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F3D25u); } /* indirect call */
    }

loc_000F3D2B: ;
    PUSH32(esp, eax);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D36u); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_000F3D36: ;
    PUSH32(esp, 0x3168C4);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D45u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D45: ;
    PUSH32(esp, 0x3168B8);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D54u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D54: ;
    PUSH32(esp, 0x3168AC);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D63u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D63: ;
    PUSH32(esp, 0x3168A0);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D72u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D72: ;
    PUSH32(esp, 0x316894);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D81u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D81: ;
    PUSH32(esp, 0x316888);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D90u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D90: ;
    PUSH32(esp, 0x31687C);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3D9Fu); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3D9F: ;
    PUSH32(esp, 0x316870);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3DAEu); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3DAE: ;
    PUSH32(esp, 0x316864);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3DBDu); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3DBD: ;
    PUSH32(esp, 0x316858);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3DCCu); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3DCC: ;
    PUSH32(esp, 0x31684C);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3DDBu); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3DDB: ;
    PUSH32(esp, 0x316840);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3DEAu); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3DEA: ;
    PUSH32(esp, 0x316834);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3DF9u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3DF9: ;
    PUSH32(esp, 0x316828);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3E08u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3E08: ;
    PUSH32(esp, 0x31681C);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3E17u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3E17: ;
    PUSH32(esp, 0x316810);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3E26u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3E26: ;
    PUSH32(esp, 0x316804);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3E35u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3E35: ;
    PUSH32(esp, 0x3167F8);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3E44u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3E44: ;
    PUSH32(esp, 0x3167EC);
    ecx = 0x3DB688;
    PUSH32(esp, 0x000F3E53u); RECOMP_ABI_CALL(0x00065810u, sub_00065810); /* call 0x00065810 */

loc_000F3E53: ;
    ecx = 0x3DB65C;
    PUSH32(esp, 0x000F3E5Du); RECOMP_ABI_CALL(0x00065800u, sub_00065800); /* call 0x00065800 */

loc_000F3E5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E9D; /* jne: not equal / not zero */

loc_000F3E61: ;
    eax = MEM32(esi + 0x1120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31053DC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31053DC7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E75; /* je: equal / zero */

loc_000F3E6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF9D3436u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF9D3436u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E9D; /* jne: not equal / not zero */

loc_000F3E75: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000F3E83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F3E7Du); } /* indirect call */
    }

loc_000F3E83: ;
    PUSH32(esp, eax);
    ecx = 0x3DB65C;
    PUSH32(esp, 0x000F3E8Eu); RECOMP_ABI_CALL(0x00065900u, sub_00065900); /* call 0x00065900 */

loc_000F3E8E: ;
    PUSH32(esp, 0x3DB688);
    ecx = 0x3DB65C;
    PUSH32(esp, 0x000F3E9Du); RECOMP_ABI_CALL(0x00065930u, sub_00065930); /* call 0x00065930 */

loc_000F3E9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3EA0
 * Original: 0x000F3EA0 - 0x000F3EE1 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3EA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000F3EADu); RECOMP_ABI_CALL(0x00131F10u, sub_00131F10); /* call 0x00131F10 */

loc_000F3EAD: ;
    ecx = MEM32(esi + 0x1160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3EC7; /* je: equal / zero */

loc_000F3EB7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F3EBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F3EBBu); } /* indirect call */
    }

loc_000F3EBD: ;
    MEM32(esi + 0x1160) = 0;

loc_000F3EC7: ;
    ecx = MEM32(esi + 0x11C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F3EDE; /* je: equal / zero */

loc_000F3ED2: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_000F3EDE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3EF0
 * Original: 0x000F3EF0 - 0x000F416C (636 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1124);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F3EFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F3EFCu); } /* indirect call */
    }

loc_000F3EFF: ;
    ecx = MEM32(esi + 0x1128);
    edx = MEM32(ecx + 0x1C0);
    edi = eax;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x985ED31Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x985ED31Cu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F3FEB; /* ja: above (unsigned >) */

loc_000F3F1B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F9A; /* je: equal / zero */

loc_000F3F1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EE65D66u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8EE65D66u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F3F88; /* ja: above (unsigned >) */

loc_000F3F24: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F37; /* je: equal / zero */

loc_000F3F26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3EAA50A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3EAA50A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F9A; /* je: equal / zero */

loc_000F3F2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51CE3554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51CE3554 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F9A; /* je: equal / zero */

loc_000F3F34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3F37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x316920);
    PUSH32(esp, 0x000F3F4Cu); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_000F3F4C: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000F3F56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F3F53u); } /* indirect call */
    }

loc_000F3F56: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F3F5Fu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000F3F5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F76; /* je: equal / zero */

loc_000F3F63: ;
    ecx = eax + -4;
    eax = MEM32(edi + 0x1F0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3F73u); RECOMP_ABI_CALL(0x000951D0u, sub_000951D0); /* call 0x000951D0 */

loc_000F3F73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3F76: ;
    eax = MEM32(edi + 0x1F0);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3F85u); RECOMP_ABI_CALL(0x000951D0u, sub_000951D0); /* call 0x000951D0 */

loc_000F3F85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3F88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F243751u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F243751u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F9A; /* je: equal / zero */

loc_000F3F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902BB5DEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x902BB5DEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4169; /* jne: not equal / not zero */

loc_000F3F9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x316910);
    PUSH32(esp, 0x000F3FAFu); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_000F3FAF: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000F3FB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F3FB6u); } /* indirect call */
    }

loc_000F3FB9: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F3FC2u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000F3FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3FD9; /* je: equal / zero */

loc_000F3FC6: ;
    ecx = eax + -4;
    eax = MEM32(edi + 0x1F0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3FD6u); RECOMP_ABI_CALL(0x000A2F40u, sub_000A2F40); /* call 0x000A2F40 */

loc_000F3FD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3FD9: ;
    eax = MEM32(edi + 0x1F0);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3FE8u); RECOMP_ABI_CALL(0x000A2F40u, sub_000A2F40); /* call 0x000A2F40 */

loc_000F3FE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3FEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCBC2A7B8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCBC2A7B8u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F410D; /* ja: above (unsigned >) */

loc_000F3FF6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F40C3; /* je: equal / zero */

loc_000F3FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA18097ADu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA18097ADu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4072; /* je: equal / zero */

loc_000F4003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB85C561Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB85C561Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4169; /* jne: not equal / not zero */

loc_000F400E: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F4169; /* jne: not equal / not zero */

loc_000F4021: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esi + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x316900);
    PUSH32(esp, 0x000F4036u); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_000F4036: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000F4040u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F403Du); } /* indirect call */
    }

loc_000F4040: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F4049u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000F4049: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4060; /* je: equal / zero */

loc_000F404D: ;
    edx = MEM32(edi + 0x1F0);
    PUSH32(esp, edx);
    ecx = eax + -4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F405Du); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_000F405D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F4060: ;
    edx = MEM32(edi + 0x1F0);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F406Fu); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_000F406F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F4072: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3168F4);
    PUSH32(esp, 0x000F4087u); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_000F4087: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000F4091u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F408Eu); } /* indirect call */
    }

loc_000F4091: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F409Au); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000F409A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F40B1; /* je: equal / zero */

loc_000F409E: ;
    ecx = eax + -4;
    eax = MEM32(edi + 0x1F0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F40AEu); RECOMP_ABI_CALL(0x00092F80u, sub_00092F80); /* call 0x00092F80 */

loc_000F40AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F40B1: ;
    eax = MEM32(edi + 0x1F0);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F40C0u); RECOMP_ABI_CALL(0x00092F80u, sub_00092F80); /* call 0x00092F80 */

loc_000F40C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F40C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB290D783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1120), 0xB290D783u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4169; /* jne: not equal / not zero */

loc_000F40D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3168E0);
    PUSH32(esp, 0x000F40E8u); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_000F40E8: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000F40F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F40EFu); } /* indirect call */
    }

loc_000F40F2: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F40FBu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000F40FB: ;
    ecx = MEM32(edi + 0x1F0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000F410Au); RECOMP_ABI_CALL(0x000A1F10u, sub_000A1F10); /* call 0x000A1F10 */

loc_000F410A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F410D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xED497BEAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F411B; /* je: equal / zero */

loc_000F4114: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEFD23667u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEFD23667u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4169; /* jne: not equal / not zero */

loc_000F411B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esi + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3168D0);
    PUSH32(esp, 0x000F4130u); RECOMP_ABI_CALL(0x00035BC0u, sub_00035BC0); /* call 0x00035BC0 */

loc_000F4130: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000F413Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4137u); } /* indirect call */
    }

loc_000F413A: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F4143u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000F4143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F415A; /* je: equal / zero */

loc_000F4147: ;
    edx = MEM32(edi + 0x1F0);
    PUSH32(esp, edx);
    ecx = eax + -4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4157u); RECOMP_ABI_CALL(0x00091530u, sub_00091530); /* call 0x00091530 */

loc_000F4157: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F415A: ;
    edx = MEM32(edi + 0x1F0);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4169u); RECOMP_ABI_CALL(0x00091530u, sub_00091530); /* call 0x00091530 */

loc_000F4169: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4170
 * Original: 0x000F4170 - 0x000F41EA (122 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x84);
    esi = ecx;
    ecx = edi + 0x7C;
    MEM32(esi + 0x116C) = eax;
    MEM32(esi + 0x1170) = ecx;
    eax = MEM32(edi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F41DC; /* je: equal / zero */

loc_000F4194: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F41A4u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000F41A4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1160) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F41CE; /* je: equal / zero */

loc_000F41B1: ;
    eax = MEM32(eax + 0xCC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000F41C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F41BDu); } /* indirect call */
    }

loc_000F41C0: ;
    eax = MEM32(edi + 0x74);
    POP32(esp, edi);
    MEM32(esi + 0x1174) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F41CE: ;
    ecx = MEM32(edi + 0x74);
    POP32(esp, edi);
    MEM32(esi + 0x1174) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F41DC: ;
    edx = MEM32(edi + 0x74);
    POP32(esp, edi);
    MEM32(esi + 0x1174) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F41F0
 * Original: 0x000F41F0 - 0x000F4275 (133 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F41F0(void)
{

loc_000F41F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x30);
    MEM32(ecx + 0x11D4) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ecx + 0x11D8) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x11E0) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(ecx + 0x11E4) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x11E8) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x11F0) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x11F4) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x11F8) = edx;
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0x1200) = edx;
    edx = MEM32(eax + 0x54);
    MEM32(ecx + 0x1204) = edx;
    edx = MEM32(eax + 0x58);
    MEM32(ecx + 0x1208) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(ecx + 0x1210) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x1214) = edx;
    eax = MEM32(eax + 0x64);
    MEM32(ecx + 0x1218) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4280
 * Original: 0x000F4280 - 0x000F42AB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x127C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F42A8; /* je: equal / zero */

loc_000F428E: ;
    ecx = esi;
    PUSH32(esp, 0x000F4295u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_000F4295: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F429Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000F429B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x127C) = 0;

loc_000F42A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F42B0
 * Original: 0x000F42B0 - 0x000F42C9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F42B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F42B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x127C) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F42C6; /* je: equal / zero */

loc_000F42C0: ;
    MEM8(eax + 0x1A) = LO8(ecx);
    MEM8(eax + 0x1B) = LO8(ecx);

loc_000F42C6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F42D0
 * Original: 0x000F42D0 - 0x000F4334 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F42D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F42D0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    edx = esi + 0x1130;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000F42F0;

    /* nop */

loc_000F42F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F42F0; /* jne: not equal / not zero */

loc_000F42FA: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0x31692C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F430Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000F430A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F4314u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F4314: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x1154) = eax;
    PUSH32(esp, 0x000F4320u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F4320: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1150) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4340
 * Original: 0x000F4340 - 0x000F4417 (215 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4340: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4356; /* jne: not equal / not zero */

loc_000F434D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000F4356: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_000F43C0; /* je: equal / zero */

loc_000F4361: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000F43B3; /* je: equal / zero */

loc_000F4364: ;
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xE8) = ecx;
    MEM32(esi + 0xEC) = esi;
    eax = esi + 0xE4;

loc_000F437C: ;
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x140;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000F4399u); RECOMP_ABI_CALL(0x00044280u, sub_00044280); /* call 0x00044280 */

loc_000F4399: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4403; /* jne: not equal / not zero */

loc_000F439D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x316934);
    PUSH32(esp, 0x000F43A8u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000F43A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000F43B3: ;
    edi = 0x3DB688;
    ecx = esi + 0x140;
    goto loc_000F43D5;

loc_000F43C0: ;
    edi = 0x3DB65C;
    ebx = esi + 0x140;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000F43D3u); RECOMP_ABI_CALL(0x00043CF0u, sub_00043CF0); /* call 0x00043CF0 */

loc_000F43D3: ;
    ecx = ebx;

loc_000F43D5: ;
    PUSH32(esp, 0x3DB688);
    PUSH32(esp, 0x000F43DFu); RECOMP_ABI_CALL(0x00043CF0u, sub_00043CF0); /* call 0x00043CF0 */

loc_000F43DF: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x12D8) = eax;
    MEM32(esi + 0x12DC) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = esi + 0x12D4;
    goto loc_000F437C;

loc_000F4403: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F440F; /* je: equal / zero */

loc_000F4407: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F440Fu); RECOMP_ABI_CALL(0x00043CF0u, sub_00043CF0); /* call 0x00043CF0 */

loc_000F440F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F4420
 * Original: 0x000F4420 - 0x000F446F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4420: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x1130;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x316950);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F4444u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000F4444: ;
    eax = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x11C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000F4465u); RECOMP_ABI_CALL(0x000F4340u, sub_000F4340); /* call 0x000F4340 */

loc_000F4465: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F4470
 * Original: 0x000F4470 - 0x000F44C5 (85 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4470: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x1130;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x316950);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F4494u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000F4494: ;
    eax = MEM32(esp + 0x124);
    ecx = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x11C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F44BBu); RECOMP_ABI_CALL(0x000F4340u, sub_000F4340); /* call 0x000F4340 */

loc_000F44BB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F44D0
 * Original: 0x000F44D0 - 0x000F44DC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F44D0(void)
{

loc_000F44D0: ;
    eax = MEM32(0x3DB654);
    eax = MEM32(eax + 0x210);
    esp += 4; return; /* ret */

}

/**
 * sub_000F44E0
 * Original: 0x000F44E0 - 0x000F4512 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F44E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F44E0: ;
    eax = MEM32(0x3DB654);
    edx = MEM32(eax + 0x210);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F450E; /* jbe: below or equal (unsigned <=) */

loc_000F44F2: ;
    eax = MEM32(eax + 0x20C);
    esi = MEM32(esp + 8);
    /* nop */

loc_000F4500: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4510; /* je: equal / zero */

loc_000F4504: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x164;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F4500; /* jb: below (unsigned <) */

loc_000F450E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F4510: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4520
 * Original: 0x000F4520 - 0x000F4566 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4520: ;
    eax = MEM32(ecx + 0x1128);
    edx = MEM32(eax + 0x1C0);
    SET_LO16(eax, MEM16(eax + 0x1CE));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edx + 4) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4560; /* je: equal / zero */

loc_000F4539: ;
    eax = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F4560; /* jle: less or equal (signed <=) */

loc_000F4549: ;
    ecx = MEM32(eax + 0x1C0);
    SET_LO8(edx, MEM8(ecx + 0x49));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4563; /* je: equal / zero */

loc_000F4556: ;
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F4563; /* jle: less or equal (signed <=) */

loc_000F4560: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F4563: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4570
 * Original: 0x000F4570 - 0x000F4644 (212 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4570(void)
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

loc_000F4570: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3C250D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4642; /* jne: not equal / not zero */

loc_000F457E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4584u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4584: ;
    ebx = MEM32(eax + 0xE4);
    eax = ZX8(MEM8(ebx + 0x39EC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4641; /* jl: less (signed <) */

loc_000F4599: ;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4641; /* jge: greater or equal (signed >=) */

loc_000F45AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F45B6u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_000F45B6: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000F45C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F45BDu); } /* indirect call */
    }

loc_000F45C0: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000F45C9u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_000F45C9: ;
    edi = eax;
    PUSH32(esp, 0x000F45D0u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F45D0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F45D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F45D4u); } /* indirect call */
    }

loc_000F45D7: ;
    SET_LO8(eax, MEM8(edi + 0x1224));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4601; /* je: equal / zero */

loc_000F45E1: ;
    xmm0 = XMM_SCALAR(MEMF(0x37650C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3167E4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF084); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000F4618;

loc_000F4601: ;
    ecx = esi;
    PUSH32(esp, 0x000F4608u); RECOMP_ABI_CALL(0x001142F0u, sub_001142F0); /* call 0x001142F0 */

loc_000F4608: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x37650C)); /* fmul dword ptr [0x37650c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F4618: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000F4624u); RECOMP_ABI_CALL(0x0018B780u, sub_0018B780); /* call 0x0018B780 */

loc_000F4624: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F462Au); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F462A: ;
    ecx = eax;
    PUSH32(esp, 0x000F4631u); RECOMP_ABI_CALL(0x0018D5B0u, sub_0018D5B0); /* call 0x0018D5B0 */

loc_000F4631: ;
    PUSH32(esp, 0x000F4636u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4636: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000F463Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F463Cu); } /* indirect call */
    }

loc_000F463F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F4641: ;
    POP32(esp, ebx);

loc_000F4642: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F4650
 * Original: 0x000F4650 - 0x000F46E1 (145 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4650(void)
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

loc_000F4650: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3C250D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F46DF; /* jne: not equal / not zero */

loc_000F465E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4664u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4664: ;
    esi = MEM32(eax + 0xE4);
    eax = ZX8(MEM8(esi + 0x39EC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F46DE; /* jl: less (signed <) */

loc_000F4675: ;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F46DE; /* jge: greater or equal (signed >=) */

loc_000F4686: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F468Du); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_000F468D: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000F4697u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4694u); } /* indirect call */
    }

loc_000F4697: ;
    edi = eax;
    PUSH32(esp, 0x000F469Eu); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F469E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F46A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F46A2u); } /* indirect call */
    }

loc_000F46A5: ;
    ecx = edi;
    PUSH32(esp, 0x000F46ACu); RECOMP_ABI_CALL(0x001142F0u, sub_001142F0); /* call 0x001142F0 */

loc_000F46AC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F46C2u); RECOMP_ABI_CALL(0x0018B780u, sub_0018B780); /* call 0x0018B780 */

loc_000F46C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F46C8u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F46C8: ;
    ecx = eax;
    PUSH32(esp, 0x000F46CFu); RECOMP_ABI_CALL(0x0018D5B0u, sub_0018D5B0); /* call 0x0018D5B0 */

loc_000F46CF: ;
    PUSH32(esp, 0x000F46D4u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F46D4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000F46DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F46DAu); } /* indirect call */
    }

loc_000F46DD: ;
    POP32(esp, edi);

loc_000F46DE: ;
    POP32(esp, esi);

loc_000F46DF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F46F0
 * Original: 0x000F46F0 - 0x000F4784 (148 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F46F0(void)
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

loc_000F46F0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3C250D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4782; /* jne: not equal / not zero */

loc_000F46FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F4705u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4705: ;
    esi = MEM32(eax + 0xE4);
    edi = ZX8(MEM8(esi + 0x39EC));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4780; /* jl: less (signed <) */

loc_000F4716: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4780; /* jge: greater or equal (signed >=) */

loc_000F4726: ;
    PUSH32(esp, 0x000F472Bu); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F472B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F4732u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F472Fu); } /* indirect call */
    }

loc_000F4732: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F4738u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_000F4738: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000F4742u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F473Fu); } /* indirect call */
    }

loc_000F4742: ;
    ecx = eax;
    PUSH32(esp, 0x000F4749u); RECOMP_ABI_CALL(0x001142F0u, sub_001142F0); /* call 0x001142F0 */

loc_000F4749: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x37650C)); /* fmul dword ptr [0x37650c] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4765u); RECOMP_ABI_CALL(0x0018B780u, sub_0018B780); /* call 0x0018B780 */

loc_000F4765: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F476Bu); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F476B: ;
    ecx = eax;
    PUSH32(esp, 0x000F4772u); RECOMP_ABI_CALL(0x0018D5B0u, sub_0018D5B0); /* call 0x0018D5B0 */

loc_000F4772: ;
    PUSH32(esp, 0x000F4777u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4777: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000F4780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F477Du); } /* indirect call */
    }

loc_000F4780: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F4782: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F4790
 * Original: 0x000F4790 - 0x000F4821 (145 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4790(void)
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

loc_000F4790: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3C250D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F481F; /* jne: not equal / not zero */

loc_000F479E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F47A4u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F47A4: ;
    esi = MEM32(eax + 0xE4);
    eax = ZX8(MEM8(esi + 0x39EC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F481E; /* jl: less (signed <) */

loc_000F47B5: ;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F481E; /* jge: greater or equal (signed >=) */

loc_000F47C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F47CDu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_000F47CD: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000F47D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F47D4u); } /* indirect call */
    }

loc_000F47D7: ;
    edi = eax;
    PUSH32(esp, 0x000F47DEu); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F47DE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F47E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F47E2u); } /* indirect call */
    }

loc_000F47E5: ;
    ecx = edi;
    PUSH32(esp, 0x000F47ECu); RECOMP_ABI_CALL(0x001142F0u, sub_001142F0); /* call 0x001142F0 */

loc_000F47EC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4802u); RECOMP_ABI_CALL(0x0018B780u, sub_0018B780); /* call 0x0018B780 */

loc_000F4802: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4808u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4808: ;
    ecx = eax;
    PUSH32(esp, 0x000F480Fu); RECOMP_ABI_CALL(0x0018D5B0u, sub_0018D5B0); /* call 0x0018D5B0 */

loc_000F480F: ;
    PUSH32(esp, 0x000F4814u); RECOMP_ABI_CALL(0x0018D370u, sub_0018D370); /* call 0x0018D370 */

loc_000F4814: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000F481Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F481Au); } /* indirect call */
    }

loc_000F481D: ;
    POP32(esp, edi);

loc_000F481E: ;
    POP32(esp, esi);

loc_000F481F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F4830
 * Original: 0x000F4830 - 0x000F4857 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4830: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1158) = LO8(eax);
    ecx = MEM32(ecx + 0x1128);
    SET_LO8(edx, MEM8(ecx + 0x230));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x230) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4860
 * Original: 0x000F4860 - 0x000F4869 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4860(void)
{

loc_000F4860: ;
    eax = ecx;
    MEM32(eax) = 0x316958;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4870
 * Original: 0x000F4870 - 0x000F4877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4870(void)
{

loc_000F4870: ;
    MEM32(ecx) = 0x2FF0D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4880
 * Original: 0x000F4880 - 0x000F48BC (60 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4880: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F48B8; /* je: equal / zero */

loc_000F488B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F48B6; /* jle: less or equal (signed <=) */

loc_000F4897: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    /* nop */

loc_000F48A0: ;
    eax = MEM32(edi + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F48B0; /* je: equal / zero */

loc_000F48A7: ;
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F48B0u); RECOMP_ABI_CALL(0x00049140u, sub_00049140); /* call 0x00049140 */

loc_000F48B0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F48A0; /* jl: less (signed <) */

loc_000F48B5: ;
    POP32(esp, edi);

loc_000F48B6: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F48B8: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F48C0
 * Original: 0x000F48C0 - 0x000F48EB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F48C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F48C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x210);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F48E5; /* jbe: below or equal (unsigned <=) */

loc_000F48CD: ;
    eax = MEM32(ecx + 0x20C);
    ecx = MEM32(esp + 8);

loc_000F48D7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F48E7; /* je: equal / zero */

loc_000F48DB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x164;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F48D7; /* jb: below (unsigned <) */

loc_000F48E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F48E7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F48F0
 * Original: 0x000F48F0 - 0x000F4983 (147 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F48F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F48F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x127C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x3169B8;
    MEM32(esi + 8) = 0x3169AC;
    MEM32(esi + 0xB0) = 0x316988;
    MEM32(esi + 0xB4) = 0x316980;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4938; /* je: equal / zero */

loc_000F4922: ;
    ecx = edi;
    PUSH32(esp, 0x000F4929u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_000F4929: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F492Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000F492F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x127C) = ebx;

loc_000F4938: ;
    ecx = MEM32(0x3DB650);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x116C) = ebx;
    MEM32(esi + 0x1170) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F495A; /* je: equal / zero */

loc_000F494E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F4954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4952u); } /* indirect call */
    }

loc_000F4954: ;
    MEM32(0x3DB650) = ebx;

loc_000F495A: ;
    ecx = MEM32(esi + 0x11C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = esi + 0x11C0;
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4976; /* je: equal / zero */

loc_000F4970: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F4976u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000F4976: ;
    MEM32(edi + 4) = ebx;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000E7500(); return; /* tail jmp 0x000E7500 */

}

/**
 * sub_000F4990
 * Original: 0x000F4990 - 0x000F4C0E (638 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F4990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x1124) = eax;
    MEM32(esi + 0x1120) = ebx;
    ecx = MEM32(0x523510);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F49C1u); RECOMP_ABI_CALL(0x0018ACA0u, sub_0018ACA0); /* call 0x0018ACA0 */

loc_000F49C1: ;
    MEM32(esi + 0x1128) = eax;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4A3D; /* je: equal / zero */

loc_000F49D6: ;
    ecx = MEM32(0x3DB654);
    edi = MEM32(ecx + 0x210);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F49FF; /* jbe: below or equal (unsigned <=) */

loc_000F49E8: ;
    ecx = MEM32(ecx + 0x20C);
    edi = edi;

loc_000F49F0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4A01; /* je: equal / zero */

loc_000F49F4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x164;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F49F0; /* jb: below (unsigned <) */

loc_000F49FF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F4A01: ;
    edx = MEM32(ecx + 0xFC);
    MEM32(eax + 0x244) = edx;
    edx = MEM32(ecx + 0x108);
    eax = MEM32(esi + 0x1128);
    MEM32(eax + 0x24C) = edx;
    edx = ecx + 0x100;
    MEM32(eax + 0x248) = edx;
    eax = MEM32(ecx + 0x10C);
    ecx = MEM32(esi + 0x1128);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4A3Du); RECOMP_ABI_CALL(0x00187FD0u, sub_00187FD0); /* call 0x00187FD0 */

loc_000F4A3D: ;
    ecx = MEM32(esi + 0x1128);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4A4Au); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F4A4A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
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
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000F4AC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4ABEu); } /* indirect call */
    }

loc_000F4AC4: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x23;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4B16; /* je: equal / zero */

loc_000F4AD3: ;
    MEM32(eax + 0x64) = 0x22;
    MEM32(eax + 0x68) = edi;
    ecx = MEM32(esi + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4B16; /* je: equal / zero */

loc_000F4AE7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000F4AECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4AE9u); } /* indirect call */
    }

loc_000F4AEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4B16; /* je: equal / zero */

loc_000F4AF0: ;
    ecx = MEM32(esi + 0x1124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F4AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4AF8u); } /* indirect call */
    }

loc_000F4AFB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000F4B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4AFFu); } /* indirect call */
    }

loc_000F4B05: ;
    ecx = MEM32(esi + 0xF0);
    SET_LO8(edx, 1);
    MEM8(ecx + 0x60) = LO8(edx);
    MEM8(ecx + 0x61) = LO8(edx);
    MEM8(ecx + 0x62) = LO8(eax);

loc_000F4B16: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4B1Du); RECOMP_ABI_CALL(0x000F3EF0u, sub_000F3EF0); /* call 0x000F3EF0 */

loc_000F4B1D: ;
    SET_LO8(ecx, MEM8(esi + 0x1258));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x1258) = LO8(ecx);
    MEMF(esi + 0x1260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1264) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1268) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x1158) = 0;
    MEM8(esi + 0x1159) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4BA8; /* je: equal / zero */

loc_000F4B5F: ;
    PUSH32(esp, 0x40C0C339);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4B6Cu); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_000F4B6C: ;
    ecx = MEM32(esi + 0x1160);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4B79u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F4B79: ;
    eax = MEM32(esi + 0x1160);
    ecx = MEM32(eax + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4BA8; /* je: equal / zero */

loc_000F4B89: ;
    eax = MEM32(eax + 0xCC);
    eax = MEM32(eax + 0x10);
    MEM32(eax + 0x48) = MEM32(eax + 0x48) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x1160);
    eax = MEM32(ecx + 0x16C);
    MEM32(eax + 0x64) = edi;
    MEM32(eax + 0x68) = edi;

loc_000F4BA8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4BAFu); RECOMP_ABI_CALL(0x000F3CF0u, sub_000F3CF0); /* call 0x000F3CF0 */

loc_000F4BAF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi + 0x1128);
    MEMF(esi + 0x12E0) = xmm0.f[0]; /* movss */
    eax = MEM32(edx + 0x1C0);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F4C05; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F4BD0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x000F4BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4BD4u); } /* indirect call */
    }

loc_000F4BDA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x000F4BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4BE0u); } /* indirect call */
    }

loc_000F4BE6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4BEDu); RECOMP_ABI_CALL(0x000426F0u, sub_000426F0); /* call 0x000426F0 */

loc_000F4BED: ;
    ecx = MEM32(esi + 0x12E0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x000F4BFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4BF8u); } /* indirect call */
    }

loc_000F4BFE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4C05u); RECOMP_ABI_CALL(0x00042720u, sub_00042720); /* call 0x00042720 */

loc_000F4C05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F4C10
 * Original: 0x000F4C10 - 0x000F4D93 (387 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4C10: ;
    edx = MEM32(0x3DB654);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edx + 0x210);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F4C3F; /* jbe: below or equal (unsigned <=) */

loc_000F4C26: ;
    esi = MEM32(edx + 0x20C);
    edx = MEM32(esp + 0xC);

loc_000F4C30: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4C41; /* je: equal / zero */

loc_000F4C34: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x164;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F4C30; /* jb: below (unsigned <) */

loc_000F4C3F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F4C41: ;
    eax = MEM32(esi + 0x24);
    MEM32(edi + 0x112C) = eax;
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000F4C58u); RECOMP_ABI_CALL(0x000F42D0u, sub_000F42D0); /* call 0x000F42D0 */

loc_000F4C58: ;
    edx = MEM32(esi + 0x2C);
    MEM32(edi + 0x1278) = edx;
    eax = MEM32(esi + 0xBC);
    MEM32(edi + 0x1220) = eax;
    ecx = MEM32(esi + 0xC0);
    MEM32(edi + 0x1228) = ecx;
    edx = MEM32(esi + 0xC4);
    MEM32(edi + 0x122C) = edx;
    eax = MEM32(esi + 0xC8);
    MEM32(edi + 0x1230) = eax;
    ecx = MEM32(esi + 0xCC);
    MEM32(edi + 0x1234) = ecx;
    edx = MEM32(esi + 0xD0);
    MEM32(edi + 0x1238) = edx;
    eax = MEM32(esi + 0xA0);
    MEM32(edi + 0x1240) = eax;
    ecx = MEM32(esi + 0xA4);
    MEM32(edi + 0x1244) = ecx;
    edx = MEM32(esi + 0xA4);
    MEM32(edi + 0x123C) = edx;
    eax = MEM32(esi + 0xF4);
    MEM32(edi + 0x1284) = eax;
    ecx = MEM32(esi + 0xF8);
    MEM32(edi + 0x1288) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000F4CEDu); RECOMP_ABI_CALL(0x000F4170u, sub_000F4170); /* call 0x000F4170 */

loc_000F4CED: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000F4CF5u); RECOMP_ABI_CALL(0x000F41F0u, sub_000F41F0); /* call 0x000F41F0 */

loc_000F4CF5: ;
    eax = MEM32(esi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4D22; /* je: equal / zero */

loc_000F4CFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4D09u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_000F4D09: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1274) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4D22; /* je: equal / zero */

loc_000F4D16: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000F4D22u); RECOMP_ABI_CALL(0x00131F50u, sub_00131F50); /* call 0x00131F50 */

loc_000F4D22: ;
    edx = MEM32(esi + 0x8C);
    MEM32(edi + 0x11D0) = edx;
    MEM32(edi + 0x127C) = 0;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4D7E; /* je: equal / zero */

loc_000F4D42: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x316B88);
    PUSH32(esp, 0x000F4D53u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000F4D53: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4D6A; /* je: equal / zero */

loc_000F4D5A: ;
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F4D68u); RECOMP_ABI_CALL(0x000BFEF0u, sub_000BFEF0); /* call 0x000BFEF0 */

loc_000F4D68: ;
    goto loc_000F4D6C;

loc_000F4D6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F4D6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x127C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4D7E; /* je: equal / zero */

loc_000F4D76: ;
    MEM8(eax + 0x1A) = 0;
    MEM8(eax + 0x1B) = 0;

loc_000F4D7E: ;
    _fa = (uint32_t)(MEM32(esi + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4D8E; /* jne: not equal / not zero */

loc_000F4D87: ;
    MEM8(edi + 0x1224) = 1;

loc_000F4D8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4DA0
 * Original: 0x000F4DA0 - 0x000F5108 (872 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4DA0(void)
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

loc_000F4DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4DB9u); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000F4DB9: ;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F50E8; /* je: equal / zero */

loc_000F4DC7: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000F4DD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4DD0u); } /* indirect call */
    }

loc_000F4DD3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000F4DDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4DD8u); } /* indirect call */
    }

loc_000F4DDE: ;
    eax = MEM32(esi + 0x1124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4DED; /* je: equal / zero */

loc_000F4DE8: ;
    ecx = eax + -48;
    goto loc_000F4DEF;

loc_000F4DED: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F4DEF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x000F4DF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4DF1u); } /* indirect call */
    }

loc_000F4DF7: ;
    ecx = esi;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4E00u); RECOMP_ABI_CALL(0x000F39D0u, sub_000F39D0); /* call 0x000F39D0 */

loc_000F4E00: ;
    _fa = (uint32_t)(MEM8(esi + 0x1258)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1258), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5080; /* je: equal / zero */

loc_000F4E0D: ;
    eax = MEM32(esi + 0x1254);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000F4E1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4E18u); } /* indirect call */
    }

loc_000F4E1E: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    ecx = esp + 0x10;
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    PUSH32(esp, ecx);
    ecx = edi;
    XMM_STORE(esp + 0xC4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4E59u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_000F4E59: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FF800)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(esi + 0xB0);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x60); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi + 0xB0;
    eax = esp + 0xD0;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000F4ED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F4ECEu); } /* indirect call */
    }

loc_000F4ED1: ;
    xmm0 = XMM_MEM(esp + 0x90); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xB0); /* movaps */
    ecx = esp + 0xD0;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xC0); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4F16u); RECOMP_ABI_CALL(0x0009F6C0u, sub_0009F6C0); /* call 0x0009F6C0 */

loc_000F4F16: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    ecx = esp + 0x10;
    MEMF(esp + 0x88) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4F7Cu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000F4F7C: ;
    fp_pop(); /* fstp st(0) */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4F8Au); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_000F4F8A: ;
    ecx = MEM32(esi + 0x1128);
    eax = MEM32(ecx + 0x1C0);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EE65D66u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0x8EE65D66u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F502E; /* jne: not equal / not zero */

loc_000F4FA3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    edx = esp + 0x80;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F4FD4u); RECOMP_ABI_CALL(0x0002ECC0u, sub_0002ECC0); /* call 0x0002ECC0 */

loc_000F4FD4: ;
    eax = MEM32(esi + 0x1128);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(eax + 0x200) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1128);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(0x1F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    goto loc_000F50E3;

loc_000F502E: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(ecx + 0x200) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(ecx + 0x204) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    eax = esp + 0x20;
    MEMF(ecx + 0x208) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    goto loc_000F50B2;

loc_000F5080: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F508Cu); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_000F508C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    edx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);

loc_000F50B2: ;
    ecx = MEM32(esi + 0x1128);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F50BDu); RECOMP_ABI_CALL(0x0002ECC0u, sub_0002ECC0); /* call 0x0002ECC0 */

loc_000F50BD: ;
    eax = MEM32(esi + 0x1128);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fb = (uint32_t)(0x1F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */

loc_000F50E3: ;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_000F50E8: ;
    eax = MEM32(esi + 0x12E0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x000F50F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F50F3u); } /* indirect call */
    }

loc_000F50F9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5100u); RECOMP_ABI_CALL(0x00042720u, sub_00042720); /* call 0x00042720 */

loc_000F5100: ;
    POP32(esp, edi);
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
 * sub_000F5110
 * Original: 0x000F5110 - 0x000F5174 (100 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F5110: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5165; /* jne: not equal / not zero */

loc_000F511D: ;
    xmm1 = XMM_SCALAR(MEMF(0x3167E8)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x128C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F5165; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x128C)) */

loc_000F512E: ;
    PUSH32(esp, 0x000F5133u); RECOMP_ABI_CALL(0x000F4520u, sub_000F4520); /* call 0x000F4520 */

loc_000F5133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5165; /* je: equal / zero */

loc_000F5137: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x128C); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x128C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F5170; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F515A: ;
    ecx = esi;
    PUSH32(esp, 0x000F5161u); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_000F5161: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F5165: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x128C) = xmm0.f[0]; /* movss */

loc_000F5170: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F5180
 * Original: 0x000F5180 - 0x000F54D6 (854 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F5180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x64));
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = ebx + -50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000F54C1; /* ja: above (unsigned >) */

loc_000F519D: ;
    eax = ZX8(MEM8(eax + 0xF54F4));
    { uint32_t _jt = MEM32(eax * 4 + 0xF54D8); /* switch: 7 entries, 7 targets */
    if (_jt == 0x000F51ABu) goto loc_000F51AB;
    if (_jt == 0x000F535Eu) goto loc_000F535E;
    if (_jt == 0x000F536Eu) goto loc_000F536E;
    if (_jt == 0x000F53A0u) goto loc_000F53A0;
    if (_jt == 0x000F5475u) goto loc_000F5475;
    if (_jt == 0x000F54A8u) goto loc_000F54A8;
    if (_jt == 0x000F54C1u) goto loc_000F54C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F51AB: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F54C1; /* je: equal / zero */

loc_000F51BE: ;
    ecx = MEM32(esi + 0x1128);
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CE), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F54C1; /* jle: less or equal (signed <=) */

loc_000F51D2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F51D7u); RECOMP_ABI_CALL(0x00187F60u, sub_00187F60); /* call 0x00187F60 */

loc_000F51D7: ;
    ecx = MEM32(esi + 0x1124);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F51E7u); RECOMP_ABI_CALL(0x0001FA50u, sub_0001FA50); /* call 0x0001FA50 */

loc_000F51E7: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    ecx = MEM32(esi + 0x1124);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = esp + 0x20;
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F526Eu); RECOMP_ABI_CALL(0x000143A0u, sub_000143A0); /* call 0x000143A0 */

loc_000F526E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F52EFu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000F52EF: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F52FDu); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000F52FD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x54;
    PUSH32(esp, 0x71D3027);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F531Eu); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_000F531E: ;
    eax = MEM32(esi + 0x1128);
    ecx = MEM32(eax + 0x1C0);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x1D4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1128);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F54C1; /* jle: less or equal (signed <=) */

loc_000F5351: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = esi;
    goto loc_000F54BE;

loc_000F535E: ;
    ecx = MEM32(esi + 0x1128);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5369u); RECOMP_ABI_CALL(0x001890A0u, sub_001890A0); /* call 0x001890A0 */

loc_000F5369: ;
    goto loc_000F54C1;

loc_000F536E: ;
    eax = MEM32(esi + 0x1150);
    PUSH32(esp, 0x90A78F3Du);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F537Fu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000F537F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5386u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000F5386: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F5396; /* je: equal / zero */

loc_000F538C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5391u); RECOMP_ABI_CALL(0x000F3B80u, sub_000F3B80); /* call 0x000F3B80 */

loc_000F5391: ;
    goto loc_000F54C1;

loc_000F5396: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F539Bu); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_000F539B: ;
    goto loc_000F54C1;

loc_000F53A0: ;
    ecx = MEM32(esi + 0x1124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F53ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F53A8u); } /* indirect call */
    }

loc_000F53AB: ;
    ecx = MEM32(eax + 0x1C0);
    if (0x19) _cf = (int)(((ecx) >> ((0x19) - 1)) & 1);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F53C6; /* je: equal / zero */

loc_000F53B9: ;
    _fa = (uint32_t)(MEM32(esi + 0x1278)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1278), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F54CD; /* je: equal / zero */

loc_000F53C6: ;
    eax = MEM32(esi + 0x11D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F54C1; /* je: equal / zero */

loc_000F53D4: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x1298;
    /* nop */

loc_000F53E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F53F3; /* je: equal / zero */

loc_000F53E5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000F53E0; /* jl: less (signed <) */

loc_000F53EE: ;
    goto loc_000F54C1;

loc_000F53F3: ;
    ecx = MEM32(esi + 0x1124);
    edx = MEM32(esi + 0x1150);
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F5408u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5405u); } /* indirect call */
    }

loc_000F5408: ;
    ecx = MEM32(esi + 0x1128);
    ebx = eax;
    _fb = (uint32_t)(0x13D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x13D4)) >> 32) & 1);
    ebx = ebx + 0x13D4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CE), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F5451; /* jne: not equal / not zero */

loc_000F5420: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x486B9040);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F542Fu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000F542F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5436u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000F5436: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5451; /* je: equal / zero */

loc_000F543A: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000F5453; /* je: equal / zero */

loc_000F5442: ;
    ecx = MEM32(esi + 0x11D8);
    MEM32(esi + edi * 8 + 0x1298) = ecx;
    goto loc_000F5460;

loc_000F5451: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000F5453: ;
    edx = MEM32(esi + 0x11D4);
    MEM32(esi + edi * 8 + 0x1298) = edx;

loc_000F5460: ;
    ebx = MEM32(ebp + 8);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x76EFAB43;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + edi * 8 + 0x1294) = eax;
    goto loc_000F54C1;

loc_000F5475: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x1128);
    if (CMP_EQ(_fa, _fb)) goto loc_000F5493; /* je: equal / zero */

loc_000F5482: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x16C); PUSH32(esp, 0x000F548Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5484u); } /* indirect call */
    }

loc_000F548A: ;
    MEM8(eax + 0x2BE) = 1;
    goto loc_000F54C1;

loc_000F5493: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x16C); PUSH32(esp, 0x000F549Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5495u); } /* indirect call */
    }

loc_000F549B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1D4) = xmm0.f[0]; /* movss */
    goto loc_000F54C1;

loc_000F54A8: ;
    ecx = MEM32(esi + 0x1124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F54B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F54B0u); } /* indirect call */
    }

loc_000F54B3: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);

loc_000F54BE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000F54C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F54BEu); } /* indirect call */
    }

loc_000F54C1: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F54CDu); RECOMP_ABI_CALL(0x000E72C0u, sub_000E72C0); /* call 0x000E72C0 */

loc_000F54CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F5510
 * Original: 0x000F5510 - 0x000F5CF0 (2016 bytes, 400 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5510(void)
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

loc_000F5510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F552Fu); RECOMP_ABI_CALL(0x000390A0u, sub_000390A0); /* call 0x000390A0 */

loc_000F552F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5CE7; /* je: equal / zero */

loc_000F553C: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5CE7; /* je: equal / zero */

loc_000F554A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76EFAB43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0x76EFAB43 (32-bit) */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F56BB; /* je: equal / zero */

loc_000F55F1: ;
    _fa = (uint32_t)(MEM32(edi + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF45E50D5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1120), 0xF45E50D5u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F566B; /* jne: not equal / not zero */

loc_000F55FD: ;
    PUSH32(esp, 0x3FA0D97C);
    PUSH32(esp, 0xBFA0D97Cu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F560Cu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F560C: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F561Fu); RECOMP_ABI_CALL(0x00094000u, sub_00094000); /* call 0x00094000 */

loc_000F561F: ;
    PUSH32(esp, 0x3EA0D97C);
    PUSH32(esp, 0xBEA0D97Cu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F562Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F562E: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5641u); RECOMP_ABI_CALL(0x0009F710u, sub_0009F710); /* call 0x0009F710 */

loc_000F5641: ;
    PUSH32(esp, 0x3FA0D97C);
    PUSH32(esp, 0xBFA0D97Cu);

loc_000F564B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5650u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5650: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5663u); RECOMP_ABI_CALL(0x00094040u, sub_00094040); /* call 0x00094040 */

loc_000F5663: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000F5708;

loc_000F566B: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0xBFC90FDBu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F567Au); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F567A: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F568Du); RECOMP_ABI_CALL(0x00094000u, sub_00094000); /* call 0x00094000 */

loc_000F568D: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0xBFC90FDBu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F569Cu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F569C: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F56AFu); RECOMP_ABI_CALL(0x0009F710u, sub_0009F710); /* call 0x0009F710 */

loc_000F56AF: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0xBFC90FDBu);
    goto loc_000F564B;

loc_000F56BB: ;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F56C7u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F56C7: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F56DAu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F56DA: ;
    MEMF(esi + 0x230) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x4C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3167E4)); /* movss */
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x238) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x240) = xmm1.f[0]; /* movss */

loc_000F5708: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(edi);
    eax = esp + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1154FB1E);
    ecx = edi;
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000F57B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F57B1u); } /* indirect call */
    }

loc_000F57B4: ;
    ecx = MEM32(esi + 0xCC);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x48);
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 0xF0;
    MEM32(eax + 0x48) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F57DAu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000F57DA: ;
    eax = MEM32(edi + 0xB0);
    ecx = edi + 0xB0;
    edx = esp + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000F57F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F57EEu); } /* indirect call */
    }

loc_000F57F1: ;
    eax = esp + 0x110;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5805u); RECOMP_ABI_CALL(0x0009F6C0u, sub_0009F6C0); /* call 0x0009F6C0 */

loc_000F5805: ;
    edx = MEM32(esi);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000F5817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5811u); } /* indirect call */
    }

loc_000F5817: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000F5823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5820u); } /* indirect call */
    }

loc_000F5823: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76EFAB43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0x76EFAB43 (32-bit) */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000F5A28; /* jne: not equal / not zero */

loc_000F589A: ;
    SET_LO8(ecx, MEM8(0x3DB6D0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F58E9; /* jne: not equal / not zero */

loc_000F58A9: ;
    ecx = MEM32(0x3DB6D0);
    xmm2 = XMM_SCALAR(MEMF(0x316BC4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x316BC0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x316BBC)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DB6D0) = ecx;
    MEMF(0x3DB6C0) = xmm2.f[0]; /* movss */
    MEMF(0x3DB6C4) = xmm1.f[0]; /* movss */
    MEMF(0x3DB6C8) = xmm0.f[0]; /* movss */
    goto loc_000F5901;

loc_000F58E9: ;
    xmm0 = XMM_SCALAR(MEMF(0x3DB6C8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3DB6C4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3DB6C0)); /* movss */

loc_000F5901: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FF9B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1210)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x303CFC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1200)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F595Au); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F595A: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F598Eu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000F598E: ;
    xmm0 = XMM_SCALAR(MEMF(0x303CFC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1214)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1204)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59C1u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F59C1: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59F5u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000F59F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x303CFC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1218)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1208)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_000F5B1B;

loc_000F5A28: ;
    eax = MEM32(edi + 0x11F0);
    ecx = MEM32(edi + 0x11E0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A3Bu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5A3B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    edx = MEM32(edi + 0x11F4);
    eax = MEM32(edi + 0x11E4);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A58u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5A58: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    ecx = MEM32(edi + 0x11F8);
    edx = MEM32(edi + 0x11E8);
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A75u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5A75: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    eax = MEM32(edi + 0x1210);
    ecx = MEM32(edi + 0x1200);
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A92u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5A92: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5AC6u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000F5AC6: ;
    eax = MEM32(edi + 0x1214);
    ecx = MEM32(edi + 0x1204);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5AD9u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5AD9: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B0Du); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000F5B0D: ;
    eax = MEM32(edi + 0x1218);
    ecx = MEM32(edi + 0x1208);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000F5B1B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B20u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F5B20: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B54u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000F5B54: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = MEM32(edi + 0x1124);
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x120)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x130)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x134)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x138)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x128)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x118)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x100;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000F5C7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5C7Bu); } /* indirect call */
    }

loc_000F5C7E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x100)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    eax = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5CC9u); RECOMP_ABI_CALL(0x000FEAB0u, sub_000FEAB0); /* call 0x000FEAB0 */

loc_000F5CC9: ;
    ebx = MEM32(edi + 0x1128);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5CE7; /* je: equal / zero */

loc_000F5CD3: ;
    ecx = MEM32(edi + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000F5CDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5CDBu); } /* indirect call */
    }

loc_000F5CDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5CE7u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_000F5CE7: ;
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
 * sub_000F5CF0
 * Original: 0x000F5CF0 - 0x000F60E5 (1013 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F5CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xD4));
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1124);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F5D2D; /* je: equal / zero */

loc_000F5D0D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F5D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5D0Fu); } /* indirect call */
    }

loc_000F5D12: ;
    ecx = MEM32(eax + 0x1C0);
    if (0x19) _cf = (int)(((ecx) >> ((0x19) - 1)) & 1);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F5D2D; /* je: equal / zero */

loc_000F5D20: ;
    _fa = (uint32_t)(MEM32(esi + 0x1278)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1278), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F60DE; /* je: equal / zero */

loc_000F5D2D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1258)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1258), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F60DE; /* je: equal / zero */

loc_000F5D3A: ;
    edx = MEM32(esi + 0x1128);
    _fa = (uint32_t)(MEM8(edx + 0x230)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x230), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000F60C8; /* je: equal / zero */

loc_000F5D4D: ;
    _fa = (uint32_t)(MEM32(esi + 0x1178)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1178), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F5FAE; /* jne: not equal / not zero */

loc_000F5D59: ;
    _fa = (uint32_t)(MEM32(esi + 0x116C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x116C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000F5ED6; /* jle: less or equal (signed <=) */

loc_000F5D69: ;
    /* nop */

loc_000F5D70: ;
    eax = MEM32(esi + 0x1170);
    ecx = MEM32(eax + ebx * 4);
    edi = ebx;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 1);
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xD09437E5u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40C0C339) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x40C0C339)) >> 32) & 1);
    edi = edi + 0x40C0C339;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5D93u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000F5D93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5EC3; /* je: equal / zero */

loc_000F5D9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000F5DA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5DA2u); } /* indirect call */
    }

loc_000F5DA8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5EBF; /* je: equal / zero */

loc_000F5DB2: ;
    ecx = MEM32(esi + 0x1124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F5DBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5DBAu); } /* indirect call */
    }

loc_000F5DBD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000F5DC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5DC1u); } /* indirect call */
    }

loc_000F5DC7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM8(ebx + 0x110) = 1;
    MEM8(ebx + 0x111) = 1;
    MEM8(ebx + 0x112) = LO8(eax);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000F5E53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5E50u); } /* indirect call */
    }

loc_000F5E53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1154FB1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1154FB1E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F5E77; /* jne: not equal / not zero */

loc_000F5E5B: ;
    PUSH32(esp, 0xBFC90FDBu);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5E69u); RECOMP_ABI_CALL(0x00265DA0u, sub_00265DA0); /* call 0x00265DA0 */

loc_000F5E69: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5E77u); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000F5E77: ;
    eax = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    edx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000F5E8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5E8Bu); } /* indirect call */
    }

loc_000F5E8E: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5E9Fu); RECOMP_ABI_CALL(0x0009F6C0u, sub_0009F6C0); /* call 0x0009F6C0 */

loc_000F5E9F: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000F5EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5EA8u); } /* indirect call */
    }

loc_000F5EAE: ;
    eax = 0x23;
    MEM32(ebx + 0x114) = eax;
    MEM32(ebx + 0x118) = eax;

loc_000F5EBF: ;
    ebx = MEM32(esp + 0xC);

loc_000F5EC3: ;
    eax = MEM32(esi + 0x116C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000F5D70; /* jl: less (signed <) */

loc_000F5ED6: ;
    eax = MEM32(esi + 0x1174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5FAE; /* je: equal / zero */

loc_000F5EE4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40C0C339);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000F5EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5EEDu); } /* indirect call */
    }

loc_000F5EF3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5EFAu); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_000F5EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000F5FAE; /* jl: less (signed <) */

loc_000F5F02: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000F5F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5F07u); } /* indirect call */
    }

loc_000F5F0D: ;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    edi = esi + 0x1180;
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    XMM_STORE(edi, xmm1); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x50;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(edi + 0x20, xmm1); /* movaps */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5F5Au); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000F5F5A: ;
    ecx = MEM32(esi + 0x11C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5F6B; /* je: equal / zero */

loc_000F5F64: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5F69u); RECOMP_ABI_CALL(0x0018EF50u, sub_0018EF50); /* call 0x0018EF50 */

loc_000F5F69: ;
    goto loc_000F5F8B;

loc_000F5F6B: ;
    ecx = MEM32(esi + 0x1174);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5F78u); RECOMP_ABI_CALL(0x0018F2D0u, sub_0018F2D0); /* call 0x0018F2D0 */

loc_000F5F78: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5F7Fu); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_000F5F7F: ;
    PUSH32(esp, eax);
    ecx = esi + 0x11C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5F8Bu); RECOMP_ABI_CALL(0x00187920u, sub_00187920); /* call 0x00187920 */

loc_000F5F8B: ;
    eax = MEM32(esi + 0x11C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5FAE; /* je: equal / zero */

loc_000F5F95: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(eax + 0xE0) = 0;
    ecx = MEM32(esi + 0x11C4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5FAEu); RECOMP_ABI_CALL(0x00131F70u, sub_00131F70); /* call 0x00131F70 */

loc_000F5FAE: ;
    ecx = MEM32(esi + 0x1178);
    eax = MEM32(esi + 0x1160);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x1178) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F60DE; /* je: equal / zero */

loc_000F5FC9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40C0C339);
    ecx = esi;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000F6045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6042u); } /* indirect call */
    }

loc_000F6045: ;
    ecx = MEM32(esi + 0x1160);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000F6058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6052u); } /* indirect call */
    }

loc_000F6058: ;
    ecx = MEM32(esi + 0x1160);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6065u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F6065: ;
    ecx = MEM32(esi + 0x1124);
    edx = MEM32(ecx);
    edi = MEM32(esi + 0x1128);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000F6076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6073u); } /* indirect call */
    }

loc_000F6076: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1160);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6085u); RECOMP_ABI_CALL(0x001888E0u, sub_001888E0); /* call 0x001888E0 */

loc_000F6085: ;
    ecx = MEM32(esi + 0x1160);
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F60DE; /* je: equal / zero */

loc_000F6095: ;
    ecx = MEM32(esi + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000F60A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F609Du); } /* indirect call */
    }

loc_000F60A0: ;
    ecx = MEM32(esi + 0x1160);
    esi = MEM32(ecx + 0x16C);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000F60B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F60B0u); } /* indirect call */
    }

loc_000F60B6: ;
    MEM8(esi + 0x60) = 1;
    MEM8(esi + 0x61) = 1;
    MEM8(esi + 0x62) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F60C8: ;
    ecx = MEM32(esi + 0x1160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F60D8; /* je: equal / zero */

loc_000F60D2: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F60D8u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F60D8: ;
    MEM32(esi + 0x1178) = ebx;

loc_000F60DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F60F0
 * Original: 0x000F60F0 - 0x000F6981 (2193 bytes, 401 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F60F0(void)
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

loc_000F60F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6961; /* je: equal / zero */

loc_000F610D: ;
    ecx = MEM32(esi + 0x1124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000F6118u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6115u); } /* indirect call */
    }

loc_000F6118: ;
    ecx = MEM32(eax + 0x1CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1DC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6961; /* jne: not equal / not zero */

loc_000F612A: ;
    eax = MEM32(0x3DB650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6170; /* jne: not equal / not zero */

loc_000F6133: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3901F604);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6145u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000F6145: ;
    edx = MEM32(eax + 0xCC);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x48) = edx;
    ecx = MEM32(eax + 0x16C);
    edx = 0x23;
    MEM32(0x3DB650) = eax;
    MEM32(ecx + 0x64) = edx;
    MEM32(ecx + 0x68) = edx;

loc_000F6170: ;
    PUSH32(esp, 1);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6179u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F6179: ;
    ecx = MEM32(esi + 0x1124);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    MEMF(esp + 0x160) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    eax = esp + 0x1B0;
    MEMF(esp + 0x164) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x68)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x16C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F61B6u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_000F61B6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    edx = esp + 0x164;
    PUSH32(esp, edx);
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F61FBu); RECOMP_ABI_CALL(0x0015B7F0u, sub_0015B7F0); /* call 0x0015B7F0 */

loc_000F61FB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6202u); RECOMP_ABI_CALL(0x0015B820u, sub_0015B820); /* call 0x0015B820 */

loc_000F6202: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x1B4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6214u); RECOMP_ABI_CALL(0x0015B7F0u, sub_0015B7F0); /* call 0x0015B7F0 */

loc_000F6214: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F621Bu); RECOMP_ABI_CALL(0x0015B910u, sub_0015B910); /* call 0x0015B910 */

loc_000F621B: ;
    edx = MEM32(esi);
    eax = esp + 0x170;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB3AB5C05u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000F622Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F622Cu); } /* indirect call */
    }

loc_000F622F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A0)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A4)); /* movss */
    eax = esp + 0x170;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1AC)); /* movss */
    PUSH32(esp, 0x844ABB96u);
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000F6270u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F626Du); } /* indirect call */
    }

loc_000F6270: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A0)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A4)); /* movss */
    eax = esp + 0x170;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1AC)); /* movss */
    PUSH32(esp, 0xD05F7605u);
    ecx = esi;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000F62B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F62AEu); } /* indirect call */
    }

loc_000F62B1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A0)); /* movss */
    edx = MEM32(esi + 0xB0);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A4)); /* movss */
    ecx = esi + 0xB0;
    eax = esp + 0x90;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A8)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000F62F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F62F2u); } /* indirect call */
    }

loc_000F62F5: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC0); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xC8); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0xC0); /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0xC4); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0xC8); /* addss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0xC0); /* addss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0xC4); /* addss */
    ecx = MEM32(esp + 0xD0);
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0xC8); /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm7 = xmm1; /* movaps */
    xmm6 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    ecx = esp + 0x54;
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F661Bu); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_000F661B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xD4); /* subss */
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F666Fu); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_000F666F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, 0x3CF5C28F);
    ecx = esp + 0x74;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F66BCu); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_000F66BC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = esp + 0x80;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F66FEu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000F66FE: ;
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6709u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000F6709: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0xBF800000u);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6719u); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_000F6719: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0xE4;
    MEMF(esp + 0xE4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x118) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x120) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F67C5u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000F67C5: ;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F67D9u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000F67D9: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0xE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F67EAu); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000F67EA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = esp + 0x120;
    MEMF(esp + 0x15C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0xE4;
    MEMF(esp + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x140) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x150) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x124) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x138) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x144) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x148) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x154) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x158) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x15C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F68A1u); RECOMP_ABI_CALL(0x0009F6C0u, sub_0009F6C0); /* call 0x0009F6C0 */

loc_000F68A1: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F68B2u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000F68B2: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE99C)); /* fmul dword ptr [0x2fe99c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F68D9u); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_000F68D9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x40); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F6911; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x40)) */

loc_000F690D: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_000F6911: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = esp + 0x24;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0xE8;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6946u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000F6946: ;
    ecx = MEM32(0x3DB650);
    edx = MEM32(ecx);
    eax = esp + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000F695Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6956u); } /* indirect call */
    }

loc_000F695C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F6961: ;
    ecx = MEM32(0x3DB650);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F697C; /* je: equal / zero */

loc_000F696B: ;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F697C; /* je: equal / zero */

loc_000F6975: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F697Cu); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F697C: ;
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
 * sub_000F6990
 * Original: 0x000F6990 - 0x000F6A10 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6990: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3DB654);
    edx = MEM32(esi + 0x210);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1120);
    if (CMP_BE(_fa, _fb)) goto loc_000F69BF; /* jbe: below or equal (unsigned <=) */

loc_000F69AA: ;
    esi = MEM32(esi + 0x20C);

loc_000F69B0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A0C; /* je: equal / zero */

loc_000F69B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x164;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F69B0; /* jb: below (unsigned <) */

loc_000F69BF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F69C1: ;
    esi = MEM32(edi + 0xF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F69CE; /* je: equal / zero */

loc_000F69CB: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F69CE: ;
    SET_LO8(eax, MEM8(ecx + 0x1281));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F69F8; /* je: equal / zero */

loc_000F69D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A09; /* je: equal / zero */

loc_000F69DC: ;
    eax = MEM32(edi + 0xD4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F69EAu); RECOMP_ABI_CALL(0x00048BE0u, sub_00048BE0); /* call 0x00048BE0 */

loc_000F69EA: ;
    ecx = MEM32(edi + 0xD8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F69F8u); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_000F69F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A09; /* je: equal / zero */

loc_000F69FC: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F6A09; /* jne: not equal / not zero */

loc_000F6A01: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F6A09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6A07u); } /* indirect call */
    }

loc_000F6A09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F6A0C: ;
    edi = esi;
    goto loc_000F69C1;

}

/**
 * sub_000F6A10
 * Original: 0x000F6A10 - 0x000F6A90 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6A10: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3DB654);
    edx = MEM32(esi + 0x210);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1120);
    if (CMP_BE(_fa, _fb)) goto loc_000F6A3F; /* jbe: below or equal (unsigned <=) */

loc_000F6A2A: ;
    esi = MEM32(esi + 0x20C);

loc_000F6A30: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A8C; /* je: equal / zero */

loc_000F6A34: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x164;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F6A30; /* jb: below (unsigned <) */

loc_000F6A3F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F6A41: ;
    esi = MEM32(edi + 0xF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A4E; /* je: equal / zero */

loc_000F6A4B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F6A4E: ;
    SET_LO8(eax, MEM8(ecx + 0x1281));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A78; /* je: equal / zero */

loc_000F6A58: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A89; /* je: equal / zero */

loc_000F6A5C: ;
    eax = MEM32(edi + 0xD4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F6A6Au); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_000F6A6A: ;
    ecx = MEM32(edi + 0xD8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F6A78u); RECOMP_ABI_CALL(0x00048BE0u, sub_00048BE0); /* call 0x00048BE0 */

loc_000F6A78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A89; /* je: equal / zero */

loc_000F6A7C: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F6A89; /* jne: not equal / not zero */

loc_000F6A81: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F6A89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6A87u); } /* indirect call */
    }

loc_000F6A89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F6A8C: ;
    edi = esi;
    goto loc_000F6A41;

}

/**
 * sub_000F6A90
 * Original: 0x000F6A90 - 0x000F6AD4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6A90: ;
    ecx = MEM32(0x3DB654);
    edx = MEM32(ecx + 0x210);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F6ABF; /* jbe: below or equal (unsigned <=) */

loc_000F6AA3: ;
    ecx = MEM32(ecx + 0x20C);
    esi = MEM32(esp + 8);
    /* nop */

loc_000F6AB0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6AC3; /* je: equal / zero */

loc_000F6AB4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x164;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F6AB0; /* jb: below (unsigned <) */

loc_000F6ABF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F6AC3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6ABF; /* je: equal / zero */

loc_000F6AC7: ;
    eax = MEM32(ecx + 0x24);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00154E00(); return; /* tail jmp 0x00154E00 */

}

/**
 * sub_000F6AE0
 * Original: 0x000F6AE0 - 0x000F6B3A (90 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6AE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3DB654);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6B1C; /* jne: not equal / not zero */

loc_000F6AEA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x218);
    PUSH32(esp, 0x316BDC);
    PUSH32(esp, 0x000F6AFEu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000F6AFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6B12; /* je: equal / zero */

loc_000F6B05: ;
    MEM32(eax) = 0x316958;
    MEM32(0x3DB654) = eax;
    goto loc_000F6B1C;

loc_000F6B12: ;
    MEM32(0x3DB654) = 0;

loc_000F6B1C: ;
    PUSH32(esp, 0x316BC8);
    ecx = esp + 4;
    PUSH32(esp, 0x000F6B2Au); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000F6B2A: ;
    PUSH32(esp, eax);
    eax = MEM32(0x3DB654);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6B36u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000F6B36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6B40
 * Original: 0x000F6B40 - 0x000F77E0 (3232 bytes, 1052 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6B40(void)
{
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

loc_000F6B40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x214);
    edx = MEM32(ebx + 0x20C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x164);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F6B67u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000F6B67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150B90A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x150B90A4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F71E6; /* jg: greater (signed >) */

loc_000F6B72: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F71C9; /* je: equal / zero */

loc_000F6B78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC6387BEDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC6387BEDu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6EBE; /* jg: greater (signed >) */

loc_000F6B83: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6EA9; /* je: equal / zero */

loc_000F6B89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAD47A993u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAD47A993u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6D71; /* jg: greater (signed >) */

loc_000F6B94: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D18; /* je: equal / zero */

loc_000F6B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E75C86Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E75C86Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6C95; /* jg: greater (signed >) */

loc_000F6BA5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6C7D; /* je: equal / zero */

loc_000F6BAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8641DC6Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8641DC6Eu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6C0C; /* jg: greater (signed >) */

loc_000F6BB2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BF4; /* je: equal / zero */

loc_000F6BB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82B45E2Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82B45E2Au (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BDF; /* je: equal / zero */

loc_000F6BBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83EC6C6Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x83EC6C6Du (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6BC6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6BCFu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6BCF: ;
    POP32(esp, edi);
    MEM16(esi + 0x148) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6BDF: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6BE8u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6BE8: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6BF4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6BFDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6BFD: ;
    POP32(esp, edi);
    MEM32(esi + 0x9C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87B71023u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x87B71023u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6C60; /* je: equal / zero */

loc_000F6C13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89F08A82u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89F08A82u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6C1E: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F6C29u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000F6C29: ;
    ecx = MEM32(ebx + 0x208);
    MEM32(ebx + ecx * 4 + 0x108) = eax;
    edx = MEM32(ebx + 0x208);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + edx * 4 + 0x188) = eax;
    eax = MEM32(ebx + 0x208);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 0x208) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C60: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6C69u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(esi + 0x15A) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C7D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6C86u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6C86: ;
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9FE9E228u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9FE9E228u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6CF5; /* jg: greater (signed >) */

loc_000F6C9C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CDD; /* je: equal / zero */

loc_000F6C9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F517BEEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F517BEEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CC8; /* je: equal / zero */

loc_000F6CA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9CBBAB2Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9CBBAB2Eu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6CB0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6CB9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6CB9: ;
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6CC8: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6CD1u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6CD1: ;
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6CDD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6CE6u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6CE6: ;
    POP32(esp, edi);
    MEM32(esi + 0x90) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6CF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA6FC8714u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA6FC8714u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6D00: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6D09u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6D09: ;
    MEMF(esi + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6D18: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6D21u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6D21: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x31BE80)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000F6D4A; /* jbe: below or equal (unsigned <=) */

loc_000F6D31: ;
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6D4A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F6D60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F6D5D: ;
    xmm0 = xmm1; /* movaps */

loc_000F6D60: ;
    POP32(esp, edi);
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6D71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB35C44B7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB35C44B7u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6E21; /* jg: greater (signed >) */

loc_000F6D7C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6E0C; /* je: equal / zero */

loc_000F6D82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAEB8F060u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAEB8F060u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6DE9; /* jg: greater (signed >) */

loc_000F6D89: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DCA; /* je: equal / zero */

loc_000F6D8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAD4CEC30u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAD4CEC30u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DB2; /* je: equal / zero */

loc_000F6D92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADFA8E57u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADFA8E57u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6D9D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6DA6u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6DA6: ;
    POP32(esp, edi);
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6DB2: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6DBBu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6DBB: ;
    MEMF(esi + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6DCA: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(esi + 0x150) = 0;
    PUSH32(esp, 0x000F6DDAu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6DDA: ;
    POP32(esp, edi);
    MEM32(esi + 0x124) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6DE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0BB4D33u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB0BB4D33u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6DF4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6DFDu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6DFD: ;
    MEMF(esi + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E0C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6E15u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6E15: ;
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF7475F1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBF7475F1u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6E81; /* jg: greater (signed >) */

loc_000F6E28: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6E69; /* je: equal / zero */

loc_000F6E2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE787D19u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBE787D19u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6E51; /* je: equal / zero */

loc_000F6E31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBEB96173u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBEB96173u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6E3C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6E45u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6E45: ;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E51: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6E5Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6E5A: ;
    MEMF(esi + 0x118) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E69: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6E72u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6E72: ;
    MEMF(esi + 0x130) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2F25C21u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2F25C21u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6E8C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F6E97u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000F6E97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xA8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6EA9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6EB2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6EB2: ;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6EBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEFDCEEFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEFDCEEFDu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F7013; /* jg: greater (signed >) */

loc_000F6EC9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6FFE; /* je: equal / zero */

loc_000F6ECF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD5C06D9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDD5C06D9u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6F7E; /* jg: greater (signed >) */

loc_000F6EDA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F65; /* je: equal / zero */

loc_000F6EE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCDBCFDA8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCDBCFDA8u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6F41; /* jg: greater (signed >) */

loc_000F6EE7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F29; /* je: equal / zero */

loc_000F6EE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCBDD5E29u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCBDD5E29u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F14; /* je: equal / zero */

loc_000F6EF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCBE25099u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCBE25099u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6EFB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6F04u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6F04: ;
    POP32(esp, edi);
    MEM16(esi + 0x152) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6F14: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6F1Du); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6F1D: ;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6F29: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6F32u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F6F32: ;
    MEMF(esi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6F41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0622602u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0622602u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6F4C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6F55u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6F55: ;
    POP32(esp, edi);
    MEM16(esi + 0x154) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6F65: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6F6Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6F6E: ;
    POP32(esp, edi);
    MEM16(esi + 0x116) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6F7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE6DAF76Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE6DAF76Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F6FDB; /* jg: greater (signed >) */

loc_000F6F85: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6FC6; /* je: equal / zero */

loc_000F6F87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE10F95DCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE10F95DCu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6FAE; /* je: equal / zero */

loc_000F6F8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE690B5DCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE690B5DCu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6F99: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6FA2u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6FA2: ;
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FAE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6FB7u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6FB7: ;
    POP32(esp, edi);
    MEM32(esi + 0x10C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FC6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6FCFu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6FCF: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEBC0432Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEBC0432Fu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F6FE6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F6FEFu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F6FEF: ;
    POP32(esp, edi);
    MEM32(esi + 0xDC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FFE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7007u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7007: ;
    POP32(esp, edi);
    MEM32(esi + 0x78) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA3544B4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA3544B4u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F70B9; /* jg: greater (signed >) */

loc_000F701E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F70A4; /* je: equal / zero */

loc_000F7024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7D06170u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7D06170u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F7081; /* jg: greater (signed >) */

loc_000F702B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F706C; /* je: equal / zero */

loc_000F702D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1B1C2F1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF1B1C2F1u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7054; /* je: equal / zero */

loc_000F7034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5F7BA51u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF5F7BA51u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F703F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7048u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7048: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7054: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F705Du); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F705D: ;
    MEMF(esi + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F706C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7075u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7075: ;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7081: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF8E773DCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF8E773DCu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F708C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7095u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7095: ;
    MEMF(esi + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F70A4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F70ADu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F70AD: ;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F70B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCACDCBB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCACDCBB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F71A6; /* jg: greater (signed >) */

loc_000F70C4: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F718E; /* je: equal / zero */

loc_000F70CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29B988A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29B988A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7135; /* je: equal / zero */

loc_000F70D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC706E0F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC706E0F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F70DC: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F70E5u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F70E5: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2FF224)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000F710E; /* jbe: below or equal (unsigned <=) */

loc_000F70F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F710E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F7124; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F7121: ;
    xmm0 = xmm1; /* movaps */

loc_000F7124: ;
    POP32(esp, edi);
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7135: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7140u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000F7140: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F7150u); RECOMP_ABI_CALL(0x000491E0u, sub_000491E0); /* call 0x000491E0 */

loc_000F7150: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xF0;
    PUSH32(esp, 0x000F715Fu); RECOMP_ABI_CALL(0x000E95F0u, sub_000E95F0); /* call 0x000E95F0 */

loc_000F715F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F717E; /* je: equal / zero */

loc_000F7167: ;
    edi = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(eax) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000F717E; /* jne: not equal / not zero */

loc_000F7178: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F717Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F717Cu); } /* indirect call */
    }

loc_000F717E: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F718E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7197u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7197: ;
    MEMF(esi + 0x134) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F71A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7EC660) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7EC660 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F71B1: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F71BAu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F71BA: ;
    MEMF(esi + 0xCC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F71C9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F71D2u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F71D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(esi + 0x157) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F71E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F2C21A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F2C21A8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F74FC; /* jg: greater (signed >) */

loc_000F71F1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F74E4; /* je: equal / zero */

loc_000F71F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32A20F02) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32A20F02 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F736F; /* jg: greater (signed >) */

loc_000F7202: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7356; /* je: equal / zero */

loc_000F7208: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24AECB7C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24AECB7C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F72D3; /* jg: greater (signed >) */

loc_000F7213: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F72A1; /* je: equal / zero */

loc_000F7219: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DE165E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DE165E4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F727E; /* jg: greater (signed >) */

loc_000F7220: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7266; /* je: equal / zero */

loc_000F7222: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18CE6AC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18CE6AC7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7251; /* je: equal / zero */

loc_000F7229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C85A824) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C85A824 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7234: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F723Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F723D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(esi + 0x159) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7251: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F725Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F725A: ;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7266: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F726Fu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F726F: ;
    MEMF(esi + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F727E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22CCF15C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22CCF15C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7289: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7292u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7292: ;
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F72A1: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F72ACu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000F72AC: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F72B7u); RECOMP_ABI_CALL(0x00065D50u, sub_00065D50); /* call 0x00065D50 */

loc_000F72B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE8) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + 0xEC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F72D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FABDD57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2FABDD57 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F7333; /* jg: greater (signed >) */

loc_000F72DA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F731B; /* je: equal / zero */

loc_000F72DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C3559E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C3559E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7306; /* je: equal / zero */

loc_000F72E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x297D738F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x297D738F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F72EE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F72F7u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F72F7: ;
    MEMF(esi + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7306: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F730Fu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F730F: ;
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F731B: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7324u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7324: ;
    MEMF(esi + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7333: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3264CA0A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3264CA0A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F733E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7347u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7347: ;
    MEMF(esi + 0x13C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7356: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F735Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F735F: ;
    POP32(esp, edi);
    MEM16(esi + 0x114) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F736F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44E20316) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x44E20316 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F741C; /* jg: greater (signed >) */

loc_000F737A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7404; /* je: equal / zero */

loc_000F7380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CE16BD6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3CE16BD6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F73DA; /* jg: greater (signed >) */

loc_000F7387: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F73C5; /* je: equal / zero */

loc_000F7389: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34BBAE48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34BBAE48 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F73B0; /* je: equal / zero */

loc_000F7390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3816C8DF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3816C8DF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F739B: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F73A4u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F73A4: ;
    POP32(esp, edi);
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F73B0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F73B9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F73B9: ;
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F73C5: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F73CEu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F73CE: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F73DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40CFD4C1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40CFD4C1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F73E5: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(esi + 0x150) = 1;
    PUSH32(esp, 0x000F73F5u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F73F5: ;
    POP32(esp, edi);
    MEM32(esi + 0x124) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7404: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F740Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F740D: ;
    POP32(esp, edi);
    MEM32(esi + 0xD4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F741C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A39E825) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A39E825 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F749A; /* jg: greater (signed >) */

loc_000F7423: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7482; /* je: equal / zero */

loc_000F7425: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x458C50D3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x458C50D3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F744C; /* je: equal / zero */

loc_000F742C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46F0535D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46F0535D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7437: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7440u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7440: ;
    POP32(esp, edi);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F744C: ;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x84), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000F77D7; /* jge: greater or equal (signed >=) */

loc_000F7459: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7462u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7462: ;
    ecx = MEM32(esi + 0x84);
    MEM32(esi + ecx * 4 + 0x7C) = eax;
    eax = MEM32(esi + 0x84);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x84) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7482: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F748Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F748B: ;
    POP32(esp, edi);
    MEM32(esi + 0xD8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F749A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DDB34EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DDB34EE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F74A5: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F74B0u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000F74B0: ;
    ecx = MEM32(ebx + 0x104);
    MEM32(ebx + ecx * 4 + 4) = eax;
    edx = MEM32(ebx + 0x104);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + edx * 4 + 0x84) = eax;
    eax = MEM32(ebx + 0x104);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 0x104) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F74E4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F74EDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F74ED: ;
    POP32(esp, edi);
    MEM32(esi + 0x128) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F74FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6ADEAAB8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6ADEAAB8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F765B; /* jg: greater (signed >) */

loc_000F7507: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F763E; /* je: equal / zero */

loc_000F750D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C424F00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C424F00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F75B6; /* jg: greater (signed >) */

loc_000F7518: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F75A1; /* je: equal / zero */

loc_000F751E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x548813A6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x548813A6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F7581; /* jg: greater (signed >) */

loc_000F7525: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7569; /* je: equal / zero */

loc_000F7527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50EB9816) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50EB9816 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7551; /* je: equal / zero */

loc_000F752E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50FB5A9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50FB5A9B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7539: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7542u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7542: ;
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7551: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F755Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F755A: ;
    MEMF(esi + 0x138) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7569: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7572u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7572: ;
    POP32(esp, edi);
    MEM32(esi + 0x98) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A17A6D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A17A6D0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F758C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7595u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7595: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F75A1: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F75AAu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F75AA: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F75B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6428F6ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6428F6ED (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F761B; /* jg: greater (signed >) */

loc_000F75BD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F75FE; /* je: equal / zero */

loc_000F75BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x604F7059) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x604F7059 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F75E9; /* je: equal / zero */

loc_000F75C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x636916AF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x636916AF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F75D1: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F75DAu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F75DA: ;
    POP32(esp, edi);
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F75E9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F75F2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F75F2: ;
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F75FE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7607u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7607: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(esi + 0x156) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F761B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6994247E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6994247E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7626: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F762Fu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F762F: ;
    MEMF(esi + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F763E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7647u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(esi + 0x158) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F765B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75691216) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75691216 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F772B; /* jg: greater (signed >) */

loc_000F7666: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7713; /* je: equal / zero */

loc_000F766C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CBC90FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6CBC90FB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F76F0; /* jg: greater (signed >) */

loc_000F7673: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F76B7; /* je: equal / zero */

loc_000F7675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6AF9529D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6AF9529D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F769F; /* je: equal / zero */

loc_000F767C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6AF99558) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6AF99558 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7687: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7690u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7690: ;
    MEMF(esi + 0x140) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F769F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F76A8u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F76A8: ;
    MEMF(esi + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F76B7: ;
    _fa = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x108), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000F77D7; /* jge: greater or equal (signed >=) */

loc_000F76C4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F76CDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F76CD: ;
    ecx = MEM32(esi + 0x108);
    MEM32(esi + ecx * 4 + 0x100) = eax;
    eax = MEM32(esi + 0x108);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x108) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F76F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7542552A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7542552A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F76FB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7704u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F7704: ;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F7713: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F771Cu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F771C: ;
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F772B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7A368CAB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7A368CAB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000F77C4; /* jg: greater (signed >) */

loc_000F7736: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F77AC; /* je: equal / zero */

loc_000F7738: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x795A6533) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x795A6533 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000F775F; /* je: equal / zero */

loc_000F773F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x79FF9500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x79FF9500 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F774A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F7753u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F7753: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F775F: ;
    ecx = edi;
    PUSH32(esp, 0x000F7766u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_000F7766: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F776Cu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F776C: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F7774u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F7774: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xE0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F7781: ;
    PUSH32(esp, 0xA4EAAD95u);
    ecx = edi;
    PUSH32(esp, 0x000F778Du); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_000F778D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F7794u); RECOMP_ABI_CALL(0x00154D20u, sub_00154D20); /* call 0x00154D20 */

loc_000F7794: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F779Au); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F779A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xE0) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F77AC: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F77B5u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000F77B5: ;
    POP32(esp, edi);
    MEM32(esi + 0xE4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F77C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7EBF8F6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7EBF8F6B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F77D7; /* jne: not equal / not zero */

loc_000F77CB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000F77D4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000F77D4: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F77D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_000F77E0
 * Original: 0x000F77E0 - 0x000F7860 (128 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F77E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F77E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    esi = ecx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x164);
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x316C14);
    MEM32(edi + 0x210) = ecx;
    MEM32(edi + 0x214) = 0;
    PUSH32(esp, 0x000F7817u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000F7817: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F784A; /* je: equal / zero */

loc_000F781E: ;
    ecx = esi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = esi;
    edx = eax + 4;
    if (CMP_L(_fas, _fbs)) goto loc_000F783F; /* jl: less (signed <) */

loc_000F782A: ;
    eax = edx + 0xF0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F7831: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x164;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7831; /* jne: not equal / not zero */

loc_000F783F: ;
    MEM32(edi + 0x20C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F784A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x20C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F7860
 * Original: 0x000F7860 - 0x000F7A1A (442 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7860: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    ecx = MEM32(esi + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7894; /* je: equal / zero */

loc_000F7883: ;
    MEM32(esi + 0xF0) = ebx;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7894; /* jne: not equal / not zero */

loc_000F788E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F7894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7892u); } /* indirect call */
    }

loc_000F7894: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xFC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM8(esi + 0x159) = LO8(ebx);
    MEM16(esi + 0x14A) = 1;
    MEMF(esi + 0x118) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11C) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x158) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7A20
 * Original: 0x000F7A20 - 0x000F7C30 (528 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000F7A2Au); RECOMP_ABI_CALL(0x000E8680u, sub_000E8680); /* call 0x000E8680 */

loc_000F7A2A: ;
    MEM32(esi) = 0x3169B8;
    MEM32(esi + 8) = 0x3169AC;
    MEM32(esi + 0xB0) = 0x316988;
    MEM32(esi + 0xB4) = 0x316980;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x11C4) = ebx;
    MEM32(esi + 0x11C8) = ebx;
    MEM32(esi + 0x11CC) = ebx;
    ecx = esi + 0x12D4;
    MEM32(esi + 0x11C0) = 0x307680;
    PUSH32(esp, 0x000F7A74u); RECOMP_ABI_CALL(0x000E79C0u, sub_000E79C0); /* call 0x000E79C0 */

loc_000F7A74: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = 0xFF;
    MEM32(esi + 0x1120) = ebx;
    MEM32(esi + 0x1124) = ebx;
    MEM32(esi + 0x1128) = ebx;
    MEM8(esi + 0x1158) = LO8(ebx);
    MEM8(esi + 0x1159) = LO8(ebx);
    MEM8(esi + 0x115A) = LO8(ebx);
    MEM8(esi + 0x115B) = LO8(ebx);
    MEM8(esi + 0x115C) = LO8(ebx);
    MEM32(esi + 0x1160) = ebx;
    MEMF(esi + 0x1164) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1168) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x116C) = ebx;
    MEM32(esi + 0x1170) = ebx;
    MEM32(esi + 0x1174) = ebx;
    MEM32(esi + 0x1178) = ebx;
    MEM32(esi + 0x11D4) = ebx;
    MEMF(esi + 0x11E0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11E4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11E8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11F0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11F8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1200) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1204) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1208) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1210) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1214) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1218) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1258) = MEM8(esi + 0x1258) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x1258)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x1224) = LO8(ebx);
    MEMF(esi + 0x1220) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1228) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x122C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1230) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1234) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1238) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x123C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1240) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1244) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1248) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x124C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1250) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1254) = ebx;
    MEMF(esi + 0x1260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1264) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1268) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1270) = ebx;
    MEM32(esi + 0x1278) = ebx;
    MEM32(esi + 0x127C) = ebx;
    MEM8(esi + 0x1280) = LO8(ebx);
    MEM32(esi + 0x1274) = ebx;
    MEM8(esi + 0x1290) = 1;
    ecx = 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x1294;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7C30
 * Original: 0x000F7C30 - 0x000F7D1A (234 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F7C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F7C38u); RECOMP_ABI_CALL(0x000F60F0u, sub_000F60F0); /* call 0x000F60F0 */

loc_000F7C38: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F7C44u); RECOMP_ABI_CALL(0x000E7300u, sub_000E7300); /* call 0x000E7300 */

loc_000F7C44: ;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7C96; /* jne: not equal / not zero */

loc_000F7C4E: ;
    xmm1 = XMM_SCALAR(MEMF(0x3167E8)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x128C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F7C96; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x128C)) */

loc_000F7C5F: ;
    ecx = esi;
    PUSH32(esp, 0x000F7C66u); RECOMP_ABI_CALL(0x000F4520u, sub_000F4520); /* call 0x000F4520 */

loc_000F7C66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7C96; /* je: equal / zero */

loc_000F7C6A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x128C); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x128C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F7CA1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F7C8D: ;
    ecx = esi;
    PUSH32(esp, 0x000F7C94u); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_000F7C94: ;
    goto loc_000F7CA1;

loc_000F7C96: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x128C) = xmm0.f[0]; /* movss */

loc_000F7CA1: ;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7CC1; /* je: equal / zero */

loc_000F7CAB: ;
    SET_LO8(eax, MEM8(esi + 0x115A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7CC1; /* jne: not equal / not zero */

loc_000F7CB5: ;
    ecx = MEM32(esi + 0xF0);
    MEM8(ecx + 0x6C) = 1;
    goto loc_000F7CCB;

loc_000F7CC1: ;
    edx = MEM32(esi + 0xF0);
    MEM8(edx + 0x6C) = 0;

loc_000F7CCB: ;
    SET_LO8(eax, MEM8(esi + 0x1158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7CDC; /* je: equal / zero */

loc_000F7CD5: ;
    ecx = esi;
    PUSH32(esp, 0x000F7CDCu); RECOMP_ABI_CALL(0x000F5CF0u, sub_000F5CF0); /* call 0x000F5CF0 */

loc_000F7CDC: ;
    ecx = MEM32(esi + 0x1128);
    PUSH32(esp, 0x000F7CE7u); RECOMP_ABI_CALL(0x00187A40u, sub_00187A40); /* call 0x00187A40 */

loc_000F7CE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7D16; /* jne: not equal / not zero */

loc_000F7CEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x1298;
    ebx = 8;

loc_000F7CF8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7D0E; /* je: equal / zero */

loc_000F7CFD: ;
    eax = edi + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F7D08u); RECOMP_ABI_CALL(0x000F5510u, sub_000F5510); /* call 0x000F5510 */

loc_000F7D08: ;
    MEM32(edi) = 0;

loc_000F7D0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7CF8; /* jne: not equal / not zero */

loc_000F7D14: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000F7D16: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7D20
 * Original: 0x000F7D20 - 0x000F7D47 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7D20: ;
    eax = MEM32(0x3DB654);
    ecx = MEM32(eax + 0x20C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7D46; /* je: equal / zero */

loc_000F7D2F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F7D36u); RECOMP_ABI_CALL(0x000F7F10u, sub_000F7F10); /* call 0x000F7F10 */

loc_000F7D36: ;
    ecx = MEM32(0x3DB654);
    MEM32(ecx + 0x20C) = 0;

loc_000F7D46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7D50
 * Original: 0x000F7D50 - 0x000F7D91 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7D50: ;
    edx = MEM32(ecx + 0x20C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x214);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x164);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ecx + 0x104) = eax;
    MEM32(ecx + 0x208) = eax;
    PUSH32(esp, 0x000F7D79u); RECOMP_ABI_CALL(0x000F7860u, sub_000F7860); /* call 0x000F7860 */

loc_000F7D79: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F7DA0
 * Original: 0x000F7DA0 - 0x000F7E17 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7DA0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000F7E13; /* jg: greater (signed >) */

loc_000F7DAE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7E11; /* jne: not equal / not zero */

loc_000F7DBD: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x316C4C);
    PUSH32(esp, 0x000F7DCEu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000F7DCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7DFE; /* je: equal / zero */

loc_000F7DD5: ;
    MEM32(eax) = 0x310C84;
    MEM32(eax + 0x10) = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    MEM8(eax + 0x15) = LO8(ebx);
    MEM8(eax + 0x16) = LO8(ebx);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x50) = esi;
    MEM32(eax + 0x54) = esi;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x58) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    goto loc_000F7E00;

loc_000F7DFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7E00: ;
    ecx = MEM32(esp + 0x14);
    MEM32(edi + 0xC) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F7E11u); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_000F7E11: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F7E13: ;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F7E20
 * Original: 0x000F7E20 - 0x000F7EED (205 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F7E20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x214);
    ebx = MEM32(edi + 0x20C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x164);
    eax = MEM32(edi + 0x104);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0xF0;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000F7E52u); RECOMP_ABI_CALL(0x000F4880u, sub_000F4880); /* call 0x000F4880 */

loc_000F7E52: ;
    edx = MEM32(edi + 0x208);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = edi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000F7E6Au); RECOMP_ABI_CALL(0x000F7DA0u, sub_000F7DA0); /* call 0x000F7DA0 */

loc_000F7E6A: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7E73; /* je: equal / zero */

loc_000F7E70: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F7E73: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7E89; /* je: equal / zero */

loc_000F7E7D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7E89; /* je: equal / zero */

loc_000F7E81: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000F7E89u); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_000F7E89: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x118)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    ecx = MEM32(esi);
    edx = MEM32(esi + 0xC);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esi + 0x110) = ecx;
    MEM32(esi + 0x12C) = edx;
    MEM32(esi + 0x14C) = 0;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F7EC9; /* jp: parity */

loc_000F7EB9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esi + 0x11C) = xmm0.f[0]; /* movss */

loc_000F7EC9: ;
    ecx = MEM32(edi + 0x214);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x214) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7EE7; /* je: equal / zero */

loc_000F7EDA: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) - 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7EE7; /* jne: not equal / not zero */

loc_000F7EDF: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F7EE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7EE5u); } /* indirect call */
    }

loc_000F7EE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F7EF0
 * Original: 0x000F7EF0 - 0x000F7EF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7EF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000F7FC0(); return; /* tail jmp 0x000F7FC0 */

}

/**
 * sub_000F7F00
 * Original: 0x000F7F00 - 0x000F7F0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7F00: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000F7FC0(); return; /* tail jmp 0x000F7FC0 */

}

/**
 * sub_000F7F10
 * Original: 0x000F7F10 - 0x000F7FB8 (168 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7F10: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F7F81; /* je: equal / zero */

loc_000F7F1D: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x164);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000F7F6B; /* js: sign (negative) */

loc_000F7F31: ;
    PUSH32(esp, ebp);
    esi = eax + 0xF0;
    ebp = ecx + 1;
    goto loc_000F7F40;

    /* nop */

loc_000F7F40: ;
    ecx = MEM32(esi + -584);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x164;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F56; /* je: equal / zero */

loc_000F7F50: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F7F56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7F54u); } /* indirect call */
    }

loc_000F7F56: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F67; /* je: equal / zero */

loc_000F7F5C: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7F67; /* jne: not equal / not zero */

loc_000F7F61: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F7F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7F65u); } /* indirect call */
    }

loc_000F7F67: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7F40; /* jne: not equal / not zero */

loc_000F7F6A: ;
    POP32(esp, ebp);

loc_000F7F6B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7F79; /* je: equal / zero */

loc_000F7F70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7F76u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000F7F76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7F79: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F7F81: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F8E; /* je: equal / zero */

loc_000F7F88: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F7F8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7F8Cu); } /* indirect call */
    }

loc_000F7F8E: ;
    ecx = MEM32(esi + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7FA3; /* je: equal / zero */

loc_000F7F98: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F7FA3; /* jne: not equal / not zero */

loc_000F7F9D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F7FA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7FA1u); } /* indirect call */
    }

loc_000F7FA3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7FB1; /* je: equal / zero */

loc_000F7FA8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F7FAEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000F7FAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7FB1: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7FC0
 * Original: 0x000F7FC0 - 0x000F7FCE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FC0(void)
{

loc_000F7FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F7FC8u); RECOMP_ABI_CALL(0x000F48F0u, sub_000F48F0); /* call 0x000F48F0 */

loc_000F7FC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7FD0
 * Original: 0x000F7FD0 - 0x000F7FDD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FD0(void)
{

loc_000F7FD0: ;
    MEM8(0x3DB8A5) = 1;
    eax = 0x3DB6E0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7FE0
 * Original: 0x000F7FE0 - 0x000F7FE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FE0(void)
{

loc_000F7FE0: ;
    MEM8(0x3DB8A5) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7FF0
 * Original: 0x000F7FF0 - 0x000F7FF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FF0(void)
{

loc_000F7FF0: ;
    MEM8(0x3DB8A4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8000
 * Original: 0x000F8000 - 0x000F8006 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8000(void)
{

loc_000F8000: ;
    eax = MEM32(0x3DB8A0);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8010
 * Original: 0x000F8010 - 0x000F802C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8010: ;
    ecx = MEM32(0x3DB8A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8021; /* je: equal / zero */

loc_000F801A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000F8021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F801Eu); } /* indirect call */
    }

loc_000F8021: ;
    MEM32(0x3DB8A0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8030
 * Original: 0x000F8030 - 0x000F804E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8030: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xB4) = LO8(eax);
    ecx = MEM32(ecx + 0xB0);
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_000F8050
 * Original: 0x000F8050 - 0x000F8059 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8050: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_000F8060
 * Original: 0x000F8060 - 0x000F809D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8060: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000F806Eu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000F806E: ;
    eax = MEM32(esi + 0xC0);
    ecx = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000F807Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F807Bu); } /* indirect call */
    }

loc_000F807E: ;
    SET_LO8(eax, MEM8(esi + 0xB5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8098; /* je: equal / zero */

loc_000F8088: ;
    edx = MEM32(esi + 0x120);
    ecx = esi + 0x120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000F8098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8095u); } /* indirect call */
    }

loc_000F8098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F80A0
 * Original: 0x000F80A0 - 0x000F80DB (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F80A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F80A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB0);
    MEM32(esi) = 0x316C90;
    MEM32(esi + 8) = 0x316C84;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000F80BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F80BAu); } /* indirect call */
    }

loc_000F80BD: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x000F80C8u); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_000F80C8: ;
    ecx = esi + 0xC0;
    PUSH32(esp, 0x000F80D3u); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_000F80D3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000F80E0
 * Original: 0x000F80E0 - 0x000F8103 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F80E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F80E0: ;
    ecx = MEM32(0x3DB8A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F80FB; /* je: equal / zero */

loc_000F80EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000F80F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F80EEu); } /* indirect call */
    }

loc_000F80F1: ;
    MEM32(0x3DB8A0) = 0;

loc_000F80FB: ;
    MEM8(0x3DB8A4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8110
 * Original: 0x000F8110 - 0x000F82A3 (403 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F829B; /* je: equal / zero */

loc_000F812E: ;
    xmm0 = XMM_MEM(esi + 0x180); /* movaps */
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xD4);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x190); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x1A0); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x1B0); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm0; /* movaps */
    XMM_STORE(esp + 0x50, xmm1); /* movaps */
    XMM_STORE(esp + 0x60, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x54;
    XMM_STORE(esp + 0x74, xmm3); /* movaps */
    XMM_STORE(esp + 0x84, xmm0); /* movaps */
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm2); /* movaps */
    XMM_STORE(0x534390, xmm3); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F81BAu); RECOMP_ABI_CALL(0x002650A0u, sub_002650A0); /* call 0x002650A0 */

loc_000F81BA: ;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F81CBu); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000F81CB: ;
    edx = MEM32(esi + 0xC0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi + 0xC0;
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000F81EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F81E7u); } /* indirect call */
    }

loc_000F81EA: ;
    SET_LO8(eax, MEM8(esi + 0xB5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8213; /* je: equal / zero */

loc_000F81F4: ;
    edx = MEM32(esi + 0x120);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi + 0x120;
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000F8213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8210u); } /* indirect call */
    }

loc_000F8213: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F821Au); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000F821A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = eax;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x58) = 0xF8050;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi, xmm1); /* movaps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = edi;
    XMM_STORE(esi + 0x20, xmm1); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F8258u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000F8258: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F825Fu); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000F825F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x58) = 0xF8050;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi, xmm1); /* movaps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    PUSH32(esp, eax);
    PUSH32(esp, 0x21);
    ecx = edi;
    XMM_STORE(esi + 0x20, xmm1); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F829Bu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000F829B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F82B0
 * Original: 0x000F82B0 - 0x000F84A1 (497 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F82B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F82B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F82C7u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000F82C7: ;
    MEM32(esi) = 0x316C90;
    MEM32(esi + 8) = 0x316C84;
    MEM8(esi + 0xB4) = 1;
    MEM8(esi + 0xB5) = 0;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0xB0) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xC0) = 0x310C84;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 1;
    MEM8(esi + 0xD6) = 1;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edi = esi + 0xC0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x50) = eax;
    MEM32(edi + 0x54) = eax;
    MEM32(edi + 0x58) = eax;
    ebx = esi + 0x120;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x180;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1C) = ecx;
    MEM32(edi + 0x20) = ecx;
    MEM32(ebx) = 0x310C84;
    MEM32(ebx + 0x10) = eax;
    MEM8(ebx + 0x14) = 1;
    MEM8(ebx + 0x15) = 1;
    MEM8(ebx + 0x16) = 1;
    MEM32(ebx + 0x18) = eax;
    MEM32(ebx + 0x50) = eax;
    MEM32(ebx + 0x54) = eax;
    MEM32(ebx + 0x58) = eax;
    MEM32(ebx + 0x1C) = ecx;
    MEM32(ebx + 0x20) = ecx;
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F83BCu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000F83BC: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F83F7; /* jne: not equal / not zero */

loc_000F83C7: ;
    PUSH32(esp, 0x316DE8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F83D1u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000F83D1: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0xB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xB4) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000F83ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F83E9u); } /* indirect call */
    }

loc_000F83EC: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000F83F7: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0xB0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000F8408u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8405u); } /* indirect call */
    }

loc_000F8408: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F8439u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000F8439: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F8448u); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_000F8448: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000F8451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F844Eu); } /* indirect call */
    }

loc_000F8451: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000F845Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8457u); } /* indirect call */
    }

loc_000F845A: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8494; /* je: equal / zero */

loc_000F8461: ;
    edi = MEM32(esp + 0x18);
    MEM8(edi + 0xB5) = 1;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F8477u); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_000F8477: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000F8480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F847Du); } /* indirect call */
    }

loc_000F8480: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000F8489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8486u); } /* indirect call */
    }

loc_000F8489: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000F8494: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F84B0
 * Original: 0x000F84B0 - 0x000F84CC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84B0(void)
{

loc_000F84B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x3DB6E0;
    MEM8(0x3DB8A5) = 1;
    PUSH32(esp, 0x000F84C6u); RECOMP_ABI_CALL(0x000F82B0u, sub_000F82B0); /* call 0x000F82B0 */

loc_000F84C6: ;
    MEM32(0x3DB8A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000F84D0
 * Original: 0x000F84D0 - 0x000F84D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84D0(void)
{

loc_000F84D0: ;
    SET_LO8(eax, MEM8(ecx + 0xB4));
    esp += 4; return; /* ret */

}

/**
 * sub_000F84E0
 * Original: 0x000F84E0 - 0x000F84E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F84E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000F84F0(); return; /* tail jmp 0x000F84F0 */

}

/**
 * sub_000F84F0
 * Original: 0x000F84F0 - 0x000F853E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F84F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB0);
    MEM32(esi) = 0x316C90;
    MEM32(esi + 8) = 0x316C84;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000F850Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F850Au); } /* indirect call */
    }

loc_000F850D: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x000F8518u); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_000F8518: ;
    ecx = esi + 0xC0;
    PUSH32(esp, 0x000F8523u); RECOMP_ABI_CALL(0x0014E890u, sub_0014E890); /* call 0x0014E890 */

loc_000F8523: ;
    ecx = esi;
    PUSH32(esp, 0x000F852Au); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000F852A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000F853A; /* je: equal / zero */

loc_000F8533: ;
    MEM8(0x3DB8A5) = 0;

loc_000F853A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8540
 * Original: 0x000F8540 - 0x000F855F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8540: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x316ED8;
    if (TEST_Z(_fa, _fb)) goto loc_000F8559; /* je: equal / zero */

loc_000F8550: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8556u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000F8556: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8559: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8560
 * Original: 0x000F8560 - 0x000F8567 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8560(void)
{

loc_000F8560: ;
    SET_LO8(eax, MEM8(ecx + 0x2690));
    esp += 4; return; /* ret */

}

/**
 * sub_000F8570
 * Original: 0x000F8570 - 0x000F85F9 (137 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8570: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F8580;

    /* nop */

loc_000F8580: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x316E60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x316E60) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F85EB; /* jne: not equal / not zero */

loc_000F8588: ;
    eax = MEM32(edi + 0x316E64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1430) = eax;
    ecx = MEM32(edi + 0x316E68);
    MEM32(esi + 0x1434) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F85C3; /* je: equal / zero */

loc_000F85A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F85AAu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F85AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x143C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F85C3; /* jne: not equal / not zero */

loc_000F85B7: ;
    edx = MEM32(0x375E64);
    MEM32(esi + 0x143C) = edx;

loc_000F85C3: ;
    eax = MEM32(esi + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F85EB; /* je: equal / zero */

loc_000F85CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F85D3u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F85D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1440) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F85EB; /* jne: not equal / not zero */

loc_000F85E0: ;
    eax = MEM32(0x375E60);
    MEM32(esi + 0x1440) = eax;

loc_000F85EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x60 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F8580; /* jb: below (unsigned <) */

loc_000F85F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8600
 * Original: 0x000F8600 - 0x000F8627 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F8600: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2760);
    ecx = esi + 0x2760;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000F8612u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F860Fu); } /* indirect call */
    }

loc_000F8612: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x000F8619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8616u); } /* indirect call */
    }

loc_000F8619: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x2748) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8630
 * Original: 0x000F8630 - 0x000F8638 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8630(void)
{

loc_000F8630: ;
    MEM8(ecx + 0x2748) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8640
 * Original: 0x000F8640 - 0x000F864F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8640: ;
    eax = MEM32(ecx + 0x2760);
    _fb = (uint32_t)(0x2760) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2760;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000F8650
 * Original: 0x000F8650 - 0x000F8651 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8650(void)
{

loc_000F8650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8660
 * Original: 0x000F8660 - 0x000F8687 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8660: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F8669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8663u); } /* indirect call */
    }

loc_000F8669: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8683; /* je: equal / zero */

loc_000F866F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000F8676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8673u); } /* indirect call */
    }

loc_000F8676: ;
    ecx = eax;
    PUSH32(esp, 0x000F867Du); RECOMP_ABI_CALL(0x0001EF20u, sub_0001EF20); /* call 0x0001EF20 */

loc_000F867D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000F8685; /* jne: not equal / not zero */

loc_000F8683: ;
    SET_LO8(eax, LO8(ebx));

loc_000F8685: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8690
 * Original: 0x000F8690 - 0x000F8693 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8690(void)
{

loc_000F8690: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F86A0
 * Original: 0x000F86A0 - 0x000F8705 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F86A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F86A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000F86B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F86B3u); } /* indirect call */
    }

loc_000F86B6: ;
    esi = edi + 0x1130;
    ebp = 8;

loc_000F86C1: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F86D6; /* je: equal / zero */

loc_000F86C7: ;
    _fa = (uint32_t)(MEM8(esi + 0x54)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x54), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F86D6; /* jne: not equal / not zero */

loc_000F86CD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000F86D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F86D0u); } /* indirect call */
    }

loc_000F86D6: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F86C1; /* jne: not equal / not zero */

loc_000F86DC: ;
    esi = edi + 0x26B4;
    edi = 3;

loc_000F86E7: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F86F8; /* je: equal / zero */

loc_000F86ED: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000F86F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F86F2u); } /* indirect call */
    }

loc_000F86F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F86E7; /* jne: not equal / not zero */

loc_000F86FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8710
 * Original: 0x000F8710 - 0x000F8775 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8710: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xF0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000F8726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8723u); } /* indirect call */
    }

loc_000F8726: ;
    esi = edi + 0x1130;
    ebp = 8;

loc_000F8731: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8746; /* je: equal / zero */

loc_000F8737: ;
    _fa = (uint32_t)(MEM8(esi + 0x54)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x54), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F8746; /* jne: not equal / not zero */

loc_000F873D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x128); PUSH32(esp, 0x000F8746u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8740u); } /* indirect call */
    }

loc_000F8746: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F8731; /* jne: not equal / not zero */

loc_000F874C: ;
    esi = edi + 0x26B4;
    edi = 3;

loc_000F8757: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8768; /* je: equal / zero */

loc_000F875D: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x000F8768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8762u); } /* indirect call */
    }

loc_000F8768: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F8757; /* jne: not equal / not zero */

loc_000F876E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8780
 * Original: 0x000F8780 - 0x000F878B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8780: ;
    ecx = MEM32(ecx + 0x2644);
    g_seh_ebp = ebp; sub_0010D6E0(); return; /* tail jmp 0x0010D6E0 */

}

/**
 * sub_000F8790
 * Original: 0x000F8790 - 0x000F879B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8790: ;
    ecx = MEM32(ecx + 0xCC);
    g_seh_ebp = ebp; sub_0017BE30(); return; /* tail jmp 0x0017BE30 */

}

/**
 * sub_000F87A0
 * Original: 0x000F87A0 - 0x000F87B9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F87A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD8) = eax;
    ecx = MEM32(ecx + 0x2644);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010E0D0(); return; /* tail jmp 0x0010E0D0 */

}

/**
 * sub_000F87C0
 * Original: 0x000F87C0 - 0x000F87CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F87C0: ;
    ecx = MEM32(ecx + 0x2644);
    g_seh_ebp = ebp; sub_0010E180(); return; /* tail jmp 0x0010E180 */

}

/**
 * sub_000F87D0
 * Original: 0x000F87D0 - 0x000F87DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F87D0: ;
    _fb = (uint32_t)(0x14C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00054AF0(); return; /* tail jmp 0x00054AF0 */

}

/**
 * sub_000F87E0
 * Original: 0x000F87E0 - 0x000F8807 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F87E0: ;
    edx = MEM32(esp + 8);
    eax = ecx + -176;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8801u); RECOMP_ABI_CALL(0x000E5D60u, sub_000E5D60); /* call 0x000E5D60 */

loc_000F8801: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8810
 * Original: 0x000F8810 - 0x000F8832 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F8810: ;
    edx = MEM32(esp + 4);
    eax = ecx + -176;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F882Cu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000F882C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8840
 * Original: 0x000F8840 - 0x000F886A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8866; /* je: equal / zero */

loc_000F8849: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x26B4;

loc_000F8851: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8866; /* je: equal / zero */

loc_000F8855: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F8851; /* jl: less (signed <) */

loc_000F885E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8866u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8864u); } /* indirect call */
    }

loc_000F8866: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8870
 * Original: 0x000F8870 - 0x000F89EE (382 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8870: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FFCD8);
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F8881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F887Bu); } /* indirect call */
    }

loc_000F8881: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88A5; /* je: equal / zero */

loc_000F8885: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;
    /* nop */

loc_000F8890: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88A5; /* je: equal / zero */

loc_000F8894: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F8890; /* jl: less (signed <) */

loc_000F889D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F88A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F88A3u); } /* indirect call */
    }

loc_000F88A5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FFCD0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F88B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F88AEu); } /* indirect call */
    }

loc_000F88B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88D5; /* je: equal / zero */

loc_000F88B8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;

loc_000F88C0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88D5; /* je: equal / zero */

loc_000F88C4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F88C0; /* jl: less (signed <) */

loc_000F88CD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F88D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F88D3u); } /* indirect call */
    }

loc_000F88D5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x302650);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F88E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F88DEu); } /* indirect call */
    }

loc_000F88E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8905; /* je: equal / zero */

loc_000F88E8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;

loc_000F88F0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8905; /* je: equal / zero */

loc_000F88F4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F88F0; /* jl: less (signed <) */

loc_000F88FD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F8905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8903u); } /* indirect call */
    }

loc_000F8905: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x316F04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F8914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F890Eu); } /* indirect call */
    }

loc_000F8914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8935; /* je: equal / zero */

loc_000F8918: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;

loc_000F8920: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8935; /* je: equal / zero */

loc_000F8924: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F8920; /* jl: less (signed <) */

loc_000F892D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F8935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8933u); } /* indirect call */
    }

loc_000F8935: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x304710);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F8944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F893Eu); } /* indirect call */
    }

loc_000F8944: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8965; /* je: equal / zero */

loc_000F8948: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;

loc_000F8950: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8965; /* je: equal / zero */

loc_000F8954: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F8950; /* jl: less (signed <) */

loc_000F895D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F8965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8963u); } /* indirect call */
    }

loc_000F8965: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x304740);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F8974u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F896Eu); } /* indirect call */
    }

loc_000F8974: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8995; /* je: equal / zero */

loc_000F8978: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;

loc_000F8980: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8995; /* je: equal / zero */

loc_000F8984: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F8980; /* jl: less (signed <) */

loc_000F898D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F8995u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8993u); } /* indirect call */
    }

loc_000F8995: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FFCC8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x000F89A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F899Eu); } /* indirect call */
    }

loc_000F89A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F89C5; /* je: equal / zero */

loc_000F89A8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x26B4;

loc_000F89B0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F89C5; /* je: equal / zero */

loc_000F89B4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F89B0; /* jl: less (signed <) */

loc_000F89BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F89C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F89C3u); } /* indirect call */
    }

loc_000F89C5: ;
    _fb = (uint32_t)(0x26B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x26B4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 3;

loc_000F89D0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F89E5; /* je: equal / zero */

loc_000F89D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F89DCu); RECOMP_ABI_CALL(0x0018AC20u, sub_0018AC20); /* call 0x0018AC20 */

loc_000F89DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_000F89E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F89D0; /* jne: not equal / not zero */

loc_000F89EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F89F0
 * Original: 0x000F89F0 - 0x000F8A1C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F89F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F89F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x523510);
    PUSH32(esp, 0x3E7);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8A09u); RECOMP_ABI_CALL(0x0018ACA0u, sub_0018ACA0); /* call 0x0018ACA0 */

loc_000F8A09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8A18; /* je: equal / zero */

loc_000F8A0D: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + ecx * 4 + 0x26B4) = eax;

loc_000F8A18: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8A20
 * Original: 0x000F8A20 - 0x000F8A48 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0x26B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8A35u); RECOMP_ABI_CALL(0x0018AC20u, sub_0018AC20); /* call 0x0018AC20 */

loc_000F8A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edi * 4 + 0x26B4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8A50
 * Original: 0x000F8A50 - 0x000F8A5E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A50(void)
{

loc_000F8A50: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x26B4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8A60
 * Original: 0x000F8A60 - 0x000F8A81 (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A60(void)
{

loc_000F8A60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x14A0) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x14A4) = edx;
    MEM32(ecx + 0x14A8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8A90
 * Original: 0x000F8A90 - 0x000F8AC1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A90: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x3C (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000F8ABD; /* jne: not equal / not zero */

loc_000F8A9A: ;
    SET_LO8(eax, MEM8(esi + 0x26C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8ABD; /* jne: not equal / not zero */

loc_000F8AA4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C8); PUSH32(esp, 0x000F8AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8AA6u); } /* indirect call */
    }

loc_000F8AAC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D0); PUSH32(esp, 0x000F8AB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8AB0u); } /* indirect call */
    }

loc_000F8AB6: ;
    MEM8(esi + 0x26C0) = 1;

loc_000F8ABD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8AD0
 * Original: 0x000F8AD0 - 0x000F8AE2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8AD0(void)
{

loc_000F8AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F8AD8u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_000F8AD8: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000F8AE0u); RECOMP_ABI_CALL(0x00124E30u, sub_00124E30); /* call 0x00124E30 */

loc_000F8AE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8AF0
 * Original: 0x000F8AF0 - 0x000F8BA2 (178 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8AF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8B9D; /* jne: not equal / not zero */

loc_000F8B04: ;
    eax = MEM32(esi + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8B9D; /* jne: not equal / not zero */

loc_000F8B12: ;
    eax = MEM32(esi + 0x1438);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8B1Fu); RECOMP_ABI_CALL(0x00078300u, sub_00078300); /* call 0x00078300 */

loc_000F8B1F: ;
    ecx = eax;
    PUSH32(esp, 0x000F8B26u); RECOMP_ABI_CALL(0x00077F60u, sub_00077F60); /* call 0x00077F60 */

loc_000F8B26: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esi + 0x1430) = ecx;
    MEM32(esi + 0x1434) = edx;
    PUSH32(esp, 0x000F8B52u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F8B52: ;
    ecx = MEM32(esi + 0x1434);
    PUSH32(esp, ecx);
    MEM32(esi + 0x143C) = eax;
    PUSH32(esp, 0x000F8B64u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F8B64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1440) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8B77; /* je: equal / zero */

loc_000F8B72: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8B83; /* jne: not equal / not zero */

loc_000F8B77: ;
    edx = MEM32(0x375E6C);
    MEM32(esi + 0x1440) = edx;

loc_000F8B83: ;
    eax = MEM32(esi + 0x143C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8B92; /* je: equal / zero */

loc_000F8B8D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8B9D; /* jne: not equal / not zero */

loc_000F8B92: ;
    eax = MEM32(0x375E68);
    MEM32(esi + 0x143C) = eax;

loc_000F8B9D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8BB0
 * Original: 0x000F8BB0 - 0x000F8BCA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8BC2; /* jne: not equal / not zero */

loc_000F8BBD: ;
    PUSH32(esp, 0x000F8BC2u); RECOMP_ABI_CALL(0x000F8AF0u, sub_000F8AF0); /* call 0x000F8AF0 */

loc_000F8BC2: ;
    eax = MEM32(esi + 0x143C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8BD0
 * Original: 0x000F8BD0 - 0x000F8BEA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8BE2; /* jne: not equal / not zero */

loc_000F8BDD: ;
    PUSH32(esp, 0x000F8BE2u); RECOMP_ABI_CALL(0x000F8AF0u, sub_000F8AF0); /* call 0x000F8AF0 */

loc_000F8BE2: ;
    eax = MEM32(esi + 0x1440);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8BF0
 * Original: 0x000F8BF0 - 0x000F8C0A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8BF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1180;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8BF8: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C09; /* je: equal / zero */

loc_000F8BFD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F8BF8; /* jl: less (signed <) */

loc_000F8C06: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F8C09: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8C10
 * Original: 0x000F8C10 - 0x000F8C43 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8C10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000F8C27u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000F8C27: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x000F8C3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8C39u); } /* indirect call */
    }

loc_000F8C3F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8C50
 * Original: 0x000F8C50 - 0x000F8C57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C50(void)
{

loc_000F8C50: ;
    eax = ecx + 0x2650;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8C60
 * Original: 0x000F8C60 - 0x000F8C7F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8C60: ;
    SET_LO8(eax, MEM8(esp + 4));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    MEM8(ecx + 0x2688) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000F8C7C; /* jne: not equal / not zero */

loc_000F8C70: ;
    MEM32(ecx + 0x2680) = edx;
    MEM32(ecx + 0x2684) = edx;

loc_000F8C7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8C80
 * Original: 0x000F8C80 - 0x000F8C98 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8C80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2588;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F8C95u); RECOMP_ABI_CALL(0x000B1AB0u, sub_000B1AB0); /* call 0x000B1AB0 */

loc_000F8C95: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8CA0
 * Original: 0x000F8CA0 - 0x000F8CA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8CA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8CB0
 * Original: 0x000F8CB0 - 0x000F8CB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8CB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8CC0
 * Original: 0x000F8CC0 - 0x000F8CC5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8CC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8CD0
 * Original: 0x000F8CD0 - 0x000F8CDB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8CD0: ;
    _fb = (uint32_t)(0xFFFFEEE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFEEE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

}

/**
 * sub_000F8CE0
 * Original: 0x000F8CE0 - 0x000F8D25 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8CE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    MEM32(esi + 0x2740) = eax;
    PUSH32(esp, 0x000F8CFDu); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000F8CFD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2744) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D21; /* je: equal / zero */

loc_000F8D0A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000F8D14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8D0Eu); } /* indirect call */
    }

loc_000F8D14: ;
    ecx = MEM32(esi + 0x2744);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F8D21u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F8D21: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8D30
 * Original: 0x000F8D30 - 0x000F8D42 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8D30: ;
    ecx = MEM32(ecx + 0x2744);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D41; /* je: equal / zero */

loc_000F8D3A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F8D41u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F8D41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8D50
 * Original: 0x000F8D50 - 0x000F8D57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D50(void)
{

loc_000F8D50: ;
    eax = MEM32(ecx + 0x2584);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8D60
 * Original: 0x000F8D60 - 0x000F8D61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D60(void)
{

loc_000F8D60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8D70
 * Original: 0x000F8D70 - 0x000F8D7A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8D70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8D76u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F8D76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8D80
 * Original: 0x000F8D80 - 0x000F8DEC (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000F8D97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8D94u); } /* indirect call */
    }

loc_000F8D97: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000F8DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8D9Du); } /* indirect call */
    }

loc_000F8DA0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000F8DAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8DABu); } /* indirect call */
    }

loc_000F8DAE: ;
    edx = MEM32(eax);
    MEM32(esi + 0x26A0) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x26A4) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x26A8) = edx;
    ecx = MEM32(esi + 0x26A0);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x26A4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x26A8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8DF0
 * Original: 0x000F8DF0 - 0x000F8EE0 (240 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F8DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F8DFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8DF6u); } /* indirect call */
    }

loc_000F8DFC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8EDD; /* je: equal / zero */

loc_000F8E06: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000F8E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E0Bu); } /* indirect call */
    }

loc_000F8E0E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F8E23; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000F8E1F: ;
    SET_LO8(ebx, 1);
    goto loc_000F8E25;

loc_000F8E23: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000F8E25: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000F8E2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E29u); } /* indirect call */
    }

loc_000F8E2C: ;
    ecx = eax;
    PUSH32(esp, 0x000F8E33u); RECOMP_ABI_CALL(0x0001EF20u, sub_0001EF20); /* call 0x0001EF20 */

loc_000F8E33: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8EAD; /* je: equal / zero */

loc_000F8E39: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E4C; /* je: equal / zero */

loc_000F8E3D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000F8E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E41u); } /* indirect call */
    }

loc_000F8E44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000F8E4C; /* jns: not sign (positive) */

loc_000F8E48: ;
    SET_LO8(ebx, 1);
    goto loc_000F8E4E;

loc_000F8E4C: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000F8E4E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000F8E55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E52u); } /* indirect call */
    }

loc_000F8E55: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E8E; /* je: equal / zero */

loc_000F8E59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE2654A5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE2654A5 (32-bit) */
    PUSH32(esp, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000F8E78; /* jne: not equal / not zero */

loc_000F8E62: ;
    ecx = MEM32(0x3DEA08);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x2644);
    PUSH32(esp, 0x000F8E74u); RECOMP_ABI_CALL(0x0010EB20u, sub_0010EB20); /* call 0x0010EB20 */

loc_000F8E74: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F8E78: ;
    edx = MEM32(0x3DEA04);
    ecx = MEM32(edi + 0x2644);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8E8Au); RECOMP_ABI_CALL(0x0010EB20u, sub_0010EB20); /* call 0x0010EB20 */

loc_000F8E8A: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F8E8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE2654A5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE2654A5 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8ECB; /* je: equal / zero */

loc_000F8E97: ;
    ecx = MEM32(0x3DEA04);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x2644);
    PUSH32(esp, 0x000F8EA9u); RECOMP_ABI_CALL(0x0010EB20u, sub_0010EB20); /* call 0x0010EB20 */

loc_000F8EA9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F8EAD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8EC9; /* je: equal / zero */

loc_000F8EB1: ;
    edx = MEM32(0x3DEA08);
    ecx = MEM32(edi + 0x2644);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8EC5u); RECOMP_ABI_CALL(0x0010EB20u, sub_0010EB20); /* call 0x0010EB20 */

loc_000F8EC5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F8EC9: ;
    PUSH32(esp, 0);

loc_000F8ECB: ;
    eax = MEM32(0x3DEA08);
    ecx = MEM32(edi + 0x2644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8EDCu); RECOMP_ABI_CALL(0x0010EB20u, sub_0010EB20); /* call 0x0010EB20 */

loc_000F8EDC: ;
    POP32(esp, ebx);

loc_000F8EDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8EE0
 * Original: 0x000F8EE0 - 0x000F8F8F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8EE0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1120);
    PUSH32(esp, edi);
    ecx = esi + 0x1120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D20921);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000F8EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8EF9u); } /* indirect call */
    }

loc_000F8EFC: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x000F8F04u); RECOMP_ABI_CALL(0x0003A890u, sub_0003A890); /* call 0x0003A890 */

loc_000F8F04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edi = 0x12;
    if (CMP_NE(_fa, _fb)) goto loc_000F8F15; /* jne: not equal / not zero */

loc_000F8F0E: ;
    edi = 0x11;
    goto loc_000F8F1F;

loc_000F8F15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8F1F; /* jne: not equal / not zero */

loc_000F8F1A: ;
    edi = 0xE;

loc_000F8F1F: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8F86; /* je: equal / zero */

loc_000F8F27: ;
    ecx = MEM32(0x3DEA20);
    edx = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    ecx = esi;
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000F8F3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8F39u); } /* indirect call */
    }

loc_000F8F3F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x316F14);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000F8F5Cu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000F8F5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8F7E; /* je: equal / zero */

loc_000F8F63: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8F6Fu); RECOMP_ABI_CALL(0x0010F830u, sub_0010F830); /* call 0x0010F830 */

loc_000F8F6F: ;
    POP32(esp, edi);
    MEM32(esi + 0xC8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F8F7E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC8) = eax;

loc_000F8F86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8F90
 * Original: 0x000F8F90 - 0x000F947C (1260 bytes, 321 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8F90(void)
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

loc_000F8F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F8FA7u); RECOMP_ABI_CALL(0x000E7300u, sub_000E7300); /* call 0x000E7300 */

loc_000F8FA7: ;
    eax = MEM32(0x3E8D08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F911E; /* je: equal / zero */

loc_000F8FB4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    edx = MEM32(esi + 0xB0);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    ecx = esi + 0xB0;
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000F8FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8FEFu); } /* indirect call */
    }

loc_000F8FF2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    SET_LO8(eax, MEM8(esi + 0x25A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FF020); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30105C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F907D; /* je: equal / zero */

loc_000F9057: ;
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x259C); /* addss */
    MEMF(esi + 0x259C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x316F4C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F909D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000F9074: ;
    MEM8(esi + 0x25A0) = 0;
    goto loc_000F909D;

loc_000F907D: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x259C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x259C) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F909D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F9096: ;
    MEM8(esi + 0x25A0) = 1;

loc_000F909D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x259C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F90B4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F90AA: ;
    MEMF(esi + 0x259C) = xmm1.f[0]; /* movss */
    goto loc_000F90CD;

loc_000F90B4: ;
    xmm0 = XMM_SCALAR(MEMF(0x317A8C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x259C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F90CD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x259C)) */

loc_000F90C5: ;
    MEMF(esi + 0x259C) = xmm0.f[0]; /* movss */

loc_000F90CD: ;
    edi = esi + 0x26B4;
    ebx = 3;

loc_000F90D8: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F90EA; /* je: equal / zero */

loc_000F90DE: ;
    edx = MEM32(esi + 0x259C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F90EAu); RECOMP_ABI_CALL(0x000FC6E0u, sub_000FC6E0); /* call 0x000FC6E0 */

loc_000F90EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F90D8; /* jne: not equal / not zero */

loc_000F90F0: ;
    edi = esi + 0x1130;
    ebx = 8;
    goto loc_000F9100;

    /* nop */

loc_000F9100: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9118; /* je: equal / zero */

loc_000F9106: ;
    _fa = (uint32_t)(MEM8(edi + 0x54)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x54), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9118; /* jne: not equal / not zero */

loc_000F910C: ;
    eax = MEM32(esi + 0x259C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9118u); RECOMP_ABI_CALL(0x000FC6E0u, sub_000FC6E0); /* call 0x000FC6E0 */

loc_000F9118: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F9100; /* jne: not equal / not zero */

loc_000F911E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    edi = esi + 0x2588;
    ecx = edi;
    MEMF(esi + 0x26F0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9138u); RECOMP_ABI_CALL(0x000B1B10u, sub_000B1B10); /* call 0x000B1B10 */

loc_000F9138: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F916C; /* je: equal / zero */

loc_000F913C: ;
    SET_LO8(eax, MEM8(esi + 0x26C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F916C; /* jne: not equal / not zero */

loc_000F9146: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F914Du); RECOMP_ABI_CALL(0x000B1B40u, sub_000B1B40); /* call 0x000B1B40 */

loc_000F914D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F916C; /* je: equal / zero */

loc_000F9151: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C8); PUSH32(esp, 0x000F915Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9155u); } /* indirect call */
    }

loc_000F915B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1D0); PUSH32(esp, 0x000F9165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F915Fu); } /* indirect call */
    }

loc_000F9165: ;
    MEM8(esi + 0x26C0) = 1;

loc_000F916C: ;
    SET_LO8(eax, MEM8(0x3727AE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F934B; /* jne: not equal / not zero */

loc_000F9179: ;
    SET_LO8(eax, MEM8(esi + 0x25A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F934B; /* je: equal / zero */

loc_000F9187: ;
    eax = MEM32(0x3DB8B8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    SET_LO8(ecx, 0x20);
    SET_LO8(ebx, 0x80);
    SET_LO8(edx, 0xFF);
    if (TEST_NZ(_fa, _fb)) goto loc_000F91B6; /* jne: not equal / not zero */

loc_000F9196: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DB8B8) = eax;
    MEM8(0x3DB8B4) = LO8(ecx);
    MEM8(0x3DB8B5) = LO8(ebx);
    MEM8(0x3DB8B6) = LO8(ecx);
    MEM8(0x3DB8B7) = LO8(edx);

loc_000F91B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F91DD; /* jne: not equal / not zero */

loc_000F91BA: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DB8B8) = eax;
    MEM8(0x3DB8B0) = 0xFD;
    MEM8(0x3DB8B1) = 0xCC;
    MEM8(0x3DB8B2) = 0x84;
    MEM8(0x3DB8B3) = LO8(edx);

loc_000F91DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9201; /* jne: not equal / not zero */

loc_000F91E1: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DB8B8) = eax;
    MEM8(0x3DB8AC) = LO8(ebx);
    MEM8(0x3DB8AD) = LO8(ecx);
    MEM8(0x3DB8AE) = LO8(ecx);
    MEM8(0x3DB8AF) = LO8(edx);

loc_000F9201: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9225; /* jne: not equal / not zero */

loc_000F9205: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DB8B8) = eax;
    MEM8(0x3DB8A8) = LO8(ebx);
    MEM8(0x3DB8A9) = LO8(ecx);
    MEM8(0x3DB8AA) = LO8(ecx);
    MEM8(0x3DB8AB) = LO8(edx);

loc_000F9225: ;
    edi = esi + 0x2760;
    MEM8(esi + 0x261C) = 1;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000F9239u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9236u); } /* indirect call */
    }

loc_000F9239: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000F9242u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F923Fu); } /* indirect call */
    }

loc_000F9242: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x98); /* divss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x316F48); /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9274; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x316F48)) */

loc_000F9261: ;
    SET_LO8(ecx, MEM8(0x3DB8B4));
    SET_LO8(edx, MEM8(0x3DB8B5));
    SET_LO8(eax, MEM8(0x3DB8B6));
    goto loc_000F92A1;

loc_000F9274: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x316F44); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9290; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x316F44)) */

loc_000F927D: ;
    SET_LO8(ecx, MEM8(0x3DB8B0));
    SET_LO8(edx, MEM8(0x3DB8B1));
    SET_LO8(eax, MEM8(0x3DB8B2));
    goto loc_000F92A1;

loc_000F9290: ;
    SET_LO8(ecx, MEM8(0x3DB8AC));
    SET_LO8(edx, MEM8(0x3DB8AD));
    SET_LO8(eax, MEM8(0x3DB8AE));

loc_000F92A1: ;
    MEM8(esp + 0x18) = LO8(ecx);
    MEM8(esp + 0x14) = LO8(edx);
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x10) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x000F92B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F92B1u); } /* indirect call */
    }

loc_000F92B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000F92C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F92BBu); } /* indirect call */
    }

loc_000F92C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F92E6; /* je: equal / zero */

loc_000F92C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3DB8AA));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x3DB8A9));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x3DB8A8));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_000F92FA;

loc_000F92E6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000F92FA: ;
    ecx = esi + 0x25B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9305u); RECOMP_ABI_CALL(0x00134840u, sub_00134840); /* call 0x00134840 */

loc_000F9305: ;
    edx = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000F9319u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9316u); } /* indirect call */
    }

loc_000F9319: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esi + 0x25D0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(esi + 0x25E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(esi + 0x25F0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esi + 0x2600, xmm0); /* movaps */
    goto loc_000F9352;

loc_000F934B: ;
    MEM8(esi + 0x261C) = 0;

loc_000F9352: ;
    edi = esi + 0x1130;
    MEM32(esp + 0x1C) = 8;

loc_000F9360: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F93CD; /* je: equal / zero */

loc_000F936B: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F93C4; /* jne: not equal / not zero */

loc_000F9372: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9389; /* je: equal / zero */

loc_000F9376: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9387u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000F9387: ;
    goto loc_000F93AF;

loc_000F9389: ;
    eax = MEM32(edi + 4);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */

loc_000F93AF: ;
    eax = MEM32(ebx);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x000F93BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F93B8u); } /* indirect call */
    }

loc_000F93BE: ;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    goto loc_000F93C8;

loc_000F93C4: ;
    PUSH32(esp, 0);
    ecx = ebx;

loc_000F93C8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F93CDu); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000F93CD: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_000F9360; /* jne: not equal / not zero */

loc_000F93DB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F93E0u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000F93E0: ;
    edx = MEM32(esi + 0x2760);
    ecx = esi + 0x2760;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000F93F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F93EEu); } /* indirect call */
    }

loc_000F93F1: ;
    ecx = MEM32(edi + 0x2C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9452; /* je: equal / zero */

loc_000F93FB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x274C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9452; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x274C)) */

loc_000F9407: ;
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x88), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9452; /* je: equal / zero */

loc_000F9410: ;
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F941Fu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000F941F: ;
    MEMF(esi + 0x274C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x2C8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9433u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000F9433: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9473; /* je: equal / zero */

loc_000F943A: ;
    PUSH32(esp, 0xBFED3C6Au);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9449u); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_000F9449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000F9452: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x274C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x274C) = xmm1.f[0]; /* movss */

loc_000F9473: ;
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
 * sub_000F9480
 * Original: 0x000F9480 - 0x000F9520 (160 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9480: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F94D2; /* je: equal / zero */

loc_000F948E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000F9493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9490u); } /* indirect call */
    }

loc_000F9493: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x64D20921);
    ecx = eax + 8;
    PUSH32(esp, 0x000F94A3u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000F94A3: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000F94C6; /* je: equal / zero */

loc_000F94A8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000F94BA; /* je: equal / zero */

loc_000F94AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F94C6; /* jne: not equal / not zero */

loc_000F94AE: ;
    MEM32(esi + 0xD8) = 3;
    goto loc_000F94DC;

loc_000F94BA: ;
    MEM32(esi + 0xD8) = 6;
    goto loc_000F94DC;

loc_000F94C6: ;
    MEM32(esi + 0xD8) = 0;
    goto loc_000F94DC;

loc_000F94D2: ;
    MEM32(esi + 0xD8) = 0xFF;

loc_000F94DC: ;
    ecx = MEM32(esi + 0xD8);
    PUSH32(esp, 0x1C);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x000F94F1u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000F94F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9511; /* je: equal / zero */

loc_000F94F8: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F9504u); RECOMP_ABI_CALL(0x0010F490u, sub_0010F490); /* call 0x0010F490 */

loc_000F9504: ;
    MEM32(esi + 0x2644) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F9511: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2644) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9520
 * Original: 0x000F9520 - 0x000F954B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x2644);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9548; /* je: equal / zero */

loc_000F952E: ;
    ecx = esi;
    PUSH32(esp, 0x000F9535u); RECOMP_ABI_CALL(0x0010E050u, sub_0010E050); /* call 0x0010E050 */

loc_000F9535: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F953Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000F953B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2644) = 0;

loc_000F9548: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9550
 * Original: 0x000F9550 - 0x000F95ED (157 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F95D6; /* jne: not equal / not zero */

loc_000F955D: ;
    PUSH32(esp, 0x000F9562u); RECOMP_ABI_CALL(0x000378F0u, sub_000378F0); /* call 0x000378F0 */

loc_000F9562: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x300768)); /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x315450)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30076C)); /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xCC) = eax;

loc_000F95D6: ;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F95EB; /* jne: not equal / not zero */

loc_000F95E0: ;
    PUSH32(esp, 0x000F95E5u); RECOMP_ABI_CALL(0x000378F0u, sub_000378F0); /* call 0x000378F0 */

loc_000F95E5: ;
    MEM32(esi + 0xD0) = eax;

loc_000F95EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F95F0
 * Original: 0x000F95F0 - 0x000F9685 (149 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F95F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F95F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2748));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F967E; /* jne: not equal / not zero */

loc_000F9606: ;
    eax = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000F961Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9617u); } /* indirect call */
    }

loc_000F961A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2644);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F963Du); RECOMP_ABI_CALL(0x0010D6C0u, sub_0010D6C0); /* call 0x0010D6C0 */

loc_000F963D: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2644);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F964Du); RECOMP_ABI_CALL(0x0010E200u, sub_0010E200); /* call 0x0010E200 */

loc_000F964D: ;
    edx = MEM32(esi + 0x2644);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(0x3DEA04);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = esi;
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_000F966C; /* je: equal / zero */

loc_000F9668: ;
    eax = esp + 0x20;

loc_000F966C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x000F9673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F966Du); } /* indirect call */
    }

loc_000F9673: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1494) = xmm0.f[0]; /* movss */

loc_000F967E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9690
 * Original: 0x000F9690 - 0x000F9743 (179 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9690: ;
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
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2650;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F96C2u); RECOMP_ABI_CALL(0x000F09C0u, sub_000F09C0); /* call 0x000F09C0 */

loc_000F96C2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F96CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F96C6u); } /* indirect call */
    }

loc_000F96CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000F96EC; /* je: equal / zero */

loc_000F96D5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000F96DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F96D9u); } /* indirect call */
    }

loc_000F96DC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F96E3u); RECOMP_ABI_CALL(0x0001EF20u, sub_0001EF20); /* call 0x0001EF20 */

loc_000F96E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F96EC; /* je: equal / zero */

loc_000F96E7: ;
    MEM8(esp + 8) = 1;

loc_000F96EC: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi + 0x14C0;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9719u); RECOMP_ABI_CALL(0x00054C80u, sub_00054C80); /* call 0x00054C80 */

loc_000F9719: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x000F9728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9722u); } /* indirect call */
    }

loc_000F9728: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000F973Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9739u); } /* indirect call */
    }

loc_000F973C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9750
 * Original: 0x000F9750 - 0x000F979C (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9750: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x251));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F979A; /* je: equal / zero */

loc_000F9763: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x316F50);
    PUSH32(esp, 0x000F9774u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000F9774: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9785; /* je: equal / zero */

loc_000F977B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000F9783u); RECOMP_ABI_CALL(0x000F16B0u, sub_000F16B0); /* call 0x000F16B0 */

loc_000F9783: ;
    goto loc_000F9787;

loc_000F9785: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F9787: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x2584) = eax;
    PUSH32(esp, 0x000F9793u); RECOMP_ABI_CALL(0x000F1910u, sub_000F1910); /* call 0x000F1910 */

loc_000F9793: ;
    ecx = eax;
    PUSH32(esp, 0x000F979Au); RECOMP_ABI_CALL(0x000F2170u, sub_000F2170); /* call 0x000F2170 */

loc_000F979A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F97A0
 * Original: 0x000F97A0 - 0x000F97AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F97A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F97A0: ;
    ecx = MEM32(ecx + 0xF0);
    g_seh_ebp = ebp; sub_001336D0(); return; /* tail jmp 0x001336D0 */

}

/**
 * sub_000F97B0
 * Original: 0x000F97B0 - 0x000F9836 (134 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F97B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F97B0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + 0x2760);
    ecx = esi + 0x2760;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000F97C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F97C5u); } /* indirect call */
    }

loc_000F97C8: ;
    eax = MEM32(esi + 0x26B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F97EB; /* je: equal / zero */

loc_000F97D2: ;
    SET_LO8(edx, MEM8(eax + 0x230));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x230) = LO8(ecx);

loc_000F97EB: ;
    eax = MEM32(esi + 0x26B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F980E; /* je: equal / zero */

loc_000F97F5: ;
    SET_LO8(edx, MEM8(eax + 0x230));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x230) = LO8(ecx);

loc_000F980E: ;
    esi = MEM32(esi + 0x26BC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9831; /* je: equal / zero */

loc_000F9818: ;
    SET_LO8(ecx, MEM8(esi + 0x230));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x230) = LO8(eax);

loc_000F9831: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9840
 * Original: 0x000F9840 - 0x000F984D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9840(void)
{

loc_000F9840: ;
    eax = MEM32(ecx + 0xF0);
    eax = MEM32(eax + 0x254);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9850
 * Original: 0x000F9850 - 0x000F98B0 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x26B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000F9896; /* je: equal / zero */

loc_000F986A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000F9872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F986Fu); } /* indirect call */
    }

loc_000F9872: ;
    eax = MEM32(esi + 0x26B4);
    ecx = MEM32(eax + 0x60);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x26E0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x26E4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x26E8) = eax;

loc_000F9896: ;
    eax = MEM32(esi + 0x26BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F98A8; /* je: equal / zero */

loc_000F98A0: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000F98A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F98A5u); } /* indirect call */
    }

loc_000F98A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F98E0
 * Original: 0x000F98E0 - 0x000F9A19 (313 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F98E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F98E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000F98EAu); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_000F98EA: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000F98F2u); RECOMP_ABI_CALL(0x00124E30u, sub_00124E30); /* call 0x00124E30 */

loc_000F98F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9972; /* je: equal / zero */

loc_000F98F6: ;
    eax = MEM32(esi + 0x1430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9907; /* jne: not equal / not zero */

loc_000F9900: ;
    ecx = esi;
    PUSH32(esp, 0x000F9907u); RECOMP_ABI_CALL(0x000F8AF0u, sub_000F8AF0); /* call 0x000F8AF0 */

loc_000F9907: ;
    eax = MEM32(esi + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(esi + 0x143C);
    if (CMP_NE(_fa, _fb)) goto loc_000F991E; /* jne: not equal / not zero */

loc_000F9917: ;
    ecx = esi;
    PUSH32(esp, 0x000F991Eu); RECOMP_ABI_CALL(0x000F8AF0u, sub_000F8AF0); /* call 0x000F8AF0 */

loc_000F991E: ;
    edi = MEM32(esi + 0x1440);
    PUSH32(esp, 0x3E4C99F3);
    PUSH32(esp, 0x000F992Eu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F992E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9972; /* je: equal / zero */

loc_000F9935: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9972; /* je: equal / zero */

loc_000F9939: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F994F; /* je: equal / zero */

loc_000F993F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x316F98);
    PUSH32(esp, 0x000F994Au); RECOMP_ABI_CALL(0x00154820u, sub_00154820); /* call 0x00154820 */

loc_000F994A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F995C;

loc_000F994F: ;
    PUSH32(esp, 0x316F90);
    PUSH32(esp, 0x000F9959u); RECOMP_ABI_CALL(0x00154820u, sub_00154820); /* call 0x00154820 */

loc_000F9959: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F995C: ;
    ecx = MEM32(0x3E8CF8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0x444) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x444;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F9972u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_000F9972: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F997Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9976u); } /* indirect call */
    }

loc_000F997C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000F9986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9980u); } /* indirect call */
    }

loc_000F9986: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A15; /* je: equal / zero */

loc_000F998E: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000F9999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9996u); } /* indirect call */
    }

loc_000F9999: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x000F99AAu); RECOMP_ABI_CALL(0x00079250u, sub_00079250); /* call 0x00079250 */

loc_000F99AA: ;
    esi = MEM32(0x51D65C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A15; /* je: equal / zero */

loc_000F99B4: ;
    ecx = MEM32(esi + 0x355C);
    PUSH32(esp, 0xBC3435E0u);
    PUSH32(esp, 0x000F99C4u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_000F99C4: ;
    PUSH32(esp, 0x316F80);
    PUSH32(esp, 0x7E0C8402);
    PUSH32(esp, 0x000F99D3u); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_000F99D3: ;
    PUSH32(esp, 0xD8EF861Eu);
    ebx = eax;
    PUSH32(esp, 0x000F99DFu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F99DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF83AA411u);
    edi = eax;
    PUSH32(esp, 0x000F99F2u); RECOMP_ABI_CALL(0x00154E80u, sub_00154E80); /* call 0x00154E80 */

loc_000F99F2: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A15; /* je: equal / zero */

loc_000F99F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A15; /* je: equal / zero */

loc_000F99FD: ;
    ecx = MEM32(esi + 0x35B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F9A15u); RECOMP_ABI_CALL(0x0016C630u, sub_0016C630); /* call 0x0016C630 */

loc_000F9A15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A20
 * Original: 0x000F9A20 - 0x000F9B83 (355 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A20(void)
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

loc_000F9A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3E8D08);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F9B7C; /* je: equal / zero */

loc_000F9A45: ;
    edx = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x000F9A4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9A49u); } /* indirect call */
    }

loc_000F9A4F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(edi + 0x355C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xBC3435E0u);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9A8Cu); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_000F9A8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9A9E; /* jl: less (signed <) */

loc_000F9A90: ;
    ecx = MEM32(edi + 0x355C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9A9Cu); RECOMP_ABI_CALL(0x00165380u, sub_00165380); /* call 0x00165380 */

loc_000F9A9C: ;
    ebx = eax;

loc_000F9A9E: ;
    PUSH32(esp, 0x316F80);
    PUSH32(esp, 0x7E0C8402);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9AADu); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_000F9AAD: ;
    PUSH32(esp, 0x1AD8E1B5);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9AB9u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000F9AB9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20859636);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9ACEu); RECOMP_ABI_CALL(0x00154E80u, sub_00154E80); /* call 0x00154E80 */

loc_000F9ACE: ;
    esi = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9B7C; /* je: equal / zero */

loc_000F9ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9B7C; /* je: equal / zero */

loc_000F9AE5: ;
    ecx = eax;
    edx = ecx + 1;
    MEM32(esp + 0x18) = edx;
    edi = edi;

loc_000F9AF0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9AF0; /* jne: not equal / not zero */

loc_000F9AF7: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F9B0D; /* jge: greater or equal (signed >=) */

loc_000F9B07: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_000F9B0D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x316FA4)); /* fmul dword ptr [0x316fa4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x300474)); /* fadd dword ptr [0x300474] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x300474)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000F9B33; /* jbe: below or equal (unsigned <=) */

loc_000F9B29: ;
    xmm0 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    goto loc_000F9B46;

loc_000F9B33: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30075C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9B4C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F9B46: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000F9B4C: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x35B8);
    PUSH32(esp, 0xAA63A1F7u);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9B66u); RECOMP_ABI_CALL(0x0016C630u, sub_0016C630); /* call 0x0016C630 */

loc_000F9B66: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9B7C; /* je: equal / zero */

loc_000F9B6E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x17);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000F9B75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9B72u); } /* indirect call */
    }

loc_000F9B75: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9B7Cu); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_000F9B7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000F9B90
 * Original: 0x000F9B90 - 0x000F9CF2 (354 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F9BA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9B9Au); } /* indirect call */
    }

loc_000F9BA0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000F9BA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9BA4u); } /* indirect call */
    }

loc_000F9BA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9BB3; /* jne: not equal / not zero */

loc_000F9BAC: ;
    ebx = 0x4DA76091;
    goto loc_000F9BCE;

loc_000F9BB3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F9BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9BB7u); } /* indirect call */
    }

loc_000F9BBD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000F9BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9BC1u); } /* indirect call */
    }

loc_000F9BC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9BCE; /* jne: not equal / not zero */

loc_000F9BC9: ;
    ebx = 0x253D29C4;

loc_000F9BCE: ;
    ecx = MEM32(0x3C2528);
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000F9BDCu); RECOMP_ABI_CALL(0x0007C870u, sub_0007C870); /* call 0x0007C870 */

loc_000F9BDC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F9CE9; /* ja: above (unsigned >) */

loc_000F9BE6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xF9CF4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000F9BEDu) goto loc_000F9BED;
    if (_jt == 0x000F9C0Du) goto loc_000F9C0D;
    if (_jt == 0x000F9C35u) goto loc_000F9C35;
    if (_jt == 0x000F9C60u) goto loc_000F9C60;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F9BED: ;
    xmm0 = XMM_SCALAR(MEMF(0x37653C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3011DC); /* mulss */
    eax = 0x15E448F4;
    ebp = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    esi = 1;
    goto loc_000F9C77;

loc_000F9C0D: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000F9C18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9C15u); } /* indirect call */
    }

loc_000F9C18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000F9C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9C1Cu); } /* indirect call */
    }

loc_000F9C1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C57; /* je: equal / zero */

loc_000F9C23: ;
    eax = MEM32(eax + 0x1C8);
    esi = 0xB;
    ebp = 1;
    goto loc_000F9C73;

loc_000F9C35: ;
    eax = MEM32(edi + 0x26B4);
    eax = MEM32(eax + 0x1C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9C47u); RECOMP_ABI_CALL(0x001890B0u, sub_001890B0); /* call 0x001890B0 */

loc_000F9C47: ;
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9C50u); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_000F9C50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C60; /* je: equal / zero */

loc_000F9C57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F9C60: ;
    ecx = MEM32(0x3C2528);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    esi = 3;
    PUSH32(esp, 0x000F9C73u); RECOMP_ABI_CALL(0x0007C9C0u, sub_0007C9C0); /* call 0x0007C9C0 */

loc_000F9C73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9CE9; /* je: equal / zero */

loc_000F9C77: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F9C92u); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_000F9C92: ;
    esi = eax;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9CE9; /* je: equal / zero */

loc_000F9C9B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F9CA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9C9Fu); } /* indirect call */
    }

loc_000F9CA5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000F9CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9CA9u); } /* indirect call */
    }

loc_000F9CAC: ;
    SET_LO8(ebx, MEM8(esi + 0x2C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x3F5E9BD3);
    MEM8(esi + 0x2C) = LO8(ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0x000F9CD4u); RECOMP_ABI_CALL(0x000FC680u, sub_000FC680); /* call 0x000FC680 */

loc_000F9CD4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F5E9BD3);
    PUSH32(esp, 0x41B80000);
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000F9CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9CE3u); } /* indirect call */
    }

loc_000F9CE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9D10
 * Original: 0x000F9D10 - 0x000F9D44 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9D10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000F9D1Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F9D1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x1180;
    /* nop */

loc_000F9D30: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9D40; /* je: equal / zero */

loc_000F9D34: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9D30; /* jl: less (signed <) */

loc_000F9D3D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F9D40: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9D50
 * Original: 0x000F9D50 - 0x000F9D97 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9D50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000F9D5Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F9D5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;

loc_000F9D68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9D7B; /* je: equal / zero */

loc_000F9D6C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9D68; /* jl: less (signed <) */

loc_000F9D75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F9D7B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9D86; /* jne: not equal / not zero */

loc_000F9D80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F9D86: ;
    ecx = ecx + ecx * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + esi + 0x1130);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9DA0
 * Original: 0x000F9DA0 - 0x000F9EAB (267 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9DA0: ;
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
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F9E34; /* je: equal / zero */

loc_000F9DB5: ;
    eax = MEM32(ebx + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9E34; /* je: equal / zero */

loc_000F9DBF: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9E34; /* je: equal / zero */

loc_000F9DC6: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9DD1u); RECOMP_ABI_CALL(0x000F9D10u, sub_000F9D10); /* call 0x000F9D10 */

loc_000F9DD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9E34; /* jne: not equal / not zero */

loc_000F9DD6: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D4); PUSH32(esp, 0x000F9DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9DDAu); } /* indirect call */
    }

loc_000F9DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9E34; /* je: equal / zero */

loc_000F9DE5: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edi + 0x1130;
    PUSH32(esp, ecx);
    MEM32(esi) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9DFDu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F9DFD: ;
    SET_LO8(ecx, MEM8(esi + 0x54));
    edx = MEM32(ebp + 0xC);
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x54) = LO8(ecx);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 4) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000F9E21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9E1Bu); } /* indirect call */
    }

loc_000F9E21: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9E28u); RECOMP_ABI_CALL(0x00066280u, sub_00066280); /* call 0x00066280 */

loc_000F9E28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F9E3F; /* jne: not equal / not zero */

loc_000F9E2F: ;
    MEM32(esi) = eax;
    MEM32(esi + 0x50) = eax;

loc_000F9E34: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_000F9E3F: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9E4Au); RECOMP_ABI_CALL(0x00131F70u, sub_00131F70); /* call 0x00131F70 */

loc_000F9E4A: ;
    SET_LO8(edx, MEM8(esi + 0x54));
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x54) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F9EA0; /* je: equal / zero */

loc_000F9E5A: ;
    edx = MEM32(ebx);
    edi = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000F9E66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9E63u); } /* indirect call */
    }

loc_000F9E66: ;
    SET_LO8(ebx, MEM8(esi + 0x54));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM8(esi + 0x54) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_000F9EA0; /* je: equal / zero */

loc_000F9E7C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9E83u); RECOMP_ABI_CALL(0x0002C270u, sub_0002C270); /* call 0x0002C270 */

loc_000F9E83: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9E91u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000F9E91: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000F9EA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9E9Au); } /* indirect call */
    }

loc_000F9EA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F9EB0
 * Original: 0x000F9EB0 - 0x000F9F36 (134 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000F9EBEu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000F9EBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;
    /* nop */

loc_000F9ED0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9EE4; /* je: equal / zero */

loc_000F9ED4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9ED0; /* jl: less (signed <) */

loc_000F9EDD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F9EE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9EFC; /* jl: less (signed <) */

loc_000F9EE8: ;
    _fa = (uint32_t)(MEM32(esi + 0x1448)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1448), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9EF7; /* jne: not equal / not zero */

loc_000F9EF0: ;
    MEM8(esi + 0x1490) = 0;

loc_000F9EF7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9F03; /* jne: not equal / not zero */

loc_000F9EFC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F9F03: ;
    ecx = ecx + ecx * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + esi + 0x1130);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx + esi + 0x1130;
    if (CMP_EQ(_fa, _fb)) goto loc_000F9F22; /* je: equal / zero */

loc_000F9F1B: ;
    ecx = edi;
    PUSH32(esp, 0x000F9F22u); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_000F9F22: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    MEM32(esi + 0x50) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9F40
 * Original: 0x000F9F40 - 0x000F9F69 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x2670);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x2674);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2678);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9F70
 * Original: 0x000F9F70 - 0x000FA08F (287 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000F9F88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9F85u); } /* indirect call */
    }

loc_000F9F88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0D20092u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0D20092u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F9FFE; /* ja: above (unsigned >) */

loc_000F9F8F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000F9FD3; /* je: equal / zero */

loc_000F9F91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5156CE44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5156CE44 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9FD3; /* je: equal / zero */

loc_000F9F98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DCDD460) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DCDD460 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA086; /* jne: not equal / not zero */

loc_000F9FA3: ;
    ecx = esi + -4384;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9FB1u); RECOMP_ABI_CALL(0x0002D910u, sub_0002D910); /* call 0x0002D910 */

loc_000F9FB1: ;
    edx = MEM32(esi + -4208);
    ecx = esi + -4208;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x15E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x15E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000F9FCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9FC7u); } /* indirect call */
    }

loc_000F9FCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000F9FD3: ;
    eax = MEM32(esi + -4384);
    ecx = esi + -4384;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000F9FE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9FDFu); } /* indirect call */
    }

loc_000F9FE5: ;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000F9FEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9FEBu); } /* indirect call */
    }

loc_000F9FEE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F9FF5u); RECOMP_ABI_CALL(0x00017010u, sub_00017010); /* call 0x00017010 */

loc_000F9FF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000F9FFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD1149B74u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD1149B74u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA034; /* je: equal / zero */

loc_000FA005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE3426A98u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE3426A98u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA086; /* jne: not equal / not zero */

loc_000FA00C: ;
    eax = MEM32(0x51D65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA086; /* je: equal / zero */

loc_000FA015: ;
    ecx = MEM32(eax + 0x355C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA086; /* je: equal / zero */

loc_000FA01F: ;
    _fb = (uint32_t)(0xFFFFEEE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFEEE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA02Bu); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_000FA02B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FA034: ;
    ebx = MEM32(0x51D65C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA086; /* je: equal / zero */

loc_000FA03E: ;
    eax = MEM32(ebx + 0x355C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA086; /* je: equal / zero */

loc_000FA048: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000FA04Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA04Cu); } /* indirect call */
    }

loc_000FA04F: ;
    edx = MEM32(esi + -4208);
    edi = eax;
    ecx = esi + -4208;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FA065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA062u); } /* indirect call */
    }

loc_000FA065: ;
    ecx = esi + -4384;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x355C);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xFFFFEEE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFEEE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA086u); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_000FA086: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FA090
 * Original: 0x000FA090 - 0x000FA28D (509 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA090(void)
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

loc_000FA090: ;
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
    eax = MEM32(esi + 0x2744);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA286; /* je: equal / zero */

loc_000FA0AD: ;
    eax = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    edx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000FA0C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA0C1u); } /* indirect call */
    }

loc_000FA0C4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x000FA0CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA0C8u); } /* indirect call */
    }

loc_000FA0CE: ;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    ecx = esp + 0x90;
    XMM_STORE(esp + 0x50, xmm1); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    XMM_STORE(esp + 0x74, xmm1); /* movaps */
    XMM_STORE(esp + 0x84, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA105u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000FA105: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xE4);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA118u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_000FA118: ;
    _fa = (uint32_t)(MEM8(0x3DB8D0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3DB8D0), 1 (8-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA159; /* jne: not equal / not zero */

loc_000FA124: ;
    eax = MEM32(0x3DB8D0);
    xmm5 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm6 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    MEM32(0x3DB8D0) = eax;
    MEMF(0x3DB8C0) = xmm6.f[0]; /* movss */
    MEMF(0x3DB8C4) = xmm2.f[0]; /* movss */
    MEMF(0x3DB8C8) = xmm5.f[0]; /* movss */
    goto loc_000FA171;

loc_000FA159: ;
    xmm5 = XMM_SCALAR(MEMF(0x3DB8C8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3DB8C4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x3DB8C0)); /* movss */

loc_000FA171: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x30); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x38); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FA23C; /* jnp: not parity */

loc_000FA20D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x2C); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_000FA23C: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA24Au); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000FA24A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA258u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000FA258: ;
    PUSH32(esp, 0x3DB8C0);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA266u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000FA266: ;
    ecx = MEM32(esi + 0x2744);
    eax = MEM32(ecx);
    edx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x000FA279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA273u); } /* indirect call */
    }

loc_000FA279: ;
    ecx = MEM32(esi + 0x2744);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA286u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000FA286: ;
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
 * sub_000FA290
 * Original: 0x000FA290 - 0x000FA3AD (285 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FA29Au); RECOMP_ABI_CALL(0x000E8680u, sub_000E8680); /* call 0x000E8680 */

loc_000FA29A: ;
    MEM32(esi + 0x1120) = 0x2FF764;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1124) = ebx;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0x14C0;
    MEM32(esi) = 0x317008;
    MEM32(esi + 8) = 0x317000;
    MEM32(eax) = 0x316FDC;
    MEM32(esi + 0xB4) = 0x316FD4;
    MEM32(esi + 0x1120) = 0x316FBC;
    MEM32(esi + 0x1430) = ebx;
    MEM32(esi + 0x1434) = ebx;
    MEM32(esi + 0x143C) = ebx;
    MEM32(esi + 0x1440) = ebx;
    MEM32(esi + 0x14B4) = ebx;
    PUSH32(esp, 0x000FA303u); RECOMP_ABI_CALL(0x00054E50u, sub_00054E50); /* call 0x00054E50 */

loc_000FA303: ;
    ecx = esi + 0x2570;
    PUSH32(esp, 0x000FA30Eu); RECOMP_ABI_CALL(0x00030F00u, sub_00030F00); /* call 0x00030F00 */

loc_000FA30E: ;
    ecx = esi + 0x2588;
    MEM32(esi + 0x2584) = ebx;
    PUSH32(esp, 0x000FA31Fu); RECOMP_ABI_CALL(0x000B1A90u, sub_000B1A90); /* call 0x000B1A90 */

loc_000FA31F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esi + 0x25B0;
    MEMF(esi + 0x259C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x25A0) = 1;
    MEM8(esi + 0x25A1) = LO8(ebx);
    PUSH32(esp, 0x000FA347u); RECOMP_ABI_CALL(0x00135210u, sub_00135210); /* call 0x00135210 */

loc_000FA347: ;
    edi = esi + 0x2650;
    ecx = edi;
    MEM32(esi + 0x2644) = ebx;
    PUSH32(esp, 0x000FA35Au); RECOMP_ABI_CALL(0x000F0960u, sub_000F0960); /* call 0x000F0960 */

loc_000FA35A: ;
    xmm0 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    ecx = esi + 0x2760;
    MEM8(esi + 0x2690) = LO8(ebx);
    MEM8(esi + 0x26B0) = LO8(ebx);
    MEM8(esi + 0x26D0) = LO8(ebx);
    MEM32(esi + 0x2740) = ebx;
    MEM32(esi + 0x2744) = ebx;
    MEM8(esi + 0x2748) = LO8(ebx);
    MEMF(esi + 0x274C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x2750) = ebx;
    PUSH32(esp, 0x000FA39Fu); RECOMP_ABI_CALL(0x00017E50u, sub_00017E50); /* call 0x00017E50 */

loc_000FA39F: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FA3A7u); RECOMP_ABI_CALL(0x000F0A30u, sub_000F0A30); /* call 0x000F0A30 */

loc_000FA3A7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA3B0
 * Original: 0x000FA3B0 - 0x000FA51F (367 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA3B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FA3B9u); RECOMP_ABI_CALL(0x000E7A60u, sub_000E7A60); /* call 0x000E7A60 */

loc_000FA3B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC0;
    edi = esi + 0x1130;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x000FA3CFu); RECOMP_ABI_CALL(0x000F9550u, sub_000F9550); /* call 0x000F9550 */

loc_000FA3CF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000FA3D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA3D3u); } /* indirect call */
    }

loc_000FA3D9: ;
    edi = eax;
    PUSH32(esp, 0xB248F0F5u);
    ecx = edi;
    PUSH32(esp, 0x000FA3E7u); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_000FA3E7: ;
    PUSH32(esp, 0xDE46B4D6u);
    ecx = edi;
    MEM32(esi + 0x26C4) = eax;
    PUSH32(esp, 0x000FA3F9u); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_000FA3F9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x2580) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x000FA409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA403u); } /* indirect call */
    }

loc_000FA409: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C0); PUSH32(esp, 0x000FA413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA40Du); } /* indirect call */
    }

loc_000FA413: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x26B4;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    PUSH32(esp, esi);
    ecx = esi + 0x2570;
    PUSH32(esp, 0x000FA42Fu); RECOMP_ABI_CALL(0x00030F80u, sub_00030F80); /* call 0x00030F80 */

loc_000FA42F: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000FA438u); RECOMP_ABI_CALL(0x000F9480u, sub_000F9480); /* call 0x000F9480 */

loc_000FA438: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    edi = esi + 0x100;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x1490) = 0;
    MEMF(esi + 0x1498) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x149C) = 0;
    MEM8(esi + 0x25A2) = 0;
    MEMF(esi + 0x25A4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000FA473u); RECOMP_ABI_CALL(0x0003B6B0u, sub_0003B6B0); /* call 0x0003B6B0 */

loc_000FA473: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FA479u); RECOMP_ABI_CALL(0x0003BEB0u, sub_0003BEB0); /* call 0x0003BEB0 */

loc_000FA479: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x000FA48Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA484u); } /* indirect call */
    }

loc_000FA48A: ;
    ecx = eax;
    PUSH32(esp, 0x000FA491u); RECOMP_ABI_CALL(0x00043F10u, sub_00043F10); /* call 0x00043F10 */

loc_000FA491: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x2700) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2704) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2708) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x270C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2710) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2714) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2718) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x271C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2720) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2724) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2728) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x272C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2730) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2734) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2738) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x273C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA520
 * Original: 0x000FA520 - 0x000FA5B3 (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA520: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x2760);
    PUSH32(esp, ecx);
    esi = edi + 0x2760;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FA53Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA53Du); } /* indirect call */
    }

loc_000FA53F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000FA548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA545u); } /* indirect call */
    }

loc_000FA548: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FA54Eu); RECOMP_ABI_CALL(0x000EE1D0u, sub_000EE1D0); /* call 0x000EE1D0 */

loc_000FA54E: ;
    ecx = MEM32(edi + 0xF0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi + 0x25B0;
    PUSH32(esp, 0x000FA564u); RECOMP_ABI_CALL(0x00134810u, sub_00134810); /* call 0x00134810 */

loc_000FA564: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x000FA56Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA568u); } /* indirect call */
    }

loc_000FA56E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000FA578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA572u); } /* indirect call */
    }

loc_000FA578: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA583; /* je: equal / zero */

loc_000FA57C: ;
    ecx = edi;
    PUSH32(esp, 0x000FA583u); RECOMP_ABI_CALL(0x000F9A20u, sub_000F9A20); /* call 0x000F9A20 */

loc_000FA583: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000FA58Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA587u); } /* indirect call */
    }

loc_000FA58A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA5A4; /* je: equal / zero */

loc_000FA58E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000FA595u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA592u); } /* indirect call */
    }

loc_000FA595: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000FA59Fu); RECOMP_ABI_CALL(0x000F8570u, sub_000F8570); /* call 0x000F8570 */

loc_000FA59F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000FA5A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000FA5AEu); RECOMP_ABI_CALL(0x000F8570u, sub_000F8570); /* call 0x000F8570 */

loc_000FA5AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FA5C0
 * Original: 0x000FA5C0 - 0x000FA784 (452 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FA5C0: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2760);
    ebp = esi + 0x2760;
    ecx = ebp;
    MEM32(esi) = 0x317008;
    MEM32(esi + 8) = 0x317000;
    MEM32(esi + 0xB0) = 0x316FDC;
    MEM32(esi + 0xB4) = 0x316FD4;
    MEM32(esi + 0x1120) = 0x316FBC;
    MEM8(esi + 0x2748) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x000FA60Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA604u); } /* indirect call */
    }

loc_000FA60A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA668; /* je: equal / zero */

loc_000FA60E: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA668; /* jne: not equal / not zero */

loc_000FA61D: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000FA625u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA622u); } /* indirect call */
    }

loc_000FA625: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA668; /* jne: not equal / not zero */

loc_000FA62A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    ecx = 0x3888C0;
    PUSH32(esp, 0x000FA639u); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_000FA639: ;
    ecx = eax;
    PUSH32(esp, 0x000FA640u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_000FA640: ;
    PUSH32(esp, 0x000FA645u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_000FA645: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000FA64Du); RECOMP_ABI_CALL(0x00124E30u, sub_00124E30); /* call 0x00124E30 */

loc_000FA64D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA668; /* je: equal / zero */

loc_000FA651: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    ecx = 0x3888C0;
    PUSH32(esp, 0x000FA661u); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_000FA661: ;
    ecx = eax;
    PUSH32(esp, 0x000FA668u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_000FA668: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000FA670u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA66Du); } /* indirect call */
    }

loc_000FA670: ;
    ecx = esi;
    PUSH32(esp, 0x000FA677u); RECOMP_ABI_CALL(0x000F8870u, sub_000F8870); /* call 0x000F8870 */

loc_000FA677: ;
    eax = MEM32(esi + 0x2584);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA69E; /* je: equal / zero */

loc_000FA681: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FA687u); RECOMP_ABI_CALL(0x000F1910u, sub_000F1910); /* call 0x000F1910 */

loc_000FA687: ;
    ecx = eax;
    PUSH32(esp, 0x000FA68Eu); RECOMP_ABI_CALL(0x000F1C20u, sub_000F1C20); /* call 0x000F1C20 */

loc_000FA68E: ;
    ecx = MEM32(esi + 0x2584);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA69E; /* je: equal / zero */

loc_000FA698: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FA69Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA69Cu); } /* indirect call */
    }

loc_000FA69E: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2644);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA6C3; /* je: equal / zero */

loc_000FA6A9: ;
    ecx = edi;
    PUSH32(esp, 0x000FA6B0u); RECOMP_ABI_CALL(0x0010E050u, sub_0010E050); /* call 0x0010E050 */

loc_000FA6B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FA6B6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FA6B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2644) = 0;

loc_000FA6C3: ;
    PUSH32(esp, 0x3046E0);
    PUSH32(esp, 0x000FA6CDu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FA6CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;

loc_000FA6D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA6E7; /* je: equal / zero */

loc_000FA6DC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA6D8; /* jl: less (signed <) */

loc_000FA6E5: ;
    goto loc_000FA70C;

loc_000FA6E7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA70C; /* je: equal / zero */

loc_000FA6EC: ;
    eax = ecx + ecx * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi + 0x1130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + esi + 0x1130;
    if (CMP_EQ(_fa, _fb)) goto loc_000FA70C; /* je: equal / zero */

loc_000FA704: ;
    eax = ecx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FA70Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA70Au); } /* indirect call */
    }

loc_000FA70C: ;
    ecx = MEM32(esi + 0x2744);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FA71D; /* je: equal / zero */

loc_000FA717: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FA71Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA71Bu); } /* indirect call */
    }

loc_000FA71D: ;
    ecx = MEM32(esi + 0x1434);
    edx = MEM32(esi + 0x1430);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000FA730u); RECOMP_ABI_CALL(0x00078300u, sub_00078300); /* call 0x00078300 */

loc_000FA730: ;
    ecx = eax;
    PUSH32(esp, 0x000FA737u); RECOMP_ABI_CALL(0x00077EF0u, sub_00077EF0); /* call 0x00077EF0 */

loc_000FA737: ;
    ecx = ebp;
    PUSH32(esp, 0x000FA73Eu); RECOMP_ABI_CALL(0x00017C80u, sub_00017C80); /* call 0x00017C80 */

loc_000FA73E: ;
    ecx = esi + 0x2650;
    PUSH32(esp, 0x000FA749u); RECOMP_ABI_CALL(0x000F07A0u, sub_000F07A0); /* call 0x000F07A0 */

loc_000FA749: ;
    ecx = esi + 0x25B0;
    PUSH32(esp, 0x000FA754u); RECOMP_ABI_CALL(0x00134900u, sub_00134900); /* call 0x00134900 */

loc_000FA754: ;
    ecx = esi + 0x2570;
    MEM32(ecx) = 0x3013B4;
    PUSH32(esp, 0x000FA765u); RECOMP_ABI_CALL(0x00030980u, sub_00030980); /* call 0x00030980 */

loc_000FA765: ;
    ecx = esi + 0x14C0;
    PUSH32(esp, 0x000FA770u); RECOMP_ABI_CALL(0x00054A30u, sub_00054A30); /* call 0x00054A30 */

loc_000FA770: ;
    ecx = esi + 0x1120;
    PUSH32(esp, 0x000FA77Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000FA77B: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000E7500(); return; /* tail jmp 0x000E7500 */

}

/**
 * sub_000FA790
 * Original: 0x000FA790 - 0x000FA7A9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FA790: ;
    eax = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA7A8; /* je: equal / zero */

loc_000FA79A: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA7A8; /* je: equal / zero */

loc_000FA7A1: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_000FA7A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA7B0
 * Original: 0x000FA7B0 - 0x000FA8C0 (272 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA7B0(void)
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

loc_000FA7B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FA7BAu); RECOMP_ABI_CALL(0x000F8DF0u, sub_000F8DF0); /* call 0x000F8DF0 */

loc_000FA7BA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF020)); /* fmul dword ptr [0x2ff020] */
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FA7D4u); RECOMP_ABI_CALL(0x000E7730u, sub_000E7730); /* call 0x000E7730 */

loc_000FA7D4: ;
    eax = MEM32(esi + 0x2644);
    ecx = MEM32(eax + 4);
    SET_LO16(edx, MEM16(ecx + 0x20));
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi + 0x2588;
    MEM16(esi + 0x2640) = LO16(edx);
    PUSH32(esp, 0x000FA7F8u); RECOMP_ABI_CALL(0x000B1BA0u, sub_000B1BA0); /* call 0x000B1BA0 */

loc_000FA7F8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000FA800u); RECOMP_ABI_CALL(0x000F9850u, sub_000F9850); /* call 0x000F9850 */

loc_000FA800: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1498)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FA81B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FA810: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    goto loc_000FA82E;

loc_000FA81B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1498); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FA836; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x1498)) */

loc_000FA824: ;
    MEM32(esi + 0x149C) = 0;

loc_000FA82E: ;
    MEMF(esi + 0x1498) = xmm0.f[0]; /* movss */

loc_000FA836: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x000FA840u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA83Au); } /* indirect call */
    }

loc_000FA840: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000FA84Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA844u); } /* indirect call */
    }

loc_000FA84A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA88F; /* je: equal / zero */

loc_000FA84E: ;
    eax = MEM32(esi + 0xF0);
    eax = MEM32(eax + 0x254);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA888; /* je: equal / zero */

loc_000FA85F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA888; /* je: equal / zero */

loc_000FA864: ;
    edx = MEM32(esi + 0x2760);
    ecx = esi + 0x2760;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000FA873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA870u); } /* indirect call */
    }

loc_000FA873: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x9C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000FA888; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x9C)) */

loc_000FA87F: ;
    MEM8(esi + 0x25A1) = 1;
    goto loc_000FA88F;

loc_000FA888: ;
    MEM8(esi + 0x25A1) = 0;

loc_000FA88F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000FA897u); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_000FA897: ;
    eax = MEM32(esi + 0x2760);
    ecx = esi + 0x2760;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000FA8A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FA8A3u); } /* indirect call */
    }

loc_000FA8A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FA8BC; /* je: equal / zero */

loc_000FA8AC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(eax + 0x630) = xmm0.f[0]; /* movss */

loc_000FA8BC: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FA8C0
 * Original: 0x000FA8C0 - 0x000FAB7D (701 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FA8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAB74; /* je: equal / zero */

loc_000FA8F1: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x3210B0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x1C4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x1C8)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x24;
    MEM8(esp + 0x54) = LO8(ebx);
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FA985u); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_000FA985: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = esp + 0xD0;
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    XMM_STORE(esp + 0xB4, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    MEM8(esp + 0xC8) = 1;
    MEM32(esp + 0xCC) = 0x4006;
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xF8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAA1Bu); RECOMP_ABI_CALL(0x002236B0u, sub_002236B0); /* call 0x002236B0 */

loc_000FAA1B: ;
    _fa = (uint32_t)(MEM32(esp + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xF0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAA33; /* je: equal / zero */

loc_000FAA24: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000FAA33: ;
    edx = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    eax = esp + 0x100;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000FAA4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAA47u); } /* indirect call */
    }

loc_000FAA4A: ;
    edx = MEM32(esi);
    ecx = esp + 0x100;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000FAA5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAA56u); } /* indirect call */
    }

loc_000FAA5C: ;
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAA6Au); RECOMP_ABI_CALL(0x0010EBA0u, sub_0010EBA0); /* call 0x0010EBA0 */

loc_000FAA6A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC8);
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAA90u); RECOMP_ABI_CALL(0x0010D900u, sub_0010D900); /* call 0x0010D900 */

loc_000FAA90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FAB72; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FAAAA: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM8(esp + 0x1B) = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FAB72; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FAABE: ;
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    edi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x90);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x60, xmm3); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAB43u); RECOMP_ABI_CALL(0x000162C0u, sub_000162C0); /* call 0x000162C0 */

loc_000FAB43: ;
    ecx = MEM32(edi);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x54) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x58) = eax;
    ecx = MEM32(ebx);
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 0x64) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x68) = eax;
    SET_LO8(eax, MEM8(esp + 0x1B));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_000FAB72: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000FAB74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000FAB80
 * Original: 0x000FAB80 - 0x000FAC94 (276 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3046CC);
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000FAB9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAB94u); } /* indirect call */
    }

loc_000FAB9A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FABA1u); RECOMP_ABI_CALL(0x00066280u, sub_00066280); /* call 0x00066280 */

loc_000FABA1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3046C0);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000FABB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FABACu); } /* indirect call */
    }

loc_000FABB2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FABB9u); RECOMP_ABI_CALL(0x00066280u, sub_00066280); /* call 0x00066280 */

loc_000FABB9: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x30); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x34); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x38); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    XMM_STORE(esp + 0x44, xmm1); /* movaps */
    XMM_STORE(esp + 0x54, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAC3Du); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000FAC3D: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(edi + 0xB0);
    ecx = edi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000FAC50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAC4Du); } /* indirect call */
    }

loc_000FAC50: ;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    PUSH32(esp, 0x534370);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAC8Cu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000FAC8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FACA0
 * Original: 0x000FACA0 - 0x000FAEBE (542 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FACA0(void)
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

loc_000FACA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x26C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FACF6; /* je: equal / zero */

loc_000FACB8: ;
    SET_LO8(ecx, MEM8(edi + 0x26D0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FACF6; /* jne: not equal / not zero */

loc_000FACC2: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FACD2u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000FACD2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FACF6; /* je: equal / zero */

loc_000FACD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000FACE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FACDDu); } /* indirect call */
    }

loc_000FACE3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAD01; /* jne: not equal / not zero */

loc_000FACE9: ;
    PUSH32(esp, 0x30BA38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FACF3u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000FACF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FACF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FAD01: ;
    MEM8(edi + 0x26D0) = 1;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000FAD12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAD0Cu); } /* indirect call */
    }

loc_000FAD12: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAD1Au); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000FAD1A: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000FAD27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAD21u); } /* indirect call */
    }

loc_000FAD27: ;
    PUSH32(esp, 0x43FD9B2D);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAD33u); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_000FAD33: ;
    ecx = edi + 0xB0;
    edx = esp + 0x40;
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000FAD45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAD42u); } /* indirect call */
    }

loc_000FAD45: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x000FAD50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAD4Au); } /* indirect call */
    }

loc_000FAD50: ;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAD5Au); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000FAD5A: ;
    edx = MEM32(esi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FAD69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAD63u); } /* indirect call */
    }

loc_000FAD69: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAD70u); RECOMP_ABI_CALL(0x000FEF90u, sub_000FEF90); /* call 0x000FEF90 */

loc_000FAD70: ;
    ebx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAD9Cu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FAD9C: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FADADu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000FADAD: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x40A00000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FADC0u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000FADC0: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAE22u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FAE22: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAE30u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000FAE30: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = xmm3; /* movaps */
    ecx = esp + 0x20;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm6; /* movaps */
    edx = esp + 0x14;
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAE9Bu); RECOMP_ABI_CALL(0x000FEFA0u, sub_000FEFA0); /* call 0x000FEFA0 */

loc_000FAE9B: ;
    MEM8(esi + 0x248) = MEM8(esi + 0x248) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x248)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x2640);
    MEM32(esi + 0x244) = eax;
    eax = MEM32(esi + 0x254);
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
 * sub_000FAEC0
 * Original: 0x000FAEC0 - 0x000FB05F (415 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAEC0(void)
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

loc_000FAEC0: ;
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
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0xD8);
    PUSH32(esp, 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAEE8u); RECOMP_ABI_CALL(0x00079670u, sub_00079670); /* call 0x00079670 */

loc_000FAEE8: ;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0xD8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAF22u); RECOMP_ABI_CALL(0x000797B0u, sub_000797B0); /* call 0x000797B0 */

loc_000FAF22: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAF31u); RECOMP_ABI_CALL(0x000797B0u, sub_000797B0); /* call 0x000797B0 */

loc_000FAF31: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAF40u); RECOMP_ABI_CALL(0x000797B0u, sub_000797B0); /* call 0x000797B0 */

loc_000FAF40: ;
    eax = MEM32(esi + 0xB0);
    edi = esi + 0xB0;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000FAF51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAF4Eu); } /* indirect call */
    }

loc_000FAF51: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAF64u); RECOMP_ABI_CALL(0x000797B0u, sub_000797B0); /* call 0x000797B0 */

loc_000FAF64: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x000FAF73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAF6Du); } /* indirect call */
    }

loc_000FAF73: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000FAF7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAF7Cu); } /* indirect call */
    }

loc_000FAF7F: ;
    edi = MEM32(esi + 0x26B4);
    PUSH32(esp, 0x302650);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAF91u); RECOMP_ABI_CALL(0x000F9D50u, sub_000F9D50); /* call 0x000F9D50 */

loc_000FAF91: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x12) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000FAFBA; /* je: equal / zero */

loc_000FAFA7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x000FAFB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAFABu); } /* indirect call */
    }

loc_000FAFB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x14) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000FAFBF; /* jne: not equal / not zero */

loc_000FAFBA: ;
    MEM8(esp + 0x14) = 0;

loc_000FAFBF: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAFDA; /* je: equal / zero */

loc_000FAFC7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x000FAFD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAFCBu); } /* indirect call */
    }

loc_000FAFD1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x18) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000FAFDF; /* jne: not equal / not zero */

loc_000FAFDA: ;
    MEM8(esp + 0x18) = 0;

loc_000FAFDF: ;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAFEEu); RECOMP_ABI_CALL(0x00079760u, sub_00079760); /* call 0x00079760 */

loc_000FAFEE: ;
    edx = esp + 0x12;
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FAFFDu); RECOMP_ABI_CALL(0x00079760u, sub_00079760); /* call 0x00079760 */

loc_000FAFFD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB014; /* je: equal / zero */

loc_000FB005: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB014u); RECOMP_ABI_CALL(0x00079760u, sub_00079760); /* call 0x00079760 */

loc_000FB014: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB02B; /* je: equal / zero */

loc_000FB01C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB02Bu); RECOMP_ABI_CALL(0x00079760u, sub_00079760); /* call 0x00079760 */

loc_000FB02B: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB035u); RECOMP_ABI_CALL(0x00079800u, sub_00079800); /* call 0x00079800 */

loc_000FB035: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB059; /* je: equal / zero */

loc_000FB039: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB049; /* je: equal / zero */

loc_000FB03D: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB049u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000FB049: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB059; /* je: equal / zero */

loc_000FB04D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB059u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000FB059: ;
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
 * sub_000FB060
 * Original: 0x000FB060 - 0x000FB0B5 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB060: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FFCD0);
    esi = ecx;
    PUSH32(esp, 0x000FB06Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FB06D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;

loc_000FB078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB089; /* je: equal / zero */

loc_000FB07C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB078; /* jl: less (signed <) */

loc_000FB085: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FB089: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB0B1; /* je: equal / zero */

loc_000FB08E: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx + ecx * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(eax + esi + 0x1184));
    eax = eax + esi + 0x1184;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(edx);

loc_000FB0B1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FB0C0
 * Original: 0x000FB0C0 - 0x000FB115 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x304740);
    esi = ecx;
    PUSH32(esp, 0x000FB0CDu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FB0CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;

loc_000FB0D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB0E9; /* je: equal / zero */

loc_000FB0DC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB0D8; /* jl: less (signed <) */

loc_000FB0E5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FB0E9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB111; /* je: equal / zero */

loc_000FB0EE: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx + ecx * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(eax + esi + 0x1184));
    eax = eax + esi + 0x1184;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(edx);

loc_000FB111: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FB120
 * Original: 0x000FB120 - 0x000FB175 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FFCC8);
    esi = ecx;
    PUSH32(esp, 0x000FB12Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FB12D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;

loc_000FB138: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB149; /* je: equal / zero */

loc_000FB13C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB138; /* jl: less (signed <) */

loc_000FB145: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FB149: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB171; /* je: equal / zero */

loc_000FB14E: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx + ecx * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(eax + esi + 0x1184));
    eax = eax + esi + 0x1184;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(edx);

loc_000FB171: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FB180
 * Original: 0x000FB180 - 0x000FB1E7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB180: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1490));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB1E3; /* je: equal / zero */

loc_000FB18D: ;
    eax = MEM32(esi + 0x1448);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi + 0x1130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB1E3; /* je: equal / zero */

loc_000FB1A4: ;
    edx = MEM32(esi + 0xB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = esi + 0xB0;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000FB1B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB1B6u); } /* indirect call */
    }

loc_000FB1B9: ;
    eax = MEM32(esi + 0x1448);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi + 0x1134);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000FB1D4u); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000FB1D4: ;
    _fb = (uint32_t)(0x1450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1450;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FB1E2u); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000FB1E2: ;
    POP32(esp, edi);

loc_000FB1E3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FB1F0
 * Original: 0x000FB1F0 - 0x000FB35F (367 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FB1F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x000FB203u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FB203: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x1180;
    edi = edi;

loc_000FB210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB223; /* je: equal / zero */

loc_000FB214: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB210; /* jl: less (signed <) */

loc_000FB21D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000FB223: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB359; /* jl: less (signed <) */

loc_000FB22B: ;
    edx = ecx + ecx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + esi;
    edx = MEM32(eax + 0x1130);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FB359; /* je: equal / zero */

loc_000FB246: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x1C0);
    edi = MEM32(edx + 0x18);
    eax = MEM32(eax + 0xCC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xED497BEAu (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & 0xF56A8BDAu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE6E804D5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xE6E804D5u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    ebx = MEM32(eax + 0x10);
    edi = MEM32(ebx + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB358; /* jle: less or equal (signed <=) */

loc_000FB282: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB346; /* jle: less or equal (signed <=) */

loc_000FB290: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB2A2; /* je: equal / zero */

loc_000FB295: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB290; /* jl: less (signed <) */

loc_000FB29D: ;
    goto loc_000FB346;

loc_000FB2A2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x1448) = ecx;
    _fb = (uint32_t)(0x1450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1450;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(eax + 0x1184)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1184), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB32D; /* je: equal / zero */

loc_000FB315: ;
    edx = MEM32(esp + 0x10);
    ecx = ecx + ecx * 2 + 0x8A;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000FB32Du); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000FB32D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000FB335u); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000FB335: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    edx = MEM32(esp + 0x10);
    MEM8(edx + 0x1490) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_000FB357; /* jl: less (signed <) */

loc_000FB344: ;
    esi = edx;

loc_000FB346: ;
    MEM32(esi + 0x1448) = 0;
    MEM8(esi + 0x1490) = 0;

loc_000FB357: ;
    POP32(esp, ebp);

loc_000FB358: ;
    POP32(esp, ebx);

loc_000FB359: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FB360
 * Original: 0x000FB360 - 0x000FB3CF (111 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB360(void)
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

loc_000FB360: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FB36Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB36Cu); } /* indirect call */
    }

loc_000FB36F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000FB3C7; /* je: equal / zero */

loc_000FB377: ;
    _fa = (uint32_t)(MEM32(eax + 0x13D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x13D8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB3C7; /* jne: not equal / not zero */

loc_000FB380: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB3C7; /* je: equal / zero */

loc_000FB387: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x000FB38Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB389u); } /* indirect call */
    }

loc_000FB38F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB3C7; /* je: equal / zero */

loc_000FB393: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000FB39Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB397u); } /* indirect call */
    }

loc_000FB39D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000FB3A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB3A1u); } /* indirect call */
    }

loc_000FB3A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB3C7; /* jne: not equal / not zero */

loc_000FB3AB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000FB3B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB3AFu); } /* indirect call */
    }

loc_000FB3B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000FB3BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB3B9u); } /* indirect call */
    }

loc_000FB3BC: ;
    fp_push(MEMF(eax + 0x98)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FB3C7: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
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
 * sub_000FB3D0
 * Original: 0x000FB3D0 - 0x000FB717 (839 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB3D0(void)
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

loc_000FB3D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x84));
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x2734)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x2730)); /* fld float */
    fp_push(MEMF(esi + 0x2738)); /* fld float */
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
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000FB42D; /* jbe: below or equal (unsigned <=) */

loc_000FB417: ;
    eax = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    edx = esi + 0x2700;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000FB42Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB42Au); } /* indirect call */
    }

loc_000FB42D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2730)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2734)); /* movss */
    eax = esp + 0x30;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2738)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB461u); RECOMP_ABI_CALL(0x000182D0u, sub_000182D0); /* call 0x000182D0 */

loc_000FB461: ;
    PUSH32(esp, 0x13);
    ecx = esp + 0x38;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB472u); RECOMP_ABI_CALL(0x00113AF0u, sub_00113AF0); /* call 0x00113AF0 */

loc_000FB472: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x316E48); /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    edi = esi + 0x2700;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB49Bu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000FB49B: ;
    eax = MEM32(esi + 0x26D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB4C5; /* je: equal / zero */

loc_000FB4A5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB4BEu); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_000FB4BE: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    goto loc_000FB4CF;

loc_000FB4C5: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB4CDu); RECOMP_ABI_CALL(0x000F9B90u, sub_000F9B90); /* call 0x000F9B90 */

loc_000FB4CD: ;
    SET_LO8(ebx, LO8(eax));

loc_000FB4CF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x000FB4D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB4D3u); } /* indirect call */
    }

loc_000FB4D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB710; /* je: equal / zero */

loc_000FB4E1: ;
    eax = MEM32(eax + 0x26B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FB710; /* je: equal / zero */

loc_000FB4F3: ;
    eax = MEM32(eax + 0x1C8);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB503u); RECOMP_ABI_CALL(0x001890B0u, sub_001890B0); /* call 0x001890B0 */

loc_000FB503: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB514; /* je: equal / zero */

loc_000FB50A: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x1C) = ecx;
    goto loc_000FB51B;

loc_000FB514: ;
    edx = MEM32(eax + 0x28);
    MEM32(esp + 0x1C) = edx;

loc_000FB51B: ;
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x38); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x26E0); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x26E4); /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x26E8); /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FB67A; /* jb: below (unsigned <) (xmm3.f[0] vs MEMF(esp + 0x38)) */

loc_000FB5AB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x26F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FB672; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FB5CD: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x30105C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FB60C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FB606: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000FB60C: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB615u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FB615: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x24;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x78;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    goto loc_000FB696;

loc_000FB672: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_000FB60C;

loc_000FB67A: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);

loc_000FB696: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB69Bu); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_000FB69B: ;
    edi = eax;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB710; /* je: equal / zero */

loc_000FB6A4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FB6C0; /* je: equal / zero */

loc_000FB6AA: ;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x40A00000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB6B9u); RECOMP_ABI_CALL(0x000FC680u, sub_000FC680); /* call 0x000FC680 */

loc_000FB6B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FB6C0: ;
    PUSH32(esp, 0x3F5E9BD3);
    PUSH32(esp, 0x41B80000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB6CFu); RECOMP_ABI_CALL(0x000FC680u, sub_000FC680); /* call 0x000FC680 */

loc_000FB6CF: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB710; /* je: equal / zero */

loc_000FB6D6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F5E9BD3);
    PUSH32(esp, 0x41B80000);
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x000FB6E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB6E2u); } /* indirect call */
    }

loc_000FB6E8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x000FB6F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB6ECu); } /* indirect call */
    }

loc_000FB6F2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000FB6F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB6F6u); } /* indirect call */
    }

loc_000FB6F9: ;
    SET_LO8(ebx, MEM8(edi + 0x2C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    if (4) _cf = (int)(((LO8(eax)) >> (8 - (4))) & 1);
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 0x2C) = LO8(ecx);

loc_000FB710: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000FB720
 * Original: 0x000FB720 - 0x000FB765 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB720: ;
    SET_LO8(eax, MEM8(ecx + 0x26D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB764; /* je: equal / zero */

loc_000FB72A: ;
    ecx = MEM32(ecx + 0xF0);
    eax = MEM32(ecx + 0x254);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FB73Du); RECOMP_ABI_CALL(0x001336E0u, sub_001336E0); /* call 0x001336E0 */

loc_000FB73D: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB746; /* je: equal / zero */

loc_000FB743: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FB746: ;
    PUSH32(esp, 0x315B78);
    ecx = esi;
    PUSH32(esp, 0x000FB752u); RECOMP_ABI_CALL(0x00048D30u, sub_00048D30); /* call 0x00048D30 */

loc_000FB752: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB763; /* je: equal / zero */

loc_000FB756: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FB763; /* jne: not equal / not zero */

loc_000FB75B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FB763u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB761u); } /* indirect call */
    }

loc_000FB763: ;
    POP32(esp, esi);

loc_000FB764: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FB770
 * Original: 0x000FB770 - 0x000FB7B5 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB770: ;
    SET_LO8(eax, MEM8(ecx + 0x26D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB7B4; /* je: equal / zero */

loc_000FB77A: ;
    ecx = MEM32(ecx + 0xF0);
    eax = MEM32(ecx + 0x254);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FB78Du); RECOMP_ABI_CALL(0x001336E0u, sub_001336E0); /* call 0x001336E0 */

loc_000FB78D: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB796; /* je: equal / zero */

loc_000FB793: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FB796: ;
    PUSH32(esp, 0x315B78);
    ecx = esi;
    PUSH32(esp, 0x000FB7A2u); RECOMP_ABI_CALL(0x00048CF0u, sub_00048CF0); /* call 0x00048CF0 */

loc_000FB7A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB7B3; /* je: equal / zero */

loc_000FB7A6: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FB7B3; /* jne: not equal / not zero */

loc_000FB7AB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FB7B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB7B1u); } /* indirect call */
    }

loc_000FB7B3: ;
    POP32(esp, esi);

loc_000FB7B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FB7C0
 * Original: 0x000FB7C0 - 0x000FC05D (2205 bytes, 556 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB7C0(void)
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

loc_000FB7C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x2760);
    PUSH32(esp, esi);
    ecx = ebx + 0x2760;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000FB7E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB7DDu); } /* indirect call */
    }

loc_000FB7E0: ;
    ecx = MEM32(eax + 0x88);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    ecx = esi;
    MEM8(esp + 0x13) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x000FB7FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB7F5u); } /* indirect call */
    }

loc_000FB7FB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBFF3; /* je: equal / zero */

loc_000FB805: ;
    ecx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB811u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_000FB811: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000FB820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB81Au); } /* indirect call */
    }

loc_000FB820: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x000FB82Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB829u); } /* indirect call */
    }

loc_000FB82F: ;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB83Cu); RECOMP_ABI_CALL(0x000165B0u, sub_000165B0); /* call 0x000165B0 */

loc_000FB83C: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB859u); RECOMP_ABI_CALL(0x000FA8C0u, sub_000FA8C0); /* call 0x000FA8C0 */

loc_000FB859: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBF97; /* je: equal / zero */

loc_000FB861: ;
    eax = MEM32(esp + 0xCC);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB896; /* jne: not equal / not zero */

loc_000FB871: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1498)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FB896; /* jp: parity */

loc_000FB886: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    MEMF(ebx + 0x1498) = xmm0.f[0]; /* movss */

loc_000FB896: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1498)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FB8BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000FB8A7: ;
    eax = MEM32(ebx + 0x149C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x149C) = eax;
    MEM32(esp + 0xD8) = eax;
    goto loc_000FB8C4;

loc_000FB8BD: ;
    MEM32(esp + 0xD8) = edi;

loc_000FB8C4: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    edx = MEM32(ecx + 0x1C);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x1C) = 0;
    if (CMP_A(_fa, _fb)) goto loc_000FB9EA; /* ja: above (unsigned >) */

loc_000FB8E6: ;
    ecx = ZX8(MEM8(eax + 0xFC070));
    { uint32_t _jt = MEM32(ecx * 4 + 0xFC060); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000FB8F4u) goto loc_000FB8F4;
    if (_jt == 0x000FB914u) goto loc_000FB914;
    if (_jt == 0x000FB934u) goto loc_000FB934;
    if (_jt == 0x000FB9D0u) goto loc_000FB9D0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FB8F4: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB9EA; /* jne: not equal / not zero */

loc_000FB907: ;
    xmm0 = XMM_SCALAR(MEMF(0x3764D8)); /* movss */
    goto loc_000FB9D8;

loc_000FB914: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB9EA; /* jne: not equal / not zero */

loc_000FB927: ;
    xmm0 = XMM_SCALAR(MEMF(0x3764DC)); /* movss */
    goto loc_000FB9D8;

loc_000FB934: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB9C0; /* jne: not equal / not zero */

loc_000FB951: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB95Eu); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_000FB95E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FB9B9; /* jg: greater (signed >) */

loc_000FB965: ;
    if (CMP_L(_fas, _fbs)) goto loc_000FB96C; /* jl: less (signed <) */

loc_000FB967: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FB9B9; /* jae: above or equal (unsigned >=) */

loc_000FB96C: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x000FB97Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB975u); } /* indirect call */
    }

loc_000FB97B: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB987u); RECOMP_ABI_CALL(0x000FACA0u, sub_000FACA0); /* call 0x000FACA0 */

loc_000FB987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FB9B9; /* jne: not equal / not zero */

loc_000FB990: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB99Du); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_000FB99D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FB9B9; /* jg: greater (signed >) */

loc_000FB9A4: ;
    if (CMP_L(_fas, _fbs)) goto loc_000FB9AB; /* jl: less (signed <) */

loc_000FB9A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FB9B9; /* jae: above or equal (unsigned >=) */

loc_000FB9AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000FB9B9: ;
    eax = MEM32(esp + 0xC4);

loc_000FB9C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3764E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    goto loc_000FB9D8;

loc_000FB9D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3764E4)); /* movss */

loc_000FB9D8: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xD0); /* mulss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */

loc_000FB9EA: ;
    SET_LO8(ecx, MEM8(0x3727AB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBA05; /* je: equal / zero */

loc_000FB9F4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEFB0)); /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */

loc_000FBA05: ;
    SET_LO8(ecx, MEM8(0x3727AC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBA23; /* je: equal / zero */

loc_000FBA0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBA23; /* je: equal / zero */

loc_000FBA13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBA23; /* je: equal / zero */

loc_000FBA17: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */

loc_000FBA23: ;
    ecx = MEM32(esp + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = ecx;
    MEM8(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000FBA94; /* je: equal / zero */

loc_000FBA3D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000FBA45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBA3Fu); } /* indirect call */
    }

loc_000FBA45: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    MEM8(esp + 0x14) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000FBA53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBA50u); } /* indirect call */
    }

loc_000FBA53: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBA94; /* je: equal / zero */

loc_000FBA5B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000FBA65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBA5Fu); } /* indirect call */
    }

loc_000FBA65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FBA6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBA69u); } /* indirect call */
    }

loc_000FBA6C: ;
    _fa = (uint32_t)(MEM32(eax + 0x13D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x13D8), 2 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FBA94; /* jne: not equal / not zero */

loc_000FBA79: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x000FBA88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBA82u); } /* indirect call */
    }

loc_000FBA88: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBA94u); RECOMP_ABI_CALL(0x000FACA0u, sub_000FACA0); /* call 0x000FACA0 */

loc_000FBA94: ;
    eax = MEM32(ebx + 0x2760);
    ecx = ebx + 0x2760;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000FBAA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBAA0u); } /* indirect call */
    }

loc_000FBAA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBABC; /* jne: not equal / not zero */

loc_000FBAA8: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBABC; /* je: equal / zero */

loc_000FBAB0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */

loc_000FBABC: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBADA; /* jne: not equal / not zero */

loc_000FBAC4: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBAD3u); RECOMP_ABI_CALL(0x000FB360u, sub_000FB360); /* call 0x000FB360 */

loc_000FBAD3: ;
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FBADA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FBAE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBADEu); } /* indirect call */
    }

loc_000FBAE1: ;
    edx = MEM32(eax);
    ecx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FBAF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBAEDu); } /* indirect call */
    }

loc_000FBAF0: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBF76; /* je: equal / zero */

loc_000FBAFC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x000FBB06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBB00u); } /* indirect call */
    }

loc_000FBB06: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000FBB12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBB0Fu); } /* indirect call */
    }

loc_000FBB12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBF76; /* jne: not equal / not zero */

loc_000FBB1A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x000FBB24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBB1Eu); } /* indirect call */
    }

loc_000FBB24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBF76; /* je: equal / zero */

loc_000FBB2C: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x000FBB36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBB30u); } /* indirect call */
    }

loc_000FBB36: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000FBB3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBB3Au); } /* indirect call */
    }

loc_000FBB3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBF76; /* jne: not equal / not zero */

loc_000FBB46: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBF76; /* jne: not equal / not zero */

loc_000FBB52: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FBBC0; /* jne: not equal / not zero */

loc_000FBB60: ;
    eax = MEM32(esp + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FBBA1; /* ja: above (unsigned >) */

loc_000FBB6C: ;
    ecx = ZX8(MEM8(eax + 0xFC0A4));
    { uint32_t _jt = MEM32(ecx * 4 + 0xFC088); /* switch: 7 entries, 7 targets */
    if (_jt == 0x000FBB7Au) goto loc_000FBB7A;
    if (_jt == 0x000FBB81u) goto loc_000FBB81;
    if (_jt == 0x000FBB88u) goto loc_000FBB88;
    if (_jt == 0x000FBB8Fu) goto loc_000FBB8F;
    if (_jt == 0x000FBB96u) goto loc_000FBB96;
    if (_jt == 0x000FBB9Du) goto loc_000FBB9D;
    if (_jt == 0x000FBBA1u) goto loc_000FBBA1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FBB7A: ;
    eax = 1;
    goto loc_000FBBA6;

loc_000FBB81: ;
    eax = 2;
    goto loc_000FBBA6;

loc_000FBB88: ;
    eax = 3;
    goto loc_000FBBA6;

loc_000FBB8F: ;
    eax = 4;
    goto loc_000FBBA6;

loc_000FBB96: ;
    eax = 5;
    goto loc_000FBBA6;

loc_000FBB9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000FBBA6;

loc_000FBBA1: ;
    eax = 6;

loc_000FBBA6: ;
    edx = MEM32(esp + 0xD8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBBC0u); RECOMP_ABI_CALL(0x00079250u, sub_00079250); /* call 0x00079250 */

loc_000FBBC0: ;
    edx = MEM32(ebx + 0x2760);
    ecx = ebx + 0x2760;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000FBBCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBBCCu); } /* indirect call */
    }

loc_000FBBCF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x9C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FBC18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x9C)) */

loc_000FBBDB: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FBC18; /* jne: not equal / not zero */

loc_000FBBE9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000FBBF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBBEDu); } /* indirect call */
    }

loc_000FBBF0: ;
    esi = eax;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBBF9u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_000FBBF9: ;
    eax = MEM32(eax + 0x1120);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBC07u); RECOMP_ABI_CALL(0x00078170u, sub_00078170); /* call 0x00078170 */

loc_000FBC07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBC18u); RECOMP_ABI_CALL(0x00079250u, sub_00079250); /* call 0x00079250 */

loc_000FBC18: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2A;
    if ((_fa != 0)) goto loc_000FBC2B; /* jne: not equal / not zero */

loc_000FBC26: ;
    eax = 0x2B;

loc_000FBC2B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBC42u); RECOMP_ABI_CALL(0x00149650u, sub_00149650); /* call 0x00149650 */

loc_000FBC42: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FBFA5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000FBC5B: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x000FBC65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBC5Fu); } /* indirect call */
    }

loc_000FBC65: ;
    fp_push(MEMF(0x303CFC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000FBFA5; /* jb: below (unsigned <) */

loc_000FBC77: ;
    edx = MEM32(ebx + 0x2760);
    ecx = ebx + 0x2760;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000FBC86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBC83u); } /* indirect call */
    }

loc_000FBC86: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x9C); /* comiss */
    PUSH32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FBC97; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x9C)) */

loc_000FBC93: ;
    PUSH32(esp, 1);
    goto loc_000FBC99;

loc_000FBC97: ;
    PUSH32(esp, 0);

loc_000FBC99: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBC9Eu); RECOMP_ABI_CALL(0x0002D910u, sub_0002D910); /* call 0x0002D910 */

loc_000FBC9E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBCAAu); RECOMP_ABI_CALL(0x000E70F0u, sub_000E70F0); /* call 0x000E70F0 */

loc_000FBCAA: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBCB1u); RECOMP_ABI_CALL(0x000E7110u, sub_000E7110); /* call 0x000E7110 */

loc_000FBCB1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBCC0; /* je: equal / zero */

loc_000FBCB8: ;
    ebx = MEM32(ebx + 0x14AC);
    goto loc_000FBCF8;

loc_000FBCC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBCCDu); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_000FBCCD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBCD9; /* jne: not equal / not zero */

loc_000FBCD5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBCF2; /* je: equal / zero */

loc_000FBCD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBCE2; /* jne: not equal / not zero */

loc_000FBCDE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBCEA; /* je: equal / zero */

loc_000FBCE2: ;
    ebx = MEM32(ebx + 0x14A8);
    goto loc_000FBCF8;

loc_000FBCEA: ;
    ebx = MEM32(ebx + 0x14A4);
    goto loc_000FBCF8;

loc_000FBCF2: ;
    ebx = MEM32(ebx + 0x14A0);

loc_000FBCF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBD00u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000FBD00: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBFA5; /* je: equal / zero */

loc_000FBD0D: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x306518)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    if ((_fa & 1u) /* fcompi */) goto loc_000FBE7C; /* jb: below (unsigned <) */

loc_000FBDD2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    ecx = esp + 0x30;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBE13u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FBE13: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = esp + 0x40;
    goto loc_000FBF21;

loc_000FBE7C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    ecx = esp + 0x40;
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBEBDu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FBEBD: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = esp + 0x30;

loc_000FBF21: ;
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBF28u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FBF28: ;
    ecx = esp + 0x40;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBF38u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000FBF38: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBF46u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000FBF46: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBF54u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000FBF54: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBF65u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000FBF65: ;
    edx = MEM32(esi);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FBF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBF6Eu); } /* indirect call */
    }

loc_000FBF74: ;
    goto loc_000FBFA5;

loc_000FBF76: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x000FBF80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBF7Au); } /* indirect call */
    }

loc_000FBF80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBFA5; /* je: equal / zero */

loc_000FBF84: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x000FBF8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBF88u); } /* indirect call */
    }

loc_000FBF8E: ;
    MEM8(eax + 0x1B1) = 0;
    goto loc_000FBFA5;

loc_000FBF97: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000FBFA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBF9Fu); } /* indirect call */
    }

loc_000FBFA5: ;
    ecx = MEM32(esp + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xA8) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000FBFC8; /* je: equal / zero */

loc_000FBFBB: ;
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBFC8u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000FBFC8: ;
    ecx = esp + 0xA0;
    MEM32(esp + 0xAC) = 0;
    MEM32(esp + 0xA0) = 0x2FF1B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBFEAu); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_000FBFEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000FBFF3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x000FBFFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBFF7u); } /* indirect call */
    }

loc_000FBFFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC054; /* je: equal / zero */

loc_000FC001: ;
    ecx = MEM32(eax + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC054; /* jne: not equal / not zero */

loc_000FC00B: ;
    ecx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FC017u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_000FC017: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x000FC024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC01Eu); } /* indirect call */
    }

loc_000FC024: ;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FC031u); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_000FC031: ;
    eax = MEM32(ebx + 0x1120);
    ecx = ebx + 0x1120;
    edx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000FC048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC045u); } /* indirect call */
    }

loc_000FC048: ;
    ecx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FC054u); RECOMP_ABI_CALL(0x00017190u, sub_00017190); /* call 0x00017190 */

loc_000FC054: ;
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
 * sub_000FC0C0
 * Original: 0x000FC0C0 - 0x000FC191 (209 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC0C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x26B4);
    ecx = MEM32(eax + 0x1C0);
    _fa = (uint32_t)(MEM8(ecx + 0x3A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x3A), 1 (8-bit) */
    ebx = esi + 0x26B4;
    PUSH32(esp, edi);
    ebp = 0x2FFCD8;
    if (TEST_Z(_fa, _fb)) goto loc_000FC0E8; /* je: equal / zero */

loc_000FC0E3: ;
    ebp = 0x2FFCD0;

loc_000FC0E8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x000FC0F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC0EDu); } /* indirect call */
    }

loc_000FC0F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC115; /* je: equal / zero */

loc_000FC0F7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    goto loc_000FC100;

    /* nop */

loc_000FC100: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC115; /* je: equal / zero */

loc_000FC104: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FC100; /* jl: less (signed <) */

loc_000FC10D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FC115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC113u); } /* indirect call */
    }

loc_000FC115: ;
    ecx = MEM32(ebx);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C83C769);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A4); PUSH32(esp, 0x000FC128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC122u); } /* indirect call */
    }

loc_000FC128: ;
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000FC133u); RECOMP_ABI_CALL(0x000FB1F0u, sub_000FB1F0); /* call 0x000FB1F0 */

loc_000FC133: ;
    eax = MEM32(esi + 0x26B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC16E; /* je: equal / zero */

loc_000FC13D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDC5290AFu);
    PUSH32(esp, 0x304740);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x000FC152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC14Cu); } /* indirect call */
    }

loc_000FC152: ;
    eax = MEM32(esi + 0x26B8);
    PUSH32(esp, 0x304740);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FC165u); RECOMP_ABI_CALL(0x000FB1F0u, sub_000FB1F0); /* call 0x000FB1F0 */

loc_000FC165: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000FC16Eu); RECOMP_ABI_CALL(0x000FB0C0u, sub_000FB0C0); /* call 0x000FB0C0 */

loc_000FC16E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;

loc_000FC172: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC183; /* je: equal / zero */

loc_000FC178: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000FC183u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000FC183: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FC172; /* jl: less (signed <) */

loc_000FC18C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC1A0
 * Original: 0x000FC1A0 - 0x000FC1F7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC1A0: ;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3DB8D8;
    PUSH32(esp, 0x000FC1B5u); RECOMP_ABI_CALL(0x00067EC0u, sub_00067EC0); /* call 0x00067EC0 */

loc_000FC1B5: ;
    edx = MEM32(esp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DB8D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x3DB8D8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC1DF; /* je: equal / zero */

loc_000FC1C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FC1D1u); RECOMP_ABI_CALL(0x000396B0u, sub_000396B0); /* call 0x000396B0 */

loc_000FC1D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC1F1; /* je: equal / zero */

loc_000FC1D8: ;
    eax = MEM32(eax + 0x18);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000FC1DF: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3171E0);
    PUSH32(esp, 0x000FC1EEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000FC1EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FC1F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC200
 * Original: 0x000FC200 - 0x000FC244 (68 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC200: ;
    eax = MEM32(0x3DB8DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC243; /* je: equal / zero */

loc_000FC209: ;
    eax = MEM32(0x3DB8D8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3DB8D8;
    PUSH32(esp, 0x000FC21Cu); RECOMP_ABI_CALL(0x000FC330u, sub_000FC330); /* call 0x000FC330 */

loc_000FC21C: ;
    eax = MEM32(0x3DB8D8);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3DB8D8);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3DB8D8);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3DB8DC) = 0;

loc_000FC243: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC250
 * Original: 0x000FC250 - 0x000FC266 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC250(void)
{

loc_000FC250: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x3DB8D8;
    PUSH32(esp, 0x000FC25Fu); RECOMP_ABI_CALL(0x0013DBD0u, sub_0013DBD0); /* call 0x0013DBD0 */

loc_000FC25F: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC270
 * Original: 0x000FC270 - 0x000FC277 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC270(void)
{

loc_000FC270: ;
    eax = ecx + 0x2760;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC280
 * Original: 0x000FC280 - 0x000FC287 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC280(void)
{

loc_000FC280: ;
    eax = ecx + 0x2570;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC290
 * Original: 0x000FC290 - 0x000FC29E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC290: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC29B; /* je: equal / zero */

loc_000FC294: ;
    eax = ecx + 0x1120;
    esp += 4; return; /* ret */

loc_000FC29B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC2A0
 * Original: 0x000FC2A0 - 0x000FC2AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC2A0: ;
    _fb = (uint32_t)(0x14C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_000FC2B0
 * Original: 0x000FC2B0 - 0x000FC2B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2B0(void)
{

loc_000FC2B0: ;
    eax = ecx + 0x14D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC2C0
 * Original: 0x000FC2C0 - 0x000FC2CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC2C0: ;
    _fb = (uint32_t)(0x2588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2588;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B1C10(); return; /* tail jmp 0x000B1C10 */

}

/**
 * sub_000FC2D0
 * Original: 0x000FC2D0 - 0x000FC2D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FC2D0: ;
    fp_push(MEMF(ecx + 0x259C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC2E0
 * Original: 0x000FC2E0 - 0x000FC2E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2E0(void)
{

loc_000FC2E0: ;
    SET_LO16(eax, MEM16(ecx + 0x2640));
    esp += 4; return; /* ret */

}

/**
 * sub_000FC2F0
 * Original: 0x000FC2F0 - 0x000FC2F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC2F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FC370(); return; /* tail jmp 0x000FC370 */

}

/**
 * sub_000FC300
 * Original: 0x000FC300 - 0x000FC30B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC300: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FC2A0(); return; /* tail jmp 0x000FC2A0 */

}

/**
 * sub_000FC310
 * Original: 0x000FC310 - 0x000FC31B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC310: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FC370(); return; /* tail jmp 0x000FC370 */

}

/**
 * sub_000FC320
 * Original: 0x000FC320 - 0x000FC32B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC320: ;
    _fb = (uint32_t)(0x1120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FC370(); return; /* tail jmp 0x000FC370 */

}

/**
 * sub_000FC330
 * Original: 0x000FC330 - 0x000FC363 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FC35E; /* je: equal / zero */

loc_000FC33C: ;
    PUSH32(esp, edi);
    /* nop */

loc_000FC340: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000FC34Bu); RECOMP_ABI_CALL(0x000FC330u, sub_000FC330); /* call 0x000FC330 */

loc_000FC34B: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FC354u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FC354: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000FC340; /* jne: not equal / not zero */

loc_000FC35D: ;
    POP32(esp, edi);

loc_000FC35E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC370
 * Original: 0x000FC370 - 0x000FC37E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC370(void)
{

loc_000FC370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FC378u); RECOMP_ABI_CALL(0x000FA5C0u, sub_000FA5C0); /* call 0x000FA5C0 */

loc_000FC378: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC380
 * Original: 0x000FC380 - 0x000FC3A7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC380: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0x164) = edx;
    ecx = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC3A4; /* je: equal / zero */

loc_000FC39E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC3A4u); RECOMP_ABI_CALL(0x0012FB20u, sub_0012FB20); /* call 0x0012FB20 */

loc_000FC3A4: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000FC3B0
 * Original: 0x000FC3B0 - 0x000FC3BD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3B0(void)
{

loc_000FC3B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x168) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC3C0
 * Original: 0x000FC3C0 - 0x000FC3E0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC3C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD0) = eax;
    ecx = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC3DD; /* je: equal / zero */

loc_000FC3D4: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012FB90(); return; /* tail jmp 0x0012FB90 */

loc_000FC3DD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC3E0
 * Original: 0x000FC3E0 - 0x000FC400 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC3E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD8) = eax;
    ecx = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC3FD; /* je: equal / zero */

loc_000FC3F4: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0012FBA0(); return; /* tail jmp 0x0012FBA0 */

loc_000FC3FD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC400
 * Original: 0x000FC400 - 0x000FC451 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC400: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi + 0x110) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000FC41E; /* je: equal / zero */

loc_000FC418: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FC41Eu); RECOMP_ABI_CALL(0x00110320u, sub_00110320); /* call 0x00110320 */

loc_000FC41E: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC44C; /* je: equal / zero */

loc_000FC428: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000FC43F; /* jne: not equal / not zero */

loc_000FC432: ;
    MEM32(esp + 4) = 0xFF;
    g_seh_ebp = ebp; sub_00110420(); return; /* tail jmp 0x00110420 */

loc_000FC43F: ;
    MEM32(esp + 4) = 0x10;
    g_seh_ebp = ebp; sub_00110420(); return; /* tail jmp 0x00110420 */

loc_000FC44C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC460
 * Original: 0x000FC460 - 0x000FC467 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC460(void)
{

loc_000FC460: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC470
 * Original: 0x000FC470 - 0x000FC477 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC470(void)
{

loc_000FC470: ;
    eax = MEM32(ecx + 0xD8);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC480
 * Original: 0x000FC480 - 0x000FC483 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC480(void)
{

loc_000FC480: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC490
 * Original: 0x000FC490 - 0x000FC493 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC490(void)
{

loc_000FC490: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC4A0
 * Original: 0x000FC4A0 - 0x000FC4A3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4A0(void)
{

loc_000FC4A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC4B0
 * Original: 0x000FC4B0 - 0x000FC4B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4B0(void)
{

loc_000FC4B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4C0
 * Original: 0x000FC4C0 - 0x000FC4C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4C0(void)
{

loc_000FC4C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4D0
 * Original: 0x000FC4D0 - 0x000FC4D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4D0(void)
{

loc_000FC4D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4E0
 * Original: 0x000FC4E0 - 0x000FC4E3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4E0(void)
{

loc_000FC4E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC4F0
 * Original: 0x000FC4F0 - 0x000FC50A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC4F0: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC4FF; /* jne: not equal / not zero */

loc_000FC4FA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000FC4FF: ;
    ecx = MEM32(ecx + 0x16C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_000FC510
 * Original: 0x000FC510 - 0x000FC517 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC510(void)
{

loc_000FC510: ;
    eax = MEM32(ecx + 0x110);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC520
 * Original: 0x000FC520 - 0x000FC534 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC520: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC531; /* je: equal / zero */

loc_000FC52A: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x44)); return; /* indirect tail jmp */

loc_000FC531: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC540
 * Original: 0x000FC540 - 0x000FC554 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC540: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC551; /* je: equal / zero */

loc_000FC54A: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

loc_000FC551: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC560
 * Original: 0x000FC560 - 0x000FC576 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC560: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC571; /* je: equal / zero */

loc_000FC56A: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

loc_000FC571: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC580
 * Original: 0x000FC580 - 0x000FC598 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC580: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC595; /* je: equal / zero */

loc_000FC58A: ;
    ecx = eax + 0xB0;
    g_seh_ebp = ebp; sub_00191320(); return; /* tail jmp 0x00191320 */

loc_000FC595: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC5A0
 * Original: 0x000FC5A0 - 0x000FC5B8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC5A0: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC5B5; /* je: equal / zero */

loc_000FC5AA: ;
    ecx = eax + 0xB0;
    g_seh_ebp = ebp; sub_001911E0(); return; /* tail jmp 0x001911E0 */

loc_000FC5B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC5C0
 * Original: 0x000FC5C0 - 0x000FC5C3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5C0(void)
{

loc_000FC5C0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000FC5D0
 * Original: 0x000FC5D0 - 0x000FC5D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC5D0: ;
    g_seh_ebp = ebp; sub_00132040(); return; /* tail jmp 0x00132040 */

}

/**
 * sub_000FC5E0
 * Original: 0x000FC5E0 - 0x000FC5E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5E0(void)
{

loc_000FC5E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC5F0
 * Original: 0x000FC5F0 - 0x000FC5FD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5F0(void)
{

loc_000FC5F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x164) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC600
 * Original: 0x000FC600 - 0x000FC603 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC600(void)
{

loc_000FC600: ;
    esp += 44; return; /* ret 40 */

}

/**
 * sub_000FC610
 * Original: 0x000FC610 - 0x000FC611 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC610(void)
{

loc_000FC610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC620
 * Original: 0x000FC620 - 0x000FC623 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC620(void)
{

loc_000FC620: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC630
 * Original: 0x000FC630 - 0x000FC64E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC630: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xE0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC648u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_000FC648: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC650
 * Original: 0x000FC650 - 0x000FC67A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC650: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x11C));
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    SET_LO8(eax, LO8(eax) << 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x11C) = LO8(edx);
    MEMF(ecx + 0x114) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC680
 * Original: 0x000FC680 - 0x000FC692 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC680: ;
    ecx = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC68F; /* je: equal / zero */

loc_000FC68A: ;
    g_seh_ebp = ebp; sub_0012FBB0(); return; /* tail jmp 0x0012FBB0 */

loc_000FC68F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC6A0
 * Original: 0x000FC6A0 - 0x000FC6B2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC6A0: ;
    ecx = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC6AF; /* je: equal / zero */

loc_000FC6AA: ;
    g_seh_ebp = ebp; sub_0012FBC0(); return; /* tail jmp 0x0012FBC0 */

loc_000FC6AF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC6C0
 * Original: 0x000FC6C0 - 0x000FC6DC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC6C0(void)
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

loc_000FC6C0: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC6D1; /* jne: not equal / not zero */

loc_000FC6CA: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 4; return; /* ret */

loc_000FC6D1: ;
    ecx = eax + 0x84;
    g_seh_ebp = ebp; sub_000B1C10(); return; /* tail jmp 0x000B1C10 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC6E0
 * Original: 0x000FC6E0 - 0x000FC6FB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC6E0: ;
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC6F8; /* je: equal / zero */

loc_000FC6EA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */

loc_000FC6F8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC700
 * Original: 0x000FC700 - 0x000FC72F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x150;
    PUSH32(esp, 0x000FC714u); RECOMP_ABI_CALL(0x000B1C90u, sub_000B1C90); /* call 0x000B1C90 */

loc_000FC714: ;
    esi = MEM32(esi + 0x16C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC72A; /* je: equal / zero */

loc_000FC71E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x84;
    PUSH32(esp, 0x000FC72Au); RECOMP_ABI_CALL(0x000B1C90u, sub_000B1C90); /* call 0x000B1C90 */

loc_000FC72A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC730
 * Original: 0x000FC730 - 0x000FC79D (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC730: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11C));
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x11C) = LO8(eax);
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x11C) = MEM8(esi + 0x11C) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0x11C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x118) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000FC781; /* je: equal / zero */

loc_000FC77A: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x000FC781u); RECOMP_ABI_CALL(0x00110230u, sub_00110230); /* call 0x00110230 */

loc_000FC781: ;
    PUSH32(esp, 2);
    edi = esi + 0x170;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FC791u); RECOMP_ABI_CALL(0x0003B6B0u, sub_0003B6B0); /* call 0x0003B6B0 */

loc_000FC791: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FC797u); RECOMP_ABI_CALL(0x0003BEB0u, sub_0003BEB0); /* call 0x0003BEB0 */

loc_000FC797: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC7A0
 * Original: 0x000FC7A0 - 0x000FC891 (241 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC7A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FC7AEu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000FC7AE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x317200); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC7EA; /* jnp: not parity */

loc_000FC7C3: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC85B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FC7CF: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esi + 0x1B0) = xmm0.f[0]; /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_000FC7E0: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC7EA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FC7E2: ;
    MEMF(esi + 0x1B0) = xmm1.f[0]; /* movss */

loc_000FC7EA: ;
    ecx = MEM32(esi + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC819; /* je: equal / zero */

loc_000FC7F4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FC7FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC7F7u); } /* indirect call */
    }

loc_000FC7FA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300C0C); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x16C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000FC819u); RECOMP_ABI_CALL(0x0012FBD0u, sub_0012FBD0); /* call 0x0012FBD0 */

loc_000FC819: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC846; /* je: equal / zero */

loc_000FC827: ;
    _fa = (uint32_t)(MEM8(esi + 0x11C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC846; /* je: equal / zero */

loc_000FC830: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x317208); /* mulss */
    MEMF(esi + 0x12C) = xmm0.f[0]; /* movss */

loc_000FC846: ;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC856; /* je: equal / zero */

loc_000FC850: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FC856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC853u); } /* indirect call */
    }

loc_000FC856: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FC85B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x1B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC884; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x1B0)) */

loc_000FC864: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE99C); /* addss */
    MEMF(esi + 0x1B0) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_000FC7E0;

loc_000FC884: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FC88Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC88Au); } /* indirect call */
    }

loc_000FC88C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC8A0
 * Original: 0x000FC8A0 - 0x000FC8C7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC8A0: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC8C6; /* je: equal / zero */

loc_000FC8AE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x11C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x11C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC8C6; /* je: equal / zero */

loc_000FC8B7: ;
    eax = MEM32(ecx + 0x12C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x000FC8C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC8C0u); } /* indirect call */
    }

loc_000FC8C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC8D0
 * Original: 0x000FC8D0 - 0x000FC916 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FC8E5u); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_000FC8E5: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC90F; /* je: equal / zero */

loc_000FC8EF: ;
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */

loc_000FC90F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC920
 * Original: 0x000FC920 - 0x000FC966 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FC935u); RECOMP_ABI_CALL(0x001329A0u, sub_001329A0); /* call 0x001329A0 */

loc_000FC935: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC95F; /* je: equal / zero */

loc_000FC93F: ;
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */

loc_000FC95F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC970
 * Original: 0x000FC970 - 0x000FCA29 (185 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC970(void)
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

loc_000FC970: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 4);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    edx = MEM32(esp + 8);
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9A5; /* jnp: not parity */

loc_000FC991: ;
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9A5; /* jnp: not parity */

loc_000FC99E: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx); /* divss */

loc_000FC9A5: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9C9; /* jnp: not parity */

loc_000FC9B3: ;
    xmm4 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9C9; /* jnp: not parity */

loc_000FC9C1: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 4); /* divss */

loc_000FC9C9: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9ED; /* jnp: not parity */

loc_000FC9D7: ;
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9ED; /* jnp: not parity */

loc_000FC9E5: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(ecx + 8); /* divss */

loc_000FC9ED: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC9F7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000FC9F2: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000FCA00; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000FC9F7: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FCA03; /* jp: parity */

loc_000FCA00: ;
    xmm1 = xmm2; /* movaps */

loc_000FCA03: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FCA0D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000FCA08: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000FCA1C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FCA0D: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FCA22; /* jp: parity */

loc_000FCA1C: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000FCA22: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCA30
 * Original: 0x000FCA30 - 0x000FCABB (139 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCA30: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCAB7; /* je: equal / zero */

loc_000FCA3D: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x31720C);
    PUSH32(esp, 0x000FCA51u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000FCA51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCAB7; /* je: equal / zero */

loc_000FCA58: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000FCA60u); RECOMP_ABI_CALL(0x000F28A0u, sub_000F28A0); /* call 0x000F28A0 */

loc_000FCA60: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCAB6; /* je: equal / zero */

loc_000FCA66: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = ebx + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x000FCA75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCA6Fu); } /* indirect call */
    }

loc_000FCA75: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FCA7Du); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000FCA7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x000FCA87u); RECOMP_ABI_CALL(0x000F2620u, sub_000F2620); /* call 0x000F2620 */

loc_000FCA87: ;
    edx = MEM32(ebx + 0x164);
    edi = eax;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000FCA97u); RECOMP_ABI_CALL(0x000F2650u, sub_000F2650); /* call 0x000F2650 */

loc_000FCA97: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FCAA0u); RECOMP_ABI_CALL(0x000F24F0u, sub_000F24F0); /* call 0x000F24F0 */

loc_000FCAA0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FCAA9u); RECOMP_ABI_CALL(0x000F2500u, sub_000F2500); /* call 0x000F2500 */

loc_000FCAA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000FCAB5u); RECOMP_ABI_CALL(0x00131F50u, sub_00131F50); /* call 0x00131F50 */

loc_000FCAB5: ;
    POP32(esp, edi);

loc_000FCAB6: ;
    POP32(esp, esi);

loc_000FCAB7: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000FCAC0
 * Original: 0x000FCAC0 - 0x000FCB65 (165 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FCAC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, MEM8(ecx + 0x11C));
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FCB48; /* jnp: not parity */

loc_000FCADD: ;
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x11C) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_000FCB1F; /* je: equal / zero */

loc_000FCB05: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000FCB15; /* je: equal / zero */

loc_000FCB08: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FCB27; /* jne: not equal / not zero */

loc_000FCB0B: ;
    MEMF(ecx + 0xF8) = xmm1.f[0]; /* movss */
    goto loc_000FCB27;

loc_000FCB15: ;
    MEMF(ecx + 0xF4) = xmm1.f[0]; /* movss */
    goto loc_000FCB27;

loc_000FCB1F: ;
    MEMF(ecx + 0xF0) = xmm1.f[0]; /* movss */

loc_000FCB27: ;
    eax = MEM32(ecx + 0x60);
    MEM32(ecx + 0x100) = eax;
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + 0x104) = edx;
    eax = MEM32(ecx + 0x68);
    MEM32(ecx + 0x108) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000FCB48: ;
    edx = MEM32(ecx);
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 0x11C) = LO8(eax);
    eax = ecx + 0x100;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x000FCB5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCB59u); } /* indirect call */
    }

loc_000FCB5F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FCB70
 * Original: 0x000FCB70 - 0x000FCBA2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x170;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FCB7Fu); RECOMP_ABI_CALL(0x0003BEF0u, sub_0003BEF0); /* call 0x0003BEF0 */

loc_000FCB7F: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000FCB8Eu); RECOMP_ABI_CALL(0x00131F10u, sub_00131F10); /* call 0x00131F10 */

loc_000FCB8E: ;
    esi = MEM32(esi + 0xE0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCB9E; /* je: equal / zero */

loc_000FCB98: ;
    MEM16(esi + 0x1E) = 0xFFFF;

loc_000FCB9E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FCBB0
 * Original: 0x000FCBB0 - 0x000FCBDF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCBB0: ;
    SET_LO8(edx, MEM8(ecx + 0x11C));
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x11C));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x11C) = LO8(ebx);
    ecx = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000FCBDC; /* je: equal / zero */

loc_000FCBD9: ;
    MEM8(ecx + 0x6C) = LO8(eax);

loc_000FCBDC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FCBE0
 * Original: 0x000FCBE0 - 0x000FCC70 (144 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCBE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    ecx = 0x3888C0;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCC1Du); RECOMP_ABI_CALL(0x00079810u, sub_00079810); /* call 0x00079810 */

loc_000FCC1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCC3E; /* je: equal / zero */

loc_000FCC21: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCC3E; /* je: equal / zero */

loc_000FCC2B: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCC3E; /* je: equal / zero */

loc_000FCC32: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCC3Eu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000FCC3E: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCC52u); RECOMP_ABI_CALL(0x0007A630u, sub_0007A630); /* call 0x0007A630 */

loc_000FCC52: ;
    edx = MEM32(esi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FCC61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCC5Bu); } /* indirect call */
    }

loc_000FCC61: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCC6Bu); RECOMP_ABI_CALL(0x00079800u, sub_00079800); /* call 0x00079800 */

loc_000FCC6B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCC70
 * Original: 0x000FCC70 - 0x000FCCE0 (112 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xCC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCCD9; /* je: equal / zero */

loc_000FCC86: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCC91u); RECOMP_ABI_CALL(0x000FD480u, sub_000FD480); /* call 0x000FD480 */

loc_000FCC91: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCCD9; /* je: equal / zero */

loc_000FCC9D: ;
    esi = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FCCB6; /* jle: less or equal (signed <=) */

loc_000FCCA7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FCCB6; /* jl: less (signed <) */

loc_000FCCAB: ;
    ecx = ecx + ecx * 4 + 5;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FCCB8;

loc_000FCCB6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FCCB8: ;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    edx = MEM32(ebp + 0xC);
    XMM_STORE(edx, xmm1); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(edx + 0x20, xmm1); /* movaps */
    XMM_STORE(edx + 0x30, xmm0); /* movaps */

loc_000FCCD9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FCCE0
 * Original: 0x000FCCE0 - 0x000FCD91 (177 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FCCE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x317248;
    MEM32(esi + 8) = 0x317240;
    MEM32(esi + 0xB0) = 0x317238;
    if (CMP_EQ(_fa, _fb)) goto loc_000FCD1E; /* je: equal / zero */

loc_000FCD08: ;
    ecx = edi;
    PUSH32(esp, 0x000FCD0Fu); RECOMP_ABI_CALL(0x001129A0u, sub_001129A0); /* call 0x001129A0 */

loc_000FCD0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FCD15u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FCD15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC4) = ebx;

loc_000FCD1E: ;
    edi = MEM32(esi + 0xC8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCD3E; /* je: equal / zero */

loc_000FCD28: ;
    ecx = edi;
    PUSH32(esp, 0x000FCD2Fu); RECOMP_ABI_CALL(0x001103F0u, sub_001103F0); /* call 0x001103F0 */

loc_000FCD2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FCD35u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FCD35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC8) = ebx;

loc_000FCD3E: ;
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FCD4Au); RECOMP_ABI_CALL(0x0012F7D0u, sub_0012F7D0); /* call 0x0012F7D0 */

loc_000FCD4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x170;
    MEM32(esi + 0x16C) = ebx;
    PUSH32(esp, 0x000FCD5Eu); RECOMP_ABI_CALL(0x0003BF10u, sub_0003BF10); /* call 0x0003BF10 */

loc_000FCD5E: ;
    ecx = MEM32(esi + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = esi + 0x130;
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000FCD7A; /* je: equal / zero */

loc_000FCD74: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FCD7Au); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000FCD7A: ;
    MEM32(edi + 4) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0xB0) = 0x300534;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000FCDA0
 * Original: 0x000FCDA0 - 0x000FCFB4 (532 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCDA0(void)
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

loc_000FCDA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCDB5u); RECOMP_ABI_CALL(0x001306D0u, sub_001306D0); /* call 0x001306D0 */

loc_000FCDB5: ;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCE4F; /* je: equal / zero */

loc_000FCDC3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCDEC; /* je: equal / zero */

loc_000FCDE2: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCDECu); RECOMP_ABI_CALL(0x0014DD80u, sub_0014DD80); /* call 0x0014DD80 */

loc_000FCDEC: ;
    ecx = MEM32(esi + 0xC4);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCDFCu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_000FCDFC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCE40u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000FCE40: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FCE4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCE49u); } /* indirect call */
    }

loc_000FCE4F: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCE6B; /* je: equal / zero */

loc_000FCE59: ;
    ecx = eax;
    edx = MEM32(ecx);
    eax = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000FCE6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCE68u); } /* indirect call */
    }

loc_000FCE6B: ;
    eax = MEM32(esi + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCEBC; /* je: equal / zero */

loc_000FCE75: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esi + 0x140;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    XMM_STORE(esp + 0x64, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCEA9u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_000FCEA9: ;
    ecx = MEM32(esi + 0x134);
    edx = MEM32(ecx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FCEBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCEB6u); } /* indirect call */
    }

loc_000FCEBC: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCEE5; /* je: equal / zero */

loc_000FCECB: ;
    _fa = (uint32_t)(MEM8(esi + 0x11C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCEE5; /* je: equal / zero */

loc_000FCED4: ;
    eax = MEM32(esi + 0x12C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x000FCEE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCEDFu); } /* indirect call */
    }

loc_000FCEE5: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCF0F; /* je: equal / zero */

loc_000FCEEF: ;
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */

loc_000FCF0F: ;
    _fa = (uint32_t)(MEM8(esi + 0x11C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCFAD; /* je: equal / zero */

loc_000FCF1C: ;
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCF7A; /* je: equal / zero */

loc_000FCF26: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x317204)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FCF6A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FCF54: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC4);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCF6Au); RECOMP_ABI_CALL(0x001108D0u, sub_001108D0); /* call 0x001108D0 */

loc_000FCF6A: ;
    ecx = MEM32(esi + 0xC8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCF7Au); RECOMP_ABI_CALL(0x00110950u, sub_00110950); /* call 0x00110950 */

loc_000FCF7A: ;
    _fa = (uint32_t)(MEM8(esi + 0x11C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCFAD; /* je: equal / zero */

loc_000FCF83: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCFA4; /* je: equal / zero */

loc_000FCF8D: ;
    ecx = eax + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCF98u); RECOMP_ABI_CALL(0x000B1C10u, sub_000B1C10); /* call 0x000B1C10 */

loc_000FCF98: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000FCFAD; /* jb: below (unsigned <) */

loc_000FCFA4: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCFAAu); RECOMP_ABI_CALL(0x00039600u, sub_00039600); /* call 0x00039600 */

loc_000FCFAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FCFAD: ;
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
 * sub_000FCFC0
 * Original: 0x000FCFC0 - 0x000FD05F (159 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCFC0: ;
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
    ecx = MEM32(esi + 0x134);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x130;
    if (CMP_EQ(_fa, _fb)) goto loc_000FCFE3; /* je: equal / zero */

loc_000FCFDD: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCFE3u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000FCFE3: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FCFF3; /* je: equal / zero */

loc_000FCFED: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FCFF3u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_000FCFF3: ;
    eax = MEM32(esi + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD057; /* je: equal / zero */

loc_000FCFFD: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    eax = esi + 0x140;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD044u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_000FD044: ;
    ecx = MEM32(esi + 0x134);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FD057u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD051u); } /* indirect call */
    }

loc_000FD057: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FD060
 * Original: 0x000FD060 - 0x000FD112 (178 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD060(void)
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

loc_000FD060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x11C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x11C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD10A; /* je: equal / zero */

loc_000FD07D: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD089; /* jne: not equal / not zero */

loc_000FD086: ;
    esi = MEM32(eax + 4);

loc_000FD089: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000FD09Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD096u); } /* indirect call */
    }

loc_000FD09C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD0AB; /* je: equal / zero */

loc_000FD0A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000FD0A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD0A4u); } /* indirect call */
    }

loc_000FD0A7: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FD0AB: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD0B4u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_000FD0B4: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD0C4u); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_000FD0C4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FD0CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD0C8u); } /* indirect call */
    }

loc_000FD0CB: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FD0D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD0D4u); } /* indirect call */
    }

loc_000FD0D7: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000FD0F1; /* je: equal / zero */

loc_000FD0E7: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD0F1u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000FD0F1: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x10) = 0x2FF1B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD10Au); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_000FD10A: ;
    POP32(esp, edi);
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
 * sub_000FD120
 * Original: 0x000FD120 - 0x000FD152 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD120: ;
    eax = MEM32(ecx + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD138; /* je: equal / zero */

loc_000FD12A: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD138; /* je: equal / zero */

loc_000FD131: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_000FD138: ;
    _fa = (uint32_t)(MEM8(ecx + 0x11C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x11C), 4 (8-bit) */
    PUSH32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_000FD14B; /* je: equal / zero */

loc_000FD142: ;
    PUSH32(esp, 0x000FD147u); RECOMP_ABI_CALL(0x00039630u, sub_00039630); /* call 0x00039630 */

loc_000FD147: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FD14B: ;
    PUSH32(esp, 0x000FD150u); RECOMP_ABI_CALL(0x000FD6D0u, sub_000FD6D0); /* call 0x000FD6D0 */

loc_000FD150: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD160
 * Original: 0x000FD160 - 0x000FD28B (299 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FD169u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000FD169: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xB0) = 0x300534;
    SET_LO8(eax, MEM8(esi + 0x11C));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0xEF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = 0x317248;
    MEM32(esi + 8) = 0x317240;
    MEM32(esi + 0xB0) = 0x317238;
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xBC) = edi;
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = edi;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0x124) = edi;
    MEMF(esi + 0x12C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x11C) = LO8(eax);
    MEM32(esi + 0x134) = edi;
    MEM32(esi + 0x138) = edi;
    MEM32(esi + 0x13C) = edi;
    ecx = esi + 0x150;
    MEM32(esi + 0x130) = 0x2FF02C;
    PUSH32(esp, 0x000FD1FEu); RECOMP_ABI_CALL(0x000B1A90u, sub_000B1A90); /* call 0x000B1A90 */

loc_000FD1FE: ;
    ecx = esi + 0x170;
    MEM32(esi + 0x164) = edi;
    PUSH32(esp, 0x000FD20Fu); RECOMP_ABI_CALL(0x0003B8B0u, sub_0003B8B0); /* call 0x0003B8B0 */

loc_000FD20F: ;
    SET_LO8(ecx, MEM8(esi + 0x11C));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0x110) = 0xFF;
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x11C) = LO8(ecx);
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0x11C));
    xmm0 = XMM_SCALAR(MEMF(0x317200)); /* movss */
    SET_LO8(eax, LO8(eax) & 0xE3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3B9EB4C8);
    MEM32(esi + 0x120) = edi;
    MEMF(esi + 0x1B0) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x11C) = LO8(eax);
    PUSH32(esp, 0x000FD27Du); RECOMP_ABI_CALL(0x0012F8D0u, sub_0012F8D0); /* call 0x0012F8D0 */

loc_000FD27D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x16C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD290
 * Original: 0x000FD290 - 0x000FD312 (130 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD290(void)
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

loc_000FD290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x000FD29Fu); RECOMP_ABI_CALL(0x000FD060u, sub_000FD060); /* call 0x000FD060 */

loc_000FD29F: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD2A8; /* jne: not equal / not zero */

loc_000FD2A5: ;
    edi = MEM32(esi + 4);

loc_000FD2A8: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x000FD2AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD2ACu); } /* indirect call */
    }

loc_000FD2AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD2C1; /* jne: not equal / not zero */

loc_000FD2B3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000FD2BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD2B7u); } /* indirect call */
    }

loc_000FD2BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD30C; /* je: equal / zero */

loc_000FD2C1: ;
    eax = MEM32(ebx + 0xE0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD2D2u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_000FD2D2: ;
    edi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD30C; /* je: equal / zero */

loc_000FD2DC: ;
    /* nop */

loc_000FD2E0: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3173C4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000FD305; /* jbe: below or equal (unsigned <=) */

loc_000FD2F1: ;
    ecx = MEM32(ebx + 0xE0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x43);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FD302u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_000FD302: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FD305: ;
    edi = MEM32(edi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD2E0; /* jne: not equal / not zero */

loc_000FD30C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD320
 * Original: 0x000FD320 - 0x000FD47A (346 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD320(void)
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

loc_000FD320: ;
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
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x000FD33Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD338u); } /* indirect call */
    }

loc_000FD33E: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000FD34Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD344u); } /* indirect call */
    }

loc_000FD34A: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x000FD358u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD352u); } /* indirect call */
    }

loc_000FD358: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FD459; /* je: equal / zero */

loc_000FD364: ;
    ecx = MEM32(edi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD3D1; /* je: equal / zero */

loc_000FD36E: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x000FD37Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD377u); } /* indirect call */
    }

loc_000FD37D: ;
    xmm1 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = esp + 0x10;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3011DC); /* addss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC4);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD3CDu); RECOMP_ABI_CALL(0x00110830u, sub_00110830); /* call 0x00110830 */

loc_000FD3CD: ;
    eax = MEM32(esp + 0x2C);

loc_000FD3D1: ;
    ecx = MEM32(edi + 0xE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD471; /* je: equal / zero */

loc_000FD3DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD3EC; /* je: equal / zero */

loc_000FD3E3: ;
    _fa = (uint32_t)(MEM8(edi + 0x120)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x120), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD403; /* je: equal / zero */

loc_000FD3EC: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000FD3FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD3F4u); } /* indirect call */
    }

loc_000FD3FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000FD403: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD40Cu); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_000FD40C: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000FD41Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD415u); } /* indirect call */
    }

loc_000FD41B: ;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x000FD42Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD424u); } /* indirect call */
    }

loc_000FD42A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD434u); RECOMP_ABI_CALL(0x000165B0u, sub_000165B0); /* call 0x000165B0 */

loc_000FD434: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FD43Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD438u); } /* indirect call */
    }

loc_000FD43B: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FD447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD444u); } /* indirect call */
    }

loc_000FD447: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FD450u); RECOMP_ABI_CALL(0x00017190u, sub_00017190); /* call 0x00017190 */

loc_000FD450: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000FD459: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD471; /* je: equal / zero */

loc_000FD461: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD471; /* jne: not equal / not zero */

loc_000FD465: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000FD471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD46Bu); } /* indirect call */
    }

loc_000FD471: ;
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
 * sub_000FD480
 * Original: 0x000FD480 - 0x000FD4B8 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD480: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x34);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000FD4B4; /* jbe: below or equal (unsigned <=) */

loc_000FD48E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FD4A0;

    /* nop */

loc_000FD4A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD4B1; /* je: equal / zero */

loc_000FD4A4: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000FD4A0; /* jb: below (unsigned <) */

loc_000FD4AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FD4B1: ;
    eax = ecx;
    POP32(esp, edi);

loc_000FD4B4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FD4C0
 * Original: 0x000FD4C0 - 0x000FD4C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD4C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FD570(); return; /* tail jmp 0x000FD570 */

}

/**
 * sub_000FD4D0
 * Original: 0x000FD4D0 - 0x000FD4DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD4D0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FD570(); return; /* tail jmp 0x000FD570 */

}

/**
 * sub_000FD4E0
 * Original: 0x000FD4E0 - 0x000FD4ED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD4E0(void)
{

loc_000FD4E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xE0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FD4F0
 * Original: 0x000FD4F0 - 0x000FD511 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD4F0(void)
{

loc_000FD4F0: ;
    edx = MEM32(ecx + 0xF0);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xF4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0xF8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FD520
 * Original: 0x000FD520 - 0x000FD52E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD520: ;
    edx = MEM32(ecx + 0x164);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD530
 * Original: 0x000FD530 - 0x000FD537 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD530(void)
{

loc_000FD530: ;
    eax = MEM32(ecx + 0xE0);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD540
 * Original: 0x000FD540 - 0x000FD549 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD540: ;
    SET_LO8(eax, MEM8(ecx + 0x11C));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD550
 * Original: 0x000FD550 - 0x000FD55C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD550: ;
    SET_LO8(eax, MEM8(ecx + 0x11C));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD560
 * Original: 0x000FD560 - 0x000FD567 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD560(void)
{

loc_000FD560: ;
    eax = MEM32(ecx + 0x134);
    esp += 4; return; /* ret */

}
