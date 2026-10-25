/**
 * Medal of Honor European Assault - Recompiled code chunk 16
 * Functions: 250 (0x0008ACA0 - 0x00090260)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0008ACA0
 * Original: 0x0008ACA0 - 0x0008ACD4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ACA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ACA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008ACA8u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_0008ACA8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x30901C;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x34) = 0;
    PUSH32(esp, 0x0008ACC3u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008ACC3: ;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(esi + 0x34) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008ACE0
 * Original: 0x0008ACE0 - 0x0008ACF0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ACE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ACE0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008ACEDu); RECOMP_ABI_CALL(0x0015A860u, sub_0015A860); /* call 0x0015A860 */

loc_0008ACED: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008ACF0
 * Original: 0x0008ACF0 - 0x0008AD5D (109 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ACF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ACF0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008AD18; /* je: equal / zero */

loc_0008ACF9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008AD5A; /* jne: not equal / not zero */

loc_0008ACFC: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008AD09u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008AD09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AD5A; /* je: equal / zero */

loc_0008AD0D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008AD15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AD13u); } /* indirect call */
    }

loc_0008AD15: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008AD18: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0008AD21u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008AD21: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AD3E; /* je: equal / zero */

loc_0008AD2C: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0008AD3Au); RECOMP_ABI_CALL(0x0008ACA0u, sub_0008ACA0); /* call 0x0008ACA0 */

loc_0008AD3A: ;
    esi = eax;
    goto loc_0008AD40;

loc_0008AD3E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008AD40: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x0008AD48u); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_0008AD48: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008AD50u); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_0008AD50: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AD58u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008AD58: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0008AD5A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008AD60
 * Original: 0x0008AD60 - 0x0008AD7F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AD60: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x30) = 1;
    edx = MEM32(eax + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0008AD7Cu); RECOMP_ABI_CALL(0x0015A860u, sub_0015A860); /* call 0x0015A860 */

loc_0008AD7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AD80
 * Original: 0x0008AD80 - 0x0008AD9F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AD80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AD80: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x30) = 1;
    edx = MEM32(eax + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0008AD9Cu); RECOMP_ABI_CALL(0x0015A860u, sub_0015A860); /* call 0x0015A860 */

loc_0008AD9C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008ADA0
 * Original: 0x0008ADA0 - 0x0008ADCC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ADA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM8(esi + 0x30) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008ADB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ADADu); } /* indirect call */
    }

loc_0008ADB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ADC8; /* je: equal / zero */

loc_0008ADB4: ;
    ecx = MEM32(eax + 0x34);
    edx = esp + 8;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0008ADC8u); RECOMP_ABI_CALL(0x0015A860u, sub_0015A860); /* call 0x0015A860 */

loc_0008ADC8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008ADD0
 * Original: 0x0008ADD0 - 0x0008ADFC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ADD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ADD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM8(esi + 0x30) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008ADE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ADDDu); } /* indirect call */
    }

loc_0008ADE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008ADF8; /* je: equal / zero */

loc_0008ADE4: ;
    ecx = MEM32(eax + 0x34);
    edx = esp + 8;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0008ADF8u); RECOMP_ABI_CALL(0x0015A860u, sub_0015A860); /* call 0x0015A860 */

loc_0008ADF8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AE00
 * Original: 0x0008AE00 - 0x0008AE2C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM8(esi + 0x30) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008AE10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AE0Du); } /* indirect call */
    }

loc_0008AE10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AE28; /* je: equal / zero */

loc_0008AE14: ;
    ecx = MEM32(eax + 0x34);
    edx = esp + 8;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0008AE28u); RECOMP_ABI_CALL(0x0015A860u, sub_0015A860); /* call 0x0015A860 */

loc_0008AE28: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AE30
 * Original: 0x0008AE30 - 0x0008AE5C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AE30: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0008AE3Bu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008AE3B: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AE4B; /* je: equal / zero */

loc_0008AE45: ;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;

loc_0008AE4B: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AE60
 * Original: 0x0008AE60 - 0x0008AE95 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AE60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    MEM8(ecx + 0x30) = 1;
    edi = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0008AE77u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008AE77: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AE83; /* je: equal / zero */

loc_0008AE81: ;
    MEM32(ecx) = edi;

loc_0008AE83: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AEA0
 * Original: 0x0008AEA0 - 0x0008AED5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AEA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    MEM8(ecx + 0x30) = 1;
    edi = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0008AEB7u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008AEB7: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AEC3; /* je: equal / zero */

loc_0008AEC1: ;
    MEM32(ecx) = edi;

loc_0008AEC3: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AEE0
 * Original: 0x0008AEE0 - 0x0008AF11 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AEE0: ;
    eax = MEM32(0x373310);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x373310;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008AEF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AEF0u); } /* indirect call */
    }

loc_0008AEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AF0E; /* je: equal / zero */

loc_0008AEF7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0008AEFFu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0008AEFF: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008AF0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AF07u); } /* indirect call */
    }

loc_0008AF0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AEF7; /* jne: not equal / not zero */

loc_0008AF0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008AF20
 * Original: 0x0008AF20 - 0x0008AF56 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AF20: ;
    SET_LO8(ecx, MEM8(0x3C37E0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008AF50; /* jne: not equal / not zero */

loc_0008AF2F: ;
    ecx = MEM32(0x3C37E0);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x30904C);
    MEM32(0x3C37E0) = ecx;
    PUSH32(esp, 0x0008AF47u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008AF47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C37DC) = eax;
    esp += 4; return; /* ret */

loc_0008AF50: ;
    eax = MEM32(0x3C37DC);
    esp += 4; return; /* ret */

}

/**
 * sub_0008AF60
 * Original: 0x0008AF60 - 0x0008AF8E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x34;
    PUSH32(esp, 0x0008AF6Bu); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_0008AF6B: ;
    ecx = esi;
    MEM32(esi) = 0x307EF0;
    PUSH32(esp, 0x0008AF78u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_0008AF78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AF88; /* je: equal / zero */

loc_0008AF7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AF85u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008AF85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008AF88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AF90
 * Original: 0x0008AF90 - 0x0008AF91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AF90(void)
{

loc_0008AF90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008AFA0
 * Original: 0x0008AFA0 - 0x0008AFA7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AFA0(void)
{

loc_0008AFA0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008AFB0
 * Original: 0x0008AFB0 - 0x0008AFB9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AFB0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0008AFC0
 * Original: 0x0008AFC0 - 0x0008B017 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AFC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0x2FF77C;
    ebx = esi + 0x10;
    ecx = ebx;
    MEM32(esi) = 0x309170;
    MEM32(edi) = 0x30916C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0008AFF2u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008AFF2: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0008AFFAu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008AFFA: ;
    PUSH32(esp, 0x309144);
    ecx = ebx;
    PUSH32(esp, 0x0008B006u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008B006: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008B00Cu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008B00C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B020
 * Original: 0x0008B020 - 0x0008B057 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008B020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x309170;
    MEM32(esi + 8) = 0x30916C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008B03Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008B03D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008B048u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008B048: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0008B060
 * Original: 0x0008B060 - 0x0008B06B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008B060: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0008B070
 * Original: 0x0008B070 - 0x0008B07A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B070: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B080
 * Original: 0x0008B080 - 0x0008B0CF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    eax = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B098u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008B098: ;
    edx = esp;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B0A1u); RECOMP_ABI_CALL(0x00130D50u, sub_00130D50); /* call 0x00130D50 */

loc_0008B0A1: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008B0AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B0A8u); } /* indirect call */
    }

loc_0008B0AE: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B0C9u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_0008B0C9: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0008B0D0
 * Original: 0x0008B0D0 - 0x0008B138 (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B0D0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B117; /* jne: not equal / not zero */

loc_0008B0D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x309188);
    PUSH32(esp, 0x0008B0EAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0008B0EA: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B109; /* je: equal / zero */

loc_0008B0F5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008B0FDu); RECOMP_ABI_CALL(0x0008AFC0u, sub_0008AFC0); /* call 0x0008AFC0 */

loc_0008B0FD: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B105u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008B105: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008B109: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B113u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008B113: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008B117: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B135; /* jne: not equal / not zero */

loc_0008B11C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008B129u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008B129: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B135; /* je: equal / zero */

loc_0008B12D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008B135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B133u); } /* indirect call */
    }

loc_0008B135: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B140
 * Original: 0x0008B140 - 0x0008B50F (975 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B140(void)
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

loc_0008B140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B15A; /* je: equal / zero */

loc_0008B155: ;
    esi = eax + -8;
    goto loc_0008B15C;

loc_0008B15A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008B15C: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xA00D19CCu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B16Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B16F: ;
    ecx = MEM32(esi + 0xC);
    edi = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6B433A31);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B184u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B184: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xF02EBEAFu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B19Bu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008B19B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B238; /* je: equal / zero */

loc_0008B1A3: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 4);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B1B3u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008B1B3: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B1BDu); RECOMP_ABI_CALL(0x00130D50u, sub_00130D50); /* call 0x00130D50 */

loc_0008B1BD: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B1F7u); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_0008B1F7: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x61C9AC6B);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B20Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B20E: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) / fp_top()); /* fdivr dword ptr [esp + 0x14] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B217u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0008B217: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0008B238: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x7F29E296);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B24Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B24B: ;
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x303CFC)); /* fmul dword ptr [0x303cfc] */
    ecx = MEM32(edx + 4);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B26Du); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008B26D: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B277u); RECOMP_ABI_CALL(0x00130D50u, sub_00130D50); /* call 0x00130D50 */

loc_0008B277: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008B284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B27Eu); } /* indirect call */
    }

loc_0008B284: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B29Cu); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_0008B29C: ;
    edx = MEM32(esi + 0xC);
    edi = MEM32(edx + 4);
    PUSH32(esp, 0x7F29E296);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B2AFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B2AF: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0xA48E3AB0u);
    ecx = edi + 8;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B2C8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B2C8: ;
    eax = MEM32(esi + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    eax = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, 0x7F29E296);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax + 8;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B2EFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B2EF: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF9B4); /* mulss */
    eax = MEM32(esp + 0x28);
    ecx = esp;
    MEM32(ecx) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x3E8CF8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B327u); RECOMP_ABI_CALL(0x0018CFD0u, sub_0018CFD0); /* call 0x0018CFD0 */

loc_0008B327: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xF41FB455u);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B33Au); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008B33A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B420; /* je: equal / zero */

loc_0008B342: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x7AE37DBE);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B355u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B355: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0008B37C; /* jbe: below or equal (unsigned <=) */

loc_0008B363: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x7AE37DBE);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B376u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B376: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0008B385;

loc_0008B37C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0008B385: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6AF416);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B398u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B398: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0008B3BF; /* jbe: below or equal (unsigned <=) */

loc_0008B3A6: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6AF416);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B3B9u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B3B9: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0008B3C8;

loc_0008B3BF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_0008B3C8: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x7F29E296);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B3DBu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B3DB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008B3FE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008B3E7: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x7F29E296);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B3FAu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B3FA: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */

loc_0008B3FE: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B41Du); RECOMP_ABI_CALL(0x000B17E0u, sub_000B17E0); /* call 0x000B17E0 */

loc_0008B41D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B420: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x886386DDu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B433u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B433: ;
    ecx = esp + 0x64;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B43Eu); RECOMP_ABI_CALL(0x00142340u, sub_00142340); /* call 0x00142340 */

loc_0008B43E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xC);
    eax = esp + 0x90;
    MEM8(esp + 0x30) = 0;
    MEM32(esp + 0x2C) = 0x302BAC;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B473u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008B473: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B484u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0008B484: ;
    eax = esp + 0x2C;
    ecx = esp + 0x64;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x84) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B49Cu); RECOMP_ABI_CALL(0x00142380u, sub_00142380); /* call 0x00142380 */

loc_0008B49C: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x116AD767);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B4AFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008B4AF: ;
    ecx = esp + 0x64;
    MEM32(esp + 0x84) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B4BFu); RECOMP_ABI_CALL(0x00142380u, sub_00142380); /* call 0x00142380 */

loc_0008B4BF: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B4D2u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008B4D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B509; /* je: equal / zero */

loc_0008B4D6: ;
    PUSH32(esp, 0x6672B460);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = 0x2FF7D4;
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B4F4u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008B4F4: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008B500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B4FDu); } /* indirect call */
    }

loc_0008B500: ;
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008B509u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008B509: ;
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
 * sub_0008B510
 * Original: 0x0008B510 - 0x0008B575 (101 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B510: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B51D; /* je: equal / zero */

loc_0008B518: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008B51F;

loc_0008B51D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008B51F: ;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008B532u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008B532: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B537; /* jne: not equal / not zero */

loc_0008B536: ;
    esp += 4; return; /* ret */

loc_0008B537: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008B543u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B540u); } /* indirect call */
    }

loc_0008B543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B571; /* je: equal / zero */

loc_0008B547: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008B54Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B54Bu); } /* indirect call */
    }

loc_0008B54E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008B555u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B552u); } /* indirect call */
    }

loc_0008B555: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B571; /* jle: less or equal (signed <=) */

loc_0008B559: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008B560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B55Du); } /* indirect call */
    }

loc_0008B560: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008B569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B566u); } /* indirect call */
    }

loc_0008B569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B571; /* je: equal / zero */

loc_0008B56D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008B571: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B580
 * Original: 0x0008B580 - 0x0008B5A9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008B580: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B58D; /* je: equal / zero */

loc_0008B588: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008B58F;

loc_0008B58D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008B58F: ;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008B5A2u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008B5A2: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B5B0
 * Original: 0x0008B5B0 - 0x0008B656 (166 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B5B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008B5C1; /* je: equal / zero */

loc_0008B5BC: ;
    esi = eax + -8;
    goto loc_0008B5C3;

loc_0008B5C1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008B5C3: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 4) = 0x30212C;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008B5FEu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008B5FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B646; /* je: equal / zero */

loc_0008B602: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0xAC016BC1u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008B61Au); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008B61A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xAC016BC1u);
    PUSH32(esp, 0x0008B628u); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_0008B628: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B62Eu); RECOMP_ABI_CALL(0x00035420u, sub_00035420); /* call 0x00035420 */

loc_0008B62E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    ecx = esp + 4;
    if (CMP_NE(_fa, _fb)) goto loc_0008B64A; /* jne: not equal / not zero */

loc_0008B63A: ;
    PUSH32(esp, 0x0008B63Fu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008B63F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008B646: ;
    ecx = esp + 4;

loc_0008B64A: ;
    PUSH32(esp, 0x0008B64Fu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008B64F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B660
 * Original: 0x0008B660 - 0x0008B668 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008B660: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008B670(); return; /* tail jmp 0x0008B670 */

}

/**
 * sub_0008B670
 * Original: 0x0008B670 - 0x0008B6BC (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x309170;
    MEM32(esi + 8) = 0x30916C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008B68Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008B68D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008B698u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008B698: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x0008B6A6u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008B6A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008B6B6; /* je: equal / zero */

loc_0008B6AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008B6B3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008B6B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008B6B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B6C0
 * Original: 0x0008B6C0 - 0x0008B6C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B6C0(void)
{

loc_0008B6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008B6D0
 * Original: 0x0008B6D0 - 0x0008B708 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008B6D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    ecx = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 0x20) = 0;
    MEM8(esi + 0x24) = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008B6F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B6EFu); } /* indirect call */
    }

loc_0008B6F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF40CCD04u);
    PUSH32(esp, 0x0008B6FDu); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008B6FD: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_0008B710
 * Original: 0x0008B710 - 0x0008B759 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    MEM8(esi + 0x24) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x0008B725u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B71Fu); } /* indirect call */
    }

loc_0008B725: ;
    edx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    edi = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008B739u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B736u); } /* indirect call */
    }

loc_0008B739: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80F874CDu);
    PUSH32(esp, 0x0008B744u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008B744: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    PUSH32(esp, 0x0008B756u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008B756: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B760
 * Original: 0x0008B760 - 0x0008B79A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B760: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    esi = edi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008B77Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B777u); } /* indirect call */
    }

loc_0008B77A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80F874CDu);
    PUSH32(esp, 0x0008B785u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008B785: ;
    ecx = MEM32(edi + 0x40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2A);
    PUSH32(esp, ecx);
    ecx = edi + 0x28;
    PUSH32(esp, 0x0008B797u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008B797: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B7A0
 * Original: 0x0008B7A0 - 0x0008B7B1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B7A0: ;
    eax = MEM32(ecx + 0x44);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x48) = edx;
    MEM32(ecx + 0x44) = MEM32(ecx + 0x44) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B7C0
 * Original: 0x0008B7C0 - 0x0008B81D (93 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B7C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008B819; /* jle: less or equal (signed <=) */

loc_0008B7CA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = ecx + 0x48;
    PUSH32(esp, ebx);

loc_0008B7D3: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B7E8; /* je: equal / zero */

loc_0008B7D7: ;
    ebx = MEM32(ecx + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B7D3; /* jl: less (signed <) */

loc_0008B7E2: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008B7E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B817; /* je: equal / zero */

loc_0008B7ED: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0008B809; /* jge: greater or equal (signed >=) */

loc_0008B7F4: ;
    eax = ecx + eax * 4 + 0x48;

loc_0008B7F8: ;
    esi = MEM32(eax + 4);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 0x44);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008B7F8; /* jl: less (signed <) */

loc_0008B809: ;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + eax * 4 + 0x44) = 0;
    MEM32(ecx + 0x44) = MEM32(ecx + 0x44) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008B817: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_0008B819: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B820
 * Original: 0x0008B820 - 0x0008B84D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B820: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B847; /* je: equal / zero */

loc_0008B82B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B834u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008B834: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B847; /* je: equal / zero */

loc_0008B83B: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0008B843u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B840u); } /* indirect call */
    }

loc_0008B843: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008B847: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008B850
 * Original: 0x0008B850 - 0x0008B882 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008B850: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B875; /* je: equal / zero */

loc_0008B85B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B864u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008B864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B875; /* je: equal / zero */

loc_0008B86B: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0008B873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B870u); } /* indirect call */
    }

loc_0008B873: ;
    esi = eax;

loc_0008B875: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(ecx + 0x20) = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0008B890
 * Original: 0x0008B890 - 0x0008B8C1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B890: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B8B5; /* je: equal / zero */

loc_0008B89B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B8A4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008B8A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B8B5; /* je: equal / zero */

