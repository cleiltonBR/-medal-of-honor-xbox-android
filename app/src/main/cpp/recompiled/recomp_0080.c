/**
 * Medal of Honor European Assault - Recompiled code chunk 80
 * Functions: 250 (0x002CFC50 - 0x002D24A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002CFC50
 * Original: 0x002CFC50 - 0x002CFC91 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFC50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FE8);
    ecx = esp + 4;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 4) = 0x305A28;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_target = MEM32(0x305A30); PUSH32(esp, 0x002CFC87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFC81u); } /* indirect call */
    }

loc_002CFC87: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFC8Du); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFC8D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFCA0
 * Original: 0x002CFCA0 - 0x002CFCDE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFCA0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FEC);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x305828;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(0x305830); PUSH32(esp, 0x002CFCD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFCCAu); } /* indirect call */
    }

loc_002CFCD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFCD6u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFCD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFCE0
 * Original: 0x002CFCE0 - 0x002CFCEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CFCE0: ;
    ecx = 0x3A78F4;
    g_seh_ebp = ebp; sub_00065000(); return; /* tail jmp 0x00065000 */

}

/**
 * sub_002CFCF0
 * Original: 0x002CFCF0 - 0x002CFD32 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFCF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFCF0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x13;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FF0);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x3058A8;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x34) = eax;
    { uint32_t _icall_target = MEM32(0x3058B0); PUSH32(esp, 0x002CFD24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFD1Eu); } /* indirect call */
    }

loc_002CFD24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFD2Au); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFD2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFD40
 * Original: 0x002CFD40 - 0x002CFD4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CFD40: ;
    ecx = 0x3A78F8;
    g_seh_ebp = ebp; sub_000650A0(); return; /* tail jmp 0x000650A0 */

}

/**
 * sub_002CFD50
 * Original: 0x002CFD50 - 0x002CFD7D (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFD50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FF4);
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x305934;
    { uint32_t _icall_target = MEM32(0x30593C); PUSH32(esp, 0x002CFD73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFD6Du); } /* indirect call */
    }

loc_002CFD73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFD79u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFD79: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFD80
 * Original: 0x002CFD80 - 0x002CFDB1 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFD80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFD80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FF8);
    ecx = esp + 4;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = 0x305974;
    { uint32_t _icall_target = MEM32(0x30597C); PUSH32(esp, 0x002CFDA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFDA1u); } /* indirect call */
    }

loc_002CFDA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFDADu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFDAD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFDC0
 * Original: 0x002CFDC0 - 0x002CFDF5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFDC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FFC);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x3059B8;
    { uint32_t _icall_target = MEM32(0x3059C0); PUSH32(esp, 0x002CFDEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFDE5u); } /* indirect call */
    }

loc_002CFDEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFDF1u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFDF1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFE00
 * Original: 0x002CFE00 - 0x002CFE3C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFE00: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CFE07u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CFE07: ;
    MEM32(0x3A9C34) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A9C38) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A9C34);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A9C34);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A9C34);
    PUSH32(esp, 0x2D6610);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CFE38u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFE38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFE40
 * Original: 0x002CFE40 - 0x002CFE7C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFE40: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CFE47u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CFE47: ;
    MEM32(0x3A9C40) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A9C44) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A9C40);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A9C40);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A9C40);
    PUSH32(esp, 0x2D66D0);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CFE78u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFE78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFE80
 * Original: 0x002CFE80 - 0x002CFEBC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFE80: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x002CFE87u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CFE87: ;
    MEM32(0x3A9C4C) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A9C50) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A9C4C);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A9C4C);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A9C4C);
    PUSH32(esp, 0x2D6730);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CFEB8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFEB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFE9B
 * Original: 0x002CFE9B - 0x002CFEBC (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFE9B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFE9B: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A9C4C);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A9C4C);
    PUSH32(esp, 0x2D6730);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CFEB8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFEB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFEC0
 * Original: 0x002CFEC0 - 0x002CFEFC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFEC0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CFEC7u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CFEC7: ;
    MEM32(0x3A9C58) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A9C5C) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A9C58);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A9C58);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A9C58);
    PUSH32(esp, 0x2D6670);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CFEF8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFEF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFF00
 * Original: 0x002CFF00 - 0x002CFF20 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFF00(void)
{

loc_002CFF00: ;
    PUSH32(esp, 0x2D0);
    PUSH32(esp, 0x305CB0);
    ecx = 0x3BC890;
    PUSH32(esp, 0x002CFF14u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CFF14: ;
    PUSH32(esp, 0x2D6790);
    PUSH32(esp, 0x002CFF1Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFF1E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CFF1E
 * Original: 0x002CFF1E - 0x002CFF20 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFF1E(void)
{

loc_002CFF1E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CFF20
 * Original: 0x002CFF20 - 0x002CFF40 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFF20(void)
{

loc_002CFF20: ;
    PUSH32(esp, 0x1A00);
    PUSH32(esp, 0x305D20);
    ecx = 0x3BC8B4;
    PUSH32(esp, 0x002CFF34u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CFF34: ;
    PUSH32(esp, 0x2D67A0);
    PUSH32(esp, 0x002CFF3Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFF3E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CFF40
 * Original: 0x002CFF40 - 0x002CFF71 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFF40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373020);
    ecx = esp + 4;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = 0x305E38;
    { uint32_t _icall_target = MEM32(0x305E40); PUSH32(esp, 0x002CFF67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFF61u); } /* indirect call */
    }

loc_002CFF67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFF6Du); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFF6D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFF80
 * Original: 0x002CFF80 - 0x002CFFAD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFF80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373024);
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x305E7C;
    { uint32_t _icall_target = MEM32(0x305E84); PUSH32(esp, 0x002CFFA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFF9Du); } /* indirect call */
    }

loc_002CFFA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFFA9u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFFA9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFFB0
 * Original: 0x002CFFB0 - 0x002CFFC9 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFFB0(void)
{

loc_002CFFB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x37303C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEFB4); /* mulss */
    MEMF(0x3BC900) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFFD0
 * Original: 0x002CFFD0 - 0x002CFFE9 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFFD0(void)
{

loc_002CFFD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x37303C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEFB4); /* mulss */
    MEMF(0x3BC914) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFFF0
 * Original: 0x002CFFF0 - 0x002D0029 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFFF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373028);
    ecx = esp + 4;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 4) = 0x305EC0;
    { uint32_t _icall_target = MEM32(0x305EC8); PUSH32(esp, 0x002D001Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0019u); } /* indirect call */
    }

loc_002D001F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0025u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0025: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0000
 * Original: 0x002D0000 - 0x002D0029 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0000: ;
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373028);
    ecx = esp + 4;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 4) = 0x305EC0;
    { uint32_t _icall_target = MEM32(0x305EC8); PUSH32(esp, 0x002D001Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0019u); } /* indirect call */
    }

loc_002D001F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0025u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0025: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0004
 * Original: 0x002D0004 - 0x002D0029 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0004(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0004: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373028);
    ecx = esp + 4;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 4) = 0x305EC0;
    { uint32_t _icall_target = MEM32(0x305EC8); PUSH32(esp, 0x002D001Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0019u); } /* indirect call */
    }

loc_002D001F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0025u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0025: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0030
 * Original: 0x002D0030 - 0x002D0049 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0030(void)
{

loc_002D0030: ;
    xmm0 = XMM_SCALAR(MEMF(0x37303C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEFB4); /* mulss */
    MEMF(0x3BC928) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0050
 * Original: 0x002D0050 - 0x002D0081 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0050: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37302C);
    ecx = esp + 4;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = 0x305F04;
    { uint32_t _icall_target = MEM32(0x305F0C); PUSH32(esp, 0x002D0077u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0071u); } /* indirect call */
    }

loc_002D0077: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D007Du); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D007D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0090
 * Original: 0x002D0090 - 0x002D00C5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0090: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373030);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x305F50;
    { uint32_t _icall_target = MEM32(0x305F58); PUSH32(esp, 0x002D00BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D00B5u); } /* indirect call */
    }

loc_002D00BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D00C1u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D00C1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D00D0
 * Original: 0x002D00D0 - 0x002D00E9 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D00D0(void)
{

loc_002D00D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x37303C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEFB4); /* mulss */
    MEMF(0x3BC93C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D00F0
 * Original: 0x002D00F0 - 0x002D0125 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D00F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D00F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373034);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x305FA4;
    { uint32_t _icall_target = MEM32(0x305FAC); PUSH32(esp, 0x002D011Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0115u); } /* indirect call */
    }