loc_0008B8AB: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0008B8B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B8B0u); } /* indirect call */
    }

loc_0008B8B3: ;
    esi = eax;

loc_0008B8B5: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008B8BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B8BCu); } /* indirect call */
    }

loc_0008B8BF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B8D0
 * Original: 0x0008B8D0 - 0x0008B901 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B8D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B8F5; /* je: equal / zero */

loc_0008B8DB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B8E4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008B8E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B8F5; /* je: equal / zero */

loc_0008B8EB: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0008B8F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B8F0u); } /* indirect call */
    }

loc_0008B8F3: ;
    esi = eax;

loc_0008B8F5: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008B8FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B8FCu); } /* indirect call */
    }

loc_0008B8FF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008B910
 * Original: 0x0008B910 - 0x0008B947 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008B910: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B944; /* je: equal / zero */

loc_0008B918: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008B921u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008B921: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B944; /* je: equal / zero */

loc_0008B928: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0008B930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B92Du); } /* indirect call */
    }

loc_0008B930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008B944; /* je: equal / zero */

loc_0008B934: ;
    SET_LO8(ecx, MEM8(eax + 0x1574));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008B944; /* jne: not equal / not zero */

loc_0008B93E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0008B944: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008B950
 * Original: 0x0008B950 - 0x0008B9F6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008B950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_0008B950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = ebp;
    ebx = esi + 0xC;
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008B97Au); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008B97A: ;
    ecx = esi + 0x28;
    MEM32(esi) = 0x309390;
    MEM32(edi) = 0x309378;
    MEM32(esi + 0x20) = ebp;
    MEM8(esi + 0x24) = 1;
    PUSH32(esp, 0x0008B995u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0008B995: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x44) = ebp;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = ebp;
    MEM32(esi + 0x50) = ebp;
    MEM32(esi + 0x54) = ebp;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008B9B3u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008B9B3: ;
    PUSH32(esp, 0x309330);
    ecx = ebx;
    PUSH32(esp, 0x0008B9BFu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008B9BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008B9C5u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008B9C5: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008B9CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008B9CCu); } /* indirect call */
    }

loc_0008B9CF: ;
    ecx = MEM32(0x3727C4);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0xAB11F11Eu);
    ecx = eax + 8;
    PUSH32(esp, 0x0008B9E6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008B9E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    POP32(esp, edi);
    eax = esi;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008BA00
 * Original: 0x0008BA00 - 0x0008BA48 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BA00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x28;
    MEM32(esi) = 0x309390;
    MEM32(edi) = 0x309378;
    PUSH32(esp, 0x0008BA1Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008BA1B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008BA2Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008BA2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008BA38u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008BA38: ;
    ecx = edi;
    PUSH32(esp, 0x0008BA3Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008BA3F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BA50
 * Original: 0x0008BA50 - 0x0008BA92 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BA50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0008BA74u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008BA74: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008BA82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BA7Fu); } /* indirect call */
    }

loc_0008BA82: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0008BA8Bu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008BA8B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BAA0
 * Original: 0x0008BAA0 - 0x0008BB20 (128 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BAA0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BAFF; /* jne: not equal / not zero */

loc_0008BAA8: ;
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x0008BAB3u); RECOMP_ABI_CALL(0x00079E60u, sub_00079E60); /* call 0x00079E60 */

loc_0008BAB3: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BAC1u); RECOMP_ABI_CALL(0x00084360u, sub_00084360); /* call 0x00084360 */

loc_0008BAC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BAFB; /* je: equal / zero */

loc_0008BAC8: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x0008BACFu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008BACF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BAF1; /* je: equal / zero */

loc_0008BAD6: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008BADEu); RECOMP_ABI_CALL(0x0008B950u, sub_0008B950); /* call 0x0008B950 */

loc_0008BADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BAF1; /* je: equal / zero */

loc_0008BAE2: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BAEDu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008BAED: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008BAF1: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BAFBu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008BAFB: ;
    POP32(esp, esi);

loc_0008BAFC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008BAFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BAFC; /* jne: not equal / not zero */

loc_0008BB04: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008BB11u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008BB11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BAFC; /* je: equal / zero */

loc_0008BB15: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008BB1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BB1Bu); } /* indirect call */
    }

loc_0008BB1D: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BB20
 * Original: 0x0008BB20 - 0x0008BB74 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BB20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BB64; /* je: equal / zero */

loc_0008BB2D: ;
    PUSH32(esp, 0x28);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0008BB48u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008BB48: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008BB56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BB53u); } /* indirect call */
    }

loc_0008BB56: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0008BB5Fu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008BB5F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008BB64: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0008BB6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BB6Cu); } /* indirect call */
    }

loc_0008BB6F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BB80
 * Original: 0x0008BB80 - 0x0008BBD0 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BB80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008BBCB; /* jle: less or equal (signed <=) */

loc_0008BB8D: ;
    eax = MEM32(esi + 0x48);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008BB99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BB96u); } /* indirect call */
    }

loc_0008BB99: ;
    PUSH32(esp, 0x28);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0008BBB4u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008BBB4: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008BBC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BBBFu); } /* indirect call */
    }

loc_0008BBC2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0008BBCBu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008BBCB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BBD0
 * Original: 0x0008BBD0 - 0x0008BBE0 (16 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BBD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008BBE0(); return; /* tail jmp 0x0008BBE0 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0008BBE0
 * Original: 0x0008BBE0 - 0x0008BC3C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x28;
    MEM32(esi) = 0x309390;
    MEM32(edi) = 0x309378;
    PUSH32(esp, 0x0008BBFBu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008BBFB: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008BC0Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008BC0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008BC18u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008BC18: ;
    ecx = edi;
    PUSH32(esp, 0x0008BC1Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008BC1F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_0008BC35; /* je: equal / zero */

loc_0008BC2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BC32u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008BC32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008BC35: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BC40
 * Original: 0x0008BC40 - 0x0008BC41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC40(void)
{

loc_0008BC40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC50
 * Original: 0x0008BC50 - 0x0008BC51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC50(void)
{

loc_0008BC50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC60
 * Original: 0x0008BC60 - 0x0008BC61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC60(void)
{

loc_0008BC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC70
 * Original: 0x0008BC70 - 0x0008BC71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC70(void)
{

loc_0008BC70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC80
 * Original: 0x0008BC80 - 0x0008BC87 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC80(void)
{

loc_0008BC80: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BC90
 * Original: 0x0008BC90 - 0x0008BC99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BC90: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0008BCA0
 * Original: 0x0008BCA0 - 0x0008BCF7 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BCA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0x2FF77C;
    ebx = esi + 0x10;
    ecx = ebx;
    MEM32(esi) = 0x309470;
    MEM32(edi) = 0x30946C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0008BCD2u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008BCD2: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0008BCDAu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008BCDA: ;
    PUSH32(esp, 0x309454);
    ecx = ebx;
    PUSH32(esp, 0x0008BCE6u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008BCE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BCECu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008BCEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BD00
 * Original: 0x0008BD00 - 0x0008BD37 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x309470;
    MEM32(esi + 8) = 0x30946C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008BD1Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008BD1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008BD28u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008BD28: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0008BD40
 * Original: 0x0008BD40 - 0x0008BD4B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BD40: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0008BD50
 * Original: 0x0008BD50 - 0x0008BD5A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BD50: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008BD60
 * Original: 0x0008BD60 - 0x0008BDBE (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BD60: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BD9D; /* jne: not equal / not zero */

loc_0008BD68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0008BD70u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008BD70: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BD8F; /* je: equal / zero */

loc_0008BD7B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008BD83u); RECOMP_ABI_CALL(0x0008BCA0u, sub_0008BCA0); /* call 0x0008BCA0 */

loc_0008BD83: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BD8Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008BD8B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008BD8F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008BD99u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008BD99: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008BD9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BDBB; /* jne: not equal / not zero */

loc_0008BDA2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008BDAFu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008BDAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BDBB; /* je: equal / zero */

loc_0008BDB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008BDBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BDB9u); } /* indirect call */
    }

loc_0008BDBB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008BDC0
 * Original: 0x0008BDC0 - 0x0008BDC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BDC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008BDD0(); return; /* tail jmp 0x0008BDD0 */

}

/**
 * sub_0008BDD0
 * Original: 0x0008BDD0 - 0x0008BE1C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BDD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x309470;
    MEM32(esi + 8) = 0x30946C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008BDEDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008BDED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008BDF8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008BDF8: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x0008BE06u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008BE06: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008BE16; /* je: equal / zero */

loc_0008BE0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008BE13u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008BE13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008BE16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BE20
 * Original: 0x0008BE20 - 0x0008BE21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE20(void)
{

loc_0008BE20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BE30
 * Original: 0x0008BE30 - 0x0008BE31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE30(void)
{

loc_0008BE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008BE40
 * Original: 0x0008BE40 - 0x0008BE80 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BE40: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0008BE4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BE47u); } /* indirect call */
    }

loc_0008BE4D: ;
    PUSH32(esp, 0xF3214142u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008BE5Du); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008BE5D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BE7C; /* je: equal / zero */

loc_0008BE63: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BE71; /* je: equal / zero */

loc_0008BE6A: ;
    ecx = esi;
    PUSH32(esp, 0x0008BE71u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0008BE71: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0008BE7Cu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0008BE7C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BF00
 * Original: 0x0008BF00 - 0x0008BF39 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008BF00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0008BF0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BF06u); } /* indirect call */
    }

loc_0008BF0C: ;
    PUSH32(esp, 0xB28CA9C9u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008BF1Cu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008BF1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BF36; /* je: equal / zero */

loc_0008BF20: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BF36; /* jne: not equal / not zero */

loc_0008BF27: ;
    MEM32(esp + 4) = 0x43160000;
    ecx = eax;
    g_seh_ebp = ebp; sub_0015A910(); return; /* tail jmp 0x0015A910 */

loc_0008BF36: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008BF40
 * Original: 0x0008BF40 - 0x0008C05C (284 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008BF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008BF40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x100);
    ebx = ecx + 0xFC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C059; /* je: equal / zero */

loc_0008BF5B: ;
    PUSH32(esp, esi);
    /* nop */

loc_0008BF60: ;
    eax = MEM32(edi + 8);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008BFA5; /* je: equal / zero */

loc_0008BF6C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0008BF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BF6Eu); } /* indirect call */
    }

loc_0008BF74: ;
    PUSH32(esp, 0xF3214142u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008BF84u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008BF84: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BFD4; /* je: equal / zero */

loc_0008BF8A: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BF98; /* je: equal / zero */

loc_0008BF91: ;
    ecx = esi;
    PUSH32(esp, 0x0008BF98u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0008BF98: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0008BFA3u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0008BFA3: ;
    goto loc_0008BFD4;

loc_0008BFA5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0008BFADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BFA7u); } /* indirect call */
    }

loc_0008BFAD: ;
    PUSH32(esp, 0xF3214142u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008BFBDu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008BFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008BFD4; /* je: equal / zero */

loc_0008BFC1: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BFD4; /* jne: not equal / not zero */

loc_0008BFC8: ;
    PUSH32(esp, 0x43160000);
    ecx = eax;
    PUSH32(esp, 0x0008BFD4u); RECOMP_ABI_CALL(0x0015A910u, sub_0015A910); /* call 0x0015A910 */

loc_0008BFD4: ;
    eax = MEM32(edi + 8);
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008C019; /* je: equal / zero */

loc_0008BFE0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0008BFE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008BFE2u); } /* indirect call */
    }

loc_0008BFE8: ;
    PUSH32(esp, 0xB28CA9C9u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008BFF8u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008BFF8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C048; /* je: equal / zero */

loc_0008BFFE: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C00C; /* je: equal / zero */

loc_0008C005: ;
    ecx = esi;
    PUSH32(esp, 0x0008C00Cu); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0008C00C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0008C017u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0008C017: ;
    goto loc_0008C048;

loc_0008C019: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0008C021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C01Bu); } /* indirect call */
    }

loc_0008C021: ;
    PUSH32(esp, 0xB28CA9C9u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008C031u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008C031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C048; /* je: equal / zero */

loc_0008C035: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C048; /* jne: not equal / not zero */

loc_0008C03C: ;
    PUSH32(esp, 0x43160000);
    ecx = eax;
    PUSH32(esp, 0x0008C048u); RECOMP_ABI_CALL(0x0015A910u, sub_0015A910); /* call 0x0015A910 */

loc_0008C048: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008BF60; /* jne: not equal / not zero */

loc_0008C058: ;
    POP32(esp, esi);

loc_0008C059: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C060
 * Original: 0x0008C060 - 0x0008C136 (214 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C060(void)
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

loc_0008C060: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x100);
    ebx = ebp + 0xFC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0008C12F; /* je: equal / zero */

loc_0008C089: ;
    PUSH32(esp, edi);
    /* nop */

loc_0008C090: ;
    eax = MEM32(esi + 8);
    edi = MEM32(eax);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008C09Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C099u); } /* indirect call */
    }

loc_0008C09C: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0008C0A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C0A4u); } /* indirect call */
    }

loc_0008C0A7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0008C0CE; /* jbe: below or equal (unsigned <=) */

loc_0008C0B3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008C0BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C0B7u); } /* indirect call */
    }

loc_0008C0BA: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008C0CE; /* jnp: not parity */

loc_0008C0CA: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008C0CE: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C090; /* jne: not equal / not zero */

loc_0008C0DA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008C12E; /* jle: less or equal (signed <=) */

loc_0008C0E2: ;
    eax = MEM32(ebp + 0xEC);
    edi = MEM32(ebp + 0x100);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008C12E; /* jle: less or equal (signed <=) */

loc_0008C0F4: ;
    esi = MEM32(edi + 8);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    edi = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0008C101u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C0FEu); } /* indirect call */
    }

loc_0008C101: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0008C123; /* jnp: not parity */

loc_0008C111: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0008C11Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C11Cu); } /* indirect call */
    }

loc_0008C11F: ;
    MEM8(esi + 4) = 1;

loc_0008C123: ;
    eax = MEM32(ebp + 0xEC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C0F4; /* jl: less (signed <) */

loc_0008C12E: ;
    POP32(esp, edi);

loc_0008C12F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0008C140
 * Original: 0x0008C140 - 0x0008C2E3 (419 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C140(void)
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

loc_0008C140: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x100);
    ebx = ebp + 0xFC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0008C1A4; /* je: equal / zero */

loc_0008C162: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0008C16Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C169u); } /* indirect call */
    }

loc_0008C16C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C183; /* je: equal / zero */

loc_0008C170: ;
    SET_LO16(edi, MEM16(eax + 0x1CC));
    ecx = eax;
    PUSH32(esp, 0x0008C17Eu); RECOMP_ABI_CALL(0x00187D90u, sub_00187D90); /* call 0x00187D90 */

loc_0008C17E: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C198; /* jl: less (signed <) */

loc_0008C183: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0008C18Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C18Au); } /* indirect call */
    }

loc_0008C18D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C198; /* je: equal / zero */

loc_0008C191: ;
    ecx = eax;
    PUSH32(esp, 0x0008C198u); RECOMP_ABI_CALL(0x00187D90u, sub_00187D90); /* call 0x00187D90 */

loc_0008C198: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C162; /* jne: not equal / not zero */

loc_0008C1A4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xE4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xD8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE9A0); /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C2D9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0008C1D7: ;
    ecx = MEM32(ebp + 0xEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 0x100);
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0008C2CF; /* jle: less or equal (signed <=) */

loc_0008C1F3: ;
    goto loc_0008C200;

loc_0008C1F5: ;
    eax = MEM32(esp + 0x20);
    /* nop */

loc_0008C200: ;
    ecx = MEM32(eax + 8);
    edi = MEM32(ecx);
    edx = MEM32(eax + 4);
    eax = MEM32(edi);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0008C217u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C214u); } /* indirect call */
    }

loc_0008C217: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C237; /* je: equal / zero */

loc_0008C21B: ;
    SET_LO16(esi, MEM16(eax + 0x1CC));
    ecx = eax;
    PUSH32(esp, 0x0008C229u); RECOMP_ABI_CALL(0x00187D90u, sub_00187D90); /* call 0x00187D90 */

loc_0008C229: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(eax) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008C237; /* jge: greater or equal (signed >=) */

loc_0008C22E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0008C235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C232u); } /* indirect call */
    }

loc_0008C235: ;
    goto loc_0008C23E;

loc_0008C237: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0008C23Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C23Bu); } /* indirect call */
    }

loc_0008C23E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C2B8; /* je: equal / zero */

loc_0008C244: ;
    SET_LO16(ebx, MEM16(esi + 0x1CC));
    ecx = esi;
    PUSH32(esp, 0x0008C252u); RECOMP_ABI_CALL(0x00187D90u, sub_00187D90); /* call 0x00187D90 */

loc_0008C252: ;
    edx = MEM32(edi);
    ebp = SX16(LO16(eax));
    ecx = SX16(LO16(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0008C261u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C25Eu); } /* indirect call */
    }

loc_0008C261: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0008C2B4; /* jle: less or equal (signed <=) */

loc_0008C26E: ;
    ecx = MEM32(esi + 0x1C0);
    SET_LO16(eax, MEM16(ecx + 4));
    edx = SX16(LO16(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008C296; /* jge: greater or equal (signed >=) */

loc_0008C27F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0008C28Cu); RECOMP_ABI_CALL(0x00187E30u, sub_00187E30); /* call 0x00187E30 */

loc_0008C28C: ;
    ecx = MEM32(esp + 0x18);
    MEM8(ecx + 5) = 1;
    goto loc_0008C2B4;

loc_0008C296: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x24), g_mxcsr, 1); /* cvttss2si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008C2ACu); RECOMP_ABI_CALL(0x00187E30u, sub_00187E30); /* call 0x00187E30 */

loc_0008C2AC: ;
    edx = MEM32(esp + 0x18);
    MEM8(edx + 5) = 1;

loc_0008C2B4: ;
    ebp = MEM32(esp + 0x10);

loc_0008C2B8: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0xEC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008C1F5; /* jl: less (signed <) */

loc_0008C2CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008C2D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008C2E2
 * Original: 0x0008C2E2 - 0x0008C2E3 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2E2(void)
{

loc_0008C2E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C2F0
 * Original: 0x0008C2F0 - 0x0008C42B (315 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2F0(void)
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

loc_0008C2F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = MEM32(ebp + 0x100);
    PUSH32(esp, edi);
    edi = ebp + 0xFC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0008C332; /* je: equal / zero */

loc_0008C311: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0008C31Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C318u); } /* indirect call */
    }

loc_0008C31B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C326; /* je: equal / zero */

loc_0008C31F: ;
    ecx = eax;
    PUSH32(esp, 0x0008C326u); RECOMP_ABI_CALL(0x00187D60u, sub_00187D60); /* call 0x00187D60 */

loc_0008C326: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C311; /* jne: not equal / not zero */

loc_0008C332: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xE8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xDC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE9A0); /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008C422; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0008C365: ;
    eax = MEM32(ebp + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x100);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0008C418; /* jle: less or equal (signed <=) */

loc_0008C382: ;
    ebp = MEM32(ebx + 8);
    edi = MEM32(ebp);
    edx = MEM32(edi);
    ebx = MEM32(ebx + 4);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0008C392u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C38Fu); } /* indirect call */
    }

loc_0008C392: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C3FD; /* je: equal / zero */

loc_0008C398: ;
    SET_LO16(ecx, MEM16(esi + 0x1CE));
    SET_LO16(eax, MEM16(esi + 0x1CC));
    MEM16(esp + 0x14) = LO16(ecx);
    ecx = esi;
    MEM16(esp + 0x18) = LO16(eax);
    PUSH32(esp, 0x0008C3B7u); RECOMP_ABI_CALL(0x00187D60u, sub_00187D60); /* call 0x00187D60 */

loc_0008C3B7: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    edx = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008C3FD; /* je: equal / zero */

loc_0008C3CA: ;
    edx = MEM32(esi + 0x1C0);
    SET_LO16(eax, MEM16(edx + 4));
    edx = MEM32(edi);
    ecx = edi;
    MEM16(esp + 0x18) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0008C3E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C3DDu); } /* indirect call */
    }

loc_0008C3E0: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x1C), g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008C3F9u); RECOMP_ABI_CALL(0x00187E30u, sub_00187E30); /* call 0x00187E30 */

loc_0008C3F9: ;
    MEM8(ebp + 5) = 1;

loc_0008C3FD: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edx + 0xEC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008C382; /* jl: less (signed <) */

loc_0008C418: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008C422: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008C430
 * Original: 0x0008C430 - 0x0008C537 (263 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0008C458; /* je: equal / zero */

loc_0008C442: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0008C44Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C446u); } /* indirect call */
    }

loc_0008C44C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C532; /* jne: not equal / not zero */

loc_0008C458: ;
    eax = MEM32(esi + 0x100);
    edx = esi + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C4BB; /* je: equal / zero */

loc_0008C46D: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_0008C470: ;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C485; /* je: equal / zero */

loc_0008C477: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C470; /* jne: not equal / not zero */

loc_0008C483: ;
    goto loc_0008C4BA;

loc_0008C485: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    MEM32(edx) = ecx;
    MEM32(eax) = 0;
    ecx = MEM32(esi + 0xF8);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0xEC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xEC) = edx;
    PUSH32(esp, 0x0008C4B7u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008C4B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C4BA: ;
    POP32(esp, ebx);

loc_0008C4BB: ;
    edx = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0008C4C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C4C1u); } /* indirect call */
    }

loc_0008C4C4: ;
    ecx = eax;
    PUSH32(esp, 0x0008C4CBu); RECOMP_ABI_CALL(0x00121420u, sub_00121420); /* call 0x00121420 */

loc_0008C4CB: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0008C4D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C4CFu); } /* indirect call */
    }

loc_0008C4D5: ;
    PUSH32(esp, 0xB28CA9C9u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008C4E5u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008C4E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C4FC; /* je: equal / zero */

loc_0008C4E9: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C4FC; /* jne: not equal / not zero */

loc_0008C4F0: ;
    PUSH32(esp, 0x43160000);
    ecx = eax;
    PUSH32(esp, 0x0008C4FCu); RECOMP_ABI_CALL(0x0015A910u, sub_0015A910); /* call 0x0015A910 */

loc_0008C4FC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0008C506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C500u); } /* indirect call */
    }

loc_0008C506: ;
    PUSH32(esp, 0xF3214142u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x0008C516u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0008C516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C532; /* je: equal / zero */

loc_0008C51A: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C532; /* jne: not equal / not zero */

loc_0008C521: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0x43160000;
    ecx = eax;
    g_seh_ebp = ebp; sub_0015A910(); return; /* tail jmp 0x0015A910 */

loc_0008C532: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C540
 * Original: 0x0008C540 - 0x0008C5C0 (128 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C540: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x100);
    if (CMP_LE(_fas, _fbs)) goto loc_0008C5BC; /* jle: less or equal (signed <=) */

loc_0008C555: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebp);
    goto loc_0008C560;

    /* nop */

loc_0008C560: ;
    ebp = MEM32(edi + 8);
    ecx = MEM32(ebp);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008C56Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C568u); } /* indirect call */
    }

loc_0008C56B: ;
    SET_LO8(ecx, MEM8(eax + 0x3B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C5B1; /* je: equal / zero */

loc_0008C575: ;
    eax = edi;
    edx = MEM32(eax);
    ecx = edi + 4;
    edi = MEM32(ecx);
    ebx = edi;
    MEM32(edx + 4) = ebx;
    MEM32(ebx) = edx;
    MEM32(eax) = 0;
    edx = MEM32(esi + 0xF8);
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0xEC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xEC) = edx;
    PUSH32(esp, 0x0008C5ACu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008C5AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008C5B4;

loc_0008C5B1: ;
    edi = MEM32(edi + 4);

loc_0008C5B4: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008C560; /* jne: not equal / not zero */

loc_0008C5BA: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008C5BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C5C0
 * Original: 0x0008C5C0 - 0x0008C5F0 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C5C0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008C5C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C5C6u); } /* indirect call */
    }

loc_0008C5C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C5E7; /* je: equal / zero */

loc_0008C5CD: ;
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C5D6u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008C5D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C5E7; /* je: equal / zero */

loc_0008C5DD: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C5E7u); RECOMP_ABI_CALL(0x0008C430u, sub_0008C430); /* call 0x0008C430 */

loc_0008C5E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008C5F0
 * Original: 0x0008C5F0 - 0x0008C783 (403 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C5F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 4;
    MEM32(ebp) = 0x2FF764;
    MEM32(ebp + 4) = 0;
    ebx = esi + 0xC;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(ebp) = 0x30803C;
    PUSH32(esp, 0x0008C61Eu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008C61E: ;
    edi = esi + 0x20;
    ecx = edi;
    PUSH32(esp, 0x0008C628u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0008C628: ;
    MEM32(edi) = 0x309550;
    MEM32(esi) = 0x309540;
    MEM32(ebp) = 0x309528;
    MEM32(esi + 0x28) = 0x309520;
    edi = esi + 0xEC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    eax = edi + 0x10;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM8(edi + 0x1C) = 1;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008C673u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008C673: ;
    PUSH32(esp, 0x309508);
    ecx = ebx;
    PUSH32(esp, 0x0008C67Fu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008C67F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008C685u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008C685: ;
    eax = esi + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C690u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0008C690: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x0008C69Cu); RECOMP_ABI_CALL(0x000F0570u, sub_000F0570); /* call 0x000F0570 */

loc_0008C69C: ;
    ebx = MEM32(esp + 0x14);
    edi = MEM32(ebx + 4);
    PUSH32(esp, 0x64D20921);
    ecx = edi;
    PUSH32(esp, 0x0008C6AFu); RECOMP_ABI_CALL(0x0003A890u, sub_0003A890); /* call 0x0003A890 */

loc_0008C6AF: ;
    MEM32(esi + 0xD0) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7A20C702);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C6D2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008C6D2: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    PUSH32(esp, 0x8F9E9E0Bu);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C6FEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008C6FE: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    PUSH32(esp, 0x8F9E9E0Bu);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C72Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008C72A: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x21AA0F3);
    ecx = edi;
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008C75Bu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008C75B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C77A; /* je: equal / zero */

loc_0008C760: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C766u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008C766: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9ED0B804u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C777u); RECOMP_ABI_CALL(0x00038AB0u, sub_00038AB0); /* call 0x00038AB0 */

loc_0008C777: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C77A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C790
 * Original: 0x0008C790 - 0x0008C881 (241 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x100);
    ebp = esi + 0xFC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = esi + 4;
    MEM32(esi) = 0x309540;
    MEM32(ebx) = 0x309528;
    MEM32(esi + 0x20) = 0x309550;
    MEM32(esi + 0x28) = 0x309520;
    if (CMP_EQ(_fa, _fb)) goto loc_0008C7E8; /* je: equal / zero */

loc_0008C7C8: ;
    goto loc_0008C7D0;

    /* nop */

loc_0008C7D0: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C7D9u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008C7D9: ;
    edi = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C7D0; /* jne: not equal / not zero */

loc_0008C7E8: ;
    eax = MEM32(esi + 0x100);
    edx = esi + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C81E; /* je: equal / zero */

loc_0008C7F8: ;
    goto loc_0008C800;

    /* nop */

loc_0008C800: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax) = 0;
    edi = MEM32(esi + 0xF8);
    MEM32(eax + 4) = edi;
    MEM32(esi + 0xF8) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0008C800; /* jne: not equal / not zero */

loc_0008C81E: ;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    SET_LO8(eax, MEM8(esi + 0x108));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0xEC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0008C844; /* je: equal / zero */

loc_0008C835: ;
    ecx = MEM32(esi + 0xF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008C841u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0008C841: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C844: ;
    ecx = esi + 0x20;
    MEM32(esi + 0xF4) = edi;
    PUSH32(esp, 0x0008C852u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_0008C852: ;
    PUSH32(esp, ebx);
    MEM32(esi) = 0x3097B4;
    MEM32(ebx) = 0x30803C;
    PUSH32(esp, 0x0008C864u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008C864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008C86Fu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008C86F: ;
    ecx = ebx;
    PUSH32(esp, 0x0008C876u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008C876: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C890
 * Original: 0x0008C890 - 0x0008C9BA (298 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C890(void)
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

loc_0008C890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0008C8BC; /* je: equal / zero */

loc_0008C8A6: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0008C8B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C8AAu); } /* indirect call */
    }

loc_0008C8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C9B3; /* jne: not equal / not zero */

loc_0008C8BC: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0008C8C3u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008C8C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C8D6; /* je: equal / zero */

loc_0008C8CA: ;
    MEM32(eax) = edi;
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    ebp = eax;
    goto loc_0008C8D8;

loc_0008C8D6: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008C8D8: ;
    eax = MEM32(esi + 0xF8);
    edx = MEM32(esi + 0xFC);
    ebx = MEM32(eax + 4);
    MEM32(esi + 0xF8) = ebx;
    ecx = esi + 0xFC;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ebp;
    MEM32(esi + 0xEC) = MEM32(esi + 0xEC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 4) = eax;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(0x389414);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C92C; /* jne: not equal / not zero */

loc_0008C920: ;
    ecx = MEM32(0x3C3B64);
    eax = MEM32(ecx + 0xE4);

loc_0008C92C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C940; /* je: equal / zero */

loc_0008C930: ;
    edx = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0008C939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C936u); } /* indirect call */
    }

loc_0008C939: ;
    ecx = eax;
    PUSH32(esp, 0x0008C940u); RECOMP_ABI_CALL(0x00122190u, sub_00122190); /* call 0x00122190 */

loc_0008C940: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0008C947u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C944u); } /* indirect call */
    }

loc_0008C947: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008C952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C94Fu); } /* indirect call */
    }

loc_0008C952: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0008C9A6; /* ja: above (unsigned >) */

loc_0008C95E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0008C965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C962u); } /* indirect call */
    }

loc_0008C965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C97C; /* je: equal / zero */

loc_0008C969: ;
    SET_LO16(ebx, MEM16(eax + 0x1CC));
    ecx = eax;
    PUSH32(esp, 0x0008C977u); RECOMP_ABI_CALL(0x00187D90u, sub_00187D90); /* call 0x00187D90 */

loc_0008C977: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C9A6; /* jl: less (signed <) */

loc_0008C97C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0008C983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008C980u); } /* indirect call */
    }

loc_0008C983: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C99A; /* je: equal / zero */

loc_0008C987: ;
    SET_LO16(ebx, MEM16(eax + 0x1CC));
    ecx = eax;
    PUSH32(esp, 0x0008C995u); RECOMP_ABI_CALL(0x00187D90u, sub_00187D90); /* call 0x00187D90 */

loc_0008C995: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C9A6; /* jl: less (signed <) */

loc_0008C99A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008C9A2u); RECOMP_ABI_CALL(0x0008CC10u, sub_0008CC10); /* call 0x0008CC10 */

loc_0008C9A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C9B3; /* je: equal / zero */

loc_0008C9A6: ;
    PUSH32(esp, 0x767AB862);
    PUSH32(esp, 0x0008C9B0u); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_0008C9B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008C9B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008C9C0
 * Original: 0x0008C9C0 - 0x0008CA6D (173 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C9C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x100);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0008CA67; /* jle: less or equal (signed <=) */

loc_0008C9D9: ;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0008C9E0: ;
    ebx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C9F6; /* jne: not equal / not zero */

loc_0008C9EA: ;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008C9F6; /* jne: not equal / not zero */

loc_0008C9F1: ;
    esi = MEM32(esi + 4);
    goto loc_0008CA5D;

loc_0008C9F6: ;
    eax = esi;
    edi = MEM32(eax);
    edx = esi + 4;
    esi = MEM32(edx);
    ebp = esi;
    MEM32(edi + 4) = ebp;
    MEM32(ebp) = edi;
    MEM32(eax) = 0;
    edi = MEM32(ecx + 0xF8);
    MEM32(edx) = edi;
    ebp = MEM32(ecx + 0xEC);
    MEM32(ecx + 0xF8) = eax;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xEC) = ebp;
    edi = MEM32(ecx + 0xFC);
    ebp = MEM32(eax + 4);
    MEM32(ecx + 0xF8) = ebp;
    edx = ecx + 0xFC;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 0xEC) = MEM32(ecx + 0xEC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    MEM32(edx) = eax;

loc_0008CA5D: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008C9E0; /* jne: not equal / not zero */

loc_0008CA67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CA70
 * Original: 0x0008CA70 - 0x0008CAF3 (131 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CA70: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CAD2; /* jne: not equal / not zero */

loc_0008CA78: ;
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x0008CA83u); RECOMP_ABI_CALL(0x00079E60u, sub_00079E60); /* call 0x00079E60 */

loc_0008CA83: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CA91u); RECOMP_ABI_CALL(0x00084360u, sub_00084360); /* call 0x00084360 */

loc_0008CA91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CACE; /* je: equal / zero */

loc_0008CA98: ;
    PUSH32(esp, 0x110);
    PUSH32(esp, 0x0008CAA2u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008CAA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CAC4; /* je: equal / zero */

loc_0008CAA9: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008CAB1u); RECOMP_ABI_CALL(0x0008C5F0u, sub_0008C5F0); /* call 0x0008C5F0 */

loc_0008CAB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CAC4; /* je: equal / zero */

loc_0008CAB5: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CAC0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008CAC0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008CAC4: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CACEu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008CACE: ;
    POP32(esp, esi);

loc_0008CACF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008CAD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CACF; /* jne: not equal / not zero */

loc_0008CAD7: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008CAE4u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008CAE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CACF; /* je: equal / zero */

loc_0008CAE8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CAF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CAEEu); } /* indirect call */
    }

loc_0008CAF0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CB00
 * Original: 0x0008CB00 - 0x0008CB28 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CB00: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CB09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CB06u); } /* indirect call */
    }

loc_0008CB09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CB27; /* je: equal / zero */

loc_0008CB0D: ;
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CB16u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008CB16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CB27; /* je: equal / zero */

loc_0008CB1D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CB27u); RECOMP_ABI_CALL(0x0008C890u, sub_0008C890); /* call 0x0008C890 */

loc_0008CB27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CB30
 * Original: 0x0008CB30 - 0x0008CC06 (214 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CB30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0008CB3Fu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0008CB3F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xB4); /* addss */
    MEMF(esi + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xB8); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xBC); /* addss */
    edi = esi + -32;
    ecx = edi;
    MEMF(esi + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008CB85u); RECOMP_ABI_CALL(0x0008C540u, sub_0008C540); /* call 0x0008C540 */

loc_0008CB85: ;
    eax = MEM32(esi + 0xE0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi + 0xDC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CBBF; /* je: equal / zero */

loc_0008CBA7: ;
    edx = MEM32(eax + 8);
    MEM8(edx + 4) = LO8(ebx);
    edx = MEM32(eax + 8);
    MEM8(edx + 5) = LO8(ebx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CBA7; /* jne: not equal / not zero */

loc_0008CBBF: ;
    ecx = edi;
    PUSH32(esp, 0x0008CBC6u); RECOMP_ABI_CALL(0x0008C060u, sub_0008C060); /* call 0x0008C060 */

loc_0008CBC6: ;
    ecx = edi;
    PUSH32(esp, 0x0008CBCDu); RECOMP_ABI_CALL(0x0008C140u, sub_0008C140); /* call 0x0008C140 */

loc_0008CBCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CBDC; /* je: equal / zero */

loc_0008CBD1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */

loc_0008CBDC: ;
    ecx = edi;
    PUSH32(esp, 0x0008CBE3u); RECOMP_ABI_CALL(0x0008C2F0u, sub_0008C2F0); /* call 0x0008C2F0 */

loc_0008CBE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CBF2; /* je: equal / zero */

loc_0008CBE7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */

loc_0008CBF2: ;
    ecx = edi;
    PUSH32(esp, 0x0008CBF9u); RECOMP_ABI_CALL(0x0008BF40u, sub_0008BF40); /* call 0x0008BF40 */

loc_0008CBF9: ;
    ecx = edi;
    PUSH32(esp, 0x0008CC00u); RECOMP_ABI_CALL(0x0008C9C0u, sub_0008C9C0); /* call 0x0008C9C0 */

loc_0008CC00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008CC10
 * Original: 0x0008CC10 - 0x0008CC4F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CC10: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0008CC19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CC16u); } /* indirect call */
    }

loc_0008CC19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CC4A; /* je: equal / zero */

loc_0008CC1D: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x1CC));
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 0x1CE));
    ecx = eax;
    PUSH32(esp, 0x0008CC34u); RECOMP_ABI_CALL(0x00187D60u, sub_00187D60); /* call 0x00187D60 */