loc_002D011B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0121u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0121: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0130
 * Original: 0x002D0130 - 0x002D0149 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0130(void)
{

loc_002D0130: ;
    xmm0 = XMM_SCALAR(MEMF(0x37303C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEFB4); /* mulss */
    MEMF(0x3BC950) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0150
 * Original: 0x002D0150 - 0x002D0185 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0150: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373038);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x305FEC;
    { uint32_t _icall_target = MEM32(0x305FF4); PUSH32(esp, 0x002D017Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0175u); } /* indirect call */
    }

loc_002D017B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0181u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0181: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0190
 * Original: 0x002D0190 - 0x002D01C5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0190: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373044);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x306030;
    { uint32_t _icall_target = MEM32(0x306038); PUSH32(esp, 0x002D01BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D01B5u); } /* indirect call */
    }

loc_002D01BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D01C1u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D01C1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D01D0
 * Original: 0x002D01D0 - 0x002D0205 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D01D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D01D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37304C);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x306080;
    { uint32_t _icall_target = MEM32(0x306088); PUSH32(esp, 0x002D01FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D01F5u); } /* indirect call */
    }

loc_002D01FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0201u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0201: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0210
 * Original: 0x002D0210 - 0x002D0241 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373054);
    ecx = esp + 4;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = 0x3060C4;
    { uint32_t _icall_target = MEM32(0x3060CC); PUSH32(esp, 0x002D0237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0231u); } /* indirect call */
    }

loc_002D0237: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D023Du); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D023D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0250
 * Original: 0x002D0250 - 0x002D0285 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0250: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37305C);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x306110;
    { uint32_t _icall_target = MEM32(0x306118); PUSH32(esp, 0x002D027Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0275u); } /* indirect call */
    }

loc_002D027B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0281u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0281: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0290
 * Original: 0x002D0290 - 0x002D02C9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0290: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373064);
    ecx = esp + 4;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 4) = 0x306168;
    { uint32_t _icall_target = MEM32(0x306170); PUSH32(esp, 0x002D02BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D02B9u); } /* indirect call */
    }

loc_002D02BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D02C5u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D02C5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D02D0
 * Original: 0x002D02D0 - 0x002D0305 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D02D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D02D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37306C);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x3061C8;
    { uint32_t _icall_target = MEM32(0x3061D0); PUSH32(esp, 0x002D02FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D02F5u); } /* indirect call */
    }

loc_002D02FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0301u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0301: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0310
 * Original: 0x002D0310 - 0x002D0345 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0310: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373074);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x306224;
    { uint32_t _icall_target = MEM32(0x30622C); PUSH32(esp, 0x002D033Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0335u); } /* indirect call */
    }

loc_002D033B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0341u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0341: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0313
 * Original: 0x002D0313 - 0x002D0345 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0313(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0313: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373074);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x306224;
    { uint32_t _icall_target = MEM32(0x30622C); PUSH32(esp, 0x002D033Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0335u); } /* indirect call */
    }

loc_002D033B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0341u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0341: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0350
 * Original: 0x002D0350 - 0x002D0385 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0350: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37307C);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x306278;
    { uint32_t _icall_target = MEM32(0x306280); PUSH32(esp, 0x002D037Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0375u); } /* indirect call */
    }

loc_002D037B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D0381u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D0381: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0390
 * Original: 0x002D0390 - 0x002D03C5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0390: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x373084);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x3062CC;
    { uint32_t _icall_target = MEM32(0x3062D4); PUSH32(esp, 0x002D03BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D03B5u); } /* indirect call */
    }

loc_002D03BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D03C1u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D03C1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D03D0
 * Original: 0x002D03D0 - 0x002D03DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D03D0(void)
{

loc_002D03D0: ;
    PUSH32(esp, 0x2D69B0);
    PUSH32(esp, 0x002D03DAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D03DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D03E0
 * Original: 0x002D03E0 - 0x002D03EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D03E0(void)
{

loc_002D03E0: ;
    PUSH32(esp, 0x2D69C0);
    PUSH32(esp, 0x002D03EAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D03EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D03F0
 * Original: 0x002D03F0 - 0x002D0406 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D03F0(void)
{

loc_002D03F0: ;
    ecx = 0x3BE9A0;
    PUSH32(esp, 0x002D03FAu); RECOMP_ABI_CALL(0x000740E0u, sub_000740E0); /* call 0x000740E0 */

loc_002D03FA: ;
    PUSH32(esp, 0x2D69D0);
    PUSH32(esp, 0x002D0404u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D0404: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D0410
 * Original: 0x002D0410 - 0x002D0446 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0410: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3731D4);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x306350;
    { uint32_t _icall_target = MEM32(0x306358); PUSH32(esp, 0x002D0438u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0432u); } /* indirect call */
    }

loc_002D0438: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D043Eu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D043E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0450
 * Original: 0x002D0450 - 0x002D0486 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0450: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x14;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3731D8);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x306370;
    { uint32_t _icall_target = MEM32(0x306378); PUSH32(esp, 0x002D0478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D0472u); } /* indirect call */
    }

loc_002D0478: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D047Eu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D047E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0490
 * Original: 0x002D0490 - 0x002D04C6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0490: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x14;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3731DC);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x30638C;
    { uint32_t _icall_target = MEM32(0x306394); PUSH32(esp, 0x002D04B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002D04B2u); } /* indirect call */
    }

loc_002D04B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002D04BEu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002D04BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D04D0
 * Original: 0x002D04D0 - 0x002D0505 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D04D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D04D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3BECE0;
    edi = 0x1A;
    /* nop */

loc_002D04E0: ;
    PUSH32(esp, 0xE8840);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002D04EFu); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_002D04EF: ;
    MEM32(esi + 0x200) = 0;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002D04E0; /* jne: not equal / not zero */