loc_0008CC34: ;
    ecx = SX16(LO16(eax));
    edx = SX16(LO16(edi));
    eax = SX16(LO16(esi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0008CC4A; /* jge: greater or equal (signed >=) */

loc_0008CC45: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0008CC4A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008CC50
 * Original: 0x0008CC50 - 0x0008CC58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CC50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008CC80(); return; /* tail jmp 0x0008CC80 */

}

/**
 * sub_0008CC60
 * Original: 0x0008CC60 - 0x0008CC68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CC60: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008CC80(); return; /* tail jmp 0x0008CC80 */

}

/**
 * sub_0008CC70
 * Original: 0x0008CC70 - 0x0008CC78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CC70: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008CC80(); return; /* tail jmp 0x0008CC80 */

}

/**
 * sub_0008CC80
 * Original: 0x0008CC80 - 0x0008CC9E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008CC88u); RECOMP_ABI_CALL(0x0008C790u, sub_0008C790); /* call 0x0008C790 */

loc_0008CC88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008CC98; /* je: equal / zero */

loc_0008CC8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008CC95u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008CC95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008CC98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008CCA0
 * Original: 0x0008CCA0 - 0x0008CCA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CCA0(void)
{

loc_0008CCA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CCB0
 * Original: 0x0008CCB0 - 0x0008CCB9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CCB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CCC0
 * Original: 0x0008CCC0 - 0x0008CCC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CCC0: ;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0008CCD0
 * Original: 0x0008CCD0 - 0x0008CD1C (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CCD0(void)
{

loc_0008CCD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x52B9821B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CCDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CCDAu); } /* indirect call */
    }

loc_0008CCDD: ;
    ecx = eax;
    PUSH32(esp, 0x0008CCE4u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008CCE4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6543690E);
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008CCF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CCF0u); } /* indirect call */
    }

loc_0008CCF3: ;
    ecx = eax;
    PUSH32(esp, 0x0008CCFAu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008CCFA: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAFFBB6F6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CD09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CD06u); } /* indirect call */
    }

loc_0008CD09: ;
    ecx = eax;
    PUSH32(esp, 0x0008CD10u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008CD10: ;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CD20
 * Original: 0x0008CD20 - 0x0008CD2A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CD20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CD26u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008CD26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008CD30
 * Original: 0x0008CD30 - 0x0008CD80 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CD30(void)
{

loc_0008CD30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x52B9821B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CD41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CD3Eu); } /* indirect call */
    }

loc_0008CD41: ;
    ecx = eax;
    PUSH32(esp, 0x0008CD48u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008CD48: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6543690E);
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008CD57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CD54u); } /* indirect call */
    }

loc_0008CD57: ;
    ecx = eax;
    PUSH32(esp, 0x0008CD5Eu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008CD5E: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAFFBB6F6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CD6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CD6Au); } /* indirect call */
    }

loc_0008CD6D: ;
    ecx = eax;
    PUSH32(esp, 0x0008CD74u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008CD74: ;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CD80
 * Original: 0x0008CD80 - 0x0008CDD7 (87 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 4;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CD93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CD90u); } /* indirect call */
    }

loc_0008CD93: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008CDA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CD9Eu); } /* indirect call */
    }

loc_0008CDA1: ;
    ecx = eax;
    PUSH32(esp, 0x0008CDA8u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008CDA8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008CDD4; /* jle: less or equal (signed <=) */

loc_0008CDAE: ;
    PUSH32(esp, ebx);
    esi = eax + 4;
    ebx = ecx;

loc_0008CDB4: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA26181F2u);
    PUSH32(esp, 0x0008CDCAu); RECOMP_ABI_CALL(0x00035260u, sub_00035260); /* call 0x00035260 */

loc_0008CDCA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008CDB4; /* jne: not equal / not zero */

loc_0008CDD3: ;
    POP32(esp, ebx);

loc_0008CDD4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CDE0
 * Original: 0x0008CDE0 - 0x0008CE4D (109 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CDE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CDEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CDEBu); } /* indirect call */
    }

loc_0008CDEE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x52B9821B);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008CDFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CDF9u); } /* indirect call */
    }

loc_0008CDFC: ;
    ecx = eax;
    PUSH32(esp, 0x0008CE03u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008CE03: ;
    MEM32(esp + 8) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CE13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CE10u); } /* indirect call */
    }

loc_0008CE13: ;
    ecx = eax;
    PUSH32(esp, 0x0008CE1Au); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008CE1A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008CE49; /* jle: less or equal (signed <=) */

loc_0008CE20: ;
    PUSH32(esp, ebx);
    esi = eax + 4;
    ebx = ecx;

loc_0008CE26: ;
    edx = MEM32(edi + 4);
    eax = MEM32(esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xAB1CF481u);
    PUSH32(esp, 0x0008CE3Fu); RECOMP_ABI_CALL(0x00035260u, sub_00035260); /* call 0x00035260 */

loc_0008CE3F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008CE26; /* jne: not equal / not zero */

loc_0008CE48: ;
    POP32(esp, ebx);

loc_0008CE49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CE50
 * Original: 0x0008CE50 - 0x0008CE7E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CE50: ;
    ecx = MEM32(ecx + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008CE59u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008CE59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008CE5Fu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0008CE5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CE7D; /* je: equal / zero */

loc_0008CE66: ;
    ecx = MEM32(0x51D65C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CE7D; /* je: equal / zero */

loc_0008CE70: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008CE7Du); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_0008CE7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CE80
 * Original: 0x0008CE80 - 0x0008CEF2 (114 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CE80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3543808E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008CE99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CE96u); } /* indirect call */
    }

loc_0008CE99: ;
    ecx = eax;
    PUSH32(esp, 0x0008CEA0u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008CEA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008CEF0; /* je: equal / zero */

loc_0008CEA4: ;
    SET_LO8(ecx, MEM8(0x3C3844));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008CEE2; /* jne: not equal / not zero */

loc_0008CEB3: ;
    edx = MEM32(0x3C3844);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6AD0);
    MEM32(0x3C3844) = edx;
    MEM32(0x3C383C) = 0x2FF7D4;
    MEM32(0x3C3840) = 2;
    PUSH32(esp, 0x0008CEDFu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0008CEDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008CEE2: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C383C);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008CEF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CEEDu); } /* indirect call */
    }

loc_0008CEF0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CF00
 * Original: 0x0008CF00 - 0x0008CF09 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CF00: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008CDE0(); return; /* tail jmp 0x0008CDE0 */

}

/**
 * sub_0008CF10
 * Original: 0x0008CF10 - 0x0008CF89 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CF10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = ebp;
    ebx = esi + 0xC;
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008CF3Au); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008CF3A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008CF5Eu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008CF5E: ;
    PUSH32(esp, 0x30979C);
    ecx = ebx;
    PUSH32(esp, 0x0008CF6Au); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008CF6A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CF70u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008CF70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CF76u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008CF76: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0008CF80u); RECOMP_ABI_CALL(0x0008CDE0u, sub_0008CDE0); /* call 0x0008CDE0 */

loc_0008CF80: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008CF90
 * Original: 0x0008CF90 - 0x0008CFC4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008CFA9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008CFA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008CFB4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008CFB4: ;
    ecx = edi;
    PUSH32(esp, 0x0008CFBBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008CFBB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008CFD0
 * Original: 0x0008CFD0 - 0x0008D0AD (221 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CFD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D079; /* jne: not equal / not zero */

loc_0008CFE2: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8C0360FBu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008CFF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008CFEEu); } /* indirect call */
    }

loc_0008CFF1: ;
    ecx = eax;
    PUSH32(esp, 0x0008CFF8u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008CFF8: ;
    ebx = edi + 4;
    esi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D005u); } /* indirect call */
    }

loc_0008D008: ;
    ebp = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008D034; /* jle: less or equal (signed <=) */

loc_0008D010: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0008D015: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0xE3EB9CCDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008D027u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008D027: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008D015; /* jne: not equal / not zero */

loc_0008D030: ;
    ebx = MEM32(esp + 0x10);

loc_0008D034: ;
    SET_LO8(ecx, MEM8(edi + 0x28));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(edi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008D06F; /* jne: not equal / not zero */

loc_0008D040: ;
    PUSH32(esp, 0xB16BD083u);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = 0x2FF7D4;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0008D05Au); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008D05A: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008D066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D063u); } /* indirect call */
    }

loc_0008D066: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0008D06Fu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008D06F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008D079: ;
    edi = MEM32(edi + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008D082u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008D082: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D088u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0008D088: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0A6; /* je: equal / zero */

loc_0008D08F: ;
    ecx = MEM32(0x51D65C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0A6; /* je: equal / zero */

loc_0008D099: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008D0A6u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_0008D0A6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008D0B0
 * Original: 0x0008D0B0 - 0x0008D115 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D0B0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D0F4; /* jne: not equal / not zero */

loc_0008D0B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0008D0C0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008D0C0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0E6; /* je: equal / zero */

loc_0008D0CB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008D0D3u); RECOMP_ABI_CALL(0x0008CF10u, sub_0008CF10); /* call 0x0008CF10 */

loc_0008D0D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D0E6; /* je: equal / zero */

loc_0008D0D7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D0E2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008D0E2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008D0E6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D0F0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008D0F0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008D0F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D112; /* jne: not equal / not zero */

loc_0008D0F9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008D106u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008D106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D112; /* je: equal / zero */

loc_0008D10A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008D112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D110u); } /* indirect call */
    }

loc_0008D112: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D120
 * Original: 0x0008D120 - 0x0008D134 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0008D12Cu); RECOMP_ABI_CALL(0x0008CD80u, sub_0008CD80); /* call 0x0008CD80 */

loc_0008D12C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0008CFD0(); return; /* tail jmp 0x0008CFD0 */

}

/**
 * sub_0008D140
 * Original: 0x0008D140 - 0x0008D14C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D140: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0008CFD0(); return; /* tail jmp 0x0008CFD0 */

}

/**
 * sub_0008D150
 * Original: 0x0008D150 - 0x0008D151 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D150(void)
{

loc_0008D150: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008D160
 * Original: 0x0008D160 - 0x0008D17B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D160(void)
{

loc_0008D160: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008D172u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D16Cu); } /* indirect call */
    }

loc_0008D172: ;
    MEM32(edi + eax * 4 + 0x34) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D180
 * Original: 0x0008D180 - 0x0008D19B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D180(void)
{

loc_0008D180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008D18Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D189u); } /* indirect call */
    }

loc_0008D18F: ;
    MEM32(esi + eax * 4 + 0x34) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D1A0
 * Original: 0x0008D1A0 - 0x0008D1D0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D1A0(void)
{

loc_0008D1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D1ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D1AAu); } /* indirect call */
    }

loc_0008D1AD: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008D1B9u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008D1B9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008D1C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D1BDu); } /* indirect call */
    }

loc_0008D1C3: ;
    POP32(esp, edi);
    MEM32(esi + eax * 4 + 0x24) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D1D0
 * Original: 0x0008D1D0 - 0x0008D209 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D1D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x24;
    ebx = 4;
    /* nop */

loc_0008D1E0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D1FF; /* je: equal / zero */

loc_0008D1E6: ;
    ecx = edi + 4;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D1F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D1EEu); } /* indirect call */
    }

loc_0008D1F1: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D1F9u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008D1F9: ;
    MEM32(esi) = 0;

loc_0008D1FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008D1E0; /* jne: not equal / not zero */

loc_0008D205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D210
 * Original: 0x0008D210 - 0x0008D219 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D210: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008D1D0(); return; /* tail jmp 0x0008D1D0 */

}

/**
 * sub_0008D220
 * Original: 0x0008D220 - 0x0008D2C2 (162 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x50305C0E);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D230u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D22Du); } /* indirect call */
    }

loc_0008D230: ;
    ecx = eax;
    PUSH32(esp, 0x0008D237u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008D237: ;
    edx = MEM32(edi + 4);
    ebx = edi + 4;
    ecx = ebx;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008D244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D241u); } /* indirect call */
    }

loc_0008D244: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008D274; /* jle: less or equal (signed <=) */

loc_0008D24E: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;

loc_0008D254: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, 0xBAA082BCu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008D26Au); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008D26A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008D254; /* jne: not equal / not zero */

loc_0008D273: ;
    POP32(esp, ebp);

loc_0008D274: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D296; /* je: equal / zero */

loc_0008D27B: ;
    PUSH32(esp, 0x3097C8);
    ecx = edi + 0xC;
    PUSH32(esp, 0x0008D288u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008D288: ;
    ecx = edi;
    PUSH32(esp, 0x0008D28Fu); RECOMP_ABI_CALL(0x0008D1D0u, sub_0008D1D0); /* call 0x0008D1D0 */

loc_0008D28F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0008D296: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008D29Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D29Au); } /* indirect call */
    }

loc_0008D29D: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008D2A9u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008D2A9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008D2B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D2ADu); } /* indirect call */
    }

loc_0008D2B3: ;
    MEM32(edi + eax * 4 + 0x24) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D2D0
 * Original: 0x0008D2D0 - 0x0008D2FC (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D2D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D2F6; /* je: equal / zero */

loc_0008D2DB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D2E4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008D2E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D2F6; /* je: equal / zero */

loc_0008D2EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D2F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D2EFu); } /* indirect call */
    }

loc_0008D2F2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008D2F6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D300
 * Original: 0x0008D300 - 0x0008D338 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D300: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D324; /* je: equal / zero */

loc_0008D30B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D314u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008D314: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D324; /* je: equal / zero */

loc_0008D31B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D31Fu); } /* indirect call */
    }

loc_0008D322: ;
    esi = eax;

loc_0008D324: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008D32Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D328u); } /* indirect call */
    }

loc_0008D32E: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x34) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D340
 * Original: 0x0008D340 - 0x0008D37C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D340: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D364; /* je: equal / zero */

loc_0008D34B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D354u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008D354: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D364; /* je: equal / zero */

loc_0008D35B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D362u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D35Fu); } /* indirect call */
    }

loc_0008D362: ;
    esi = eax;

loc_0008D364: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008D36Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D368u); } /* indirect call */
    }

loc_0008D36E: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x34) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D380
 * Original: 0x0008D380 - 0x0008D3CF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D380: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008D3A5; /* je: equal / zero */

loc_0008D38C: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D395u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008D395: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D3A5; /* je: equal / zero */

loc_0008D39C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D3A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D3A0u); } /* indirect call */
    }

loc_0008D3A3: ;
    esi = eax;

loc_0008D3A5: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    ecx = edi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D3B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D3AFu); } /* indirect call */
    }

loc_0008D3B2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008D3BAu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008D3BA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008D3C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D3BEu); } /* indirect call */
    }

loc_0008D3C4: ;
    MEM32(edi + eax * 4 + 0x24) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D3D0
 * Original: 0x0008D3D0 - 0x0008D400 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D3D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D3F4; /* je: equal / zero */

loc_0008D3DB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D3E4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008D3E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D3F4; /* je: equal / zero */

loc_0008D3EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D3F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D3EFu); } /* indirect call */
    }

loc_0008D3F2: ;
    esi = eax;

loc_0008D3F4: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008D3FEu); RECOMP_ABI_CALL(0x0008D220u, sub_0008D220); /* call 0x0008D220 */

loc_0008D3FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D400
 * Original: 0x0008D400 - 0x0008D502 (258 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D400: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    MEM32(edi + 4) = 0;
    ebp = esi + 0xC;
    ecx = ebp;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008D42Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008D42B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM8(esi + 0x20) = 0;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008D44Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008D44A: ;
    PUSH32(esp, 0x309914);
    ecx = ebp;
    PUSH32(esp, 0x0008D456u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008D456: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008D45Cu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008D45C: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008D466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D463u); } /* indirect call */
    }

loc_0008D466: ;
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x0008D473u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008D473: ;
    MEM8(esi + 0x20) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008D47Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D47Au); } /* indirect call */
    }

loc_0008D47D: ;
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0008D48Au); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008D48A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D4DA; /* je: equal / zero */

loc_0008D48E: ;
    SET_LO8(ecx, MEM8(0x3C3860));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D4CC; /* jne: not equal / not zero */

loc_0008D49D: ;
    edx = MEM32(0x3C3860);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6AE0);
    MEM32(0x3C3860) = edx;
    MEM32(0x3C3858) = 0x2FF7D4;
    MEM32(0x3C385C) = 2;
    PUSH32(esp, 0x0008D4C9u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0008D4C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008D4CC: ;
    edx = MEM32(edi + 8);
    ecx = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3858);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008D4DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D4D7u); } /* indirect call */
    }

loc_0008D4DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x24;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x34;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D510
 * Original: 0x0008D510 - 0x0008D544 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D510: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008D529u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008D529: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008D534u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008D534: ;
    ecx = edi;
    PUSH32(esp, 0x0008D53Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008D53B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D550
 * Original: 0x0008D550 - 0x0008D5B5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D550: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D594; /* jne: not equal / not zero */

loc_0008D558: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0008D560u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008D560: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D586; /* je: equal / zero */

loc_0008D56B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008D573u); RECOMP_ABI_CALL(0x0008D400u, sub_0008D400); /* call 0x0008D400 */

loc_0008D573: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D586; /* je: equal / zero */

loc_0008D577: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D582u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008D582: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008D586: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D590u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008D590: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008D594: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D5B2; /* jne: not equal / not zero */

loc_0008D599: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008D5A6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008D5A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D5B2; /* je: equal / zero */

loc_0008D5AA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008D5B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D5B0u); } /* indirect call */
    }

loc_0008D5B2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D5C0
 * Original: 0x0008D5C0 - 0x0008D741 (385 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1E4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0x2394A82B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D5DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D5D8u); } /* indirect call */
    }

loc_0008D5DB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D5E2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008D5E2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDC83BD88u);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008D5F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D5EDu); } /* indirect call */
    }

loc_0008D5F0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D5F7u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008D5F7: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D601u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0008D601: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D64F; /* jne: not equal / not zero */

loc_0008D60A: ;
    PUSH32(esp, 0x3099B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D614u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008D614: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x309968);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D61Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008D61F: ;
    PUSH32(esp, 0x3099B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D629u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008D629: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008D633u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D630u); } /* indirect call */
    }

loc_0008D633: ;
    PUSH32(esp, eax);
    ecx = esp + 0xF4;
    PUSH32(esp, 0x30992C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D646u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0008D646: ;
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008D670;

loc_0008D64F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC60B5AF9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC60B5AF9u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D670; /* jne: not equal / not zero */

loc_0008D657: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6C02BE35);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008D663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D660u); } /* indirect call */
    }

loc_0008D663: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D66Au); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008D66A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D670; /* je: equal / zero */

loc_0008D66E: ;
    edi = eax;

loc_0008D670: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x10;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0xA4) = 0x2FF02C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D69Bu); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_0008D69B: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    MEM32(esp + 0x14) = 5;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008D6ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D6A9u); } /* indirect call */
    }

loc_0008D6AC: ;
    edx = MEM32(esi);
    ecx = esp + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008D6BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D6BCu); } /* indirect call */
    }

loc_0008D6BF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D6C6u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008D6C6: ;
    eax = esp + 0x22;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D6D1u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0008D6D1: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2CECF817);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008D6E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D6DDu); } /* indirect call */
    }

loc_0008D6E0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D6E7u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008D6E7: ;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D6F1u); RECOMP_ABI_CALL(0x000EE720u, sub_000EE720); /* call 0x000EE720 */

loc_0008D6F1: ;
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x20) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D707u); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_0008D707: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008D711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D70Bu); } /* indirect call */
    }

loc_0008D711: ;
    MEM32(esi + eax * 4 + 0x24) = edi;
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xA4) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0008D738; /* je: equal / zero */

loc_0008D72B: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D738u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008D738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D750
 * Original: 0x0008D750 - 0x0008D780 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D750: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D774; /* je: equal / zero */

loc_0008D75B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D764u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008D764: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D774; /* je: equal / zero */

loc_0008D76B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D76Fu); } /* indirect call */
    }

loc_0008D772: ;
    esi = eax;

loc_0008D774: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008D77Eu); RECOMP_ABI_CALL(0x0008D5C0u, sub_0008D5C0); /* call 0x0008D5C0 */

loc_0008D77E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D780
 * Original: 0x0008D780 - 0x0008D7AE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x34;
    ebx = 4;
    /* nop */

loc_0008D790: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D7A4; /* je: equal / zero */

loc_0008D796: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008D79Eu); RECOMP_ABI_CALL(0x0008D5C0u, sub_0008D5C0); /* call 0x0008D5C0 */

loc_0008D79E: ;
    MEM32(esi) = 0;

loc_0008D7A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008D790; /* jne: not equal / not zero */

loc_0008D7AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D7B0
 * Original: 0x0008D7B0 - 0x0008D7C0 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D7B0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008D780(); return; /* tail jmp 0x0008D780 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0008D7C0
 * Original: 0x0008D7C0 - 0x0008D7C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D7C0(void)
{

loc_0008D7C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008D7D0
 * Original: 0x0008D7D0 - 0x0008D7D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D7D0(void)
{

loc_0008D7D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008D7E0
 * Original: 0x0008D7E0 - 0x0008D7E7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D7E0(void)
{

loc_0008D7E0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D7F0
 * Original: 0x0008D7F0 - 0x0008D7F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D7F0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0008D800
 * Original: 0x0008D800 - 0x0008D857 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0x2FF77C;
    ebx = esi + 0x10;
    ecx = ebx;
    MEM32(esi) = 0x309A6C;
    MEM32(edi) = 0x309A68;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0008D832u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008D832: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0008D83Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008D83A: ;
    PUSH32(esp, 0x309A50);
    ecx = ebx;
    PUSH32(esp, 0x0008D846u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008D846: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008D84Cu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008D84C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D860
 * Original: 0x0008D860 - 0x0008D897 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x309A6C;
    MEM32(esi + 8) = 0x309A68;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008D87Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008D87D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008D888u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008D888: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0008D8A0
 * Original: 0x0008D8A0 - 0x0008D8AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D8A0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0008D8B0
 * Original: 0x0008D8B0 - 0x0008D8BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D8B0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008D8C0
 * Original: 0x0008D8C0 - 0x0008D91E (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D8C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D8FD; /* jne: not equal / not zero */

loc_0008D8C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0008D8D0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008D8D0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D8EF; /* je: equal / zero */

loc_0008D8DB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008D8E3u); RECOMP_ABI_CALL(0x0008D800u, sub_0008D800); /* call 0x0008D800 */

loc_0008D8E3: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D8EBu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008D8EB: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008D8EF: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008D8F9u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008D8F9: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008D8FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D91B; /* jne: not equal / not zero */

loc_0008D902: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008D90Fu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008D90F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D91B; /* je: equal / zero */

loc_0008D913: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008D91Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D919u); } /* indirect call */
    }

loc_0008D91B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D920
 * Original: 0x0008D920 - 0x0008D97F (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D920: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008D931; /* je: equal / zero */

loc_0008D92C: ;
    esi = eax + -8;
    goto loc_0008D933;

loc_0008D931: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008D933: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0008D946u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008D946: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D97A; /* je: equal / zero */

loc_0008D94A: ;
    PUSH32(esp, 2);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0008D965u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008D965: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008D971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D96Eu); } /* indirect call */
    }

loc_0008D971: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0008D97Au); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008D97A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008D980
 * Original: 0x0008D980 - 0x0008DA8A (266 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D980(void)
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

loc_0008D980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008D996; /* je: equal / zero */

loc_0008D991: ;
    esi = eax + -8;
    goto loc_0008D998;

loc_0008D996: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008D998: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x84F071FBu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D9ABu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008D9AB: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0xB3035F59u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008D9C0u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008D9C0: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D9EE; /* je: equal / zero */

loc_0008D9CC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008D9D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D9CEu); } /* indirect call */
    }

loc_0008D9D1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D9EE; /* je: equal / zero */

loc_0008D9D7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0008D9DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D9DBu); } /* indirect call */
    }

loc_0008D9DE: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008D9EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008D9EBu); } /* indirect call */
    }

loc_0008D9EE: ;
    ecx = MEM32(0x3E8CF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008DA85; /* je: equal / zero */

loc_0008DA05: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0008DA0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DA07u); } /* indirect call */
    }

loc_0008DA0D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DA6F; /* je: equal / zero */

loc_0008DA13: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x0008DA1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DA17u); } /* indirect call */
    }

loc_0008DA1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DA6F; /* jne: not equal / not zero */

loc_0008DA21: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0008DA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DA25u); } /* indirect call */
    }

loc_0008DA2B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0008DA32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DA2Fu); } /* indirect call */
    }

loc_0008DA32: ;
    eax = MEM32(eax + 0x98);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DA45u); RECOMP_ABI_CALL(0x000172B0u, sub_000172B0); /* call 0x000172B0 */

loc_0008DA45: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DA53u); RECOMP_ABI_CALL(0x000172A0u, sub_000172A0); /* call 0x000172A0 */

loc_0008DA53: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008DA5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DA57u); } /* indirect call */
    }

loc_0008DA5A: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008DA66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DA63u); } /* indirect call */
    }

loc_0008DA66: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DA6Fu); RECOMP_ABI_CALL(0x000172D0u, sub_000172D0); /* call 0x000172D0 */

loc_0008DA6F: ;
    ecx = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DA78u); RECOMP_ABI_CALL(0x001313C0u, sub_001313C0); /* call 0x001313C0 */

loc_0008DA78: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DA05; /* jne: not equal / not zero */

loc_0008DA85: ;
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
 * sub_0008DA90
 * Original: 0x0008DA90 - 0x0008DA98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008DA90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008DAA0(); return; /* tail jmp 0x0008DAA0 */

}

/**
 * sub_0008DAA0
 * Original: 0x0008DAA0 - 0x0008DAEC (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x309A6C;
    MEM32(esi + 8) = 0x309A68;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008DABDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008DABD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008DAC8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008DAC8: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x0008DAD6u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008DAD6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DAE6; /* je: equal / zero */

loc_0008DADD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008DAE3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008DAE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008DAE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008DAF0
 * Original: 0x0008DAF0 - 0x0008DAF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DAF0(void)
{

loc_0008DAF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008DB00
 * Original: 0x0008DB00 - 0x0008DB24 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DB00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB1F; /* je: equal / zero */

loc_0008DB08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB1F; /* je: equal / zero */

loc_0008DB0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DB15u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0008DB15: ;
    ecx = eax;
    PUSH32(esp, 0x0008DB1Cu); RECOMP_ABI_CALL(0x001AC1A0u, sub_001AC1A0); /* call 0x001AC1A0 */

loc_0008DB1C: ;
    esp += 8; return; /* ret 4 */

loc_0008DB1F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008DB30
 * Original: 0x0008DB30 - 0x0008DB6C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008DB30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3727C4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE67B4692u);
    MEM32(esp + 8) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DB47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DB44u); } /* indirect call */
    }

loc_0008DB47: ;
    ecx = eax;
    PUSH32(esp, 0x0008DB4Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008DB4E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    eax = esi + 4;
    PUSH32(esp, eax);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x28);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0008DB69u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008DB69: ;
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
 * sub_0008DB70
 * Original: 0x0008DB70 - 0x0008DB9C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DB70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB96; /* je: equal / zero */

loc_0008DB7B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DB84u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008DB84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DB96; /* je: equal / zero */

loc_0008DB8B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008DB92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DB8Fu); } /* indirect call */
    }

loc_0008DB92: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008DB96: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008DBA0
 * Original: 0x0008DBA0 - 0x0008DBEB (75 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DBB8u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0008DBB8: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DBE3; /* je: equal / zero */

loc_0008DBC1: ;
    edx = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008DBCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DBCAu); } /* indirect call */
    }

loc_0008DBCD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DBD4u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_0008DBD4: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0008DBE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DBDDu); } /* indirect call */
    }

loc_0008DBE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008DBF0
 * Original: 0x0008DBF0 - 0x0008DC30 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DBF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008DBF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3727C4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE67B4692u);
    ecx = esi;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DC0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DC08u); } /* indirect call */
    }

loc_0008DC0B: ;
    ecx = eax;
    PUSH32(esp, 0x0008DC12u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008DC12: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    eax = esi + 4;
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x28);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0008DC2Du); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008DC2D: ;
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
 * sub_0008DC30
 * Original: 0x0008DC30 - 0x0008DCFF (207 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DC30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    MEM32(edi + 4) = 0;
    ebx = esi + 0xC;
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008DC5Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008DC5B: ;
    ecx = esi + 0x20;
    MEM32(esi) = 0x309B8C;
    MEM32(edi) = 0x309B74;
    PUSH32(esp, 0x0008DC6Fu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0008DC6F: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008DC7Eu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008DC7E: ;
    PUSH32(esp, 0x309B54);
    ecx = ebx;
    PUSH32(esp, 0x0008DC8Au); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008DC8A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008DC90u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008DC90: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008DC9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DC97u); } /* indirect call */
    }

loc_0008DC9A: ;
    PUSH32(esp, 0x9E0864DFu);
    ecx = eax + 8;
    PUSH32(esp, 0x0008DCA7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008DCA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DCF7; /* je: equal / zero */

loc_0008DCAB: ;
    SET_LO8(ecx, MEM8(0x3C3894));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DCE9; /* jne: not equal / not zero */

loc_0008DCBA: ;
    edx = MEM32(0x3C3894);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6AF0);
    MEM32(0x3C3894) = edx;
    MEM32(0x3C388C) = 0x2FF7D4;
    MEM32(0x3C3890) = 2;
    PUSH32(esp, 0x0008DCE6u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0008DCE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008DCE9: ;
    eax = MEM32(edi + 8);
    ecx = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C388C);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008DCF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DCF4u); } /* indirect call */
    }

loc_0008DCF7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008DD00
 * Original: 0x0008DD00 - 0x0008DD48 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x20;
    MEM32(esi) = 0x309B8C;
    MEM32(edi) = 0x309B74;
    PUSH32(esp, 0x0008DD1Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008DD1B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008DD2Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008DD2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008DD38u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008DD38: ;
    ecx = edi;
    PUSH32(esp, 0x0008DD3Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008DD3F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008DD50
 * Original: 0x0008DD50 - 0x0008DE2C (220 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DD50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DD66u); RECOMP_ABI_CALL(0x00142340u, sub_00142340); /* call 0x00142340 */

loc_0008DD66: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM32(esp + 0x28) = 0x302BAC;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0x3C) = 0x2FFA54;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = 0x2FF02C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008DDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DDADu); } /* indirect call */
    }

loc_0008DDB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DDDD; /* je: equal / zero */

loc_0008DDB4: ;
    edx = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008DDC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DDBDu); } /* indirect call */
    }

loc_0008DDC0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DDC7u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008DDC7: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DDD5u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0008DDD5: ;
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = ecx;

loc_0008DDDD: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    MEM32(esp + 0x74) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DDEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DDEAu); } /* indirect call */
    }

loc_0008DDED: ;
    ecx = esp + 0x54;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DE02u); RECOMP_ABI_CALL(0x00142380u, sub_00142380); /* call 0x00142380 */

loc_0008DE02: ;
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x3C) = 0x2FFA54;
    MEM32(esp + 0x44) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0008DE24; /* je: equal / zero */

loc_0008DE1A: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008DE24u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008DE24: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008DE30
 * Original: 0x0008DE30 - 0x0008DE95 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DE30: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DE74; /* jne: not equal / not zero */

loc_0008DE38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0008DE40u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008DE40: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DE66; /* je: equal / zero */

loc_0008DE4B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008DE53u); RECOMP_ABI_CALL(0x0008DC30u, sub_0008DC30); /* call 0x0008DC30 */

loc_0008DE53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DE66; /* je: equal / zero */

loc_0008DE57: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DE62u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008DE62: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008DE66: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DE70u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008DE70: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008DE74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DE92; /* jne: not equal / not zero */

loc_0008DE79: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008DE86u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008DE86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DE92; /* je: equal / zero */

loc_0008DE8A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008DE92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DE90u); } /* indirect call */
    }

loc_0008DE92: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008DEA0
 * Original: 0x0008DEA0 - 0x0008E01E (382 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008DEA0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0xCFA0893Au);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DEAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DEABu); } /* indirect call */
    }

loc_0008DEAE: ;
    ecx = eax;
    PUSH32(esp, 0x0008DEB5u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008DEB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DEDD; /* je: equal / zero */

loc_0008DEB9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x45AC4AD2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DEC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DEC2u); } /* indirect call */
    }

loc_0008DEC5: ;
    ecx = eax;
    PUSH32(esp, 0x0008DECCu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008DECC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DED2u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008DED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008DEDDu); RECOMP_ABI_CALL(0x0008DBA0u, sub_0008DBA0); /* call 0x0008DBA0 */

loc_0008DEDD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x56A9D880);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DEE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DEE6u); } /* indirect call */
    }

loc_0008DEE9: ;
    ecx = eax;
    PUSH32(esp, 0x0008DEF0u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008DEF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DF18; /* je: equal / zero */

loc_0008DEF4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDCA51B68u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DF00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DEFDu); } /* indirect call */
    }

loc_0008DF00: ;
    ecx = eax;
    PUSH32(esp, 0x0008DF07u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008DF07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DF0Du); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008DF0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008DF18u); RECOMP_ABI_CALL(0x0008DBA0u, sub_0008DBA0); /* call 0x0008DBA0 */

loc_0008DF18: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21AEE816);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DF24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DF21u); } /* indirect call */
    }

loc_0008DF24: ;
    ecx = eax;
    PUSH32(esp, 0x0008DF2Bu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008DF2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DF53; /* je: equal / zero */

loc_0008DF2F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xABA22BFEu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DF3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DF38u); } /* indirect call */
    }

loc_0008DF3B: ;
    ecx = eax;
    PUSH32(esp, 0x0008DF42u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008DF42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DF48u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008DF48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008DF53u); RECOMP_ABI_CALL(0x0008DBA0u, sub_0008DBA0); /* call 0x0008DBA0 */

loc_0008DF53: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBFCA7DB5u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DF5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DF5Cu); } /* indirect call */
    }

loc_0008DF5F: ;
    ecx = eax;
    PUSH32(esp, 0x0008DF66u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008DF66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DF8E; /* je: equal / zero */

loc_0008DF6A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x35C6BE5D);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DF76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DF73u); } /* indirect call */
    }

loc_0008DF76: ;
    ecx = eax;
    PUSH32(esp, 0x0008DF7Du); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008DF7D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DF83u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008DF83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008DF8Eu); RECOMP_ABI_CALL(0x0008DBA0u, sub_0008DBA0); /* call 0x0008DBA0 */

loc_0008DF8E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC8CD4D23u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DF9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DF97u); } /* indirect call */
    }

loc_0008DF9A: ;
    ecx = eax;
    PUSH32(esp, 0x0008DFA1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008DFA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DFC9; /* je: equal / zero */

loc_0008DFA5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42C18ECB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008DFB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DFAEu); } /* indirect call */
    }

loc_0008DFB1: ;
    ecx = eax;
    PUSH32(esp, 0x0008DFB8u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008DFB8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008DFBEu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008DFBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008DFC9u); RECOMP_ABI_CALL(0x0008DBA0u, sub_0008DBA0); /* call 0x0008DBA0 */

loc_0008DFC9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x394FEC80);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008DFD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008DFD2u); } /* indirect call */
    }

loc_0008DFD5: ;
    ecx = eax;
    PUSH32(esp, 0x0008DFDCu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008DFDC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E00B; /* je: equal / zero */

loc_0008DFE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E01B; /* je: equal / zero */

loc_0008DFEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008DFF0u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0008DFF0: ;
    ecx = eax;
    PUSH32(esp, 0x0008DFF7u); RECOMP_ABI_CALL(0x001AC1A0u, sub_001AC1A0); /* call 0x001AC1A0 */

loc_0008DFF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E00B; /* je: equal / zero */

loc_0008DFFB: ;
    PUSH32(esp, 0x309BA0);
    PUSH32(esp, 0x0008E005u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008E005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008E00B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E01B; /* je: equal / zero */

loc_0008E013: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008E01Bu); RECOMP_ABI_CALL(0x0008DD50u, sub_0008DD50); /* call 0x0008DD50 */

loc_0008E01B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E020
 * Original: 0x0008E020 - 0x0008E029 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E020: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008DEA0(); return; /* tail jmp 0x0008DEA0 */

}

/**
 * sub_0008E030
 * Original: 0x0008E030 - 0x0008E038 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E030: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008E040(); return; /* tail jmp 0x0008E040 */

}