loc_002D0502: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D0510
 * Original: 0x002D0510 - 0x002D0531 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0510(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0510: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C2420) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0540
 * Original: 0x002D0540 - 0x002D0561 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0540(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0540: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C2424) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0570
 * Original: 0x002D0570 - 0x002D0591 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0570(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0570: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C2428) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D05A0
 * Original: 0x002D05A0 - 0x002D05AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D05A0(void)
{

loc_002D05A0: ;
    PUSH32(esp, 0x2D69E0);
    PUSH32(esp, 0x002D05AAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D05AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D05B0
 * Original: 0x002D05B0 - 0x002D05C6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D05B0(void)
{

loc_002D05B0: ;
    ecx = 0x3C2470;
    PUSH32(esp, 0x002D05BAu); RECOMP_ABI_CALL(0x000779E0u, sub_000779E0); /* call 0x000779E0 */

loc_002D05BA: ;
    PUSH32(esp, 0x2D69F0);
    PUSH32(esp, 0x002D05C4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D05C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D05D0
 * Original: 0x002D05D0 - 0x002D05F1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D05D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D05D0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C2E34) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0600
 * Original: 0x002D0600 - 0x002D0621 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0600(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0600: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C2E38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0630
 * Original: 0x002D0630 - 0x002D0640 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0630(void)
{

loc_002D0630: ;
    PUSH32(esp, 0x307498);
    ecx = 0x3C2E48;
    PUSH32(esp, 0x002D063Fu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_002D063F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0640
 * Original: 0x002D0640 - 0x002D0650 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0640(void)
{

loc_002D0640: ;
    PUSH32(esp, 0x3074B0);
    ecx = 0x3C2E4C;
    PUSH32(esp, 0x002D064Fu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_002D064F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0650
 * Original: 0x002D0650 - 0x002D0660 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0650(void)
{

loc_002D0650: ;
    PUSH32(esp, 0x3074C0);
    ecx = 0x3C2E50;
    PUSH32(esp, 0x002D065Fu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_002D065F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0660
 * Original: 0x002D0660 - 0x002D0690 (48 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0660(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0660: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C2F30) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0690
 * Original: 0x002D0690 - 0x002D06A6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0690(void)
{

loc_002D0690: ;
    ecx = 0x3C2F40;
    PUSH32(esp, 0x002D069Au); RECOMP_ABI_CALL(0x00181DD0u, sub_00181DD0); /* call 0x00181DD0 */

loc_002D069A: ;
    PUSH32(esp, 0x2D6A10);
    PUSH32(esp, 0x002D06A4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D06A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D06B0
 * Original: 0x002D06B0 - 0x002D06D0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D06B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D06B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3C2FD0;
    edi = 0xC;
    /* nop */

loc_002D06C0: ;
    ecx = esi;
    PUSH32(esp, 0x002D06C7u); RECOMP_ABI_CALL(0x00194D10u, sub_00194D10); /* call 0x00194D10 */

loc_002D06C7: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002D06C0; /* jne: not equal / not zero */

loc_002D06CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D06D0
 * Original: 0x002D06D0 - 0x002D06E0 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D06D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D06D0: ;
    ecx = 0x3C3510;
    g_seh_ebp = ebp; sub_00194D10(); return; /* tail jmp 0x00194D10 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002D06E0
 * Original: 0x002D06E0 - 0x002D06EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D06E0(void)
{

loc_002D06E0: ;
    MEM32(0x3C3580) = 0x3C3510;
    esp += 4; return; /* ret */

}

/**
 * sub_002D06F0
 * Original: 0x002D06F0 - 0x002D0711 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D06F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D06F0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C35A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0720
 * Original: 0x002D0720 - 0x002D074A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0720(void)
{

loc_002D0720: ;
    ecx = 0x3C35B0;
    PUSH32(esp, 0x002D072Au); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_002D072A: ;
    PUSH32(esp, 0x2D6A20);
    MEM32(0x3C35B0) = 0x307AF8;
    MEM32(0x3C35B8) = 0x307AEC;
    PUSH32(esp, 0x002D0748u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D0748: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D0750
 * Original: 0x002D0750 - 0x002D0771 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0750: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3680) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0780
 * Original: 0x002D0780 - 0x002D0795 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0780(void)
{

loc_002D0780: ;
    PUSH32(esp, 0x83900);
    PUSH32(esp, 0x307CAC);
    ecx = 0x3C3690;
    PUSH32(esp, 0x002D0794u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D0794: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D07A0
 * Original: 0x002D07A0 - 0x002D07C1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D07A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D07A0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C36A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D07D0
 * Original: 0x002D07D0 - 0x002D07E5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D07D0(void)
{

loc_002D07D0: ;
    PUSH32(esp, 0x83C90);
    PUSH32(esp, 0x307E14);
    ecx = 0x3C36A8;
    PUSH32(esp, 0x002D07E4u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D07E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D07F0
 * Original: 0x002D07F0 - 0x002D0811 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D07F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D07F0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C36B8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0820
 * Original: 0x002D0820 - 0x002D0837 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0820(void)
{

loc_002D0820: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x84DE0);
    PUSH32(esp, 0x842442CDu);
    ecx = 0x3C36CC;
    PUSH32(esp, 0x002D0836u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0836: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0840
 * Original: 0x002D0840 - 0x002D0861 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0840: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C36DC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0870
 * Original: 0x002D0870 - 0x002D0887 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0870(void)
{

loc_002D0870: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x851C0);
    PUSH32(esp, 0x1F529134);
    ecx = 0x3C36E0;
    PUSH32(esp, 0x002D0886u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0886: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0890
 * Original: 0x002D0890 - 0x002D08B7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0890(void)
{

loc_002D0890: ;
    PUSH32(esp, 0xE0);
    PUSH32(esp, 2);
    ecx = 0x3C36F0;
    PUSH32(esp, 0x002D08A1u); RECOMP_ABI_CALL(0x001567B0u, sub_001567B0); /* call 0x001567B0 */

loc_002D08A1: ;
    PUSH32(esp, 0x2D6A40);
    MEM32(0x3C36F0) = 0x3082A4;
    PUSH32(esp, 0x002D08B5u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D08B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D08C0
 * Original: 0x002D08C0 - 0x002D08D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D08C0(void)
{

loc_002D08C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x85B50);
    PUSH32(esp, 0x31FC0A5A);
    ecx = 0x3C370C;
    PUSH32(esp, 0x002D08D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D08D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D08E0
 * Original: 0x002D08E0 - 0x002D08F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D08E0(void)
{

loc_002D08E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x85D60);
    PUSH32(esp, 0x17D0180E);
    ecx = 0x3C371C;
    PUSH32(esp, 0x002D08F6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D08F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0900
 * Original: 0x002D0900 - 0x002D0921 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0900(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0900: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C372C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0930
 * Original: 0x002D0930 - 0x002D0947 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0930(void)
{

loc_002D0930: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86530);
    PUSH32(esp, 0xE236819Du);
    ecx = 0x3C3730;
    PUSH32(esp, 0x002D0946u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0946: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0950
 * Original: 0x002D0950 - 0x002D0967 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0950(void)
{

loc_002D0950: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x86A70);
    PUSH32(esp, 0xED7FCEBEu);
    ecx = 0x3C374C;
    PUSH32(esp, 0x002D0966u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0966: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0970
 * Original: 0x002D0970 - 0x002D0987 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0970(void)
{

loc_002D0970: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x87140);
    PUSH32(esp, 0xCDB7E17Bu);
    ecx = 0x3C375C;
    PUSH32(esp, 0x002D0986u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0986: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0990
 * Original: 0x002D0990 - 0x002D09B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0990(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0990: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3770) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D09C0
 * Original: 0x002D09C0 - 0x002D09D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D09C0(void)
{

loc_002D09C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x876F0);
    PUSH32(esp, 0x5794B35);
    ecx = 0x3C3774;
    PUSH32(esp, 0x002D09D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D09D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D09E0
 * Original: 0x002D09E0 - 0x002D09F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D09E0(void)
{

loc_002D09E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x87BE0);
    PUSH32(esp, 0x5D21A6A2);
    ecx = 0x3C3784;
    PUSH32(esp, 0x002D09F6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D09F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0A00
 * Original: 0x002D0A00 - 0x002D0A21 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0A00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0A00: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C37A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0A30
 * Original: 0x002D0A30 - 0x002D0A47 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0A30(void)
{

loc_002D0A30: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x87FC0);
    PUSH32(esp, 0x32830CF4);
    ecx = 0x3C37A4;
    PUSH32(esp, 0x002D0A46u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0A50
 * Original: 0x002D0A50 - 0x002D0A71 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0A50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0A50: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C37BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0A80
 * Original: 0x002D0A80 - 0x002D0ABC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D0A80: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002D0A87u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002D0A87: ;
    MEM32(0x3C37C0) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C37C4) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3C37C0);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3C37C0);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3C37C0);
    PUSH32(esp, 0x2D6A70);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002D0AB8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D0AB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D0AC0
 * Original: 0x002D0AC0 - 0x002D0AD7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0AC0(void)
{

loc_002D0AC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8A7E0);
    PUSH32(esp, 0x5301FB45);
    ecx = 0x3C37CC;
    PUSH32(esp, 0x002D0AD6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0AD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0AE0
 * Original: 0x002D0AE0 - 0x002D0AF7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0AE0(void)
{

loc_002D0AE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8ACF0);
    PUSH32(esp, 0x358EC95D);
    ecx = 0x3C37E4;
    PUSH32(esp, 0x002D0AF6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0AF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0B00
 * Original: 0x002D0B00 - 0x002D0B17 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0B00(void)
{

loc_002D0B00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8B0D0);
    PUSH32(esp, 0x1EEA0D80);
    ecx = 0x3C37F4;
    PUSH32(esp, 0x002D0B16u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0B16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0B20
 * Original: 0x002D0B20 - 0x002D0B41 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0B20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0B20: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3804) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0B50
 * Original: 0x002D0B50 - 0x002D0B67 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0B50(void)
{

loc_002D0B50: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8BAA0);
    PUSH32(esp, 0x8BE28683u);
    ecx = 0x3C3808;
    PUSH32(esp, 0x002D0B66u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0B66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0B70
 * Original: 0x002D0B70 - 0x002D0B87 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0B70(void)
{

loc_002D0B70: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8BD60);
    PUSH32(esp, 0x2F157A14);
    ecx = 0x3C3818;
    PUSH32(esp, 0x002D0B86u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0B86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0B90
 * Original: 0x002D0B90 - 0x002D0BB1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0B90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0B90: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3828) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0BC0
 * Original: 0x002D0BC0 - 0x002D0BD7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0BC0(void)
{

loc_002D0BC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8CA70);
    PUSH32(esp, 0x4A72A63F);
    ecx = 0x3C382C;
    PUSH32(esp, 0x002D0BD6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0BE0
 * Original: 0x002D0BE0 - 0x002D0BF7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0BE0(void)
{

loc_002D0BE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8D0B0);
    PUSH32(esp, 0xE9FADE4);
    ecx = 0x3C3848;
    PUSH32(esp, 0x002D0BF6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0BF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0C00
 * Original: 0x002D0C00 - 0x002D0C21 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0C00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0C00: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3864) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0C30
 * Original: 0x002D0C30 - 0x002D0C47 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0C30(void)
{

loc_002D0C30: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8D550);
    PUSH32(esp, 0x705582AA);
    ecx = 0x3C3868;
    PUSH32(esp, 0x002D0C46u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0C46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0C50
 * Original: 0x002D0C50 - 0x002D0C71 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0C50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0C50: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3878) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0C80
 * Original: 0x002D0C80 - 0x002D0C97 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0C80(void)
{

loc_002D0C80: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8D8C0);
    PUSH32(esp, 0x6F4899C8);
    ecx = 0x3C387C;
    PUSH32(esp, 0x002D0C96u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0C96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0CA0
 * Original: 0x002D0CA0 - 0x002D0CC1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0CA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0CA0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3898) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0CD0
 * Original: 0x002D0CD0 - 0x002D0CE7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0CD0(void)
{

loc_002D0CD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8DE30);
    PUSH32(esp, 0x2F6CEE63);
    ecx = 0x3C389C;
    PUSH32(esp, 0x002D0CE6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0CE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0CF0
 * Original: 0x002D0CF0 - 0x002D0D11 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0CF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0CF0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C38AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0D20
 * Original: 0x002D0D20 - 0x002D0D37 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0D20(void)
{

loc_002D0D20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F000);
    PUSH32(esp, 0xB73A8280u);
    ecx = 0x3C38B0;
    PUSH32(esp, 0x002D0D36u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0D36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0D40
 * Original: 0x002D0D40 - 0x002D0D61 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0D40: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C38C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0D70
 * Original: 0x002D0D70 - 0x002D0D87 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0D70(void)
{

loc_002D0D70: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F430);
    PUSH32(esp, 0xB1A521DFu);
    ecx = 0x3C38CC;
    PUSH32(esp, 0x002D0D86u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0D86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0D90
 * Original: 0x002D0D90 - 0x002D0DA7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0D90(void)
{

loc_002D0D90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8FC20);
    PUSH32(esp, 0x4C80697C);
    ecx = 0x3C38DC;
    PUSH32(esp, 0x002D0DA6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0DA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0DB0
 * Original: 0x002D0DB0 - 0x002D0DC7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0DB0(void)
{

loc_002D0DB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x900B0);
    PUSH32(esp, 0x65A22CE4);
    ecx = 0x3C38EC;
    PUSH32(esp, 0x002D0DC6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0DC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0DD0
 * Original: 0x002D0DD0 - 0x002D0DF1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0DD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0DD0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3908) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0E00
 * Original: 0x002D0E00 - 0x002D0E17 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0E00(void)
{

loc_002D0E00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90430);
    PUSH32(esp, 0x91140104u);
    ecx = 0x3C390C;
    PUSH32(esp, 0x002D0E16u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0E16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0E20
 * Original: 0x002D0E20 - 0x002D0E37 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0E20(void)
{

loc_002D0E20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90590);
    PUSH32(esp, 0x8226D723u);
    ecx = 0x3C391C;
    PUSH32(esp, 0x002D0E36u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0E36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0E40
 * Original: 0x002D0E40 - 0x002D0E61 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0E40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0E40: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3938) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0E70
 * Original: 0x002D0E70 - 0x002D0E87 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0E70(void)
{

loc_002D0E70: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90970);
    PUSH32(esp, 0x42FA126F);
    ecx = 0x3C393C;
    PUSH32(esp, 0x002D0E86u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0E86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0E90
 * Original: 0x002D0E90 - 0x002D0EA7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0E90(void)
{

loc_002D0E90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90BF0);
    PUSH32(esp, 0x616011F9);
    ecx = 0x3C394C;
    PUSH32(esp, 0x002D0EA6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0EA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0EB0
 * Original: 0x002D0EB0 - 0x002D0EC7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0EB0(void)
{

loc_002D0EB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x91190);
    PUSH32(esp, 0x4660A155);
    ecx = 0x3C395C;
    PUSH32(esp, 0x002D0EC6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0EC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0ED0
 * Original: 0x002D0ED0 - 0x002D0EF1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0ED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0ED0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3970) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0F00
 * Original: 0x002D0F00 - 0x002D0F17 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0F00(void)
{

loc_002D0F00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x920C0);
    PUSH32(esp, 0x858EBBE8u);
    ecx = 0x3C3974;
    PUSH32(esp, 0x002D0F16u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0F16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0F20
 * Original: 0x002D0F20 - 0x002D0F37 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0F20(void)
{

loc_002D0F20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x923D0);
    PUSH32(esp, 0x79305CDC);
    ecx = 0x3C3984;
    PUSH32(esp, 0x002D0F36u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0F36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0F40
 * Original: 0x002D0F40 - 0x002D0F61 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0F40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0F40: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3994) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D0F70
 * Original: 0x002D0F70 - 0x002D0F87 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0F70(void)
{

loc_002D0F70: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x92A70);
    PUSH32(esp, 0xC54CFB0Eu);
    ecx = 0x3C3998;
    PUSH32(esp, 0x002D0F86u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0F86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0F90
 * Original: 0x002D0F90 - 0x002D0FA7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0F90(void)
{

loc_002D0F90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x92CD0);
    PUSH32(esp, 0x40B70819);
    ecx = 0x3C39D0;
    PUSH32(esp, 0x002D0FA6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D0FA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0FB0
 * Original: 0x002D0FB0 - 0x002D0FC5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0FB0(void)
{

loc_002D0FB0: ;
    PUSH32(esp, 0x92BD0);
    PUSH32(esp, 0x30B61C);
    ecx = 0x3C39E0;
    PUSH32(esp, 0x002D0FC4u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D0FC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D0FD0
 * Original: 0x002D0FD0 - 0x002D0FF1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D0FD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D0FD0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C39F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1000
 * Original: 0x002D1000 - 0x002D1017 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1000(void)
{

loc_002D1000: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x93420);
    PUSH32(esp, 0x9312A35Fu);
    ecx = 0x3C39F4;
    PUSH32(esp, 0x002D1016u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1016: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1020
 * Original: 0x002D1020 - 0x002D1037 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1020(void)
{

loc_002D1020: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x93F90);
    PUSH32(esp, 0xACEA45FDu);
    ecx = 0x3C3A04;
    PUSH32(esp, 0x002D1036u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1036: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1040
 * Original: 0x002D1040 - 0x002D1061 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1040(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1040: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3A18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1070
 * Original: 0x002D1070 - 0x002D1087 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1070(void)
{

loc_002D1070: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x94E60);
    PUSH32(esp, 0xA644C06);
    ecx = 0x3C3A1C;
    PUSH32(esp, 0x002D1086u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1086: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1090
 * Original: 0x002D1090 - 0x002D10B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1090: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3A9C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D10C0
 * Original: 0x002D10C0 - 0x002D10D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D10C0(void)
{

loc_002D10C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x95860);
    PUSH32(esp, 0x500F4F9A);
    ecx = 0x3C3AA0;
    PUSH32(esp, 0x002D10D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D10D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D10E0
 * Original: 0x002D10E0 - 0x002D1101 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D10E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D10E0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3AB0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1110
 * Original: 0x002D1110 - 0x002D1127 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1110(void)
{

loc_002D1110: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x95B30);
    PUSH32(esp, 0xEAACEE9Bu);
    ecx = 0x3C3AB4;
    PUSH32(esp, 0x002D1126u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1126: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1130
 * Original: 0x002D1130 - 0x002D1151 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1130: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3AD0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1160
 * Original: 0x002D1160 - 0x002D1177 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1160(void)
{

loc_002D1160: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x95EC0);
    PUSH32(esp, 0x4D25CE32);
    ecx = 0x3C3AD4;
    PUSH32(esp, 0x002D1176u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1180
 * Original: 0x002D1180 - 0x002D11A1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1180(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1180: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3AE4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D11B0
 * Original: 0x002D11B0 - 0x002D11C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D11B0(void)
{

loc_002D11B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x96880);
    PUSH32(esp, 0xB407C1F);
    ecx = 0x3C3AE8;
    PUSH32(esp, 0x002D11C6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D11C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D11D0
 * Original: 0x002D11D0 - 0x002D11E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D11D0(void)
{

loc_002D11D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x97390);
    PUSH32(esp, 0x421EAA05);
    ecx = 0x3C3AFC;
    PUSH32(esp, 0x002D11E6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D11E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D11F0
 * Original: 0x002D11F0 - 0x002D1211 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D11F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D11F0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3B10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1220
 * Original: 0x002D1220 - 0x002D1237 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1220(void)
{

loc_002D1220: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x974E0);
    PUSH32(esp, 0xFE0B6C49u);
    ecx = 0x3C3B14;
    PUSH32(esp, 0x002D1236u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1236: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1240
 * Original: 0x002D1240 - 0x002D1261 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1240: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3B24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1270
 * Original: 0x002D1270 - 0x002D1287 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1270(void)
{

loc_002D1270: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x97950);
    PUSH32(esp, 0x61972555);
    ecx = 0x3C3B28;
    PUSH32(esp, 0x002D1286u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1286: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1290
 * Original: 0x002D1290 - 0x002D12B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1290: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3B3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D12C0
 * Original: 0x002D12C0 - 0x002D12D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D12C0(void)
{

loc_002D12C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x983A0);
    PUSH32(esp, 0xC1CDC185u);
    ecx = 0x3C3B40;
    PUSH32(esp, 0x002D12D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D12D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D12E0
 * Original: 0x002D12E0 - 0x002D1301 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D12E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D12E0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3B50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1310
 * Original: 0x002D1310 - 0x002D1327 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1310(void)
{

loc_002D1310: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x98CD0);
    PUSH32(esp, 0x2A5E9D83);
    ecx = 0x3C3B54;
    PUSH32(esp, 0x002D1326u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1326: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1330
 * Original: 0x002D1330 - 0x002D1351 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1330: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3B68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1360
 * Original: 0x002D1360 - 0x002D1377 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1360(void)
{

loc_002D1360: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x99140);
    PUSH32(esp, 0x8B1139CCu);
    ecx = 0x3C3B6C;
    PUSH32(esp, 0x002D1376u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1380
 * Original: 0x002D1380 - 0x002D13A1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1380: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3B88) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D13B0
 * Original: 0x002D13B0 - 0x002D13C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D13B0(void)
{

loc_002D13B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x99710);
    PUSH32(esp, 0x22055F28);
    ecx = 0x3C3B8C;
    PUSH32(esp, 0x002D13C6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D13C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D13D0
 * Original: 0x002D13D0 - 0x002D13E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D13D0(void)
{

loc_002D13D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9AAC0);
    PUSH32(esp, 0x9FCC457Au);
    ecx = 0x3C3BA0;
    PUSH32(esp, 0x002D13E6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D13E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D13F0
 * Original: 0x002D13F0 - 0x002D1411 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D13F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D13F0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3BB0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1420
 * Original: 0x002D1420 - 0x002D1437 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1420(void)
{

loc_002D1420: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9B2D0);
    PUSH32(esp, 0x9A2588ECu);
    ecx = 0x3C3BB4;
    PUSH32(esp, 0x002D1436u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1436: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1440
 * Original: 0x002D1440 - 0x002D1461 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1440(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1440: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3BC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1470
 * Original: 0x002D1470 - 0x002D1487 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1470(void)
{

loc_002D1470: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9B9A0);
    PUSH32(esp, 0x634BE2E9);
    ecx = 0x3C3BC8;
    PUSH32(esp, 0x002D1486u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1486: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1490
 * Original: 0x002D1490 - 0x002D14B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1490: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3BD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D14C0
 * Original: 0x002D14C0 - 0x002D14D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D14C0(void)
{

loc_002D14C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9C3D0);
    PUSH32(esp, 0xF6AC2D55u);
    ecx = 0x3C3BDC;
    PUSH32(esp, 0x002D14D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D14D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D14E0
 * Original: 0x002D14E0 - 0x002D1501 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D14E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D14E0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3BEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1510
 * Original: 0x002D1510 - 0x002D1527 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1510(void)
{

loc_002D1510: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9C740);
    PUSH32(esp, 0xE10BBE11u);
    ecx = 0x3C3BF0;
    PUSH32(esp, 0x002D1526u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1526: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1530
 * Original: 0x002D1530 - 0x002D1551 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1530(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1530: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3C28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1560
 * Original: 0x002D1560 - 0x002D1580 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D1560: ;
    eax = 0x9C9D0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3733F8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3733FC) = ecx;
    MEM32(0x373408) = eax;
    MEM32(0x37340C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1580
 * Original: 0x002D1580 - 0x002D15A0 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1580(void)
{

loc_002D1580: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9CF60);
    PUSH32(esp, 0x5E8CF10F);
    ecx = 0x3C3C2C;
    PUSH32(esp, 0x002D1596u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1596: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D15A0
 * Original: 0x002D15A0 - 0x002D15B7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D15A0(void)
{

loc_002D15A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9D560);
    PUSH32(esp, 0x52C72FB8);
    ecx = 0x3C3C3C;
    PUSH32(esp, 0x002D15B6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D15B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D15C0
 * Original: 0x002D15C0 - 0x002D15D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D15C0(void)
{

loc_002D15C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9E350);
    PUSH32(esp, 0x653075A2);
    ecx = 0x3C3C90;
    PUSH32(esp, 0x002D15D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D15D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D15E0
 * Original: 0x002D15E0 - 0x002D1601 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D15E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D15E0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3CC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1610
 * Original: 0x002D1610 - 0x002D1627 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1610(void)
{

loc_002D1610: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9F880);
    PUSH32(esp, 0x57414B37);
    ecx = 0x3C3CC8;
    PUSH32(esp, 0x002D1626u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1626: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1630
 * Original: 0x002D1630 - 0x002D1647 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1630(void)
{

loc_002D1630: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9FB20);
    PUSH32(esp, 0xC4A31B5Du);
    ecx = 0x3C3CD8;
    PUSH32(esp, 0x002D1646u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1650
 * Original: 0x002D1650 - 0x002D1667 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1650(void)
{

loc_002D1650: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9FEE0);
    PUSH32(esp, 0x5ED50D83);
    ecx = 0x3C3CE8;
    PUSH32(esp, 0x002D1666u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1666: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1670
 * Original: 0x002D1670 - 0x002D1687 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1670(void)
{

loc_002D1670: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA02C0);
    PUSH32(esp, 0xCB5000FAu);
    ecx = 0x3C3CF8;
    PUSH32(esp, 0x002D1686u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1686: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1690
 * Original: 0x002D1690 - 0x002D16A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1690(void)
{

loc_002D1690: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA0700);
    PUSH32(esp, 0x1C7BD67);
    ecx = 0x3C3D14;
    PUSH32(esp, 0x002D16A6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D16A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D16B0
 * Original: 0x002D16B0 - 0x002D16C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D16B0(void)
{

loc_002D16B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA0A30);
    PUSH32(esp, 0x133913F);
    ecx = 0x3C3D24;
    PUSH32(esp, 0x002D16C6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D16C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D16D0
 * Original: 0x002D16D0 - 0x002D16E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D16D0(void)
{

loc_002D16D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA0C20);
    PUSH32(esp, 0xC664E021u);
    ecx = 0x3C3D34;
    PUSH32(esp, 0x002D16E6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D16E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D16F0
 * Original: 0x002D16F0 - 0x002D1711 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D16F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D16F0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3D44) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1720
 * Original: 0x002D1720 - 0x002D1737 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1720(void)
{

loc_002D1720: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA0DF0);
    PUSH32(esp, 0x54FC2A07);
    ecx = 0x3C3D48;
    PUSH32(esp, 0x002D1736u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1736: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1740
 * Original: 0x002D1740 - 0x002D1757 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1740(void)
{

loc_002D1740: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1410);
    PUSH32(esp, 0x2E780B72);
    ecx = 0x3C3D60;
    PUSH32(esp, 0x002D1756u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1756: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1760
 * Original: 0x002D1760 - 0x002D1781 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1760(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1760: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3D7C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1790
 * Original: 0x002D1790 - 0x002D17A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1790(void)
{

loc_002D1790: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA19E0);
    PUSH32(esp, 0xB29C5383u);
    ecx = 0x3C3D80;
    PUSH32(esp, 0x002D17A6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D17A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D17B0
 * Original: 0x002D17B0 - 0x002D17C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D17B0(void)
{

loc_002D17B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1CE0);
    PUSH32(esp, 0xA774BE4Cu);
    ecx = 0x3C3DB8;
    PUSH32(esp, 0x002D17C6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D17C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D17D0
 * Original: 0x002D17D0 - 0x002D17F1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D17D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D17D0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3DC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1800
 * Original: 0x002D1800 - 0x002D1817 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1800(void)
{

loc_002D1800: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA21A0);
    PUSH32(esp, 0x89B5775Eu);
    ecx = 0x3C3DCC;
    PUSH32(esp, 0x002D1816u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1816: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1820
 * Original: 0x002D1820 - 0x002D1841 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1820: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3DDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1850
 * Original: 0x002D1850 - 0x002D1867 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1850(void)
{

loc_002D1850: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA2630);
    PUSH32(esp, 0xAEDF2ABBu);
    ecx = 0x3C3DE0;
    PUSH32(esp, 0x002D1866u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1866: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1870
 * Original: 0x002D1870 - 0x002D1887 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1870(void)
{

loc_002D1870: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA2890);
    PUSH32(esp, 0xC1627F57u);
    ecx = 0x3C3DF0;
    PUSH32(esp, 0x002D1886u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1886: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1890
 * Original: 0x002D1890 - 0x002D18A5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1890(void)
{

loc_002D1890: ;
    PUSH32(esp, 0xA2960);
    PUSH32(esp, 0x30F210);
    ecx = 0x3C3E00;
    PUSH32(esp, 0x002D18A4u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D18A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D18B0
 * Original: 0x002D18B0 - 0x002D18C5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D18B0(void)
{

loc_002D18B0: ;
    PUSH32(esp, 0xA29A0);
    PUSH32(esp, 0x30F21C);
    ecx = 0x3C3E10;
    PUSH32(esp, 0x002D18C4u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D18C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D18D0
 * Original: 0x002D18D0 - 0x002D18E5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D18D0(void)
{

loc_002D18D0: ;
    PUSH32(esp, 0xA29E0);
    PUSH32(esp, 0x30F22C);
    ecx = 0x3C3E20;
    PUSH32(esp, 0x002D18E4u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D18E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D18F0
 * Original: 0x002D18F0 - 0x002D1907 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D18F0(void)
{

loc_002D18F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA2D90);
    PUSH32(esp, 0x22917348);
    ecx = 0x3C3E30;
    PUSH32(esp, 0x002D1906u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1906: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1910
 * Original: 0x002D1910 - 0x002D1931 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1910: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3E40) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1940
 * Original: 0x002D1940 - 0x002D1957 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1940(void)
{

loc_002D1940: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4040);
    PUSH32(esp, 0xA49E450Du);
    ecx = 0x3C3E44;
    PUSH32(esp, 0x002D1956u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1956: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1960
 * Original: 0x002D1960 - 0x002D1981 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1960(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1960: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3E54) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1990
 * Original: 0x002D1990 - 0x002D19A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1990(void)
{

loc_002D1990: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4630);
    PUSH32(esp, 0xF0CEB521u);
    ecx = 0x3C3E58;
    PUSH32(esp, 0x002D19A6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D19A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D19B0
 * Original: 0x002D19B0 - 0x002D19D1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D19B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D19B0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C3E68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D19E0
 * Original: 0x002D19E0 - 0x002D19F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D19E0(void)
{

loc_002D19E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4910);
    PUSH32(esp, 0x2B4B6B1F);
    ecx = 0x3C3E6C;
    PUSH32(esp, 0x002D19F6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D19F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1A00
 * Original: 0x002D1A00 - 0x002D1A3C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D1A00: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x002D1A07u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002D1A07: ;
    MEM32(0x3C3E80) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C3E84) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3C3E80);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3C3E80);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3C3E80);
    PUSH32(esp, 0x2D6B90);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002D1A38u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1A38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D1A40
 * Original: 0x002D1A40 - 0x002D1A62 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1A40(void)
{

loc_002D1A40: ;
    PUSH32(esp, 0x18);
    ecx = 0x373508;
    PUSH32(esp, 0x002D1A4Cu); RECOMP_ABI_CALL(0x001565D0u, sub_001565D0); /* call 0x001565D0 */

loc_002D1A4C: ;
    PUSH32(esp, 0x2D6BF0);
    MEM32(0x373508) = 0x30FE98;
    PUSH32(esp, 0x002D1A60u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1A60: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1A70
 * Original: 0x002D1A70 - 0x002D1A85 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1A70(void)
{

loc_002D1A70: ;
    PUSH32(esp, 0xA68F0);
    PUSH32(esp, 0x30FF70);
    ecx = 0x3C3EA4;
    PUSH32(esp, 0x002D1A84u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D1A84: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1A90
 * Original: 0x002D1A90 - 0x002D1AA7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1A90(void)
{

loc_002D1A90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xAF030);
    PUSH32(esp, 0x55215F92);
    ecx = 0x3C5FF4;
    PUSH32(esp, 0x002D1AA6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1AA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1AB0
 * Original: 0x002D1AB0 - 0x002D1ABC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1AB0(void)
{

loc_002D1AB0: ;
    PUSH32(esp, 0x2D6C10);
    PUSH32(esp, 0x002D1ABAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1ABA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1AC0
 * Original: 0x002D1AC0 - 0x002D1AE1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1AC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1AC0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3C6080) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1AF0
 * Original: 0x002D1AF0 - 0x002D1B06 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1AF0(void)
{

loc_002D1AF0: ;
    ecx = 0x3C6088;
    PUSH32(esp, 0x002D1AFAu); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_002D1AFA: ;
    PUSH32(esp, 0x2D6C20);
    PUSH32(esp, 0x002D1B04u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1B04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1B10
 * Original: 0x002D1B10 - 0x002D1B35 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1B10(void)
{

loc_002D1B10: ;
    PUSH32(esp, 0x230);
    ecx = 0x3735B4;
    PUSH32(esp, 0x002D1B1Fu); RECOMP_ABI_CALL(0x001565D0u, sub_001565D0); /* call 0x001565D0 */

loc_002D1B1F: ;
    PUSH32(esp, 0x2D6C30);
    MEM32(0x3735B4) = 0x30FE98;
    PUSH32(esp, 0x002D1B33u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1B33: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1B40
 * Original: 0x002D1B40 - 0x002D1B64 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1B40(void)
{

loc_002D1B40: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 8);
    ecx = 0x3C6184;
    PUSH32(esp, 0x002D1B4Eu); RECOMP_ABI_CALL(0x001567B0u, sub_001567B0); /* call 0x001567B0 */

loc_002D1B4E: ;
    PUSH32(esp, 0x2D6C50);
    MEM32(0x3C6184) = 0x3082A4;
    PUSH32(esp, 0x002D1B62u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1B62: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1B70
 * Original: 0x002D1B70 - 0x002D1B97 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1B70(void)
{

loc_002D1B70: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 2);
    ecx = 0x3C61A0;
    PUSH32(esp, 0x002D1B81u); RECOMP_ABI_CALL(0x001567B0u, sub_001567B0); /* call 0x001567B0 */

loc_002D1B81: ;
    PUSH32(esp, 0x2D6C60);
    MEM32(0x3C61A0) = 0x3082A4;
    PUSH32(esp, 0x002D1B95u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1B95: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1BA0
 * Original: 0x002D1BA0 - 0x002D1BB7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1BA0(void)
{

loc_002D1BA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xBC490);
    PUSH32(esp, 0xBC2DE55Eu);
    ecx = 0x3C61BC;
    PUSH32(esp, 0x002D1BB6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002D1BB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1BC0
 * Original: 0x002D1BC0 - 0x002D1BD6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1BC0(void)
{

loc_002D1BC0: ;
    ecx = 0x3C6230;
    PUSH32(esp, 0x002D1BCAu); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_002D1BCA: ;
    PUSH32(esp, 0x2D6C70);
    PUSH32(esp, 0x002D1BD4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1BD4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1BE0
 * Original: 0x002D1BE0 - 0x002D1CDB (251 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D1BE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x34);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x002D1BECu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002D1BE6u); } /* indirect call */
    }

loc_002D1BEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002D1C06; /* je: equal / zero */

loc_002D1BF3: ;
    PUSH32(esp, 0x529C80);
    ecx = eax;
    PUSH32(esp, 0x002D1BFFu); RECOMP_ABI_CALL(0x001D2B00u, sub_001D2B00); /* call 0x001D2B00 */

loc_002D1BFF: ;
    MEM32(0x3C62B8) = eax;
    goto loc_002D1C0C;

loc_002D1C06: ;
    MEM32(0x3C62B8) = esi;

loc_002D1C0C: ;
    PUSH32(esp, 0x2D6C80);
    MEM32(0x3C62C0) = esi;
    MEM32(0x3C62BC) = esi;
    MEM32(0x3C62C8) = esi;
    MEM32(0x3C62C4) = esi;
    MEM32(0x3C62D0) = esi;
    MEM32(0x3C62CC) = esi;
    MEM32(0x3C62D8) = esi;
    MEM32(0x3C62D4) = esi;
    MEM32(0x3C62E0) = esi;
    MEM32(0x3C62DC) = esi;
    MEM32(0x3C62E8) = esi;
    MEM32(0x3C62E4) = esi;
    MEM32(0x3C62F0) = esi;
    MEM32(0x3C62EC) = esi;
    MEM32(0x3C62F8) = esi;
    MEM32(0x3C62F4) = esi;
    MEM32(0x3C6300) = esi;
    MEM32(0x3C62FC) = esi;
    MEM32(0x3C6308) = esi;
    MEM32(0x3C6304) = esi;
    MEM32(0x3C6310) = esi;
    MEM32(0x3C630C) = esi;
    MEM32(0x3C6318) = esi;
    MEM32(0x3C6314) = esi;
    MEM32(0x3C6320) = esi;
    MEM32(0x3C631C) = esi;
    MEM32(0x3C6328) = esi;
    MEM32(0x3C6324) = esi;
    MEM32(0x3C6330) = esi;
    MEM32(0x3C632C) = esi;
    MEM32(0x3C6338) = esi;
    MEM32(0x3C6334) = esi;
    PUSH32(esp, 0x002D1CD6u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1CD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1CE0
 * Original: 0x002D1CE0 - 0x002D1CF8 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1CE0(void)
{

loc_002D1CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x373674)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x3C6350) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D1D00
 * Original: 0x002D1D00 - 0x002D1D20 (32 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1D00(void)
{

loc_002D1D00: ;
    xmm0 = XMM_SCALAR(MEMF(0x373674)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x373678); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x3C6354) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D1D20
 * Original: 0x002D1D20 - 0x002D1D50 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1D20(void)
{

loc_002D1D20: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C6350)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C6354); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(0x3C6358) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D1D50
 * Original: 0x002D1D50 - 0x002D1D65 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1D50(void)
{

loc_002D1D50: ;
    PUSH32(esp, 0xC24C0);
    PUSH32(esp, 0x311D80);
    ecx = 0x3C6450;
    PUSH32(esp, 0x002D1D64u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D1D64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D1D70
 * Original: 0x002D1D70 - 0x002D1D86 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1D70(void)
{

loc_002D1D70: ;
    ecx = 0x3C64F8;
    PUSH32(esp, 0x002D1D7Au); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_002D1D7A: ;
    PUSH32(esp, 0x2D6D00);
    PUSH32(esp, 0x002D1D84u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1D84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1D90
 * Original: 0x002D1D90 - 0x002D1DA6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1D90(void)
{

loc_002D1D90: ;
    ecx = 0x3C6570;
    PUSH32(esp, 0x002D1D9Au); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_002D1D9A: ;
    PUSH32(esp, 0x2D6D10);
    PUSH32(esp, 0x002D1DA4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1DA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1DB0
 * Original: 0x002D1DB0 - 0x002D1DC6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1DB0(void)
{

loc_002D1DB0: ;
    ecx = 0x3C6600;
    PUSH32(esp, 0x002D1DBAu); RECOMP_ABI_CALL(0x000C71B0u, sub_000C71B0); /* call 0x000C71B0 */

loc_002D1DBA: ;
    PUSH32(esp, 0x2D6D20);
    PUSH32(esp, 0x002D1DC4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1DC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1DD0
 * Original: 0x002D1DD0 - 0x002D1DF1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1DD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1DD0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DA494) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1E00
 * Original: 0x002D1E00 - 0x002D1E0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D1E00: ;
    ecx = 0x3DA4E0;
    g_seh_ebp = ebp; sub_00106490(); return; /* tail jmp 0x00106490 */

}

/**
 * sub_002D1E10
 * Original: 0x002D1E10 - 0x002D1E1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002D1E10: ;
    ecx = 0x3DAA20;
    g_seh_ebp = ebp; sub_000FF2D0(); return; /* tail jmp 0x000FF2D0 */

}

/**
 * sub_002D1E20
 * Original: 0x002D1E20 - 0x002D1E41 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1E20: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DAF58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1E50
 * Original: 0x002D1E50 - 0x002D1E71 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1E50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1E50: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DAF60) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1E80
 * Original: 0x002D1E80 - 0x002D1EA1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1E80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1E80: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DAF6C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1EB0
 * Original: 0x002D1EB0 - 0x002D1ED1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1EB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D1EB0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DAF74) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D1EE0
 * Original: 0x002D1EE0 - 0x002D1EF6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1EE0(void)
{

loc_002D1EE0: ;
    ecx = 0x3DAF78;
    PUSH32(esp, 0x002D1EEAu); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002D1EEA: ;
    PUSH32(esp, 0x2D6D40);
    PUSH32(esp, 0x002D1EF4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1EF4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1F00
 * Original: 0x002D1F00 - 0x002D1F16 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1F00(void)
{

loc_002D1F00: ;
    ecx = 0x3DAFA4;
    PUSH32(esp, 0x002D1F0Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002D1F0A: ;
    PUSH32(esp, 0x2D6D50);
    PUSH32(esp, 0x002D1F14u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D1F14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D1F20
 * Original: 0x002D1F20 - 0x002D201F (255 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D1F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D1F20: ;
    xmm2 = XMM_SCALAR(MEMF(0x315CD0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x301058)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30039C)); /* movss */
    MEMF(0x375E08) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x315CCC)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(0x375DE0) = xmm0.f[0]; /* movss */
    MEMF(0x375DE4) = xmm1.f[0]; /* movss */
    MEMF(0x375DE8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x315CC8)); /* movss */
    MEMF(0x375E00) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3003A0)); /* movss */
    MEMF(0x375E0C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ecx = 2;
    MEMF(0x375DEC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(0x375E04) = xmm1.f[0]; /* movss */
    MEMF(0x375E1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x315CC4)); /* movss */
    MEMF(0x375E20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x301050)); /* movss */
    MEM32(0x375DF0) = eax;
    MEM32(0x375DF4) = ecx;
    MEM8(0x375DF8) = LO8(eax);
    MEMF(0x375DFC) = xmm0.f[0]; /* movss */
    MEM32(0x375E10) = eax;
    MEM32(0x375E14) = 1;
    MEM8(0x375E18) = LO8(eax);
    MEMF(0x375E24) = xmm1.f[0]; /* movss */
    MEMF(0x375E28) = xmm2.f[0]; /* movss */
    MEMF(0x375E2C) = xmm1.f[0]; /* movss */
    MEM32(0x375E30) = eax;
    MEM32(0x375E34) = ecx;
    MEM8(0x375E38) = LO8(eax);
    MEMF(0x375E3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002D2020
 * Original: 0x002D2020 - 0x002D2041 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2020: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DAFD0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2050
 * Original: 0x002D2050 - 0x002D2071 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2050: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DAFDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2080
 * Original: 0x002D2080 - 0x002D20BC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D2080: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002D2087u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002D2087: ;
    MEM32(0x3DAFF4) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3DAFF8) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3DAFF4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3DAFF4);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3DAFF4);
    PUSH32(esp, 0x2D6D60);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002D20B8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D20B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D20C0
 * Original: 0x002D20C0 - 0x002D20F1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D20C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D20C0: ;
    eax = 0x3DB004;
    ecx = 0x50;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002D20D0: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + -4) = 0x307680;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002D20D0; /* jne: not equal / not zero */

loc_002D20E5: ;
    PUSH32(esp, 0x2D6DC0);
    PUSH32(esp, 0x002D20EFu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D20EF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2100
 * Original: 0x002D2100 - 0x002D2122 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D2100: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0x3DB500;
    ecx = 0x20;
    /* nop */

loc_002D2110: ;
    MEM32(eax) = 0xFFFFFFFFu;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002D2110; /* jne: not equal / not zero */

loc_002D2121: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D2130
 * Original: 0x002D2130 - 0x002D2151 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2130: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DB618) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2160
 * Original: 0x002D2160 - 0x002D2181 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2160: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DB620) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2190
 * Original: 0x002D2190 - 0x002D21A6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2190(void)
{

loc_002D2190: ;
    ecx = 0x3DB624;
    PUSH32(esp, 0x002D219Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002D219A: ;
    PUSH32(esp, 0x2D6E00);
    PUSH32(esp, 0x002D21A4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D21A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D21B0
 * Original: 0x002D21B0 - 0x002D21D1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D21B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D21B0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DB658) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D21E0
 * Original: 0x002D21E0 - 0x002D21F6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D21E0(void)
{

loc_002D21E0: ;
    ecx = 0x3DB65C;
    PUSH32(esp, 0x002D21EAu); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002D21EA: ;
    PUSH32(esp, 0x2D6E10);
    PUSH32(esp, 0x002D21F4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D21F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2200
 * Original: 0x002D2200 - 0x002D2216 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2200(void)
{

loc_002D2200: ;
    ecx = 0x3DB688;
    PUSH32(esp, 0x002D220Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002D220A: ;
    PUSH32(esp, 0x2D6E20);
    PUSH32(esp, 0x002D2214u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D2214: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2220
 * Original: 0x002D2220 - 0x002D2241 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2220(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2220: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DB8D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2250
 * Original: 0x002D2250 - 0x002D225C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2250(void)
{

loc_002D2250: ;
    PUSH32(esp, 0x2D6E30);
    PUSH32(esp, 0x002D225Au); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D225A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2260
 * Original: 0x002D2260 - 0x002D229C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D2260: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002D2267u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002D2267: ;
    MEM32(0x3DB8D8) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3DB8DC) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3DB8D8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3DB8D8);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3DB8D8);
    PUSH32(esp, 0x2D6E40);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002D2298u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D2298: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002D22A0
 * Original: 0x002D22A0 - 0x002D22B5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D22A0(void)
{

loc_002D22A0: ;
    PUSH32(esp, 0x375E70);
    PUSH32(esp, 0xE95B93D);
    ecx = 0x3DB8E4;
    PUSH32(esp, 0x002D22B4u); RECOMP_ABI_CALL(0x001335E0u, sub_001335E0); /* call 0x001335E0 */

loc_002D22B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D22C0
 * Original: 0x002D22C0 - 0x002D22D6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D22C0(void)
{

loc_002D22C0: ;
    ecx = 0x3DB900;
    PUSH32(esp, 0x002D22CAu); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_002D22CA: ;
    PUSH32(esp, 0x2D6EA0);
    PUSH32(esp, 0x002D22D4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D22D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D22E0
 * Original: 0x002D22E0 - 0x002D22F6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D22E0(void)
{

loc_002D22E0: ;
    ecx = 0x3DB930;
    PUSH32(esp, 0x002D22EAu); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_002D22EA: ;
    PUSH32(esp, 0x2D6EB0);
    PUSH32(esp, 0x002D22F4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D22F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2300
 * Original: 0x002D2300 - 0x002D2316 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2300(void)
{

loc_002D2300: ;
    ecx = 0x3DB960;
    PUSH32(esp, 0x002D230Au); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_002D230A: ;
    PUSH32(esp, 0x2D6EC0);
    PUSH32(esp, 0x002D2314u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D2314: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2320
 * Original: 0x002D2320 - 0x002D2341 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2320(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2320: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DB9A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2350
 * Original: 0x002D2350 - 0x002D2371 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002D2350: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3DB9AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002D2380
 * Original: 0x002D2380 - 0x002D2396 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2380(void)
{

loc_002D2380: ;
    ecx = 0x3DB9E0;
    PUSH32(esp, 0x002D238Au); RECOMP_ABI_CALL(0x00105C60u, sub_00105C60); /* call 0x00105C60 */

loc_002D238A: ;
    PUSH32(esp, 0x2D6EF0);
    PUSH32(esp, 0x002D2394u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D2394: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D23A0
 * Original: 0x002D23A0 - 0x002D23B6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D23A0(void)
{

loc_002D23A0: ;
    ecx = 0x3DC480;
    PUSH32(esp, 0x002D23AAu); RECOMP_ABI_CALL(0x00105D00u, sub_00105D00); /* call 0x00105D00 */

loc_002D23AA: ;
    PUSH32(esp, 0x2D6F10);
    PUSH32(esp, 0x002D23B4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D23B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D23C0
 * Original: 0x002D23C0 - 0x002D23D6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D23C0(void)
{

loc_002D23C0: ;
    ecx = 0x3DD8E0;
    PUSH32(esp, 0x002D23CAu); RECOMP_ABI_CALL(0x00105D80u, sub_00105D80); /* call 0x00105D80 */

loc_002D23CA: ;
    PUSH32(esp, 0x2D6F30);
    PUSH32(esp, 0x002D23D4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D23D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D23E0
 * Original: 0x002D23E0 - 0x002D23F6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D23E0(void)
{

loc_002D23E0: ;
    ecx = 0x3DD940;
    PUSH32(esp, 0x002D23EAu); RECOMP_ABI_CALL(0x00105DD0u, sub_00105DD0); /* call 0x00105DD0 */

loc_002D23EA: ;
    PUSH32(esp, 0x2D6F50);
    PUSH32(esp, 0x002D23F4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D23F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2400
 * Original: 0x002D2400 - 0x002D2416 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2400(void)
{

loc_002D2400: ;
    ecx = 0x3DE7E0;
    PUSH32(esp, 0x002D240Au); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_002D240A: ;
    PUSH32(esp, 0x2D6ED0);
    PUSH32(esp, 0x002D2414u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D2414: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2420
 * Original: 0x002D2420 - 0x002D2436 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2420(void)
{

loc_002D2420: ;
    ecx = 0x3DE810;
    PUSH32(esp, 0x002D242Au); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_002D242A: ;
    PUSH32(esp, 0x2D6EE0);
    PUSH32(esp, 0x002D2434u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002D2434: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002D2440
 * Original: 0x002D2440 - 0x002D2455 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2440(void)
{

loc_002D2440: ;
    PUSH32(esp, 0x105E70);
    PUSH32(esp, 0x317FB8);
    ecx = 0x3DE840;
    PUSH32(esp, 0x002D2454u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D2454: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D2460
 * Original: 0x002D2460 - 0x002D2475 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2460(void)
{

loc_002D2460: ;
    PUSH32(esp, 0x106330);
    PUSH32(esp, 0x317FC8);
    ecx = 0x3DE850;
    PUSH32(esp, 0x002D2474u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002D2474: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002D2480
 * Original: 0x002D2480 - 0x002D2493 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D2480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D2480: ;
    PUSH32(esp, 0x317F2C);
    PUSH32(esp, 0x002D248Au); RECOMP_ABI_CALL(0x002642E0u, sub_002642E0); /* call 0x002642E0 */

loc_002D248A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DE860) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002D24A0
 * Original: 0x002D24A0 - 0x002D24B3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002D24A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002D24A0: ;
    PUSH32(esp, 0x317FD8);
    PUSH32(esp, 0x002D24AAu); RECOMP_ABI_CALL(0x002642E0u, sub_002642E0); /* call 0x002642E0 */

loc_002D24AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DE864) = eax;
    esp += 4; return; /* ret */

}