/**
 * sub_0008E040
 * Original: 0x0008E040 - 0x0008E09C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E040: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x20;
    MEM32(esi) = 0x309B8C;
    MEM32(edi) = 0x309B74;
    PUSH32(esp, 0x0008E05Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008E05B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008E06Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008E06D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008E078u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008E078: ;
    ecx = edi;
    PUSH32(esp, 0x0008E07Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008E07F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_0008E095; /* je: equal / zero */

loc_0008E08C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008E092u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008E092: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008E095: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E0A0
 * Original: 0x0008E0A0 - 0x0008E0A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E0A0(void)
{

loc_0008E0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E0B0
 * Original: 0x0008E0B0 - 0x0008E0BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E0B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E0C0
 * Original: 0x0008E0C0 - 0x0008E0CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E0C0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E0D0
 * Original: 0x0008E0D0 - 0x0008E108 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E106; /* je: equal / zero */

loc_0008E0DD: ;
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) & 0xFFF7FFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x84);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x428603F5);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0008E0FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E0F9u); } /* indirect call */
    }

loc_0008E0FC: ;
    MEM32(esi + 0x84) = 0;

loc_0008E106: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E110
 * Original: 0x0008E110 - 0x0008E122 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E110(void)
{

loc_0008E110: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM8(ecx + 0x41) = 1;
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E130
 * Original: 0x0008E130 - 0x0008E149 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E130(void)
{

loc_0008E130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008E13Du); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E13D: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E147u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E147: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E150
 * Original: 0x0008E150 - 0x0008E169 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E150(void)
{

loc_0008E150: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E15Du); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E15D: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008E167u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E167: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E170
 * Original: 0x0008E170 - 0x0008E189 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E170(void)
{

loc_0008E170: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E17Du); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E17D: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E187u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E187: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E190
 * Original: 0x0008E190 - 0x0008E1B4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E190(void)
{

loc_0008E190: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x6C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x70) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x74) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x78) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x7C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E1C0
 * Original: 0x0008E1C0 - 0x0008E1F1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008E1EC; /* je: equal / zero */

loc_0008E1CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008E1D2u); RECOMP_ABI_CALL(0x0003CF00u, sub_0003CF00); /* call 0x0003CF00 */

loc_0008E1D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E1EC; /* je: equal / zero */

loc_0008E1D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008E1E3u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_0008E1E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x80) = eax;

loc_0008E1EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E200
 * Original: 0x0008E200 - 0x0008E203 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E200(void)
{

loc_0008E200: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E210
 * Original: 0x0008E210 - 0x0008E21A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E210: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E216u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008E216: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E220
 * Original: 0x0008E220 - 0x0008E23B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E220(void)
{

loc_0008E220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008E22Fu); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E22F: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E239u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E239: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E240
 * Original: 0x0008E240 - 0x0008E264 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008E240: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E261; /* je: equal / zero */

loc_0008E24B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FE99C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008E261; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2FE99C)) */

loc_0008E259: ;
    PUSH32(esp, 0x0008E25Eu); RECOMP_ABI_CALL(0x0008E0D0u, sub_0008E0D0); /* call 0x0008E0D0 */

loc_0008E25E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008E261: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E270
 * Original: 0x0008E270 - 0x0008E2A0 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E270: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008E27Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E27Cu); } /* indirect call */
    }

loc_0008E27F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E29D; /* je: equal / zero */

loc_0008E285: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008E28Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E289u); } /* indirect call */
    }

loc_0008E28C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E292u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008E292: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008E29Du); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008E29D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E2D0
 * Original: 0x0008E2D0 - 0x0008E3F0 (288 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E2D0(void)
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

loc_0008E2D0: ;
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
    SET_LO8(eax, MEM8(esi + 0x41));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3EA; /* je: equal / zero */

loc_0008E2E8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x309EE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E2F9u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0008E2F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E30B; /* je: equal / zero */

loc_0008E300: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E307u); RECOMP_ABI_CALL(0x00030700u, sub_00030700); /* call 0x00030700 */

loc_0008E307: ;
    edi = eax;
    goto loc_0008E30D;

loc_0008E30B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008E30D: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008E319u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E316u); } /* indirect call */
    }

loc_0008E319: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E320u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008E320: ;
    eax = MEM32(0x373370);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008E32Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E32Au); } /* indirect call */
    }

loc_0008E32D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E334u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008E334: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E33Au); RECOMP_ABI_CALL(0x00182320u, sub_00182320); /* call 0x00182320 */

loc_0008E33A: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB73A8280u);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E361u); RECOMP_ABI_CALL(0x000305E0u, sub_000305E0); /* call 0x000305E0 */

loc_0008E361: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = esi + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E381u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008E381: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA2456844u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008E38Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E38Au); } /* indirect call */
    }

loc_0008E38D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E394u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008E394: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3EA; /* je: equal / zero */

loc_0008E398: ;
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E3AE; /* je: equal / zero */

loc_0008E3A2: ;
    eax = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0008E3AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E3A8u); } /* indirect call */
    }

loc_0008E3AE: ;
    ecx = MEM32(0x51D65C);
    edi = MEM32(ecx + 0x3580);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E3C7u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008E3C7: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008E3D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E3D0u); } /* indirect call */
    }

loc_0008E3D3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E3DAu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008E3DA: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E3EAu); RECOMP_ABI_CALL(0x0016D5E0u, sub_0016D5E0); /* call 0x0016D5E0 */

loc_0008E3EA: ;
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
 * sub_0008E3F0
 * Original: 0x0008E3F0 - 0x0008E46E (126 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E3F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0008E415; /* jne: not equal / not zero */

loc_0008E3FD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27873DEA);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008E407u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E404u); } /* indirect call */
    }

loc_0008E407: ;
    ecx = eax;
    PUSH32(esp, 0x0008E40Eu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008E40E: ;
    ebp = 0xD23B04BDu;
    goto loc_0008E432;

loc_0008E415: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008E468; /* jne: not equal / not zero */

loc_0008E41A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD9A51AB4u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008E426u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E423u); } /* indirect call */
    }

loc_0008E426: ;
    ecx = eax;
    PUSH32(esp, 0x0008E42Du); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008E42D: ;
    ebp = 0x5735C768;

loc_0008E432: ;
    ecx = esi + 4;
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008E43Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E43Au); } /* indirect call */
    }

loc_0008E43D: ;
    ebx = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008E467; /* jle: less or equal (signed <=) */

loc_0008E445: ;
    esi = edi + 4;
    edi = eax;
    /* nop */

loc_0008E450: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008E45Eu); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008E45E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008E450; /* jne: not equal / not zero */

loc_0008E467: ;
    POP32(esp, ebx);

loc_0008E468: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E470
 * Original: 0x0008E470 - 0x0008E501 (145 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E470: ;
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
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E48Fu); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_0008E48F: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    MEM32(esi + 0x64) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4A5u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_0008E4A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x68) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4B0u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0008E4B0: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008E4BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E4BCu); } /* indirect call */
    }

loc_0008E4BF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4C6u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_0008E4C6: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0008E4D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E4D0u); } /* indirect call */
    }

loc_0008E4D6: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0008E4E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E4E0u); } /* indirect call */
    }

loc_0008E4E6: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4F0u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E4F0: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E4FAu); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008E4FA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008E510
 * Original: 0x0008E510 - 0x0008E580 (112 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E546; /* je: equal / zero */

loc_0008E522: ;
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    xmm1 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */

loc_0008E546: ;
    esi = ecx + 0x6C;
    edi = 5;
    edi = edi;

loc_0008E550: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E574; /* je: equal / zero */

loc_0008E556: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E55Eu); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0008E55E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E574; /* je: equal / zero */

loc_0008E565: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0008E574u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E56Eu); } /* indirect call */
    }

loc_0008E574: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008E550; /* jne: not equal / not zero */

loc_0008E57A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E580
 * Original: 0x0008E580 - 0x0008E633 (179 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E580: ;
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
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008E62A; /* je: equal / zero */

loc_0008E59B: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008E5A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E5A2u); } /* indirect call */
    }

loc_0008E5A5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E5ACu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008E5AC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E5DBu); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0008E5DB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x34) = 0x2FF9EC;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x5C) = LO8(ebx);
    MEM32(esp + 0x54) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E627u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_0008E627: ;
    MEM32(esi + 0x3C) = eax;

loc_0008E62A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E640
 * Original: 0x0008E640 - 0x0008E6EC (172 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E6E4; /* je: equal / zero */

loc_0008E658: ;
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008E662u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E65Fu); } /* indirect call */
    }

loc_0008E662: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E669u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008E669: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E698u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0008E698: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x34) = 0x2FF9EC;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x5C) = LO8(ebx);
    MEM32(esp + 0x54) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E6E4u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_0008E6E4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E6F0
 * Original: 0x0008E6F0 - 0x0008E71C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E6F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E71A; /* je: equal / zero */

loc_0008E6FD: ;
    edx = MEM32(esi + 0x68);
    ecx = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0008E70Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E708u); } /* indirect call */
    }

loc_0008E70E: ;
    ecx = MEM32(esi + 0x80);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010CCD0(); return; /* tail jmp 0x0010CCD0 */

loc_0008E71A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E720
 * Original: 0x0008E720 - 0x0008E76F (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x51D65C);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3580);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008E744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E741u); } /* indirect call */
    }

loc_0008E744: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E74Bu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008E74B: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E75Cu); RECOMP_ABI_CALL(0x0016D5E0u, sub_0016D5E0); /* call 0x0016D5E0 */

loc_0008E75C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008E769u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008E769: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E770
 * Original: 0x0008E770 - 0x0008E7AB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E770(void)
{

loc_0008E770: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    eax = MEM32(edi + 0x35B0);
    esi = ecx;
    PUSH32(esp, 1);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E797u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0008E797: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E7A8u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008E7A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E7B0
 * Original: 0x0008E7B0 - 0x0008E946 (406 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E7B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008E7C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E7BDu); } /* indirect call */
    }

loc_0008E7C0: ;
    esi = eax;
    PUSH32(esp, 0x906E7097u);
    ecx = esi;
    PUSH32(esp, 0x0008E7CEu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008E7CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E7EB; /* je: equal / zero */

loc_0008E7D2: ;
    PUSH32(esp, 0x77D103F9);
    ecx = esi;
    PUSH32(esp, 0x0008E7DEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008E7DE: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEM8(edi + 0x41) = 1;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */

loc_0008E7EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2394A82B);
    ecx = esi;
    PUSH32(esp, 0x0008E7F9u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008E7F9: ;
    PUSH32(esp, 0xF125DA43u);
    ecx = esi;
    MEM32(edi + 0x60) = eax;
    PUSH32(esp, 0x0008E808u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E808: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E80Eu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E80E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBF9A83E3u);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0008E81Fu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E81F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E825u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E825: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0008E831u); RECOMP_ABI_CALL(0x0008E470u, sub_0008E470); /* call 0x0008E470 */

loc_0008E831: ;
    PUSH32(esp, 0x45AC4AD2);
    ecx = esi;
    PUSH32(esp, 0x0008E83Du); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E83D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E843u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xDCA51B68u);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0008E854u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E854: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E85Au); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E85A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xABA22BFEu);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0008E86Bu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E86B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E871u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E871: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x35C6BE5D);
    ecx = esi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0008E884u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E884: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E88Au); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E88A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x42C18ECB);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0008E89Du); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E89D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E8A3u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E8A3: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x74) = ecx;
    PUSH32(esp, 0x3543808E);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    MEM32(edi + 0x6C) = ebx;
    MEM32(edi + 0x70) = ebp;
    MEM32(edi + 0x78) = edx;
    MEM32(edi + 0x7C) = eax;
    PUSH32(esp, 0x0008E8CDu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008E8CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E905; /* je: equal / zero */

loc_0008E8D3: ;
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0x2FF7D4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0008E8EEu); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0008E8EE: ;
    edx = MEM32(edi + 4);
    ecx = edi + 4;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008E8FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E8F9u); } /* indirect call */
    }

loc_0008E8FC: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0008E905u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008E905: ;
    PUSH32(esp, 0xB2666347u);
    ecx = esi;
    PUSH32(esp, 0x0008E911u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008E911: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E917u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008E917: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E940; /* je: equal / zero */

loc_0008E920: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008E926u); RECOMP_ABI_CALL(0x0003CF00u, sub_0003CF00); /* call 0x0003CF00 */

loc_0008E926: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E940; /* je: equal / zero */

loc_0008E92D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008E937u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_0008E937: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x80) = eax;

loc_0008E940: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008E950
 * Original: 0x0008E950 - 0x0008E9F2 (162 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E950: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    eax = MEM32(edi + 0x35B0);
    PUSH32(esp, 1);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008E979u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0008E979: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E98Au); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008E98A: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x3D088889);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0008E99Du); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008E99D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8DB1C44);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008E9A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E9A6u); } /* indirect call */
    }

loc_0008E9A9: ;
    ecx = eax;
    PUSH32(esp, 0x0008E9B0u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008E9B0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008E9B8u); RECOMP_ABI_CALL(0x0008E580u, sub_0008E580); /* call 0x0008E580 */

loc_0008E9B8: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E9DB; /* je: equal / zero */

loc_0008E9C2: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E9CBu); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008E9CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E9DB; /* je: equal / zero */

loc_0008E9D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008E9D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008E9D6u); } /* indirect call */
    }

loc_0008E9D9: ;
    edi = eax;

loc_0008E9DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x84) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0008E9EF; /* je: equal / zero */

loc_0008E9E5: ;
    MEM32(edi + 0x1C0) = MEM32(edi + 0x1C0) | 0x80000;
    _fa = (uint32_t)(MEM32(edi + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0008E9EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EA00
 * Original: 0x0008EA00 - 0x0008EAAE (174 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EA00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    eax = MEM32(edi + 0x35B0);
    PUSH32(esp, 1);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EA29u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0008EA29: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EA3Au); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008EA3A: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EA55; /* je: equal / zero */

loc_0008EA41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EA47u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0008EA47: ;
    ecx = eax;
    PUSH32(esp, 0x0008EA4Eu); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_0008EA4E: ;
    MEM32(esi + 0x3C) = 0;

loc_0008EA55: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EA78; /* je: equal / zero */

loc_0008EA5F: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EA68u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008EA68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EA78; /* je: equal / zero */

loc_0008EA6F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008EA76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EA73u); } /* indirect call */
    }

loc_0008EA76: ;
    edi = eax;

loc_0008EA78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x84) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0008EAAB; /* je: equal / zero */

loc_0008EA82: ;
    MEM32(edi + 0x1C0) = MEM32(edi + 0x1C0) & 0xFFF7FFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x84);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x428603F5);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0008EAA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EA9Eu); } /* indirect call */
    }

loc_0008EAA1: ;
    MEM32(esi + 0x84) = 0;

loc_0008EAAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EAB0
 * Original: 0x0008EAB0 - 0x0008EAE3 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EAB0(void)
{

loc_0008EAB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x309F10); /* addss */
    ecx = esi;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008EACEu); RECOMP_ABI_CALL(0x0008E720u, sub_0008E720); /* call 0x0008E720 */

loc_0008EACE: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x3D088889);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0008EAE1u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008EAE1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EAF0
 * Original: 0x0008EAF0 - 0x0008EB95 (165 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EAF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    eax = MEM32(edi + 0x35B0);
    PUSH32(esp, 1);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EB19u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0008EB19: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EB2Au); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008EB2A: ;
    ecx = esi;
    PUSH32(esp, 0x0008EB31u); RECOMP_ABI_CALL(0x0008E2D0u, sub_0008E2D0); /* call 0x0008E2D0 */

loc_0008EB31: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008EB3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EB39u); } /* indirect call */
    }

loc_0008EB3C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EB5A; /* je: equal / zero */

loc_0008EB42: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008EB49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EB46u); } /* indirect call */
    }

loc_0008EB49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EB4Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008EB4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008EB5Au); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008EB5A: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0008EB63u); RECOMP_ABI_CALL(0x0008E3F0u, sub_0008E3F0); /* call 0x0008E3F0 */

loc_0008EB63: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EB6Du); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008EB6D: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008EB77u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008EB77: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78188F1A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008EB83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EB80u); } /* indirect call */
    }

loc_0008EB83: ;
    ecx = eax;
    PUSH32(esp, 0x0008EB8Au); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008EB8A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008EB92u); RECOMP_ABI_CALL(0x0008E640u, sub_0008E640); /* call 0x0008E640 */

loc_0008EB92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EBA0
 * Original: 0x0008EBA0 - 0x0008EC4E (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EBA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    eax = MEM32(edi + 0x35B0);
    PUSH32(esp, 1);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EBC9u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0008EBC9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EBDAu); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008EBDA: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008EBE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EBE2u); } /* indirect call */
    }

loc_0008EBE5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EC03; /* je: equal / zero */

loc_0008EBEB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008EBF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EBEFu); } /* indirect call */
    }

loc_0008EBF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EBF8u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008EBF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008EC03u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008EC03: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EC0Du); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008EC0D: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EC17u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008EC17: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EC4B; /* je: equal / zero */

loc_0008EC21: ;
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) & 0xFFF7FFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x84);
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x428603F5);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008EC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EC3Eu); } /* indirect call */
    }

loc_0008EC41: ;
    MEM32(esi + 0x84) = 0;

loc_0008EC4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EC50
 * Original: 0x0008EC50 - 0x0008ECBA (106 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EC50: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008EC5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EC5Au); } /* indirect call */
    }

loc_0008EC5D: ;
    esi = MEM32(esp + 0xC);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EC7F; /* je: equal / zero */

loc_0008EC67: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008EC6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EC6Bu); } /* indirect call */
    }

loc_0008EC6E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EC74u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008EC74: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008EC7Fu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008EC7F: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0008EC88u); RECOMP_ABI_CALL(0x0008E3F0u, sub_0008E3F0); /* call 0x0008E3F0 */

loc_0008EC88: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EC92u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008EC92: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008EC9Cu); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008EC9C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78188F1A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008ECA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ECA5u); } /* indirect call */
    }

loc_0008ECA8: ;
    ecx = eax;
    PUSH32(esp, 0x0008ECAFu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008ECAF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008ECB7u); RECOMP_ABI_CALL(0x0008E640u, sub_0008E640); /* call 0x0008E640 */

loc_0008ECB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008ECC0
 * Original: 0x0008ECC0 - 0x0008EDFE (318 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008ECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008ECC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xD9A51AB4u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008ECDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ECD8u); } /* indirect call */
    }

loc_0008ECDB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ECE2u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008ECE2: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008ECEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ECEAu); } /* indirect call */
    }

loc_0008ECED: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008ED1F; /* jle: less or equal (signed <=) */

loc_0008ECF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    /* nop */

loc_0008ED00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, 0x5735C768);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED16u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008ED16: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008ED00; /* jne: not equal / not zero */

loc_0008ED1F: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED29u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008ED29: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED33u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0008ED33: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED3Au); RECOMP_ABI_CALL(0x0008E510u, sub_0008E510); /* call 0x0008E510 */

loc_0008ED3A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF0A2BEEDu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008ED46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ED43u); } /* indirect call */
    }

loc_0008ED46: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED4Du); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008ED4D: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED55u); RECOMP_ABI_CALL(0x0008E640u, sub_0008E640); /* call 0x0008E640 */

loc_0008ED55: ;
    eax = MEM32(0x373370);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008ED62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ED5Fu); } /* indirect call */
    }

loc_0008ED62: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED69u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008ED69: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008ED77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ED74u); } /* indirect call */
    }

loc_0008ED77: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED7Eu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008ED7E: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED8Du); RECOMP_ABI_CALL(0x00182440u, sub_00182440); /* call 0x00182440 */

loc_0008ED8D: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008ED96u); RECOMP_ABI_CALL(0x00183050u, sub_00183050); /* call 0x00183050 */

loc_0008ED96: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EDBA; /* je: equal / zero */

loc_0008EDA0: ;
    eax = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0008EDAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EDA9u); } /* indirect call */
    }

loc_0008EDAF: ;
    ecx = MEM32(esi + 0x80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EDBAu); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_0008EDBA: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EDEE; /* je: equal / zero */

loc_0008EDC4: ;
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) & 0xFFF7FFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x84);
    edx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x428603F5);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008EDE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EDE1u); } /* indirect call */
    }

loc_0008EDE4: ;
    MEM32(esi + 0x84) = 0;

loc_0008EDEE: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008EDF7u); RECOMP_ABI_CALL(0x00182520u, sub_00182520); /* call 0x00182520 */

loc_0008EDF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EE00
 * Original: 0x0008EE00 - 0x0008EEDB (219 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EE00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008EE21; /* je: equal / zero */

loc_0008EE0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE13u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0008EE13: ;
    ecx = eax;
    PUSH32(esp, 0x0008EE1Au); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_0008EE1A: ;
    MEM32(esi + 0x3C) = 0;

loc_0008EE21: ;
    edi = MEM32(0x51D65C);
    eax = MEM32(edi + 0x35B0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 1);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EE44u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0008EE44: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE55u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008EE55: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008EE60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EE5Du); } /* indirect call */
    }

loc_0008EE60: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EE7E; /* je: equal / zero */

loc_0008EE66: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008EE6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EE6Au); } /* indirect call */
    }

loc_0008EE6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE73u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008EE73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008EE7Eu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008EE7E: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x40) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0008EEA5; /* je: equal / zero */

loc_0008EE8C: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE95u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008EE95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008EEA5; /* je: equal / zero */

loc_0008EE9C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008EEA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EEA0u); } /* indirect call */
    }

loc_0008EEA3: ;
    edi = eax;

loc_0008EEA5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x84) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0008EED8; /* je: equal / zero */

loc_0008EEAF: ;
    MEM32(edi + 0x1C0) = MEM32(edi + 0x1C0) & 0xFFF7FFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x84);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x428603F5);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0008EECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008EECBu); } /* indirect call */
    }

loc_0008EECE: ;
    MEM32(esi + 0x84) = 0;

loc_0008EED8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EEE0
 * Original: 0x0008EEE0 - 0x0008EF88 (168 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008EEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = ebx;
    ebp = esi + 0xC;
    ecx = ebp;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008EF0Au); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008EF0A: ;
    ecx = esi + 0x24;
    MEM32(esi) = 0x309F2C;
    MEM32(edi) = 0x309F14;
    PUSH32(esp, 0x0008EF1Eu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0008EF1E: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x0008EF26u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0008EF26: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008EF35u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008EF35: ;
    PUSH32(esp, 0x309EB0);
    ecx = ebp;
    PUSH32(esp, 0x0008EF41u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008EF41: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008EF47u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008EF47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(esi + 0x41) = LO8(ebx);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x84) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008EF90
 * Original: 0x0008EF90 - 0x0008EFFD (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x309F2C;
    MEM32(edi) = 0x309F14;
    if (CMP_EQ(_fa, _fb)) goto loc_0008EFC0; /* je: equal / zero */

loc_0008EFAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EFB3u); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_0008EFB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = 0;

loc_0008EFC0: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x0008EFC8u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008EFC8: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x0008EFD0u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008EFD0: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008EFE2u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008EFE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008EFEDu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008EFED: ;
    ecx = edi;
    PUSH32(esp, 0x0008EFF4u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008EFF4: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F000
 * Original: 0x0008F000 - 0x0008F068 (104 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F000: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F047; /* jne: not equal / not zero */

loc_0008F008: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x0008F013u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008F013: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F039; /* je: equal / zero */

loc_0008F01E: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008F026u); RECOMP_ABI_CALL(0x0008EEE0u, sub_0008EEE0); /* call 0x0008EEE0 */

loc_0008F026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F039; /* je: equal / zero */

loc_0008F02A: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F035u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008F035: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008F039: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F043u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008F043: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008F047: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F065; /* jne: not equal / not zero */

loc_0008F04C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008F059u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008F059: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F065; /* je: equal / zero */

loc_0008F05D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008F065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F063u); } /* indirect call */
    }

loc_0008F065: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F070
 * Original: 0x0008F070 - 0x0008F1D8 (360 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xA4) = 0x2FF02C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0ACu); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_0008F0AC: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 7;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008F0BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F0B8u); } /* indirect call */
    }

loc_0008F0BB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0C1u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0008F0C1: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008F0D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F0D4u); } /* indirect call */
    }

loc_0008F0D7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0DEu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008F0DE: ;
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x18) = 0xB;
    if (CMP_EQ(_fa, _fb)) goto loc_0008F0FE; /* je: equal / zero */

loc_0008F0F1: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F0FEu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008F0FE: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    MEM32(esp + 0xA8) = ebx;
    MEM8(esp + 0x21) = 1;
    MEM32(esp + 0x1C) = 0x3E4467B9;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008F11Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F118u); } /* indirect call */
    }

loc_0008F11B: ;
    MEM32(esp + 0xE4) = eax;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    MEM8(esp + 0xEC) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F132u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0008F132: ;
    edi = eax;
    eax = MEM32(esi + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC60B5AF9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC60B5AF9u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F15A; /* jne: not equal / not zero */

loc_0008F141: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6C02BE35);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008F14Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F14Au); } /* indirect call */
    }

loc_0008F14D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F154u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008F154: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F15A; /* je: equal / zero */

loc_0008F158: ;
    edi = eax;

loc_0008F15A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F185; /* jne: not equal / not zero */

loc_0008F15E: ;
    PUSH32(esp, 0x3099B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F168u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008F168: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0x309F3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F176u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008F176: ;
    PUSH32(esp, 0x3099B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F180u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0008F180: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008F193;

loc_0008F185: ;
    ecx = esp + 0x22;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F190u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0008F190: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008F193: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008F19Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F19Bu); } /* indirect call */
    }

loc_0008F19E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F1AE; /* je: equal / zero */

loc_0008F1A2: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F1AEu); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_0008F1AE: ;
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0xA4) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0008F1D1; /* je: equal / zero */

loc_0008F1C4: ;
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F1D1u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008F1D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F1E0
 * Original: 0x0008F1E0 - 0x0008F1F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F1E0(void)
{

loc_0008F1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0008F1ECu); RECOMP_ABI_CALL(0x0008F070u, sub_0008F070); /* call 0x0008F070 */

loc_0008F1EC: ;
    MEM8(esi + 0x40) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F200
 * Original: 0x0008F200 - 0x0008F208 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F200: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008F210(); return; /* tail jmp 0x0008F210 */

}

/**
 * sub_0008F210
 * Original: 0x0008F210 - 0x0008F22E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008F218u); RECOMP_ABI_CALL(0x0008EF90u, sub_0008EF90); /* call 0x0008EF90 */

loc_0008F218: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F228; /* je: equal / zero */

loc_0008F21F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F225u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008F225: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008F228: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F230
 * Original: 0x0008F230 - 0x0008F231 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F230(void)
{

loc_0008F230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F240
 * Original: 0x0008F240 - 0x0008F26F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F240: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F25C; /* je: equal / zero */

loc_0008F248: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41700000);
    ecx = eax + 0x24;
    PUSH32(esp, 0x0008F25Bu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008F25B: ;
    esp += 4; return; /* ret */

loc_0008F25C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41700000);
    ecx = eax + 0x24;
    PUSH32(esp, 0x0008F26Eu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008F26E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F270
 * Original: 0x0008F270 - 0x0008F2AE (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008F27Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F279u); } /* indirect call */
    }

loc_0008F27C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F2AA; /* je: equal / zero */

loc_0008F280: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008F287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F284u); } /* indirect call */
    }

loc_0008F287: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008F28Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F28Bu); } /* indirect call */
    }

loc_0008F28E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008F2AA; /* jle: less or equal (signed <=) */

loc_0008F292: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008F299u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F296u); } /* indirect call */
    }

loc_0008F299: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008F2A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F29Fu); } /* indirect call */
    }

loc_0008F2A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F2AA; /* je: equal / zero */

loc_0008F2A6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008F2AA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F2B0
 * Original: 0x0008F2B0 - 0x0008F2B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F2B0(void)
{

loc_0008F2B0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F2C0
 * Original: 0x0008F2C0 - 0x0008F2C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F2C0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0008F2D0
 * Original: 0x0008F2D0 - 0x0008F30F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30A06C;
    MEM32(esi + 8) = 0x30A068;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008F2EDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008F2ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x24;
    PUSH32(esp, 0x0008F2F8u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008F2F8: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008F300u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008F300: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0008F310
 * Original: 0x0008F310 - 0x0008F31B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F310: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0008F320
 * Original: 0x0008F320 - 0x0008F32A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F320: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008F330
 * Original: 0x0008F330 - 0x0008F365 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008F330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41700000);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0008F343u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008F343: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008F34Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F347u); } /* indirect call */
    }

loc_0008F34A: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xA3503E39u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008F35Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F35A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF224)); /* fmul dword ptr [0x2ff224] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F370
 * Original: 0x0008F370 - 0x0008F428 (184 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F370(void)
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

loc_0008F370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0x2FF77C;
    ebx = esi + 0x10;
    ecx = ebx;
    MEM32(esi) = 0x30A06C;
    MEM32(edi) = 0x30A068;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0008F3A3u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008F3A3: ;
    ebp = esi + 0x24;
    ecx = ebp;
    PUSH32(esp, 0x0008F3ADu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0008F3AD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    ecx = ebx;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008F3BDu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008F3BD: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0008F3D0u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008F3D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008F3DD; /* je: equal / zero */

loc_0008F3D6: ;
    PUSH32(esp, 0x30A050);
    goto loc_0008F3E2;

loc_0008F3DD: ;
    PUSH32(esp, 0x309FFC);

loc_0008F3E2: ;
    PUSH32(esp, 0x0008F3E7u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008F3E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F3EDu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008F3ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41700000);
    ecx = ebp;
    PUSH32(esp, 0x0008F3FFu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008F3FF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008F406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F403u); } /* indirect call */
    }

loc_0008F406: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xA3503E39u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008F416u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F416: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF224)); /* fmul dword ptr [0x2ff224] */
    POP32(esp, edi);
    eax = esi;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F430
 * Original: 0x0008F430 - 0x0008F48E (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F430: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F46D; /* jne: not equal / not zero */

loc_0008F438: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0008F440u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008F440: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F45F; /* je: equal / zero */

loc_0008F44B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008F453u); RECOMP_ABI_CALL(0x0008F370u, sub_0008F370); /* call 0x0008F370 */

loc_0008F453: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F45Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008F45B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008F45F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F469u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008F469: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008F46D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F48B; /* jne: not equal / not zero */

loc_0008F472: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008F47Fu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008F47F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F48B; /* je: equal / zero */

loc_0008F483: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008F48Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F489u); } /* indirect call */
    }

loc_0008F48B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F485
 * Original: 0x0008F485 - 0x0008F48E (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F485(void)
{

loc_0008F485: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008F48Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F489u); } /* indirect call */
    }

loc_0008F48B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F490
 * Original: 0x0008F490 - 0x0008F559 (201 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x681E73A6);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F4B3u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008F4B3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    edi = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0008F4DD; /* jle: less or equal (signed <=) */

loc_0008F4BB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAC016BC1u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008F4C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F4C5u); } /* indirect call */
    }

loc_0008F4C8: ;
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F4D0u); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_0008F4D0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F4D6u); RECOMP_ABI_CALL(0x00035420u, sub_00035420); /* call 0x00035420 */

loc_0008F4D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F551; /* je: equal / zero */

loc_0008F4DD: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F4EDu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008F4ED: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F4F6u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_0008F4F6: ;
    eax = MEM32(esi + 0x3C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F50Bu); RECOMP_ABI_CALL(0x00016830u, sub_00016830); /* call 0x00016830 */

loc_0008F50B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008F512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F50Fu); } /* indirect call */
    }

loc_0008F512: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008F51Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F51Bu); } /* indirect call */
    }

loc_0008F51E: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x28) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0008F538; /* je: equal / zero */

loc_0008F52E: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F538u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008F538: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x20) = 0x2FF1B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F551u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_0008F551: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F560
 * Original: 0x0008F560 - 0x0008F8C1 (865 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F560(void)
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

loc_0008F560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F576u); RECOMP_ABI_CALL(0x0007E760u, sub_0007E760); /* call 0x0007E760 */

loc_0008F576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C38C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C38C0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F5CC; /* je: equal / zero */

loc_0008F57E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C38C0) = eax;

loc_0008F585: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C38C4) = ecx;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x55E59C6);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F59Fu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008F59F: ;
    ecx = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0008F804; /* je: equal / zero */

loc_0008F5AA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008F701; /* je: equal / zero */

loc_0008F5B1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0008F603; /* je: equal / zero */

loc_0008F5B4: ;
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, 0x30A084);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F5C4u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0008F5C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008F8AA;

loc_0008F5CC: ;
    ecx = MEM32(0x3C38C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008F585; /* jle: less or equal (signed <=) */

loc_0008F5D6: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F5E5u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0008F5E5: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    ecx = ebx + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F5FCu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008F5FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0008F603: ;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(ecx + 4);
    eax = MEM32(0x3E8D54);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F61Eu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008F61E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD184E98Fu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F62Du); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F62D: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0xA683D919u);
    ecx = esi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F643u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F643: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x3F8A88A3);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F659u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F659: ;
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008F8AA; /* jle: less or equal (signed <=) */

loc_0008F671: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F677u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0008F677: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F6EF; /* je: equal / zero */

loc_0008F67E: ;
    esi = eax + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F6EF; /* je: equal / zero */

loc_0008F685: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0008F68Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F689u); } /* indirect call */
    }

loc_0008F68C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F6EF; /* je: equal / zero */

loc_0008F690: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F6EF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008F6C3: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F6EF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008F6D5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F6EF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008F6E7: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F6EFu); RECOMP_ABI_CALL(0x0008F490u, sub_0008F490); /* call 0x0008F490 */

loc_0008F6EF: ;
    eax = MEM32(esp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F671; /* jl: less (signed <) */

loc_0008F6FC: ;
    goto loc_0008F8AA;

loc_0008F701: ;
    ecx = MEM32(0x3E8D54);
    edx = MEM32(ebx + 0xC);
    esi = MEM32(edx + 4);
    eax = esp + 0x20;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F71Du); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008F71D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F72Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F72C: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x5A5FC396);
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F742u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F742: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, 0xC5AF0932u);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F75Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F75A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008F8AA; /* jle: less or equal (signed <=) */

loc_0008F774: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F77Au); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0008F77A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F7F2; /* je: equal / zero */

loc_0008F781: ;
    esi = eax + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F7F2; /* je: equal / zero */

loc_0008F788: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0008F78Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F78Cu); } /* indirect call */
    }

loc_0008F78F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F7F2; /* je: equal / zero */

loc_0008F793: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F7C8u); RECOMP_ABI_CALL(0x00266320u, sub_00266320); /* call 0x00266320 */

loc_0008F7C8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0008F7F2; /* jb: below (unsigned <) */

loc_0008F7D2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F7F2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008F7E3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008F7F2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0008F7EA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F7F2u); RECOMP_ABI_CALL(0x0008F490u, sub_0008F490); /* call 0x0008F490 */

loc_0008F7F2: ;
    eax = MEM32(esp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F774; /* jl: less (signed <) */

loc_0008F7FF: ;
    goto loc_0008F8AA;

loc_0008F804: ;
    ecx = MEM32(0x3E8D54);
    edx = MEM32(ebx + 0xC);
    esi = MEM32(edx + 4);
    eax = esp + 0x20;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F820u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008F820: ;
    PUSH32(esp, 0x3CD06B6C);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F82Du); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008F82D: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008F8AA; /* jle: less or equal (signed <=) */

loc_0008F841: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F847u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0008F847: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F8A1; /* je: equal / zero */

loc_0008F84E: ;
    esi = eax + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F8A1; /* je: equal / zero */

loc_0008F855: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0008F85Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F859u); } /* indirect call */
    }

loc_0008F85C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F8A1; /* je: equal / zero */

loc_0008F860: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F88Fu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_0008F88F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0008F8A1; /* jb: below (unsigned <) */

loc_0008F899: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F8A1u); RECOMP_ABI_CALL(0x0008F490u, sub_0008F490); /* call 0x0008F490 */

loc_0008F8A1: ;
    eax = MEM32(esp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F841; /* jl: less (signed <) */

loc_0008F8AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41700000);
    ecx = ebx + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008F8BAu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0008F8BA: ;
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
 * sub_0008F8D0
 * Original: 0x0008F8D0 - 0x0008F8E7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F8D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F8E0; /* je: equal / zero */

loc_0008F8D8: ;
    ecx = eax + -8;
    g_seh_ebp = ebp; sub_0008F560(); return; /* tail jmp 0x0008F560 */

loc_0008F8E0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_0008F560(); return; /* tail jmp 0x0008F560 */

}

/**
 * sub_0008F8F0
 * Original: 0x0008F8F0 - 0x0008F8F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F8F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008F900(); return; /* tail jmp 0x0008F900 */

}

/**
 * sub_0008F900
 * Original: 0x0008F900 - 0x0008F954 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30A06C;
    MEM32(esi + 8) = 0x30A068;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008F91Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008F91D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x24;
    PUSH32(esp, 0x0008F928u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008F928: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0008F930u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008F930: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x0008F93Eu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008F93E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F94E; /* je: equal / zero */

loc_0008F945: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F94Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008F94B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008F94E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F960
 * Original: 0x0008F960 - 0x0008F961 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F960(void)
{

loc_0008F960: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F970
 * Original: 0x0008F970 - 0x0008F984 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F970: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB16BD083u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB16BD083u (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F990
 * Original: 0x0008F990 - 0x0008F9DF (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x697377CE);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008F99Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F99Cu); } /* indirect call */
    }

loc_0008F99F: ;
    ecx = eax;
    PUSH32(esp, 0x0008F9A6u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008F9A6: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008F9B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F9AEu); } /* indirect call */
    }

loc_0008F9B1: ;
    ebx = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008F9DB; /* jle: less or equal (signed <=) */

loc_0008F9B9: ;
    esi = edi + 4;
    edi = eax;
    edi = edi;

loc_0008F9C0: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x1EA1752);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F9D2u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008F9D2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008F9C0; /* jne: not equal / not zero */

loc_0008F9DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F9E0
 * Original: 0x0008F9E0 - 0x0008FA31 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F9E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008F9F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008F9F0u); } /* indirect call */
    }

loc_0008F9F3: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0008FA03u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008FA03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FA2C; /* je: equal / zero */

loc_0008FA07: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 2;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008FA23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008FA20u); } /* indirect call */
    }

loc_0008FA23: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0008FA2Cu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0008FA2C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008FA40
 * Original: 0x0008FA40 - 0x0008FA49 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FA40: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008F990(); return; /* tail jmp 0x0008F990 */

}

/**
 * sub_0008FA50
 * Original: 0x0008FA50 - 0x0008FBD5 (389 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FA50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    ebx = ebp + 4;
    MEM32(ebx) = 0x2FF764;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 4) = esi;
    PUSH32(esp, edi);
    ecx = ebp + 0xC;
    MEM32(ebp) = 0x30A0BC;
    MEM32(ebx) = 0x30A0CC;
    PUSH32(esp, 0x0008FA7Au); RECOMP_ABI_CALL(0x0014C120u, sub_0014C120); /* call 0x0014C120 */

loc_0008FA7A: ;
    PUSH32(esp, 0x3C);
    MEM32(ebp) = 0x30A0BC;
    MEM32(ebx) = 0x30A0CC;
    PUSH32(esp, 0x0008FA8Eu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008FA8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FAB1; /* je: equal / zero */

loc_0008FA95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8F960);
    PUSH32(esp, 0x8F960);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FF758);
    ecx = eax;
    PUSH32(esp, 0x0008FAADu); RECOMP_ABI_CALL(0x0014BEE0u, sub_0014BEE0); /* call 0x0014BEE0 */

loc_0008FAAD: ;
    edi = eax;
    goto loc_0008FAB3;

loc_0008FAB1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008FAB3: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0008FABAu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008FABA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FADB; /* je: equal / zero */

loc_0008FAC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8F960);
    PUSH32(esp, 0x8F960);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FF750);
    ecx = eax;
    PUSH32(esp, 0x0008FAD9u); RECOMP_ABI_CALL(0x0014BEE0u, sub_0014BEE0); /* call 0x0014BEE0 */

loc_0008FAD9: ;
    esi = eax;

loc_0008FADB: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ecx = ebp + 0xC;
    MEM32(ebp + 0x24) = eax;
    PUSH32(esp, 0x0008FAEBu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008FAEB: ;
    PUSH32(esp, edi);
    ecx = ebp + 0xC;
    PUSH32(esp, 0x0008FAF4u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008FAF4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008FAFAu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008FAFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0008FB06u); RECOMP_ABI_CALL(0x0014C140u, sub_0014C140); /* call 0x0014C140 */

loc_0008FB06: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F960);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0008FB19u); RECOMP_ABI_CALL(0x0014BF40u, sub_0014BF40); /* call 0x0014BF40 */

loc_0008FB19: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F9E0);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0008FB2Cu); RECOMP_ABI_CALL(0x0014BF40u, sub_0014BF40); /* call 0x0014BF40 */

loc_0008FB2C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F960);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F1066FB);
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x0008FB42u); RECOMP_ABI_CALL(0x0014BF40u, sub_0014BF40); /* call 0x0014BF40 */

loc_0008FB42: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0xCA878B73u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008FB56u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008FB56: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0008FB68u); RECOMP_ABI_CALL(0x0014C140u, sub_0014C140); /* call 0x0014C140 */

loc_0008FB68: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008FBAB; /* jle: less or equal (signed <=) */

loc_0008FB72: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_0008FB80: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8FA40);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0008FB97u); RECOMP_ABI_CALL(0x0014BF40u, sub_0014BF40); /* call 0x0014BF40 */

loc_0008FB97: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0008FB80; /* jl: less (signed <) */

loc_0008FBAB: ;
    ebx = ebp + 0xC;
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0x0008FBB7u); RECOMP_ABI_CALL(0x0014C190u, sub_0014C190); /* call 0x0014C190 */

loc_0008FBB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0008FBC1u); RECOMP_ABI_CALL(0x0014BFD0u, sub_0014BFD0); /* call 0x0014BFD0 */

loc_0008FBC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x0008FBCBu); RECOMP_ABI_CALL(0x0014BFD0u, sub_0014BFD0); /* call 0x0014BFD0 */

loc_0008FBCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008FBE0
 * Original: 0x0008FBE0 - 0x0008FC14 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30A0BC;
    MEM32(edi) = 0x30A0CC;
    PUSH32(esp, 0x0008FBF9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008FBF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008FC04u); RECOMP_ABI_CALL(0x0014C280u, sub_0014C280); /* call 0x0014C280 */

loc_0008FC04: ;
    ecx = edi;
    PUSH32(esp, 0x0008FC0Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008FC0B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FC20
 * Original: 0x0008FC20 - 0x0008FC8F (111 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FC20: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008FC6E; /* jne: not equal / not zero */

loc_0008FC28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x30A0E4);
    PUSH32(esp, 0x0008FC3Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0008FC3A: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FC60; /* je: equal / zero */

loc_0008FC45: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0008FC4Du); RECOMP_ABI_CALL(0x0008FA50u, sub_0008FA50); /* call 0x0008FA50 */

loc_0008FC4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FC60; /* je: equal / zero */

loc_0008FC51: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008FC5Cu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008FC5C: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008FC60: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008FC6Au); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008FC6A: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0008FC6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008FC8C; /* jne: not equal / not zero */

loc_0008FC73: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008FC80u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008FC80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FC8C; /* je: equal / zero */

loc_0008FC84: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008FC8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008FC8Au); } /* indirect call */
    }

loc_0008FC8C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FC90
 * Original: 0x0008FC90 - 0x0008FC99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FC90: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0008FCA0
 * Original: 0x0008FCA0 - 0x0008FCA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FCA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0008FCB0
 * Original: 0x0008FCB0 - 0x0008FCB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FCB0(void)
{

loc_0008FCB0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FCC0
 * Original: 0x0008FCC0 - 0x0008FCC9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FCC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FCC0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008FCC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008FCC2u); } /* indirect call */
    }

loc_0008FCC5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008FCD0
 * Original: 0x0008FCD0 - 0x0008FCD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FCD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008FCE0(); return; /* tail jmp 0x0008FCE0 */

}

/**
 * sub_0008FCE0
 * Original: 0x0008FCE0 - 0x0008FD28 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FCE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30A0BC;
    MEM32(edi) = 0x30A0CC;
    PUSH32(esp, 0x0008FCF9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008FCF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0008FD04u); RECOMP_ABI_CALL(0x0014C280u, sub_0014C280); /* call 0x0014C280 */

loc_0008FD04: ;
    ecx = edi;
    PUSH32(esp, 0x0008FD0Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008FD0B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_0008FD21; /* je: equal / zero */

loc_0008FD18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008FD1Eu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008FD1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008FD21: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008FD30
 * Original: 0x0008FD30 - 0x0008FD35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FD30: ;
    g_seh_ebp = ebp; sub_0003C840(); return; /* tail jmp 0x0003C840 */

}

/**
 * sub_0008FD40
 * Original: 0x0008FD40 - 0x0008FD4A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FD40(void)
{

loc_0008FD40: ;
    eax = MEM32(ecx + 0x120);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FD50
 * Original: 0x0008FD50 - 0x0008FD59 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FD50: ;
    eax = MEM32(ecx + 0x40);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0008FD60
 * Original: 0x0008FD60 - 0x0008FD7E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FD60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC0);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0008FD76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008FD73u); } /* indirect call */
    }

loc_0008FD76: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003CB80(); return; /* tail jmp 0x0003CB80 */

}

/**
 * sub_0008FD80
 * Original: 0x0008FD80 - 0x0008FDB8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FD80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FDA2; /* je: equal / zero */

loc_0008FD88: ;
    edx = eax + 0xC8;
    ecx = eax + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC4);
    PUSH32(esp, 0x0008FDA1u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_0008FDA1: ;
    esp += 4; return; /* ret */

loc_0008FDA2: ;
    edx = eax + 0xC8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC4);
    PUSH32(esp, 0x0008FDB7u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_0008FDB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008FDC0
 * Original: 0x0008FDC0 - 0x0008FE01 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FDC0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008FDC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008FDC6u); } /* indirect call */
    }

loc_0008FDC9: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008FDEE; /* je: equal / zero */

loc_0008FDD3: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0003CEB0(); return; /* tail jmp 0x0003CEB0 */

loc_0008FDEE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0003CEB0(); return; /* tail jmp 0x0003CEB0 */

}

/**
 * sub_0008FE10
 * Original: 0x0008FE10 - 0x0008FE2D (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FE10: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0xC8) = 0;
    MEM8(eax + 0x134) = 1;
    ecx = eax + 0x10;
    g_seh_ebp = ebp; sub_0010CCD0(); return; /* tail jmp 0x0010CCD0 */

}

/**
 * sub_0008FE30
 * Original: 0x0008FE30 - 0x0008FE31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FE30(void)
{

loc_0008FE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008FE40
 * Original: 0x0008FE40 - 0x0008FE94 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xE4;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, eax);
    MEM32(esi) = 0x30A4B0;
    MEM32(edi) = 0x30A360;
    MEM32(esi + 0x18) = 0x30A354;
    MEM32(esi + 0xC0) = 0x30A310;
    MEM32(eax) = 0x30A2F4;
    PUSH32(esp, 0x0008FE76u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008FE76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x124;
    PUSH32(esp, 0x0008FE84u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008FE84: ;
    ecx = edi;
    PUSH32(esp, 0x0008FE8Bu); RECOMP_ABI_CALL(0x0010CC60u, sub_0010CC60); /* call 0x0010CC60 */

loc_0008FE8B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FEA0
 * Original: 0x0008FEA0 - 0x0008FEAE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FEA0: ;
    eax = MEM32(ecx + 0x110);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0008FEB0
 * Original: 0x0008FEB0 - 0x0008FEBD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FEB0: ;
    eax = MEM32(ecx + 0x120);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008FEC0
 * Original: 0x0008FEC0 - 0x0008FEF4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FEC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x120);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x0008FEDBu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008FEDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FEF0; /* je: equal / zero */

loc_0008FEDF: ;
    SET_LO8(eax, MEM8(esi + 0x134));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FEF0; /* je: equal / zero */

loc_0008FEE9: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008FEF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FF00
 * Original: 0x0008FF00 - 0x0008FF34 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FF00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x120);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x0008FF1Bu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008FF1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FF2D; /* je: equal / zero */

loc_0008FF1F: ;
    SET_LO8(eax, MEM8(esi + 0x134));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FF2D; /* je: equal / zero */

loc_0008FF29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0008FF2D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008FF40
 * Original: 0x0008FF40 - 0x0009002C (236 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FF40: ;
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
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA4458B81u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FF6Cu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008FF6C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FF72u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008FF72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FF7Du); RECOMP_ABI_CALL(0x0010CEF0u, sub_0010CEF0); /* call 0x0010CEF0 */

loc_0008FF7D: ;
    MEM32(esi + 0x120) = ebx;
    ebx = esi + 0x124;
    ecx = ebx;
    MEM32(esi) = 0x30A4B0;
    MEM32(edi) = 0x30A360;
    MEM32(esi + 0x18) = 0x30A354;
    MEM32(esi + 0xC0) = 0x30A310;
    MEM32(esi + 0xE4) = 0x30A2F4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FFB7u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008FFB7: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FFBFu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008FFBF: ;
    eax = MEM32(esi + 0x120);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FFD5u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008FFD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008FFE2; /* je: equal / zero */

loc_0008FFDB: ;
    PUSH32(esp, 0x30A25C);
    goto loc_0008FFE7;

loc_0008FFE2: ;
    PUSH32(esp, 0x30A2DC);

loc_0008FFE7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FFECu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008FFEC: ;
    eax = esi + 0xE4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008FFF8u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008FFF8: ;
    edx = MEM32(esi + 0x120);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    MEM8(esi + 0x134) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00090015u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00090015: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00090021u); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_00090021: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090030
 * Original: 0x00090030 - 0x00090070 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090030: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0xC34F0482u);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00090054u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_00090054: ;
    eax = MEM32(esi + 0x64);
    ecx = esi + 0x64;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00090062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009005Fu); } /* indirect call */
    }

loc_00090062: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0009006Bu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0009006B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090070
 * Original: 0x00090070 - 0x00090099 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x120);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0009008Bu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009008B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090097; /* je: equal / zero */

loc_0009008F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000901B0(); return; /* tail jmp 0x000901B0 */

loc_00090097: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000900A0
 * Original: 0x000900A0 - 0x000900A9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900A0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000901B0(); return; /* tail jmp 0x000901B0 */

}

/**
 * sub_000900B0
 * Original: 0x000900B0 - 0x00090124 (116 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000900B0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090103; /* jne: not equal / not zero */

loc_000900B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x140);
    PUSH32(esp, 0x30A4B4);
    PUSH32(esp, 0x000900CDu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000900CD: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000900F5; /* je: equal / zero */

loc_000900D8: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000900E0u); RECOMP_ABI_CALL(0x0008FF40u, sub_0008FF40); /* call 0x0008FF40 */

loc_000900E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000900F5; /* je: equal / zero */

loc_000900E4: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000900F1u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000900F1: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000900F5: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000900FFu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000900FF: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00090103: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090121; /* jne: not equal / not zero */

loc_00090108: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00090115u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00090115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090121; /* je: equal / zero */

loc_00090119: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00090121u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009011Fu); } /* indirect call */
    }

loc_00090121: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00090130
 * Original: 0x00090130 - 0x0009013E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090130: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009013B; /* je: equal / zero */

loc_00090134: ;
    eax = ecx + 0xD4;
    esp += 4; return; /* ret */

loc_0009013B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090140
 * Original: 0x00090140 - 0x00090148 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090140: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00090150
 * Original: 0x00090150 - 0x00090158 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090150: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00090220(); return; /* tail jmp 0x00090220 */

}

/**
 * sub_00090160
 * Original: 0x00090160 - 0x00090168 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090160: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00090220(); return; /* tail jmp 0x00090220 */

}

/**
 * sub_00090170
 * Original: 0x00090170 - 0x0009017B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090170: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00090220(); return; /* tail jmp 0x00090220 */

}

/**
 * sub_00090180
 * Original: 0x00090180 - 0x0009018B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090180: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00090130(); return; /* tail jmp 0x00090130 */

}

/**
 * sub_00090190
 * Original: 0x00090190 - 0x0009019B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090190: ;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xE4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00090220(); return; /* tail jmp 0x00090220 */

}

/**
 * sub_000901A0
 * Original: 0x000901A0 - 0x000901A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901A0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00018030(); return; /* tail jmp 0x00018030 */

}

/**
 * sub_000901B0
 * Original: 0x000901B0 - 0x00090220 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901B0(void)
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

loc_000901B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x120);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x735BAF9F);
    ecx = eax + 8;
    PUSH32(esp, 0x000901CAu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000901CA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00090203; /* jbe: below or equal (unsigned <=) */

loc_000901E4: ;
    edx = MEM32(esp + 4);
    ecx = esi + 0xE4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x889E28A0u);
    PUSH32(esp, edx);
    ecx = esi + 0xF0;
    PUSH32(esp, 0x00090200u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00090200: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00090203: ;
    MEM32(esi + 0xC8) = 0;
    MEM8(esi + 0x134) = 1;
    ecx = esi + 0x10;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0010CCD0(); return; /* tail jmp 0x0010CCD0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090220
 * Original: 0x00090220 - 0x0009023E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00090228u); RECOMP_ABI_CALL(0x0008FE40u, sub_0008FE40); /* call 0x0008FE40 */

loc_00090228: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090238; /* je: equal / zero */

loc_0009022F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00090235u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00090235: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00090238: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090240
 * Original: 0x00090240 - 0x00090241 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090240(void)
{

loc_00090240: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090250
 * Original: 0x00090250 - 0x0009025E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090250: ;
    PUSH32(esp, 0x30A5A8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009025Du); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009025D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090260
 * Original: 0x00090260 - 0x000902D5 (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090260: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5D55D58C);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009026Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009026Au); } /* indirect call */
    }

loc_0009026D: ;
    ecx = eax;
    PUSH32(esp, 0x00090274u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090299; /* je: equal / zero */

loc_00090278: ;
    PUSH32(esp, 0x3099B0);
    PUSH32(esp, 0x00090282u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00090282: ;
    PUSH32(esp, 0x30A620);
    PUSH32(esp, 0x0009028Cu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0009028C: ;
    PUSH32(esp, 0x3099B0);
    PUSH32(esp, 0x00090296u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00090296: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00090299: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBF0639C6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000902A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000902A2u); } /* indirect call */
    }

loc_000902A5: ;
    ecx = eax;
    PUSH32(esp, 0x000902ACu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000902AC: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x1358));
    SET_LO8(eax, LO8(eax) << 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x1358) = LO8(edx);
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x000902D3u); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_000902D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
