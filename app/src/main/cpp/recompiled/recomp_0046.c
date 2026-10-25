/**
 * Medal of Honor European Assault - Recompiled code chunk 46
 * Functions: 250 (0x00193CE0 - 0x0019CBE2)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00193CE0
 * Original: 0x00193CE0 - 0x00193CF3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193CE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x32320C);
    PUSH32(esp, 0x00193CEFu); RECOMP_ABI_CALL(0x002BF339u, sub_002BF339); /* call 0x002BF339 */

loc_00193CEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193D00
 * Original: 0x00193D00 - 0x00193D01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D00(void)
{

loc_00193D00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193D10
 * Original: 0x00193D10 - 0x00193D19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D10(void)
{

loc_00193D10: ;
    eax = MEM32(ecx + 0x26C);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00193D20
 * Original: 0x00193D20 - 0x00193D2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D20(void)
{

loc_00193D20: ;
    eax = MEM32(ecx + 0x26C);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00193D30
 * Original: 0x00193D30 - 0x00193D37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D30(void)
{

loc_00193D30: ;
    eax = MEM32(ecx + 0x248);
    esp += 4; return; /* ret */

}

/**
 * sub_00193D40
 * Original: 0x00193D40 - 0x00193D5B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193D59; /* je: equal / zero */

loc_00193D47: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00193D4Du); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00193D4D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00193D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193D56u); } /* indirect call */
    }

loc_00193D59: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193D60
 * Original: 0x00193D60 - 0x00193D65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193D60: ;
    g_seh_ebp = ebp; sub_001306D0(); return; /* tail jmp 0x001306D0 */

}

/**
 * sub_00193D70
 * Original: 0x00193D70 - 0x00193D75 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D70(void)
{

loc_00193D70: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193D80
 * Original: 0x00193D80 - 0x00193E94 (276 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00193D80: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x254)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00193DB4; /* jnp: not parity */

loc_00193D94: ;
    eax = MEM32(ecx + 0x268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193DB4; /* jne: not equal / not zero */

loc_00193D9E: ;
    eax = MEM32(ecx + 0x254);
    MEM32(ecx + 0x258) = eax;
    MEM32(ecx + 0x268) = 1;

loc_00193DB4: ;
    edx = MEM32(ecx + 0x268);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193E1E; /* jne: not equal / not zero */

loc_00193DBF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x258)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx + 0x254); /* divss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x258) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x264) = xmm3.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00193E91; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00193DFD: ;
    edx = MEM32(ecx + 0x25C);
    MEMF(ecx + 0x258) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0x260) = edx;
    MEM32(ecx + 0x268) = 2;
    esp += 8; return; /* ret 4 */

loc_00193E1E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x25C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00193E91; /* jnp: not parity */

loc_00193E2F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193E91; /* jne: not equal / not zero */

loc_00193E34: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x260)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00193E51; /* jp: parity */

loc_00193E45: ;
    eax = MEM32(ecx + 0x25C);
    MEM32(ecx + 0x260) = eax;

loc_00193E51: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x260)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx + 0x25C); /* divss */
    MEMF(ecx + 0x260) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x264) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00193E91; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00193E7F: ;
    MEMF(ecx + 0x260) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0x268) = 3;

loc_00193E91: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193EA0
 * Original: 0x00193EA0 - 0x00193EA7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193EA0: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193EB0
 * Original: 0x00193EB0 - 0x00193EE7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193EB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3247F4);
    ecx = esp + 8;
    MEM32(esi) = 0x3247C8;
    PUSH32(esp, 0x00193EC8u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00193EC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00193ECFu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_00193ECF: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193EF0
 * Original: 0x00193EF0 - 0x00193F5B (107 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193F41; /* jne: not equal / not zero */

loc_00193EFA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x324804);
    PUSH32(esp, 0x00193F17u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00193F17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193F33; /* je: equal / zero */

loc_00193F1E: ;
    PUSH32(esp, 0x193BB0);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x38);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00193F31u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_00193F31: ;
    goto loc_00193F35;

loc_00193F33: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00193F35: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = 0;
    POP32(esp, ebx);

loc_00193F41: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00193F60
 * Original: 0x00193F60 - 0x00193F76 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F60(void)
{

loc_00193F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00193F6Bu); RECOMP_ABI_CALL(0x00194A50u, sub_00194A50); /* call 0x00194A50 */

loc_00193F6B: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00193F80
 * Original: 0x00193F80 - 0x00193FB5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193F9E; /* je: equal / zero */

loc_00193F8B: ;
    ecx = edi;
    PUSH32(esp, 0x00193F92u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_00193F92: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00193F9Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00193F95u); } /* indirect call */
    }

loc_00193F9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00193F9E: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    MEM32(esi + 0x34) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193FC0
 * Original: 0x00193FC0 - 0x00194034 (116 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193FC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x234);
    edx = MEM32(esi + 0x240);
    ecx = MEM32(esi + 0x238);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x23C);
    ebx = edx;
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x1F0;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00194008u); RECOMP_ABI_CALL(0x00265F30u, sub_00265F30); /* call 0x00265F30 */

loc_00194008: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edi = esi + 0xC0;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00194021u); RECOMP_ABI_CALL(0x00180810u, sub_00180810); /* call 0x00180810 */

loc_00194021: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0019402Cu); RECOMP_ABI_CALL(0x00180060u, sub_00180060); /* call 0x00180060 */

loc_0019402C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00194040
 * Original: 0x00194040 - 0x001940C9 (137 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001940BE; /* je: equal / zero */

loc_00194053: ;
    esi = MEM32(eax + 0x26C);
    edi = MEM32(ebx + 0x26C);
    ecx = 0xE;
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
    xmm0 = XMM_MEM(eax + 0x200); /* movaps */
    xmm1 = XMM_MEM(eax + 0x1F0); /* movaps */
    XMM_STORE(ebx + 0x1F0, xmm1); /* movaps */
    XMM_STORE(ebx + 0x200, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x220); /* movaps */
    xmm1 = XMM_MEM(eax + 0x210); /* movaps */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx + 0xC0;
    XMM_STORE(ebx + 0x210, xmm1); /* movaps */
    XMM_STORE(ebx + 0x220, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001940AFu); RECOMP_ABI_CALL(0x0017FF70u, sub_0017FF70); /* call 0x0017FF70 */

loc_001940AF: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x230);
    MEM32(ebx + 0x230) = ecx;

loc_001940BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001940D0
 * Original: 0x001940D0 - 0x00194149 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001940D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001940D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00194142; /* ja: above (unsigned >) */

loc_001940E3: ;
    eax = ZX8(MEM8(eax + 0x194158));
    { uint32_t _jt = MEM32(eax * 4 + 0x19414C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x001940F1u) goto loc_001940F1;
    if (_jt == 0x00194130u) goto loc_00194130;
    if (_jt == 0x00194142u) goto loc_00194142;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001940F1: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    edx = MEM32(ecx + -8);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00194129u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194123u); } /* indirect call */
    }

loc_00194129: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00194130: ;
    esi = ecx + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019413Au); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_0019413A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00194142u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194140u); } /* indirect call */
    }

loc_00194142: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00194160
 * Original: 0x00194160 - 0x001941D3 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194160: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5238A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001941D1; /* jne: not equal / not zero */

loc_0019416A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x324830);
    PUSH32(esp, 0x0019417Cu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0019417C: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001941C6; /* je: equal / zero */

loc_00194185: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019418Bu); RECOMP_ABI_CALL(0x00152360u, sub_00152360); /* call 0x00152360 */

loc_0019418B: ;
    ecx = eax;
    PUSH32(esp, 0x00194192u); RECOMP_ABI_CALL(0x00152380u, sub_00152380); /* call 0x00152380 */

loc_00194192: ;
    PUSH32(esp, 0x3247F4);
    ecx = esp + 0xC;
    edi = eax;
    MEM32(esi) = 0x3247C8;
    PUSH32(esp, 0x001941A8u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_001941A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001941AFu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_001941AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    MEM32(0x5238A0) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001941C6: ;
    MEM32(0x5238A0) = 0;
    POP32(esp, esi);

loc_001941D1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001941E0
 * Original: 0x001941E0 - 0x001941FB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001941E0(void)
{

loc_001941E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001941EEu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_001941EE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001941F6u); RECOMP_ABI_CALL(0x00193D80u, sub_00193D80); /* call 0x00193D80 */

loc_001941F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194200
 * Original: 0x00194200 - 0x00194247 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194200: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0019420Eu); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_0019420E: ;
    ecx = MEM32(esi + 0x240);
    edx = MEM32(esi + 0x23C);
    eax = MEM32(esi + 0x238);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x234);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esi + 0xC0;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00194237u); RECOMP_ABI_CALL(0x00180810u, sub_00180810); /* call 0x00180810 */

loc_00194237: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00194242u); RECOMP_ABI_CALL(0x00180060u, sub_00180060); /* call 0x00180060 */

loc_00194242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194250
 * Original: 0x00194250 - 0x00194271 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194250: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194268; /* je: equal / zero */

loc_0019425A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00194261u); RECOMP_ABI_CALL(0x00194AF0u, sub_00194AF0); /* call 0x00194AF0 */

loc_00194261: ;
    MEM32(esi + 0xC) = 0;

loc_00194268: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00194280
 * Original: 0x00194280 - 0x00194446 (454 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194280: ;
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
    PUSH32(esp, 0x00194293u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_00194293: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi) = 0x324670;
    MEM32(esi + 8) = 0x324668;
    MEM32(esi + 0xC0) = 0x30B534;
    MEMF(esi + 0x230) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x24C) = LO8(eax);
    MEMF(esi + 0x244) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x24D) = LO8(eax);
    MEM8(esi + 0x24E) = LO8(eax);
    MEM8(esi + 0x24F) = LO8(eax);
    MEM8(esi + 0x250) = 0xFF;
    ebx = esi + 0xC0;
    MEM32(esi + 0x268) = eax;
    MEM32(esi + 0x270) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esi + 0x254) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x258) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x25C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x264) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x26C) = edi;
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
    PUSH32(esp, 0x001943AFu); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_001943AF: ;
    ecx = MEM32(esi + 0x240);
    edx = MEM32(esi + 0x23C);
    eax = MEM32(esi + 0x238);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x234);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001943D2u); RECOMP_ABI_CALL(0x00180810u, sub_00180810); /* call 0x00180810 */

loc_001943D2: ;
    edx = esi + 0x30;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001943DDu); RECOMP_ABI_CALL(0x00180060u, sub_00180060); /* call 0x00180060 */

loc_001943DD: ;
    eax = MEM32(edi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x30091C)); /* movss */
    MEM32(esi + 0x234) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x240) = eax;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0x248) = ecx;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x254) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esi + 0x25C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019443Bu); RECOMP_ABI_CALL(0x00193FC0u, sub_00193FC0); /* call 0x00193FC0 */

loc_0019443B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194450
 * Original: 0x00194450 - 0x001944C0 (112 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194450: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5238A0);
    edx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001944BE; /* jle: less or equal (signed <=) */

loc_00194462: ;
    esi = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00194470: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019447F; /* je: equal / zero */

loc_00194474: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194470; /* jl: less (signed <) */

loc_0019447C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019447F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x32485C);
    PUSH32(esp, 0x00194493u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00194493: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001944A6; /* je: equal / zero */

loc_0019449A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001944A2u); RECOMP_ABI_CALL(0x00194280u, sub_00194280); /* call 0x00194280 */

loc_001944A2: ;
    esi = eax;
    goto loc_001944A8;

loc_001944A6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001944A8: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001944BB; /* je: equal / zero */

loc_001944B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001944B8u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_001944B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001944BB: ;
    eax = esi;
    POP32(esp, edi);

loc_001944BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001944C0
 * Original: 0x001944C0 - 0x001945D4 (276 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001944C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001944C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x523870);
    PUSH32(esp, 0x3248CC);
    MEMF(0x5238B0) = xmm1.f[0]; /* movss */
    MEMF(0x5238B4) = xmm0.f[0]; /* movss */
    MEMF(0x5238B8) = xmm0.f[0]; /* movss */
    MEMF(0x5238BC) = xmm0.f[0]; /* movss */
    MEMF(0x5238C0) = xmm0.f[0]; /* movss */
    MEMF(0x5238C4) = xmm1.f[0]; /* movss */
    MEMF(0x5238C8) = xmm0.f[0]; /* movss */
    MEMF(0x5238CC) = xmm0.f[0]; /* movss */
    MEMF(0x5238D0) = xmm0.f[0]; /* movss */
    MEMF(0x5238D4) = xmm0.f[0]; /* movss */
    MEMF(0x5238D8) = xmm1.f[0]; /* movss */
    MEMF(0x5238DC) = xmm0.f[0]; /* movss */
    MEMF(0x5238E0) = xmm0.f[0]; /* movss */
    MEMF(0x5238E4) = xmm0.f[0]; /* movss */
    MEMF(0x5238E8) = xmm0.f[0]; /* movss */
    MEMF(0x5238EC) = xmm1.f[0]; /* movss */
    MEM32(0x523894) = 0;
    PUSH32(esp, 0x00194564u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_00194564: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0019456Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00194568u); } /* indirect call */
    }

loc_0019456E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019457E; /* je: equal / zero */

loc_00194575: ;
    ecx = eax;
    PUSH32(esp, 0x0019457Cu); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_0019457C: ;
    goto loc_00194580;

loc_0019457E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00194580: ;
    MEM32(0x523894) = eax;
    ecx = 3;
    MEM32(0x52389C) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x523894);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3248B4);
    PUSH32(esp, 0x001945ABu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_001945AB: ;
    PUSH32(esp, 0x5238B0);
    PUSH32(esp, 0x3248A0);
    PUSH32(esp, 0x001945BAu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_001945BA: ;
    PUSH32(esp, 0x5238F0);
    PUSH32(esp, 0x324888);
    PUSH32(esp, 0x001945C9u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_001945C9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x523898) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001945E0
 * Original: 0x001945E0 - 0x00194660 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001945E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001945E0: ;
    eax = MEM32(0x5238A0);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001945FF; /* je: equal / zero */

loc_001945F6: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001945FDu); RECOMP_ABI_CALL(0x00194AF0u, sub_00194AF0); /* call 0x00194AF0 */

loc_001945FD: ;
    MEM32(esi) = ebx;

loc_001945FF: ;
    ecx = MEM32(0x52389C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edi + 0x10) = ebx;
    MEM32(0x523894) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0019462B; /* je: equal / zero */

loc_00194612: ;
    esi = ecx;
    PUSH32(esp, 0x00194619u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_00194619: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00194622u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019461Cu); } /* indirect call */
    }

loc_00194622: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x52389C) = ebx;

loc_0019462B: ;
    PUSH32(esp, 0x3248CC);
    PUSH32(esp, 0x00194635u); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_00194635: ;
    PUSH32(esp, 0x3248B4);
    PUSH32(esp, 0x0019463Fu); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0019463F: ;
    PUSH32(esp, 0x3248A0);
    PUSH32(esp, 0x00194649u); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_00194649: ;
    PUSH32(esp, 0x324888);
    PUSH32(esp, 0x00194653u); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_00194653: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x523898) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00194660
 * Original: 0x00194660 - 0x001949F1 (913 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00194660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194751u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_00194751: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194783u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_00194783: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001947B5u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_001947B5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    eax = esp + 0xB0;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    MEMF(esp + 0xB4) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194868u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00194868: ;
    ecx = esi + 0x1F0;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = 0x5238B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019487Eu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0019487E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001948ACu); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_001948AC: ;
    xmm0 = XMM_MEM(0x5238B0); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x5238C0); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x5238D0); /* movaps */
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x5238E0); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = 0x5238B0;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001948FBu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_001948FB: ;
    eax = MEM32(esi + 0x270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019491D; /* je: equal / zero */

loc_00194905: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0019490Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194909u); } /* indirect call */
    }

loc_0019490F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019491D; /* jne: not equal / not zero */

loc_00194914: ;
    eax = MEM32(esi + 0x270);
    PUSH32(esp, eax);
    goto loc_00194927;

loc_0019491D: ;
    ecx = MEM32(esi + 0x26C);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);

loc_00194927: ;
    ecx = MEM32(0x523894);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194935u); RECOMP_ABI_CALL(0x001CDE90u, sub_001CDE90); /* call 0x001CDE90 */

loc_00194935: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00194967; /* je: equal / zero */

loc_00194954: ;
    ecx = eax + 0xB0;
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00194964u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194961u); } /* indirect call */
    }

loc_00194964: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00194967: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(0x5238F0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(0x5238F4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(0x5238F8) = xmm1.f[0]; /* movss */
    MEMF(0x5238FC) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0x26C);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001949B8; /* jp: parity */

loc_001949B5: ;
    xmm1 = xmm2; /* movaps */

loc_001949B8: ;
    MEMF(0x523870) = xmm2.f[0]; /* movss */
    MEMF(0x523874) = xmm2.f[0]; /* movss */
    MEMF(0x523878) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x264)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x244); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(0x52387C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00194A00
 * Original: 0x00194A00 - 0x00194A26 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x3247C8;
    if (CMP_EQ(_fa, _fb)) goto loc_00194A1E; /* je: equal / zero */

loc_00194A10: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00194A17u); RECOMP_ABI_CALL(0x00194AF0u, sub_00194AF0); /* call 0x00194AF0 */

loc_00194A17: ;
    MEM32(esi + 0xC) = 0;

loc_00194A1E: ;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00194A30
 * Original: 0x00194A30 - 0x00194A38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194A30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00194AB0(); return; /* tail jmp 0x00194AB0 */

}

/**
 * sub_00194A40
 * Original: 0x00194A40 - 0x00194A47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194A40(void)
{

loc_00194A40: ;
    eax = ecx + 0xC0;
    esp += 4; return; /* ret */

}

/**
 * sub_00194A50
 * Original: 0x00194A50 - 0x00194A9E (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00194A7B; /* je: equal / zero */

loc_00194A5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x00194A68u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00194A62u); } /* indirect call */
    }

loc_00194A68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194A7B; /* je: equal / zero */

loc_00194A6F: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00194A77u); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_00194A77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194A80; /* jne: not equal / not zero */

loc_00194A7B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00194A80: ;
    ecx = 3;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(edi + 0x34) = eax;
    POP32(esp, edi);
    MEM32(0x523890) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00194AA0
 * Original: 0x00194AA0 - 0x00194AA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194AA0(void)
{

loc_00194AA0: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194AB0
 * Original: 0x00194AB0 - 0x00194AE8 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC0;
    MEM32(esi) = 0x324670;
    MEM32(esi + 8) = 0x324668;
    PUSH32(esp, 0x00194ACBu); RECOMP_ABI_CALL(0x0017FF60u, sub_0017FF60); /* call 0x0017FF60 */

loc_00194ACB: ;
    ecx = esi;
    PUSH32(esp, 0x00194AD2u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_00194AD2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194AE2; /* je: equal / zero */

loc_00194AD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00194ADFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00194ADF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194AE2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194AF0
 * Original: 0x00194AF0 - 0x00194BA4 (180 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194AF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00194B68; /* je: equal / zero */

loc_00194B00: ;
    eax = MEM32(edi + -4);
    ebp = edi + -4;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    if ((_fas < 0)) goto loc_00194B50; /* js: sign (negative) */

loc_00194B14: ;
    ebx = eax + 1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00194B20: ;
    edi = MEM32(esi + -4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194B3D; /* je: equal / zero */

loc_00194B2A: ;
    ecx = edi;
    PUSH32(esp, 0x00194B31u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_00194B31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00194B3Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00194B34u); } /* indirect call */
    }

loc_00194B3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194B3D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = ebp;
    MEM32(esi + 0x34) = ebp;
    MEM32(esi + 4) = ebp;
    if ((_fa != 0)) goto loc_00194B20; /* jne: not equal / not zero */

loc_00194B48: ;
    ebp = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(esp + 0x18));

loc_00194B50: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194B5E; /* je: equal / zero */

loc_00194B55: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00194B5Bu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00194B5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00194B68: ;
    esi = MEM32(edi + 0x34);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194B84; /* je: equal / zero */

loc_00194B71: ;
    ecx = esi;
    PUSH32(esp, 0x00194B78u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_00194B78: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00194B81u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00194B7Bu); } /* indirect call */
    }

loc_00194B81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194B84: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(edi) = ebp;
    MEM32(edi + 0x34) = ebp;
    MEM32(edi + 4) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00194B9A; /* je: equal / zero */

loc_00194B91: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00194B97u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00194B97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194B9A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194BB0
 * Original: 0x00194BB0 - 0x00194BEA (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x3247C8;
    if (CMP_EQ(_fa, _fb)) goto loc_00194BCE; /* je: equal / zero */

loc_00194BC0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00194BC7u); RECOMP_ABI_CALL(0x00194AF0u, sub_00194AF0); /* call 0x00194AF0 */

loc_00194BC7: ;
    MEM32(esi + 0xC) = 0;

loc_00194BCE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_00194BE4; /* je: equal / zero */

loc_00194BDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00194BE1u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00194BE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194BE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194BF0
 * Original: 0x00194BF0 - 0x00194C39 (73 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194BF0(void)
{

loc_00194BF0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 0x40) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x58) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x64) = 0;
    MEM8(ecx + 0x65) = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00194C40
 * Original: 0x00194C40 - 0x00194C5D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194C40(void)
{

loc_00194C40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x65) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00194C60
 * Original: 0x00194C60 - 0x00194C6B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194C60(void)
{

loc_00194C60: ;
    eax = MEM32(ecx + 0x60);
    eax = MEM32(eax * 4 + 0x378E18);
    esp += 4; return; /* ret */

}

/**
 * sub_00194C70
 * Original: 0x00194C70 - 0x00194D01 (145 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194C70: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194D00; /* jne: not equal / not zero */

loc_00194C7D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x40); /* addss */
    ecx = MEM32(eax + 0x58);
    edx = MEM32(eax + 0x5C);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x44); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = edx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x64) = 1;

loc_00194D00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00194D10
 * Original: 0x00194D10 - 0x00194D4A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194D10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x60) = ecx;
    MEM8(eax + 0x64) = LO8(ecx);
    MEM8(eax + 0x65) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00194D50
 * Original: 0x00194D50 - 0x00194DAF (95 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194D50(void)
{

loc_00194D50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax + 0x40) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x60) = ecx;
    MEM8(eax + 0x64) = 0;
    MEM8(eax + 0x65) = 1;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00194DB0
 * Original: 0x00194DB0 - 0x00194DE5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194DB0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194DE4; /* je: equal / zero */

loc_00194DBA: ;
    ecx = ZX8(MEM8(edx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194DE4; /* je: equal / zero */

loc_00194DC1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);

loc_00194DC5: ;
    esi = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi * 4 + 0x3248E8);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ZX8(MEM8(edx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194DC5; /* jne: not equal / not zero */

loc_00194DE1: ;
    eax = ~eax;
    POP32(esp, esi);

loc_00194DE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00194DF0
 * Original: 0x00194DF0 - 0x00194E32 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194DF0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194E31; /* je: equal / zero */

loc_00194DFA: ;
    ecx = ZX8(MEM8(edx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194E31; /* je: equal / zero */

loc_00194E01: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);

loc_00194E05: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x61 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00194E13; /* jb: below (unsigned <) */

loc_00194E0B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00194E13; /* ja: above (unsigned >) */

loc_00194E10: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00194E13: ;
    esi = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi * 4 + 0x3248E8);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ZX8(MEM8(edx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194E05; /* jne: not equal / not zero */

loc_00194E2E: ;
    eax = ~eax;
    POP32(esp, esi);

loc_00194E31: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00194E40
 * Original: 0x00194E40 - 0x00194E80 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194E40: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00194E7F; /* je: equal / zero */

loc_00194E4C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194E7E; /* je: equal / zero */

loc_00194E55: ;
    eax = ~eax;
    PUSH32(esp, edi);
    goto loc_00194E60;

    /* nop */

loc_00194E60: ;
    edx = ZX8(MEM8(ecx));
    edi = ZX8(LO8(eax));
    edx = ZX8(LO8(edx));
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(edi * 4 + 0x3248E8);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00194E60; /* jne: not equal / not zero */

loc_00194E7B: ;
    eax = ~eax;
    POP32(esp, edi);

loc_00194E7E: ;
    POP32(esp, esi);

loc_00194E7F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00194E80
 * Original: 0x00194E80 - 0x00194E95 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194E80(void)
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

loc_00194E80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194E8E; /* je: equal / zero */

loc_00194E84: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00194E8Au); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_00194E8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00194E8E: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00194E95
 * Original: 0x00194E95 - 0x00194F40 (171 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194E95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194E95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194EA1u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00194EA1: ;
    ecx = MEM32(0x378E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00194F32; /* je: equal / zero */

loc_00194EB2: ;
    eax = MEM32(ecx + 4);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    eax = ZX16(MEM16(ecx + 0x30));
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00194ECD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194ED4; /* jl: less (signed <) */

loc_00194ED2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00194ED4: ;
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x38;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194EEB; /* jne: not equal / not zero */

loc_00194EE3: ;
    eax = MEM32(eax);
    MEM32(ebp + esi * 4 + -24) = eax;
    goto loc_00194EF0;

loc_00194EEB: ;
    MEM32(ebp + esi * 4 + -24) = MEM32(ebp + esi * 4 + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + esi * 4 + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00194EF0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194ECD; /* jl: less (signed <) */

loc_00194EF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x378E58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x378E58) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00194F1A; /* jle: less or equal (signed <=) */

loc_00194EFF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00194F01: ;
    eax = MEM32(ebp + esi * 4 + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194F12; /* je: equal / zero */

loc_00194F09: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194F10u); RECOMP_ABI_CALL(0x001B6048u, sub_001B6048); /* call 0x001B6048 */

loc_00194F10: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00194F12: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194F01; /* jl: less (signed <) */

loc_00194F18: ;
    goto loc_00194F31;

loc_00194F1A: ;
    PUSH32(esp, 5);
    POP32(esp, esi);

loc_00194F1D: ;
    eax = MEM32(ebp + esi * 4 + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194F2E; /* je: equal / zero */

loc_00194F25: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194F2Cu); RECOMP_ABI_CALL(0x001B6048u, sub_001B6048); /* call 0x001B6048 */

loc_00194F2C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00194F2E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00194F1D; /* jns: not sign (positive) */

loc_00194F31: ;
    POP32(esp, esi);

loc_00194F32: ;
    MEM32(0x378E58) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194F3Du); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00194F3D: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00194F40
 * Original: 0x00194F40 - 0x00194F6D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194F40: ;
    eax = MEM32(0x523904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x52390C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x52390C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194F6C; /* je: equal / zero */

loc_00194F4D: ;
    MEM32(0x52390C) = eax;
    eax = MEM32(0x523908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194F6C; /* je: equal / zero */

loc_00194F5B: ;
    PUSH32(esp, esi);

loc_00194F5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0xC));
    esi = MEM32(eax);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00194F64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F61u); } /* indirect call */
    }

loc_00194F64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00194F5C; /* jne: not equal / not zero */

loc_00194F6B: ;
    POP32(esp, esi);

loc_00194F6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00194F6D
 * Original: 0x00194F6D - 0x001950D9 (364 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194F6D(void)
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

loc_00194F6D: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x523B90) = MEM32(0x523B90) + 1;
    _fa = (uint32_t)(MEM32(0x523B90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00194F7Du); RECOMP_ABI_CALL(0x0019729Fu, sub_0019729F); /* call 0x0019729F */

loc_00194F7D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523B8A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B8A), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00194F9C; /* jle: less or equal (signed <=) */

loc_00194F89: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x523B94); PUSH32(esp, 0x00194F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F89u); } /* indirect call */
    }

loc_00194F90: ;
    eax = (uint32_t)(int32_t)SMEM8(0x523B8A);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194F89; /* jl: less (signed <) */

loc_00194F9C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x523B8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523B8C), LO16(ebx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001950D4; /* jle: less or equal (signed <=) */

loc_00194FAB: ;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, edi);

loc_00194FB0: ;
    eax = MEM32(0x523BF4);
    ecx = MEM32(esp + 0x10);
    esi = ecx + eax;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001950BB; /* jne: not equal / not zero */

loc_00194FC6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194FF5; /* jl: less (signed <) */

loc_00194FCA: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194FF5; /* je: equal / zero */

loc_00194FD2: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x6A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x6A) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00194FE0; /* jb: below (unsigned <) */

loc_00194FDD: ;
    MEM8(esi + 0x6C) = LO8(ebx);

loc_00194FE0: ;
    PUSH32(esp, ebp);
    MEM16(esi + 0x8A) = LO16(ebx);
    PUSH32(esp, 0x00194FEDu); RECOMP_ABI_CALL(0x001973CEu, sub_001973CE); /* call 0x001973CE */

loc_00194FED: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00194FF3u); RECOMP_ABI_CALL(0x00196DDBu, sub_00196DDB); /* call 0x00196DDB */

loc_00194FF3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00194FF5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x7C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019500B; /* je: equal / zero */

loc_00194FFC: ;
    MEM8(esi + 0x6B) = MEM8(esi + 0x6B) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x6B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x6B));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x69)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x69) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019500B; /* jb: below (unsigned <) */

loc_00195008: ;
    MEM8(esi + 0x6B) = LO8(ebx);

loc_0019500B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195055; /* jnp: not parity */

loc_0019501C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x30); /* comiss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019503E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x30)) */

loc_00195034: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00195042;

loc_0019503E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */

loc_00195042: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019504F; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00195044: ;
    eax = MEM32(esi + 0x34);
    MEM32(esi + 0x38) = eax;
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */

loc_0019504F: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    if ((_fca > _fcb)) goto loc_00195077; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esi + 0x38)) */

loc_00195055: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(esi + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_00195068; /* je: equal / zero */

loc_00195062: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00195068: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001950A9; /* jne: not equal / not zero */

loc_0019506C: ;
    MEM8(esi + 0x5D) = MEM8(esi + 0x5D) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x5D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x5D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x5C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x5C) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195080; /* jl: less (signed <) */

loc_00195077: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0019507Eu); RECOMP_ABI_CALL(0x001960FFu, sub_001960FF); /* call 0x001960FF */

loc_0019507E: ;
    goto loc_001950BA;

loc_00195080: ;
    ecx = MEM32(esi + 0x70);
    eax = SX8(LO8(eax));
    ecx = ecx + eax * 8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x44) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00195099; /* jge: greater or equal (signed >=) */

loc_00195092: ;
    MEM32(esi + 0x44) = 0x7FFFFFFF;

loc_00195099: ;
    eax = MEM32(ecx + 4);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x44))); }
    MEM32(esi + 0x3C) = eax;

loc_001950A9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001950BB; /* je: equal / zero */

loc_001950AD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001950B3u); RECOMP_ABI_CALL(0x00196062u, sub_00196062); /* call 0x00196062 */

loc_001950B3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001950B9u); RECOMP_ABI_CALL(0x00195F51u, sub_00195F51); /* call 0x00195F51 */

loc_001950B9: ;
    POP32(esp, ecx);

loc_001950BA: ;
    POP32(esp, ecx);

loc_001950BB: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523B8C);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x90;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194FB0; /* jl: less (signed <) */

loc_001950D3: ;
    POP32(esp, edi);

loc_001950D4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001950D9
 * Original: 0x001950D9 - 0x001950DE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001950D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001950D9: ;
    g_seh_ebp = ebp; sub_0019748C(); return; /* tail jmp 0x0019748C */

}

/**
 * sub_001950DE
 * Original: 0x001950DE - 0x001950E3 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001950DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001950DE: ;
    g_seh_ebp = ebp; sub_0019749A(); return; /* tail jmp 0x0019749A */

}

/**
 * sub_001950E3
 * Original: 0x001950E3 - 0x001950F1 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001950E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001950E3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x378E48); PUSH32(esp, 0x001950E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001950E3u); } /* indirect call */
    }

loc_001950E9: ;
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x523B89) = MEM8(0x523B89) + 1;
    _fa = (uint32_t)(MEM8(0x523B89)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001950F1
 * Original: 0x001950F1 - 0x001950FE (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001950F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001950F1: ;
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(0x523B89) = MEM8(0x523B89) - 1;
    _fa = (uint32_t)(MEM8(0x523B89)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x378E4C)); return; /* indirect tail jmp */

}

/**
 * sub_001950FE
 * Original: 0x001950FE - 0x0019515A (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001950FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001950FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00195104u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00195104: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0019510Bu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019510B: ;
    esi = eax;
    PUSH32(esp, 0x00195112u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00195112: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019511Au); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019511A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195126; /* jne: not equal / not zero */

loc_00195121: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00195126: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    MEM32(esi) = 0x46584253;
    edi = esi + 8;
    eax = 0x3F800000;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x24) = 1;
    MEM32(eax) = esi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019515A
 * Original: 0x0019515A - 0x00195180 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019515A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019515A: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46584253) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x46584253 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019517C; /* jne: not equal / not zero */

loc_00195165: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195175; /* jne: not equal / not zero */

loc_0019516B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00195171u); RECOMP_ABI_CALL(0x00197B11u, sub_00197B11); /* call 0x00197B11 */

loc_00195171: ;
    POP32(esp, ecx);
    MEM32(esi + 0x28) = eax;

loc_00195175: ;
    MEM32(esi + 0x24) = 1;

loc_0019517C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00195180
 * Original: 0x00195180 - 0x001951B8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00195180: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001951B6; /* je: equal / zero */

loc_00195187: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46584253) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x46584253 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001951B6; /* jne: not equal / not zero */

loc_0019518F: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019519A; /* jne: not equal / not zero */

loc_00195195: ;
    PUSH32(esp, 0x0019519Au); RECOMP_ABI_CALL(0x0019515Au, sub_0019515A); /* call 0x0019515A */

loc_0019519A: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001951A2u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_001951A2: ;
    PUSH32(esp, 0x001951A7u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_001951A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001951ADu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001951AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001950F1(); return; /* tail jmp 0x001950F1 */

loc_001951B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001951B8
 * Original: 0x001951B8 - 0x001951DF (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001951B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001951B8: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001951C6; /* jne: not equal / not zero */

loc_001951C1: ;
    PUSH32(esp, 0x001951C6u); RECOMP_ABI_CALL(0x0019515Au, sub_0019515A); /* call 0x0019515A */

loc_001951C6: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x001951D0u); RECOMP_ABI_CALL(0x00197AE5u, sub_00197AE5); /* call 0x00197AE5 */

loc_001951D0: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001951DF
 * Original: 0x001951DF - 0x001951E7 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001951DF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001951DF: ;
    PUSH32(esp, 0x001951E4u); RECOMP_ABI_CALL(0x00195180u, sub_00195180); /* call 0x00195180 */

loc_001951E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001951E7
 * Original: 0x001951E7 - 0x00195247 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001951E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001951E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001951EEu); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_001951EE: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x324CE8); /* mulss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x523B8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523B8C), LO16(edi) (16-bit) */
    MEMF(0x379068) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0019523D; /* jle: less or equal (signed <=) */

loc_00195211: ;
    eax = MEM32(0x523BF4);
    _fa = (uint32_t)(MEM8(edi + eax + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + eax + 0x6D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019522B; /* jne: not equal / not zero */

loc_0019521D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00195223u); RECOMP_ABI_CALL(0x00196062u, sub_00196062); /* call 0x00196062 */

loc_00195223: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00195229u); RECOMP_ABI_CALL(0x00195F51u, sub_00195F51); /* call 0x00195F51 */

loc_00195229: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019522B: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523B8C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195211; /* jl: less (signed <) */

loc_0019523D: ;
    PUSH32(esp, 0x00195242u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00195242: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00195247
 * Original: 0x00195247 - 0x001952A5 (94 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195247(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195247: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF7u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019527F; /* jg: greater (signed >) */

loc_00195250: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00195299; /* je: equal / zero */

loc_00195252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFEDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019527B; /* je: equal / zero */

loc_00195257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFEEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195277; /* je: equal / zero */

loc_0019525C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195273; /* je: equal / zero */

loc_00195261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019526F; /* je: equal / zero */

loc_00195266: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195292; /* jne: not equal / not zero */

loc_0019526B: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0019526F: ;
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00195273: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00195277: ;
    PUSH32(esp, 0xFFFFFFF9u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0019527B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0019527F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001952A1; /* je: equal / zero */

loc_00195284: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019529D; /* je: equal / zero */

loc_00195289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195299; /* je: equal / zero */

loc_0019528E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195296; /* je: equal / zero */

loc_00195292: ;
    PUSH32(esp, 0xFFFFFFFAu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00195296: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00195299: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0019529D: ;
    PUSH32(esp, 0xFFFFFFF5u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_001952A1: ;
    PUSH32(esp, 0xFFFFFFF6u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001952A5
 * Original: 0x001952A5 - 0x001952D3 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001952A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001952A5: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -88;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001952B9u); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_001952B9: ;
    SET_LO16(eax, MEM16(ebp + 0x7C));
    MEM16(ebp + -52) = LO16(eax);
    eax = ebp + -88;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001952CAu); RECOMP_ABI_CALL(0x00197518u, sub_00197518); /* call 0x00197518 */

loc_001952CA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001952D3
 * Original: 0x001952D3 - 0x001952FE (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001952D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001952D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = ebp + -204;
    PUSH32(esp, eax);
    MEM8(esi) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001952EFu); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_001952EF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001952F9; /* jne: not equal / not zero */

loc_001952F6: ;
    MEM8(esi) = 1;

loc_001952F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001952FE
 * Original: 0x001952FE - 0x00195343 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001952FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001952FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195310u); RECOMP_ABI_CALL(0x001952D3u, sub_001952D3); /* call 0x001952D3 */

loc_00195310: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019531D; /* jne: not equal / not zero */

loc_00195318: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00195340;

loc_0019531D: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019532E; /* jne: not equal / not zero */

loc_00195326: ;
    MEM32(0x378E50) = esi;
    goto loc_0019533E;

loc_0019532E: ;
    MEM32(0x523934) = esi;
    MEM32(0x523938) = 1;

loc_0019533E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195340: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00195343
 * Original: 0x00195343 - 0x00195389 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195343(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00195343: ;
    PUSH32(esp, 0x00195348u); RECOMP_ABI_CALL(0x001ED7A6u, sub_001ED7A6); /* call 0x001ED7A6 */

loc_00195348: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00195360; /* jne: not equal / not zero */

loc_00195357: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00195386;

loc_00195360: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0019536C; /* jne: not equal / not zero */

loc_00195364: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    goto loc_00195386;

loc_0019536C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00195386; /* jne: not equal / not zero */

loc_00195371: ;
    ecx = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_00195386: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00195389
 * Original: 0x00195389 - 0x001953BF (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195389(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195389: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001953A5u); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_001953A5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001953B1; /* je: equal / zero */

loc_001953AC: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_001953BC;

loc_001953B1: ;
    eax = ZX16(MEM16(ebp + -166));
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001953BC: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001953BF
 * Original: 0x001953BF - 0x00195437 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001953BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001953BF: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -92;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001953D3u); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_001953D3: ;
    eax = MEM32(ebp + 0x78);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00195416; /* je: equal / zero */

loc_001953DD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001953E6; /* je: equal / zero */

loc_001953E1: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00195400;

loc_001953E6: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), LO8(ecx) (8-bit) */
    SET_LO8(eax, MEM8(ebp + 0x7C));
    if (CMP_NE(_fa, _fb)) goto loc_00195405; /* jne: not equal / not zero */

loc_001953F1: ;
    MEM8(ebp + -47) = LO8(eax);

loc_001953F4: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001953FDu); RECOMP_ABI_CALL(0x00197518u, sub_00197518); /* call 0x00197518 */

loc_001953FD: ;
    POP32(esp, ecx);

loc_001953FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195400: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00195405: ;
    MEM8(0x523924) = LO8(eax);
    MEM32(0x523928) = 1;
    goto loc_001953FE;

loc_00195416: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), LO8(ecx) (8-bit) */
    SET_LO8(eax, MEM8(ebp + 0x7C));
    if (CMP_NE(_fa, _fb)) goto loc_00195426; /* jne: not equal / not zero */

loc_00195421: ;
    MEM8(ebp + -50) = LO8(eax);
    goto loc_001953F4;

loc_00195426: ;
    MEM8(0x523914) = LO8(eax);
    MEM32(0x523918) = 1;
    goto loc_001953FE;

}

/**
 * sub_00195437
 * Original: 0x00195437 - 0x001954B2 (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195437(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195437: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019544Cu); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_0019544C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195452u); RECOMP_ABI_CALL(0x00195247u, sub_00195247); /* call 0x00195247 */

loc_00195452: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00195463; /* jge: greater or equal (signed >=) */

loc_0019545A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195460u); RECOMP_ABI_CALL(0x00195247u, sub_00195247); /* call 0x00195247 */

loc_00195460: ;
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00195463: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195465: ;
    MEM32(eax + 0x523918) = ecx;
    MEM32(eax + 0x523940) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195465; /* jl: less (signed <) */

loc_00195479: ;
    eax = ebp + -204;
    PUSH32(esp, eax);
    MEM32(0x523938) = ecx;
    MEM8(0x523C51) = LO8(ecx);
    MEM32(0x523C54) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195497u); RECOMP_ABI_CALL(0x00197518u, sub_00197518); /* call 0x00197518 */

loc_00195497: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(0x523910));
    PUSH32(esp, MEM32(0x52395C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001954ABu); RECOMP_ABI_CALL(0x0019770Cu, sub_0019770C); /* call 0x0019770C */

loc_001954AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001954B2
 * Original: 0x001954B2 - 0x001955A0 (238 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001954B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001954B2: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019559B; /* jne: not equal / not zero */

loc_001954CA: ;
    eax = MEM32(0x523BD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001954D5; /* je: equal / zero */

loc_001954D3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001954D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001954D3u); } /* indirect call */
    }

loc_001954D5: ;
    eax = MEM32(0x523BF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001954E0; /* je: equal / zero */

loc_001954DE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001954E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001954DEu); } /* indirect call */
    }

loc_001954E0: ;
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001954E9u); RECOMP_ABI_CALL(0x00198D05u, sub_00198D05); /* call 0x00198D05 */

loc_001954E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0019559B; /* jg: greater (signed >) */

loc_001954F2: ;
    eax = MEM32(0x37906C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195512; /* jle: less or equal (signed <=) */

loc_001954FD: ;
    edx = MEM32(0x523CA8);
    _fa = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019559B; /* jne: not equal / not zero */

loc_0019550D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001954FD; /* jl: less (signed <) */

loc_00195512: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195517u); RECOMP_ABI_CALL(0x0019804Fu, sub_0019804F); /* call 0x0019804F */

loc_00195517: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019551Eu); RECOMP_ABI_CALL(0x00197233u, sub_00197233); /* call 0x00197233 */

loc_0019551E: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195527u); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_00195527: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195530u); RECOMP_ABI_CALL(0x00197688u, sub_00197688); /* call 0x00197688 */

loc_00195530: ;
    PUSH32(esp, MEM32(0x378E50));
    eax = ebp + -96;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019553Fu); RECOMP_ABI_CALL(0x00196FBFu, sub_00196FBF); /* call 0x00196FBF */

loc_0019553F: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    MEM8(0x523B88) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019554Fu); RECOMP_ABI_CALL(0x00197518u, sub_00197518); /* call 0x00197518 */

loc_0019554F: ;
    MEM8(0x523B88) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019555Bu); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0019555B: ;
    PUSH32(esp, MEM32(0x523BF4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195566u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00195566: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019556Bu); RECOMP_ABI_CALL(0x001975EEu, sub_001975EE); /* call 0x001975EE */

loc_0019556B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195570u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00195570: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195577u); RECOMP_ABI_CALL(0x00197022u, sub_00197022); /* call 0x00197022 */

loc_00195577: ;
    SET_LO8(eax, MEM8(0x523A60));
    _fb = (uint32_t)(MEM8(0x523A5F)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(0x523A5F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x523C74) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019558Fu); RECOMP_ABI_CALL(0x00198065u, sub_00198065); /* call 0x00198065 */

loc_0019558F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195594u); RECOMP_ABI_CALL(0x00197CFDu, sub_00197CFD); /* call 0x00197CFD */

loc_00195594: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195596: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0019559B: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00195596;

}

/**
 * sub_001955A0
 * Original: 0x001955A0 - 0x001955AD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001955A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001955AD
 * Original: 0x001955AD - 0x001955BC (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955AD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001955AD: ;
    PUSH32(esp, 0x001955B2u); RECOMP_ABI_CALL(0x00197555u, sub_00197555); /* call 0x00197555 */

loc_001955B2: ;
    MEM32(0x52395C) = MEM32(0x52395C) & 0;
    _fa = (uint32_t)(MEM32(0x52395C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001955BC
 * Original: 0x001955BC - 0x001955DC (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001955BC: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001955C7; /* je: equal / zero */

loc_001955C3: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_001955C7: ;
    eax = MEM32(esp + 8);
    MEM32(0x52395C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x523910) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001955DC
 * Original: 0x001955DC - 0x001955E0 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955DC(void)
{

loc_001955DC: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001955E0
 * Original: 0x001955E0 - 0x001955ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001955E0: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x001955E9u); RECOMP_ABI_CALL(0x00196FF4u, sub_00196FF4); /* call 0x00196FF4 */

loc_001955E9: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001955ED
 * Original: 0x001955ED - 0x0019562A (61 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001955ED(void)
{

loc_001955ED: ;
    MEM32(0x523D1C) = 0x199500;
    MEM32(0x523D20) = 0x1991F7;
    MEM32(0x523D24) = 0x198F4C;
    MEM32(0x523D64) = 0x20;
    MEM32(0x523D68) = 0x34;
    MEM32(0x523D6C) = 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0019562A
 * Original: 0x0019562A - 0x00195632 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019562A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019562A: ;
    PUSH32(esp, 0x0019562Fu); RECOMP_ABI_CALL(0x0019A5F5u, sub_0019A5F5); /* call 0x0019A5F5 */

loc_0019562F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00195632
 * Original: 0x00195632 - 0x0019566E (60 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195632(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195632: ;
    _fa = (uint32_t)(MEM32(0x523960)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523960), 0 (32-bit) */
    MEM32(0x523AE0) = 0x1A9D81;
    if (CMP_NE(_fa, _fb)) goto loc_00195660; /* jne: not equal / not zero */

loc_00195645: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19562A);
    PUSH32(esp, 0x00195653u); RECOMP_ABI_CALL(0x001BFAA0u, sub_001BFAA0); /* call 0x001BFAA0 */

loc_00195653: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x523960) = 1;

loc_00195660: ;
    PUSH32(esp, 0x19A61F);
    PUSH32(esp, 0x0019566Au); RECOMP_ABI_CALL(0x001BFC25u, sub_001BFC25); /* call 0x001BFC25 */

loc_0019566A: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0019566E
 * Original: 0x0019566E - 0x001956B1 (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019566E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019566E: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x14) = MEM16(eax + 0x14) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x14)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 2) = 0x3C;
    MEM16(eax + 0xC) = 0x1000;
    MEM16(eax + 0xE) = 0x1000;
    MEM16(eax + 0x10) = 0x1000;
    MEM16(eax + 0x16) = LO16(ecx);
    MEM8(eax + 3) = 0x7F;
    MEM8(eax) = 0x7F;
    MEM8(eax + 4) = 0x7F;
    MEM8(eax + 1) = 0x40;
    MEM8(eax + 5) = LO8(ecx);
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001956B1
 * Original: 0x001956B1 - 0x00195712 (97 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001956B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001956B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x17), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019570F; /* jle: less or equal (signed <=) */

loc_001956C1: ;
    PUSH32(esp, edi);

loc_001956C2: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x17));
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = SX8(LO8(eax));
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + eax * 4 + 0x34);
    MEM32(ebp + -16) = ecx;
    eax = MEM32(esi + eax * 4 + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523B8E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B8E), 0 (8-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00195708; /* jle: less or equal (signed <=) */

loc_001956F0: ;
    eax = ebp + -20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi * 4 + 0x523BC4); PUSH32(esp, 0x001956FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001956F4u); } /* indirect call */
    }

loc_001956FB: ;
    eax = (uint32_t)(int32_t)SMEM8(0x523B8E);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_001956F0; /* jl: less (signed <) */

loc_00195708: ;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x17), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001956C2; /* jg: greater (signed >) */

loc_0019570E: ;
    POP32(esp, edi);

loc_0019570F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00195712
 * Original: 0x00195712 - 0x001957AE (156 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195712: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x523BE4) = 0x195807;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019572Du); RECOMP_ABI_CALL(0x0019AAEEu, sub_0019AAEE); /* call 0x0019AAEE */

loc_0019572D: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(0x523BF8);
    esi = ecx + eax * 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    MEM8(esi + 4) = 1;
    _fa = (uint32_t)(MEM8(0x523B8E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B8E), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001957A3; /* jle: less or equal (signed <=) */

loc_0019574E: ;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_001957A3; /* jbe: below or equal (unsigned <=) */

loc_00195757: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195760u); RECOMP_ABI_CALL(0x0019AB10u, sub_0019AB10); /* call 0x0019AB10 */

loc_00195760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00195797; /* je: equal / zero */

loc_00195769: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019576D: ;
    eax = ebp + -208;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019577Du); RECOMP_ABI_CALL(0x0019A624u, sub_0019A624); /* call 0x0019A624 */

loc_0019577D: ;
    PUSH32(esp, ebx);
    MEM32(ebp + 0xC) = eax;
    eax = ebp + -208;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019578Fu); RECOMP_ABI_CALL(0x001956B1u, sub_001956B1); /* call 0x001956B1 */

loc_0019578F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019576D; /* jne: not equal / not zero */

loc_00195797: ;
    eax = ZX16(MEM16(edi + 6));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195757; /* jl: less (signed <) */

loc_001957A3: ;
    PUSH32(esp, 8);
    POP32(esp, eax);
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001957AE
 * Original: 0x001957AE - 0x00195807 (89 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001957AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001957AE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001957B8u); RECOMP_ABI_CALL(0x0019B1C5u, sub_0019B1C5); /* call 0x0019B1C5 */

loc_001957B8: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001957C2u); RECOMP_ABI_CALL(0x0019B195u, sub_0019B195); /* call 0x0019B195 */

loc_001957C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_001957CD; /* jge: greater or equal (signed >=) */

loc_001957C8: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001957CD: ;
    eax = MEM32(0x523BF8);
    PUSH32(esp, esi);
    esi = MEM32(eax + edi * 8);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195801; /* jl: less (signed <) */

loc_001957DE: ;
    ecx = ZX16(MEM16(esi + 6));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00195801; /* jge: greater or equal (signed >=) */

loc_001957E6: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001957F3u); RECOMP_ABI_CALL(0x0019AB10u, sub_0019AB10); /* call 0x0019AB10 */

loc_001957F3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001957FCu); RECOMP_ABI_CALL(0x0019AFC8u, sub_0019AFC8); /* call 0x0019AFC8 */

loc_001957FC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00195804;

loc_00195801: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);

loc_00195804: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00195807
 * Original: 0x00195807 - 0x00195918 (273 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195807(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195807: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00195841; /* jne: not equal / not zero */

loc_0019581A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x523A44)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523A44), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00195912; /* jbe: below or equal (unsigned <=) */

loc_00195829: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019582Fu); RECOMP_ABI_CALL(0x00195807u, sub_00195807); /* call 0x00195807 */

loc_0019582F: ;
    eax = ZX16(MEM16(0x523A44));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00195829; /* jl: less (signed <) */

loc_0019583C: ;
    goto loc_00195912;

loc_00195841: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195847u); RECOMP_ABI_CALL(0x0019B195u, sub_0019B195); /* call 0x0019B195 */

loc_00195847: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00195854; /* je: equal / zero */

loc_0019584C: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_00195914;

loc_00195854: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019585Au); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0019585A: ;
    eax = MEM32(0x523BF8);
    esi = ebx;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(esi + eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x523B8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523B8C), LO16(eax) (16-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001958A8; /* jle: less or equal (signed <=) */

loc_00195875: ;
    MEM32(ebp + 8) = eax;

loc_00195878: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(0x523BF4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195892; /* jne: not equal / not zero */

loc_0019588A: ;
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195891u); RECOMP_ABI_CALL(0x001960FFu, sub_001960FF); /* call 0x001960FF */

loc_00195891: ;
    POP32(esp, ecx);

loc_00195892: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523B8C);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x90;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195878; /* jl: less (signed <) */

loc_001958A8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001958F9; /* jbe: below or equal (unsigned <=) */

loc_001958B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001958B7u); RECOMP_ABI_CALL(0x0019AB10u, sub_0019AB10); /* call 0x0019AB10 */

loc_001958B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001958F0; /* je: equal / zero */

loc_001958C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001958C4: ;
    eax = ebp + -212;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001958D4u); RECOMP_ABI_CALL(0x0019A624u, sub_0019A624); /* call 0x0019A624 */

loc_001958D4: ;
    PUSH32(esp, 2);
    MEM32(ebp + 8) = eax;
    eax = ebp + -212;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001958E7u); RECOMP_ABI_CALL(0x001956B1u, sub_001956B1); /* call 0x001956B1 */

loc_001958E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001958C4; /* jne: not equal / not zero */

loc_001958F0: ;
    eax = ZX16(MEM16(edi + 6));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001958B0; /* jl: less (signed <) */

loc_001958F9: ;
    eax = MEM32(0x523BF8);
    MEM32(esi + eax) = MEM32(esi + eax) & 0;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x523BF8);
    MEM8(esi + eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195911u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00195911: ;
    POP32(esp, edi);

loc_00195912: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195914: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00195918
 * Original: 0x00195918 - 0x0019593B (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195918(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195918: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = ecx;
    edx = edi;
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
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019593B
 * Original: 0x0019593B - 0x00195957 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019593B(void)
{

loc_0019593B: ;
    eax = MEM32(0x378E54);
    ecx = ZX16(MEM16(eax + 0x2E));
    edx = MEM32(0x523BF8);
    eax = MEM32(eax + 0xC);
    ecx = edx + ecx * 8;
    MEM32(ecx) = eax;
    MEM8(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00195957
 * Original: 0x00195957 - 0x001959C9 (114 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195957(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195957: ;
    ecx = MEM32(0x378E54);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x32));
    PUSH32(esp, edi);
    eax = ZX16(LO16(esi));
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(MEM16(ecx + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x30), LO16(esi) (16-bit) */
    edi = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001959C6; /* jbe: below or equal (unsigned <=) */

loc_00195974: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx + 0x38;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001959C6; /* jne: not equal / not zero */

loc_00195983: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0019598Au); RECOMP_ABI_CALL(0x001B5B5Fu, sub_001B5B5F); /* call 0x001B5B5F */

loc_0019598A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001959C6; /* jne: not equal / not zero */

loc_00195990: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00195997u); RECOMP_ABI_CALL(0x001B5D54u, sub_001B5D54); /* call 0x001B5D54 */

loc_00195997: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0xC) = LO8(eax);
    eax = MEM32(0x378E54);
    MEM16(eax + 0x32) = MEM16(eax + 0x32) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001959B6; /* jl: less (signed <) */

loc_001959B4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001959B6: ;
    ecx = MEM32(0x378E54);
    SET_LO16(eax, MEM16(ecx + 0x30));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x32) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00195974; /* ja: above (unsigned >) */

loc_001959C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001959C9
 * Original: 0x001959C9 - 0x00195A69 (160 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001959C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001959C9: ;
    ecx = MEM32(0x378E54);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0x30));
    PUSH32(esp, edi);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 4);
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = ZX16(MEM16(ecx + 0x32));
    edi = 0xFFFFFF;
    ebp = edx;
    edx = esi + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195A64; /* jle: less or equal (signed <=) */

loc_001959F1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001959F3: ;
    edx = ZX16(MEM16(ecx + 0x2C));
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195A0A; /* je: equal / zero */

loc_00195A01: ;
    edi = MEM32(ecx + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195A64; /* jle: less or equal (signed <=) */

loc_00195A0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) edi = edx; /* cmovg */
    edx = ebp;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + ecx + 0x38;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195A64; /* jne: not equal / not zero */

loc_00195A1D: ;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x378E58));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0x00195A36u); RECOMP_ABI_CALL(0x001B640Du, sub_001B640D); /* call 0x001B640D */

loc_00195A36: ;
    MEM32(esi) = eax;
    MEM8(esi + 0xC) = 1;
    eax = MEM32(0x378E54);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x30) = MEM16(eax + 0x30) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x30)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x378E54);
    esi = ZX16(MEM16(ecx + 0x30));
    eax = ZX16(MEM16(ecx + 0x32));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    edx = esi + -4;
    if (CMP_GE(_fas, _fbs)) ebp = ebx; /* cmovge */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001959F3; /* jg: greater (signed >) */

loc_00195A64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00195A69
 * Original: 0x00195A69 - 0x00195B0F (166 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195A69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195A69: ;
    ecx = MEM32(0x378E54);
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195B0E; /* jle: less or equal (signed <=) */

loc_00195A79: ;
    eax = ZX16(MEM16(ecx + 0x34));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 4);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_LO16(eax, MEM16(ecx + 0x36));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x32) (16-bit) */
    ebx = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00195B0C; /* jae: above or equal (unsigned >=) */

loc_00195A91: ;
    PUSH32(esp, edi);

loc_00195A92: ;
    edi = MEM32(ecx + 0x24);
    edx = ebx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + ecx + 0x38;
    edx = ZX16(MEM16(ecx + 0x2C));
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) edi = edx; /* cmovge */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00195ABAu); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_00195ABA: ;
    eax = MEM32(0x378E54);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - edi;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x378E54);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00195AD8; /* jg: greater (signed >) */

loc_00195AD0: ;
    ecx = ZX16(MEM16(eax + 0x2C));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195B08; /* jl: less (signed <) */

loc_00195AD8: ;
    MEM8(esi + 0xC) = 0;
    eax = MEM32(0x378E54);
    MEM16(eax + 0x34) = MEM16(eax + 0x34) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x378E54);
    MEM16(eax + 0x36) = MEM16(eax + 0x36) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x36)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195AF6; /* jl: less (signed <) */

loc_00195AF4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195AF6: ;
    ecx = MEM32(0x378E54);
    SET_LO16(eax, MEM16(ecx + 0x36));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x32) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00195A92; /* jb: below (unsigned <) */

loc_00195B06: ;
    goto loc_00195B0B;

loc_00195B08: ;
    MEM32(eax + 0x1C) = edi;

loc_00195B0B: ;
    POP32(esp, edi);

loc_00195B0C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00195B0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00195B0F
 * Original: 0x00195B0F - 0x00195B1E (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195B0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00195B0F: ;
    PUSH32(esp, 0x00195B14u); RECOMP_ABI_CALL(0x00195957u, sub_00195957); /* call 0x00195957 */

loc_00195B14: ;
    PUSH32(esp, 0x00195B19u); RECOMP_ABI_CALL(0x00195A69u, sub_00195A69); /* call 0x00195A69 */

loc_00195B19: ;
    g_seh_ebp = ebp; sub_001959C9(); return; /* tail jmp 0x001959C9 */

}

/**
 * sub_00195B1E
 * Original: 0x00195B1E - 0x00195B94 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195B1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195B1E: ;
    PUSH32(esp, 0x00195B23u); RECOMP_ABI_CALL(0x00195B0Fu, sub_00195B0F); /* call 0x00195B0F */

loc_00195B23: ;
    eax = MEM32(0x378E54);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00195B93; /* jg: greater (signed >) */

loc_00195B2E: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195B55; /* jne: not equal / not zero */

loc_00195B34: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x378E58));
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x00195B44u); RECOMP_ABI_CALL(0x001B63E8u, sub_001B63E8); /* call 0x001B63E8 */

loc_00195B44: ;
    ecx = MEM32(0x378E54);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x378E54);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00195B55: ;
    SET_LO16(ecx, MEM16(eax + 0x34));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x36)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x36) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195B93; /* jne: not equal / not zero */

loc_00195B5F: ;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x00195B67u); RECOMP_ABI_CALL(0x001B5B5Fu, sub_001B5B5F); /* call 0x001B5B5F */

loc_00195B67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00195B93; /* jne: not equal / not zero */

loc_00195B6D: ;
    eax = MEM32(0x378E54);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x00195B7Au); RECOMP_ABI_CALL(0x001B5D54u, sub_001B5D54); /* call 0x001B5D54 */

loc_00195B7A: ;
    MEM32(esp) = 0x195B1E;
    PUSH32(esp, 0x00195B86u); RECOMP_ABI_CALL(0x0019B20Bu, sub_0019B20B); /* call 0x0019B20B */

loc_00195B86: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x00195B8Cu); RECOMP_ABI_CALL(0x0019593Bu, sub_0019593B); /* call 0x0019593B */

loc_00195B8C: ;
    MEM32(0x378E54) = MEM32(0x378E54) & 0;
    _fa = (uint32_t)(MEM32(0x378E54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00195B93: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00195B94
 * Original: 0x00195B94 - 0x00195BAB (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195B94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195B94: ;
    _fa = (uint32_t)(MEM32(0x378E54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x378E54), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195BA8; /* jne: not equal / not zero */

loc_00195B9D: ;
    eax = MEM32(0x378E5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195BAA; /* jne: not equal / not zero */

loc_00195BA6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00195BA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00195BAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00195BAB
 * Original: 0x00195BAB - 0x00195C60 (181 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195BAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195BAB: ;
    PUSH32(esp, 0x00195BB0u); RECOMP_ABI_CALL(0x00195957u, sub_00195957); /* call 0x00195957 */

loc_00195BB0: ;
    eax = MEM32(0x378E54);
    SET_LO16(ecx, MEM16(eax + 0x32));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x30)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x30) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00195C5F; /* jb: below (unsigned <) */

loc_00195BC3: ;
    SET_LO16(ecx, MEM16(eax + 0x36));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00195C5F; /* jb: below (unsigned <) */

loc_00195BD1: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195C24; /* je: equal / zero */

loc_00195BD9: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195BFE; /* jne: not equal / not zero */

loc_00195BDE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x378E58));
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x00195BEDu); RECOMP_ABI_CALL(0x001B63E8u, sub_001B63E8); /* call 0x001B63E8 */

loc_00195BED: ;
    ecx = MEM32(0x378E54);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x378E54);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00195BFE: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195C24; /* je: equal / zero */

loc_00195C05: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00195C0Bu); RECOMP_ABI_CALL(0x001B5B5Fu, sub_001B5B5F); /* call 0x001B5B5F */

loc_00195C0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00195C5E; /* jne: not equal / not zero */

loc_00195C11: ;
    eax = MEM32(0x378E54);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x00195C1Eu); RECOMP_ABI_CALL(0x001B5D54u, sub_001B5D54); /* call 0x001B5D54 */

loc_00195C1E: ;
    eax = MEM32(0x378E54);
    POP32(esp, ecx);

loc_00195C24: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195C38; /* je: equal / zero */

loc_00195C28: ;
    PUSH32(esp, 0x195C60);
    PUSH32(esp, 0x00195C32u); RECOMP_ABI_CALL(0x0019A5B2u, sub_0019A5B2); /* call 0x0019A5B2 */

loc_00195C32: ;
    eax = MEM32(0x378E54);
    POP32(esp, ecx);

loc_00195C38: ;
    eax = ZX16(MEM16(eax + 0x2E));
    ecx = MEM32(0x523BF8);
    MEM32(ecx + eax * 8) = ebx;
    eax = MEM32(0x378E54);
    eax = ZX16(MEM16(eax + 0x2E));
    ecx = MEM32(0x523BF8);
    MEM8(ecx + eax * 8 + 4) = LO8(ebx);
    MEM32(0x378E54) = ebx;

loc_00195C5E: ;
    POP32(esp, ebx);

loc_00195C5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00195C60
 * Original: 0x00195C60 - 0x00195DB5 (341 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00195C60: ;
    eax = MEM32(0x378E54);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195D8A; /* jne: not equal / not zero */

loc_00195C6F: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195CB9; /* je: equal / zero */

loc_00195C76: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00195C7Cu); RECOMP_ABI_CALL(0x001B5B5Fu, sub_001B5B5F); /* call 0x001B5B5F */

loc_00195C7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00195D65; /* jne: not equal / not zero */

loc_00195C86: ;
    eax = MEM32(0x378E54);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x00195C93u); RECOMP_ABI_CALL(0x001B5D54u, sub_001B5D54); /* call 0x001B5D54 */

loc_00195C93: ;
    POP32(esp, ecx);
    ecx = MEM32(0x378E54);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(0x378E54);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x378E54);
    MEM8(eax + 2) = 1;
    PUSH32(esp, 0x00195CB4u); RECOMP_ABI_CALL(0x001959C9u, sub_001959C9); /* call 0x001959C9 */

loc_00195CB4: ;
    eax = MEM32(0x378E54);

loc_00195CB9: ;
    PUSH32(esp, esi);
    esi = eax + 0x38;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00195CC4u); RECOMP_ABI_CALL(0x001B5B5Fu, sub_001B5B5F); /* call 0x001B5B5F */

loc_00195CC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00195DB3; /* jne: not equal / not zero */

loc_00195CCE: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00195CD5u); RECOMP_ABI_CALL(0x001B5D54u, sub_001B5D54); /* call 0x001B5D54 */

loc_00195CD5: ;
    MEM8(esi + 0xC) = 2;
    eax = MEM32(0x378E54);
    MEM16(eax + 0x32) = MEM16(eax + 0x32) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    ecx = MEM32(0x378E54);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(0x378E54);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(0x378E54);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(0x378E54);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x378E54);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x20) = MEM32(eax + 0x20) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x378E54);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x378E54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x24));
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00195D3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195D3Cu); } /* indirect call */
    }

loc_00195D3F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x378E54);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(0x378E54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195D8F; /* jne: not equal / not zero */

loc_00195D55: ;
    MEM8(eax + 1) = 1;
    MEM32(0x378E5C) = 0xFFFFFFFAu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00195D65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195DB4; /* je: equal / zero */

loc_00195D69: ;
    eax = MEM32(0x378E54);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x00195D76u); RECOMP_ABI_CALL(0x001B5D54u, sub_001B5D54); /* call 0x001B5D54 */

loc_00195D76: ;
    eax = MEM32(0x378E54);
    MEM32(0x378E5C) = 0xFFFFFFEDu;
    POP32(esp, ecx);
    MEM8(eax + 1) = 1;

loc_00195D8A: ;
    g_seh_ebp = ebp; sub_00195BAB(); return; /* tail jmp 0x00195BAB */

loc_00195D8F: ;
    PUSH32(esp, 0x195C60);
    PUSH32(esp, 0x00195D99u); RECOMP_ABI_CALL(0x0019A5B2u, sub_0019A5B2); /* call 0x0019A5B2 */

loc_00195D99: ;
    eax = MEM32(0x378E54);
    MEM8(eax) = 0;
    PUSH32(esp, 0x00195DA6u); RECOMP_ABI_CALL(0x00195B0Fu, sub_00195B0F); /* call 0x00195B0F */

loc_00195DA6: ;
    MEM32(esp) = 0x195B1E;
    PUSH32(esp, 0x00195DB2u); RECOMP_ABI_CALL(0x0019B1E9u, sub_0019B1E9); /* call 0x0019B1E9 */

loc_00195DB2: ;
    POP32(esp, ecx);

loc_00195DB3: ;
    POP32(esp, esi);

loc_00195DB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00195DB5
 * Original: 0x00195DB5 - 0x00195F33 (382 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195DB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195DB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x378E5C) = ebx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(0x378E54) = esi;
    MEM8(esi + 1) = LO8(ebx);
    eax = MEM32(0x378E54);
    MEM8(eax + 2) = LO8(ebx);
    eax = MEM32(0x378E54);
    MEM8(eax + 3) = LO8(ecx);
    eax = MEM32(0x378E54);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x378E54);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x378E54);
    MEM32(eax + 0x1C) = ebx;
    eax = MEM32(0x378E54);
    MEM32(eax + 0x20) = ebx;
    eax = MEM32(0x378E54);
    MEM32(eax + 0x24) = ebx;
    eax = MEM32(0x378E54);
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(0x378E54);
    MEM16(eax + 0x30) = LO16(ebx);
    eax = MEM32(0x378E54);
    MEM16(eax + 0x32) = LO16(ebx);
    eax = MEM32(0x378E54);
    MEM16(eax + 0x34) = LO16(ebx);
    eax = MEM32(0x378E54);
    MEM16(eax + 0x36) = LO16(ebx);
    eax = MEM32(0x378E54);
    MEM32(eax + 8) = ebx;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(0x378E54);
    _fb = (uint32_t)(0xFFFFFD08u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFD08u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + 0x2C) = LO16(eax);
    eax = MEM32(0x378E54);
    _fa = (uint32_t)(MEM16(eax + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(0x6000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x2C), 0x6000 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00195E70; /* jbe: below or equal (unsigned <=) */

loc_00195E65: ;
    MEM16(eax + 0x2C) = 0x6000;
    eax = MEM32(0x378E54);

loc_00195E70: ;
    MEM8(eax + 0x2C) = MEM8(eax + 0x2C) & 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x2C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x378E58));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195E85u); RECOMP_ABI_CALL(0x001B63B6u, sub_001B63B6); /* call 0x001B63B6 */

loc_00195E85: ;
    ecx = MEM32(0x378E54);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_00195E96: ;
    eax = MEM32(0x378E54);
    eax = ecx + eax + 0x38;
    MEM32(eax + 4) = MEM32(eax + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 0xC) = LO8(ebx);
    edi = MEM32(0x378E54);
    edi = ZX16(MEM16(edi + 0x2C));
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edi = edi + esi + 0x178;
    edi = edi & 0xFFFFFF80u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(eax + 8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00195E96; /* jl: less (signed <) */

loc_00195ECF: ;
    edx = ZX16(MEM16(0x523A44));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00195F03; /* jle: less or equal (signed <=) */

loc_00195EDD: ;
    eax = MEM32(0x523BF8);

loc_00195EE2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195EF0; /* je: equal / zero */

loc_00195EE6: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195EE2; /* jl: less (signed <) */

loc_00195EEE: ;
    goto loc_00195F03;

loc_00195EF0: ;
    MEM8(eax + 4) = 1;
    MEM32(eax) = 1;
    eax = MEM32(0x378E54);
    MEM16(eax + 0x2E) = LO16(ecx);

loc_00195F03: ;
    PUSH32(esp, 0x195C60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195F0Du); RECOMP_ABI_CALL(0x0019A599u, sub_0019A599); /* call 0x0019A599 */

loc_00195F0D: ;
    eax = MEM32(0x378E54);
    POP32(esp, ecx);
    MEM8(eax) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195F1Bu); RECOMP_ABI_CALL(0x00195C60u, sub_00195C60); /* call 0x00195C60 */

loc_00195F1B: ;
    eax = MEM32(0x378E54);
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00195F2D; /* jne: not equal / not zero */

loc_00195F26: ;
    eax = MEM32(0x378E5C);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00195F2D: ;
    eax = ZX16(MEM16(eax + 0x2E));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00195F33
 * Original: 0x00195F33 - 0x00195F51 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195F33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195F33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195F4Cu); RECOMP_ABI_CALL(0x00195DB5u, sub_00195DB5); /* call 0x00195DB5 */

loc_00195F4C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00195F51
 * Original: 0x00195F51 - 0x00195F9C (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195F51(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00195F51: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00195F5Du); RECOMP_ABI_CALL(0x00196ACAu, sub_00196ACA); /* call 0x00196ACA */

loc_00195F5D: ;
    eax = edi + edi * 8;
    POP32(esp, ecx);
    ecx = MEM32(0x523BF4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(eax + ecx + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195F8F; /* je: equal / zero */

loc_00195F71: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195F99; /* jle: less or equal (signed <=) */

loc_00195F7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00195F82u); RECOMP_ABI_CALL(0x00197BF6u, sub_00197BF6); /* call 0x00197BF6 */

loc_00195F82: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x37906C) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00195F7B; /* jl: less (signed <) */

loc_00195F8D: ;
    goto loc_00195F99;

loc_00195F8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00195F97u); RECOMP_ABI_CALL(0x00197BF6u, sub_00197BF6); /* call 0x00197BF6 */

loc_00195F97: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00195F99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00195F9C
 * Original: 0x00195F9C - 0x00196062 (198 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195F9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00195F9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195FAAu); RECOMP_ABI_CALL(0x0019B69Bu, sub_0019B69B); /* call 0x0019B69B */

loc_00195FAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0019605D; /* jl: less (signed <) */

loc_00195FB6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x324CE8); /* mulss */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195FD8u); RECOMP_ABI_CALL(0x0019B262u, sub_0019B262); /* call 0x0019B262 */

loc_00195FD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0019605D; /* je: equal / zero */

loc_00195FDE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00195FE1: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523BF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196048; /* jbe: below or equal (unsigned <=) */

loc_00195FFA: ;
    ebx = esi + 4;

loc_00195FFD: ;
    edi = (uint32_t)(int32_t)SMEM16(ebx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = edi + edi * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x523BF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019603A; /* jnp: not parity */

loc_00196027: ;
    PUSH32(esp, edi);
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196032u); RECOMP_ABI_CALL(0x00196062u, sub_00196062); /* call 0x00196062 */

loc_00196032: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196038u); RECOMP_ABI_CALL(0x00195F51u, sub_00195F51); /* call 0x00195F51 */

loc_00196038: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019603A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195FFD; /* jl: less (signed <) */

loc_00196048: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196054u); RECOMP_ABI_CALL(0x0019B262u, sub_0019B262); /* call 0x0019B262 */

loc_00196054: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00195FE1; /* jne: not equal / not zero */

loc_0019605A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0019605D: ;
    eax = MEM32(ebp + -12);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196062
 * Original: 0x00196062 - 0x001960FF (157 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196062(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196062: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x523BF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x42);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x2B);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x324CEC); /* mulss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001960BE; /* je: equal / zero */

loc_001960A1: ;
    edx = ZX8(MEM8(ecx + 0x6B));
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x324CE8); /* mulss */
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */

loc_001960BE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x74), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001960EB; /* je: equal / zero */

loc_001960C4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312424); /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + 8), g_mxcsr, 0); /* cvtss2si */
    edx = MEM32(ecx + 0x74);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */

loc_001960EB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x379068); /* mulss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001960FF
 * Original: 0x001960FF - 0x00196143 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001960FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001960FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019610Cu); RECOMP_ABI_CALL(0x0019B69Bu, sub_0019B69B); /* call 0x0019B69B */

loc_0019610C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019613E; /* jl: less (signed <) */

loc_00196113: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196121u); RECOMP_ABI_CALL(0x0019B262u, sub_0019B262); /* call 0x0019B262 */

loc_00196121: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0019613A;

loc_00196125: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019612Du); RECOMP_ABI_CALL(0x001969C8u, sub_001969C8); /* call 0x001969C8 */

loc_0019612D: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196137u); RECOMP_ABI_CALL(0x0019B262u, sub_0019B262); /* call 0x0019B262 */

loc_00196137: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019613A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196125; /* jne: not equal / not zero */

loc_0019613E: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196143
 * Original: 0x00196143 - 0x0019624E (267 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196143(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00196143: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x5C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196159u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00196159: ;
    eax = ebp + 0x3C;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196164u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00196164: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019618D; /* jne: not equal / not zero */

loc_0019616D: ;
    MEM16(ebp + 0x5C) = 0x69;
    MEM16(ebp + 0x6C) = 2;
    MEM16(ebp + 0x6A) = 4;
    MEM16(ebp + 0x6E) = 0x40;
    MEM16(ebp + 0x68) = 0x24;
    goto loc_0019619F;

loc_0019618D: ;
    MEM16(ebp + 0x5C) = 1;
    MEM16(ebp + 0x6A) = 0x10;
    MEM16(ebp + 0x68) = 2;

loc_0019619F: ;
    eax = ebp + 0x5C;
    MEM32(ebp + 0x48) = eax;
    eax = ZX16(MEM16(ebp + 0x68));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB80);
    MEM32(ebp + 0x64) = eax;
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    MEM16(ebp + 0x5E) = 1;
    MEM32(ebp + 0x60) = 0xBB80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001961CCu); RECOMP_ABI_CALL(0x002EDE9Au, sub_002EDE9A); /* call 0x002EDE9A */

loc_001961CC: ;
    ecx = ebp + -44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x58) = ecx;

loc_001961D4: ;
    ecx = MEM32(eax * 4 + 0x329D28);
    MEM32(ebp + eax * 8 + -44) = ecx;
    MEM32(ebp + eax * 8 + -40) = MEM32(ebp + eax * 8 + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + eax * 8 + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001961D4; /* jl: less (signed <) */

loc_001961EA: ;
    MEM32(ebp + eax * 8 + -44) = 0xB;
    ecx = 0xFFFFD8F0u;
    MEM32(ebp + eax * 8 + -40) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + eax * 8 + -44) = 0xC;
    MEM32(ebp + eax * 8 + -40) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x54) = eax;
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196218u); RECOMP_ABI_CALL(0x002ED185u, sub_002ED185); /* call 0x002ED185 */

loc_00196218: ;
    eax = ebp + 0x14;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196223u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00196223: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x14) = 1;
    MEM32(ebp + 0x18) = 2;
    MEM32(ebp + 0x30) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196246u); RECOMP_ABI_CALL(0x002ECC2Fu, sub_002ECC2F); /* call 0x002ECC2F */

loc_00196246: ;
    eax = MEM32(ebp + 0x70);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019624E
 * Original: 0x0019624E - 0x001962B7 (105 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019624E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019624E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x523998;

loc_00196261: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019626F; /* je: equal / zero */

loc_00196265: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019626F; /* jle: less or equal (signed <=) */

loc_0019626B: ;
    ebx = ecx;
    eax = esi;

loc_0019626F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5239B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5239B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196261; /* jl: less (signed <) */

loc_0019627B: ;
    eax = eax + eax * 2;
    eax = eax * 4 + 0x523990;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019628Bu); RECOMP_ABI_CALL(0x0019B727u, sub_0019B727); /* call 0x0019B727 */

loc_0019628B: ;
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00196296u); RECOMP_ABI_CALL(0x002EBFE1u, sub_002EBFE1); /* call 0x002EBFE1 */

loc_00196296: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019629Cu); RECOMP_ABI_CALL(0x00196143u, sub_00196143); /* call 0x00196143 */

loc_0019629C: ;
    MEM32(esi + 8) = eax;
    eax = edi + edi * 2;
    eax = eax * 4 + 0x523990;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001962B0u); RECOMP_ABI_CALL(0x0019B6DEu, sub_0019B6DE); /* call 0x0019B6DE */

loc_001962B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001962B7
 * Original: 0x001962B7 - 0x001962CA (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001962B7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001962B7: ;
    eax = ZX8(MEM8(0x523A4D));
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001962C8u); RECOMP_ABI_CALL(0x0019B593u, sub_0019B593); /* call 0x0019B593 */

loc_001962C8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001962CA
 * Original: 0x001962CA - 0x00196467 (413 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001962CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001962CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -128) = esi;
    MEM32(ebp + -124) = esi;
    MEM32(ebp + -120) = 1;
    MEM32(ebp + -116) = esi;
    MEM32(ebp + -112) = 2;
    MEM32(ebp + -108) = esi;
    MEM32(ebp + -104) = 3;
    MEM32(ebp + -100) = esi;
    MEM32(ebp + -96) = 4;
    MEM32(ebp + -92) = esi;
    MEM32(ebp + -88) = 5;
    MEM32(ebp + -84) = esi;
    edi = ebp + -80;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(eax, MEM8(0x523A4A));
    MEM8(ebp + -12) = LO8(eax);
    eax = ZX16(MEM16(0x523A46));
    MEM32(ebp + -20) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM8(ebp + -11) = 6;
    MEM32(ebp + -16) = 0x1962B7;
    MEM8(ebp + -10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196342u); RECOMP_ABI_CALL(0x00199FABu, sub_00199FAB); /* call 0x00199FAB */

loc_00196342: ;
    eax = ZX16(MEM16(0x523A46));
    eax = eax + eax * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x3E8;
    ecx = edi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x18);
    MEM32(0x5239F0) = esi;
    MEM32(0x5239F8) = esi;
    MEM32(0x5239FC) = esi;
    MEM32(0x5239F4) = esi;
    MEM32(0x5239EC) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196381u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00196381: ;
    ecx = ZX16(MEM16(0x523A46));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x5239B8);
    MEM32(ebp + -64) = 0x18;
    MEM32(ebp + -60) = esi;
    MEM32(ebp + -56) = esi;
    MEM16(ebp + -40) = 1;
    MEM32(ebp + -36) = ecx;
    MEM16(ebp + -26) = 0x10;
    MEM16(ebp + -24) = LO16(esi);
    MEM32(ebp + -8) = 6;
    eax = eax & 0xFFFF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax + eax * 2;
    MEM32(0x5239E8) = eax;
    SET_LO16(eax, ZX8(MEM8(ebp + -11)));
    MEM16(ebp + -38) = LO16(eax);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -28) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(ebp + -32) = eax;
    eax = ebp + -40;
    MEM32(ebp + -52) = eax;
    eax = ebp + -128;
    MEM32(ebp + -4) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196403u); RECOMP_ABI_CALL(0x002EDC69u, sub_002EDC69); /* call 0x002EDC69 */

loc_00196403: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196408u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00196408: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019640Eu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019640E: ;
    POP32(esp, ecx);
    MEM32(0x5239D0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196419u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00196419: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x5239D0));
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019642Bu); RECOMP_ABI_CALL(0x002ED6B7u, sub_002ED6B7); /* call 0x002ED6B7 */

loc_0019642B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196437u); RECOMP_ABI_CALL(0x002ECD5Bu, sub_002ECD5B); /* call 0x002ECD5B */

loc_00196437: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x5239D0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196443u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00196443: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196454u); RECOMP_ABI_CALL(0x002ED185u, sub_002ED185); /* call 0x002ED185 */

loc_00196454: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196463u); RECOMP_ABI_CALL(0x002ECC83u, sub_002ECC83); /* call 0x002ECC83 */

loc_00196463: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196467
 * Original: 0x00196467 - 0x001964C3 (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196467(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196467: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019647Cu); RECOMP_ABI_CALL(0x002ECCBFu, sub_002ECCBF); /* call 0x002ECCBF */

loc_0019647C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019648Bu); RECOMP_ABI_CALL(0x002ECD1Fu, sub_002ECD1F); /* call 0x002ECD1F */

loc_0019648B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019647C; /* jne: not equal / not zero */

loc_00196491: ;
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019649Cu); RECOMP_ABI_CALL(0x002EBFE1u, sub_002EBFE1); /* call 0x002EBFE1 */

loc_0019649C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964A1u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_001964A1: ;
    PUSH32(esp, MEM32(0x5239D0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964ACu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001964AC: ;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964B2u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_001964B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964B7u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_001964B7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964BCu); RECOMP_ABI_CALL(0x00199C1Au, sub_00199C1A); /* call 0x00199C1A */

loc_001964BC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964C1u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_001964C1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001964C3
 * Original: 0x001964C3 - 0x001965CB (264 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001964C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001964C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001965C7; /* jle: less or equal (signed <=) */

loc_001964DD: ;
    PUSH32(esp, esi);

loc_001964DE: ;
    eax = MEM32(0x5239F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019657B; /* jg: greater (signed >) */

loc_001964EB: ;
    MEM32(0x5239F8) = MEM32(0x5239F8) + 1;
    _fa = (uint32_t)(MEM32(0x5239F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001964F6u); RECOMP_ABI_CALL(0x00194F6Du, sub_00194F6D); /* call 0x00194F6D */

loc_001964F6: ;
    xmm0 = XMM_SCALAR(MEMF(0x523970)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x378F60); /* addss */
    MEMF(0x378F60) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + 0xC), g_mxcsr, 0); /* cvtss2si */
    xmm1 = XMM_SCALAR(MEMF(0x300914)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(0x523904) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00196536; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0019652A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x378F60) = xmm0.f[0]; /* movss */

loc_00196536: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019653Bu); RECOMP_ABI_CALL(0x00194F40u, sub_00194F40); /* call 0x00194F40 */

loc_0019653B: ;
    eax = ZX16(MEM16(0x523A46));
    ecx = MEM32(0x5239F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x64);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(MEM32(0x5239FC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5239FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5239FC) = MEM32(0x5239FC) + eax;
    _fa = (uint32_t)(MEM32(0x5239FC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7530 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00196578; /* jle: less or equal (signed <=) */

loc_0019656A: ;
    MEM32(0x5239F8) = MEM32(0x5239F8) & 0;
    _fa = (uint32_t)(MEM32(0x5239F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x5239FC) = MEM32(0x5239FC) & 0;
    _fa = (uint32_t)(MEM32(0x5239FC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00196578: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019657B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) esi = edi; /* cmovge */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5239F4) = eax;
    eax = ebp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196595u); RECOMP_ABI_CALL(0x0019A452u, sub_0019A452); /* call 0x0019A452 */

loc_00196595: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001965A2; /* je: equal / zero */

loc_0019659B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001965A2u); RECOMP_ABI_CALL(0x0019BE7Bu, sub_0019BE7B); /* call 0x0019BE7B */

loc_001965A2: ;
    ecx = ZX8(MEM8(0x523A5F));
    eax = ZX8(MEM8(0x523A60));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ecx + eax * 2;
    MEM32(ebp + 8) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001964DE; /* jg: greater (signed >) */

loc_001965C6: ;
    POP32(esp, esi);

loc_001965C7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001965CB
 * Original: 0x001965CB - 0x00196663 (152 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001965CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001965CB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x5239B8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001965E4u); RECOMP_ABI_CALL(0x002ECD3Bu, sub_002ECD3B); /* call 0x002ECD3B */

loc_001965E4: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(0x5239EC);
    esi = ecx + eax;
    ecx = MEM32(0x5239E8);
    esi = esi & 0xFFFFFF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0019660C; /* jl: less (signed <) */

loc_0019660A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0019660C: ;
    eax = MEM32(0x5239F0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019661F; /* jl: less (signed <) */

loc_00196615: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00196624;

loc_0019661F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = esi;

loc_00196624: ;
    MEM32(ebp + -16) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00196629: ;
    ecx = MEM32(ebp + edi * 4 + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00196653; /* jle: less or equal (signed <=) */

loc_00196631: ;
    edx = MEM32(0x5239D0);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019664Au); RECOMP_ABI_CALL(0x001964C3u, sub_001964C3); /* call 0x001964C3 */

loc_0019664A: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    MEM32(0x5239F0) = eax;

loc_00196653: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196629; /* jl: less (signed <) */

loc_00196659: ;
    POP32(esp, edi);
    MEM32(0x5239F0) = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196663
 * Original: 0x00196663 - 0x00196717 (180 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196663(void)
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

loc_00196663: ;
    xmm0 = XMM_SCALAR(MEMF(0x523A04)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x523A00)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196716; /* jnp: not parity */

loc_00196687: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x3116CC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001966A2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00196694: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019669C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00196699: ;
    xmm0 = xmm2; /* movaps */

loc_0019669C: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    goto loc_001966B6;

loc_001966A2: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001966B2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001966AF: ;
    xmm0 = xmm2; /* movaps */

loc_001966B2: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_001966B6: ;
    PUSH32(esp, 0);
    MEMF(0x523A00) = xmm1.f[0]; /* movss */
    fp_push(MEMF(0x523A00)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0x001966D1u); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_001966D1: ;
    fp_push(MEMF(0x523A00)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, 0x001966E7u); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_001966E7: ;
    fp_push(MEMF(0x523A00)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    PUSH32(esp, 0x001966FDu); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_001966FD: ;
    fp_push(MEMF(0x523A00)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    PUSH32(esp, 0x00196713u); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_00196713: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00196716: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196717
 * Original: 0x00196717 - 0x0019674F (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196717: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 9)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 9), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019672F; /* je: equal / zero */

loc_00196720: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(0x523A4D));
    goto loc_00196748;

loc_0019672F: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019674D; /* je: equal / zero */

loc_00196735: ;
    eax = ZX8(MEM8(0x523A4D));
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x523B8C);

loc_00196748: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;

loc_0019674D: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019674F
 * Original: 0x0019674F - 0x001967B1 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019674F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019674F: ;
    goto loc_0019679C;

loc_00196751: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x378E48); PUSH32(esp, 0x00196757u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196751u); } /* indirect call */
    }

loc_00196757: ;
    eax = MEM32(0x523C48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00196762; /* je: equal / zero */

loc_00196760: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00196762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196760u); } /* indirect call */
    }

loc_00196762: ;
    PUSH32(esp, 0x00196767u); RECOMP_ABI_CALL(0x001965CBu, sub_001965CB); /* call 0x001965CB */

loc_00196767: ;
    PUSH32(esp, 0x0019676Cu); RECOMP_ABI_CALL(0x00196663u, sub_00196663); /* call 0x00196663 */

loc_0019676C: ;
    eax = MEM32(0x523C4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00196777; /* je: equal / zero */

loc_00196775: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00196777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196775u); } /* indirect call */
    }

loc_00196777: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x378E4C); PUSH32(esp, 0x0019677Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196777u); } /* indirect call */
    }

loc_0019677D: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x523968) = MEM32(0x523968) + 0xA;
    _fa = (uint32_t)(MEM32(0x523968)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00196789u); RECOMP_ABI_CALL(0x001EEAFEu, sub_001EEAFE); /* call 0x001EEAFE */

loc_00196789: ;
    ecx = MEM32(0x523968);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00196796; /* jns: not sign (positive) */

loc_00196793: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00196796: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019679Cu); RECOMP_ABI_CALL(0x001ED701u, sub_001ED701); /* call 0x001ED701 */

loc_0019679C: ;
    _fa = (uint32_t)(MEM8(0x52396D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x52396D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196751; /* jne: not equal / not zero */

loc_001967A5: ;
    MEM8(0x52396C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001967B1
 * Original: 0x001967B1 - 0x001967F1 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001967B1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001967B1: ;
    PUSH32(esp, ecx);
    MEM8(0x52396C) = 1;
    MEM8(0x52396D) = 1;
    PUSH32(esp, 0x001967C5u); RECOMP_ABI_CALL(0x001EEAFEu, sub_001EEAFE); /* call 0x001EEAFE */

loc_001967C5: ;
    MEM32(0x523968) = eax;
    eax = esp;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x19674F);
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001967E2u); RECOMP_ABI_CALL(0x001EF420u, sub_001EF420); /* call 0x001EF420 */

loc_001967E2: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(0x523A14) = eax;
    PUSH32(esp, 0x001967EFu); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001967EF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001967F1
 * Original: 0x001967F1 - 0x0019680B (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001967F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001967F1: ;
    MEM8(0x52396D) = 0;
    goto loc_00196801;

loc_001967FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00196801u); RECOMP_ABI_CALL(0x001ED701u, sub_001ED701); /* call 0x001ED701 */

loc_00196801: ;
    _fa = (uint32_t)(MEM8(0x52396C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x52396C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001967FA; /* jne: not equal / not zero */

loc_0019680A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019680B
 * Original: 0x0019680B - 0x001968B4 (169 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019680B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019680B: ;
    SET_LO8(eax, 0xB0);
    _fb = (uint32_t)(MEM8(0x523A10)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(0x523A10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(0x523A26) = 0x40;
    MEM8(0x523A29) = LO8(eax);
    MEM8(0x523A4D) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x523A20) = 0x1F40;
    MEM16(0x523A22) = 0xBB80;
    MEM8(0x523A24) = 5;
    MEM8(0x523A25) = 5;
    MEM8(0x523A2C) = 2;
    MEM16(0x523A2E) = 0x420;
    MEM16(0x523A30) = 0x24;
    MEM8(0x523A64) = 2;
    MEM16(0x523A66) = 0x420;
    MEM16(0x523A68) = 0x24;
    MEM8(0x523A4A) = 0x20;
    MEM8(0x523A5E) = 0x10;
    MEM16(0x523A46) = 0xBB80;
    MEM8(0x523A5F) = 5;
    MEM8(0x523A60) = 1;
    MEM8(0x523A58) = LO8(eax);
    MEM32(0x523A74) = eax;
    MEM32(0x523A78) = eax;
    MEM8(0x523B8F) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001968B4
 * Original: 0x001968B4 - 0x001969C8 (276 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001968B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001968B4: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001968D5; /* je: equal / zero */

loc_001968BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    esi = 0x523AEC;
    edi = 0x523A3C;
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
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_001969C5;

loc_001968D5: ;
    SET_LO16(eax, MEM16(0x523A20));
    _fa = (uint32_t)(MEM16(0x523A46)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523A46), LO16(eax) (16-bit) */
    MEM8(0x523A64) = 2;
    MEM16(0x523A66) = 0x420;
    MEM16(0x523A68) = 0x24;
    MEM8(0x523A5F) = 5;
    MEM8(0x523A60) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_00196911; /* jae: above or equal (unsigned >=) */

loc_0019690B: ;
    MEM16(0x523A46) = LO16(eax);

loc_00196911: ;
    SET_LO16(eax, MEM16(0x523A22));
    _fa = (uint32_t)(MEM16(0x523A46)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523A46), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196926; /* jbe: below or equal (unsigned <=) */

loc_00196920: ;
    MEM16(0x523A46) = LO16(eax);

loc_00196926: ;
    SET_LO8(eax, MEM8(0x523A29));
    _fa = (uint32_t)(MEM8(0x523A4D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523A4D), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196938; /* jbe: below or equal (unsigned <=) */

loc_00196933: ;
    MEM8(0x523A4D) = LO8(eax);

loc_00196938: ;
    SET_LO8(eax, MEM8(0x523A26));
    _fa = (uint32_t)(MEM8(0x523A4A)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523A4A), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019694A; /* jbe: below or equal (unsigned <=) */

loc_00196945: ;
    MEM8(0x523A4A) = LO8(eax);

loc_0019694A: ;
    _fa = (uint32_t)(MEM8(0x523A5E)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523A5E), 0x20 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019695A; /* jbe: below or equal (unsigned <=) */

loc_00196953: ;
    MEM8(0x523A5E) = 0x20;

loc_0019695A: ;
    SET_LO16(eax, ZX8(MEM8(0x523A4A)));
    SET_LO16(ecx, ZX8(MEM8(0x523A4D)));
    xmm1 = XMM_SCALAR(MEMF(0x523A50)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2FEC54); /* ucomiss */
    MEM16(0x523B8C) = LO16(eax);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019698F; /* jp: parity */

loc_00196987: ;
    xmm1 = XMM_SCALAR(MEMF(0x307EE4)); /* movss */

loc_0019698F: ;
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001969A1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0019699C: ;
    xmm1 = xmm0; /* movaps */
    goto loc_001969B1;

loc_001969A1: ;
    xmm2 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001969B1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001969AE: ;
    xmm1 = xmm2; /* movaps */

loc_001969B1: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(0x523900) = xmm1.f[0]; /* movss */
    MEMF(0x523970) = xmm0.f[0]; /* movss */

loc_001969C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001969C8
 * Original: 0x001969C8 - 0x00196ACA (258 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001969C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001969C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523BF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00196A7D; /* je: equal / zero */

loc_001969E9: ;
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196AA4; /* jbe: below or equal (unsigned <=) */

loc_001969F2: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + ebx * 2 + 4);
    ecx = MEM32(0x5239B0);
    eax = eax + eax * 8;
    edi = MEM32(ecx + eax * 4 + 0x18);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A10u); RECOMP_ABI_CALL(0x002ECD1Fu, sub_002ECD1F); /* call 0x002ECD1F */

loc_00196A10: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196A20; /* je: equal / zero */

loc_00196A16: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A20u); RECOMP_ABI_CALL(0x002ECCE3u, sub_002ECCE3); /* call 0x002ECCE3 */

loc_00196A20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A2Eu); RECOMP_ABI_CALL(0x002ECCBFu, sub_002ECCBF); /* call 0x002ECCBF */

loc_00196A2E: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196A41; /* jl: less (signed <) */

loc_00196A34: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196A41; /* jne: not equal / not zero */

loc_00196A38: ;
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A40u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00196A40: ;
    POP32(esp, ecx);

loc_00196A41: ;
    eax = ZX8(MEM8(edi + 0xE));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x523978;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A56u); RECOMP_ABI_CALL(0x0019B746u, sub_0019B746); /* call 0x0019B746 */

loc_00196A56: ;
    eax = ZX8(MEM8(edi + 0xE));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x523990;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A6Bu); RECOMP_ABI_CALL(0x0019B702u, sub_0019B702); /* call 0x0019B702 */

loc_00196A6B: ;
    eax = ZX8(MEM8(esi + 0x23));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001969F2; /* jl: less (signed <) */

loc_00196A7B: ;
    goto loc_00196AA4;

loc_00196A7D: ;
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196AA4; /* jbe: below or equal (unsigned <=) */

loc_00196A83: ;
    edi = esi + 4;

loc_00196A86: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = ZX8(MEM8(0x523A4D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196A98u); RECOMP_ABI_CALL(0x00199EB6u, sub_00199EB6); /* call 0x00199EB6 */

loc_00196A98: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00196A86; /* jl: less (signed <) */

loc_00196AA4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196AC3; /* jbe: below or equal (unsigned <=) */

loc_00196AAB: ;
    edi = esi + 4;

loc_00196AAE: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196AB7u); RECOMP_ABI_CALL(0x0019B593u, sub_0019B593); /* call 0x0019B593 */

loc_00196AB7: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00196AAE; /* jl: less (signed <) */

loc_00196AC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00196ACA
 * Original: 0x00196ACA - 0x00196C41 (375 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196ACA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196ACA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x5239B0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + edi * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + edi * 8;
    _fa = (uint32_t)(MEM8(eax + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x25), 4 (8-bit) */
    esi = edx + ecx * 4;
    if (TEST_Z(_fa, _fb)) goto loc_00196BE0; /* je: equal / zero */

loc_00196AF7: ;
    MEM32(ebp + -8) = 6;
    ecx = ebp + -72;
    MEM32(ebp + -4) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x5F);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE9A0); /* addss */
    MEM32(ebp + -72) = 2;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = 1;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -56) = 5;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = 4;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -44) = eax;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = 3;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -28) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196BDEu); RECOMP_ABI_CALL(0x002ECC67u, sub_002ECC67); /* call 0x002ECC67 */

loc_00196BDE: ;
    goto loc_00196C3D;

loc_00196BE0: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x5F);
    PUSH32(esp, ebx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x324CE8); /* mulss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523C74)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523C74), LO8(ebx) (8-bit) */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_00196C3C; /* jbe: below or equal (unsigned <=) */

loc_00196C05: ;
    goto loc_00196C0C;

loc_00196C07: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */

loc_00196C0C: ;
    eax = ZX8(MEM8(0x523A4D));
    xmm1 = XMM_SCALAR(MEMF(esi + ebx * 4)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196C2Du); RECOMP_ABI_CALL(0x00199F51u, sub_00199F51); /* call 0x00199F51 */

loc_00196C2D: ;
    eax = ZX8(MEM8(0x523C74));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196C07; /* jl: less (signed <) */

loc_00196C3C: ;
    POP32(esp, ebx);

loc_00196C3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196C41
 * Original: 0x00196C41 - 0x00196C66 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196C41: ;
    ecx = MEM32(esp + 4);
    eax = ecx + ecx * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(eax + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196C5E; /* jne: not equal / not zero */

loc_00196C59: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196C65; /* je: equal / zero */

loc_00196C5E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00196C64u); RECOMP_ABI_CALL(0x00195F51u, sub_00195F51); /* call 0x00195F51 */

loc_00196C64: ;
    POP32(esp, ecx);

loc_00196C65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00196C66
 * Original: 0x00196C66 - 0x00196DDB (373 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196C66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x5239B0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ebx + ebx * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523BF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + ebx * 8;
    _fa = (uint32_t)(MEM8(esi + 0x4E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x4E), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00196CBD; /* je: equal / zero */

loc_00196C90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523C74)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523C74), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196CAE; /* jbe: below or equal (unsigned <=) */

loc_00196C9A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + eax * 4) = xmm0.f[0]; /* movss */
    ecx = ZX8(MEM8(0x523C74));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196C9A; /* jl: less (signed <) */

loc_00196CAE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00196CCA;

loc_00196CBD: ;
    eax = ZX16(MEM16(esi + 0x1C));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196CC8u); RECOMP_ABI_CALL(0x00197FF4u, sub_00197FF4); /* call 0x00197FF4 */

loc_00196CC8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00196CCA: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196DCF; /* je: equal / zero */

loc_00196CD4: ;
    MEM32(ebp + -8) = 6;
    eax = ebp + -72;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x5F);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE9A0); /* addss */
    MEM32(ebp + -72) = 2;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = 1;
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -56) = 5;
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = 4;
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -44) = eax;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = 3;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x378E60);
    MEM32(ebp + -28) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196DCDu); RECOMP_ABI_CALL(0x002ECC67u, sub_002ECC67); /* call 0x002ECC67 */

loc_00196DCD: ;
    goto loc_00196DD6;

loc_00196DCF: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196DD5u); RECOMP_ABI_CALL(0x00195F51u, sub_00195F51); /* call 0x00195F51 */

loc_00196DD5: ;
    POP32(esp, ecx);

loc_00196DD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196DDB
 * Original: 0x00196DDB - 0x00196FBF (484 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196DDB(void)
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

loc_00196DDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523BF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    MEM8(ebp + -1) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00196F67; /* je: equal / zero */

loc_00196DFF: ;
    ecx = MEM32(0x5239B0);
    eax = eax + eax * 8;
    ebx = ecx + eax * 4;
    SET_LO16(eax, MEM16(esi + 0x8E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196E77; /* jne: not equal / not zero */

loc_00196E17: ;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196E6E; /* jne: not equal / not zero */

loc_00196E1E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196E68; /* jbe: below or equal (unsigned <=) */

loc_00196E28: ;
    MEM8(ebp + -1) = 0;
    edi = esi + 4;

loc_00196E2F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196E49u); RECOMP_ABI_CALL(0x002ECCE3u, sub_002ECCE3); /* call 0x002ECCE3 */

loc_00196E49: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    MEM8(ecx + eax * 4 + 0x1C) = 0;
    eax = ZX8(MEM8(esi + 0x23));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196E2F; /* jl: less (signed <) */

loc_00196E68: ;
    MEM8(ebx + 0x1C) = 0;
    goto loc_00196ED2;

loc_00196E6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196EDC; /* jne: not equal / not zero */

loc_00196E72: ;
    MEM8(ebp + -1) = LO8(eax);
    goto loc_00196ED2;

loc_00196E77: ;
    if (CMP_BE(_fa, _fb)) goto loc_00196EDC; /* jbe: below or equal (unsigned <=) */

loc_00196E79: ;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196ECB; /* jne: not equal / not zero */

loc_00196E80: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196EC5; /* jbe: below or equal (unsigned <=) */

loc_00196E89: ;
    edi = esi + 4;

loc_00196E8C: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196EA6u); RECOMP_ABI_CALL(0x002ECCE3u, sub_002ECCE3); /* call 0x002ECCE3 */

loc_00196EA6: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    MEM8(ecx + eax * 4 + 0x1C) = 1;
    eax = ZX8(MEM8(esi + 0x23));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196E8C; /* jl: less (signed <) */

loc_00196EC5: ;
    MEM8(ebx + 0x1C) = 1;
    goto loc_00196EDC;

loc_00196ECB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196EDC; /* jne: not equal / not zero */

loc_00196ECF: ;
    MEM8(ebp + -1) = LO8(eax);

loc_00196ED2: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00196FB8; /* je: equal / zero */

loc_00196EDC: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196EF9; /* jl: less (signed <) */

loc_00196EE5: ;
    _fa = (uint32_t)(MEM16(esi + 0x8E)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x8E), 0x2000 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196EF9; /* jbe: below or equal (unsigned <=) */

loc_00196EF0: ;
    MEM16(esi + 0x8E) = 0x2000;

loc_00196EF9: ;
    eax = ZX16(MEM16(esi + 0x20));
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(esi + 0x8E));
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ebp + 8)); /* fimul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329D40)); /* fmul dword ptr [0x329d40] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196F1Bu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00196F1B: ;
    MEM32(ebp + 8) = eax;
    eax = 0xBC;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00196F32; /* jb: below (unsigned <) */

loc_00196F28: ;
    eax = 0x2EDEF;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196F35; /* jbe: below or equal (unsigned <=) */

loc_00196F32: ;
    MEM32(ebp + 8) = eax;

loc_00196F35: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196FB8; /* jbe: below or equal (unsigned <=) */

loc_00196F3C: ;
    edi = esi + 4;

loc_00196F3F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    PUSH32(esp, MEM32(ebp + 8));
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196F5Au); RECOMP_ABI_CALL(0x002ED169u, sub_002ED169); /* call 0x002ED169 */

loc_00196F5A: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196F3F; /* jl: less (signed <) */

loc_00196F65: ;
    goto loc_00196FB8;

loc_00196F67: ;
    eax = ZX16(MEM16(esi + 0x20));
    ecx = ZX16(MEM16(0x523A46));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    eax = ZX16(MEM16(esi + 0x8E));
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    edi = edi >> 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00196FB8; /* jbe: below or equal (unsigned <=) */

loc_00196F92: ;
    ebx = esi + 4;

loc_00196F95: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = ZX8(MEM8(0x523A4D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196FA8u); RECOMP_ABI_CALL(0x0019BF11u, sub_0019BF11); /* call 0x0019BF11 */

loc_00196FA8: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00196F95; /* jl: less (signed <) */

loc_00196FB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196FBF
 * Original: 0x00196FBF - 0x00196FC2 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196FBF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196FBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196FC2
 * Original: 0x00196FC2 - 0x00196FF4 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196FC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196FC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x523A0C);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5030);
    PUSH32(esp, 0x324CF8);
    PUSH32(esp, MEM32(0x5239B4));
    MEM32(ebp + -4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196FF0u); RECOMP_ABI_CALL(0x002ECBBEu, sub_002ECBBE); /* call 0x002ECBBE */

loc_00196FF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00196FF4
 * Original: 0x00196FF4 - 0x00197000 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196FF4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196FF4: ;
    eax = MEM32(esp + 4);
    MEM32(0x523A10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197000
 * Original: 0x00197000 - 0x00197022 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197000: ;
    PUSH32(esp, 0x00197005u); RECOMP_ABI_CALL(0x002ECD77u, sub_002ECD77); /* call 0x002ECD77 */

loc_00197005: ;
    eax = MEM32(0x2F4898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523A18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x523A18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00197021; /* jbe: below or equal (unsigned <=) */

loc_00197012: ;
    PUSH32(esp, 0x00197017u); RECOMP_ABI_CALL(0x00196FC2u, sub_00196FC2); /* call 0x00196FC2 */

loc_00197017: ;
    eax = MEM32(0x2F4898);
    MEM32(0x523A18) = eax;

loc_00197021: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00197022
 * Original: 0x00197022 - 0x00197233 (529 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197022(void)
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

loc_00197022: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x5239B4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197039u); RECOMP_ABI_CALL(0x002EDE53u, sub_002EDE53); /* call 0x002EDE53 */

loc_00197039: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197046u); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_00197046: ;
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197056u); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_00197056: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197064u); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_00197064: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197072u); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_00197072: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197080u); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_00197080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019708Eu); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_0019708E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019709Cu); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_0019709C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001970AAu); RECOMP_ABI_CALL(0x002ECC0Fu, sub_002ECC0F); /* call 0x002ECC0F */

loc_001970AA: ;
    PUSH32(esp, 0x523A0C);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5030);
    PUSH32(esp, 0x324CF8);
    PUSH32(esp, MEM32(0x5239B4));
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001970D2u); RECOMP_ABI_CALL(0x002ECBBEu, sub_002ECBBE); /* call 0x002ECBBE */

loc_001970D2: ;
    fp_push(1.0); /* fld1 */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEMF(0x523A00) = xmm0.f[0]; /* movss */
    MEMF(0x523A04) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001970F7u); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_001970F7: ;
    fp_push(1.0); /* fld1 */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197108u); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_00197108: ;
    fp_push(1.0); /* fld1 */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197119u); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_00197119: ;
    fp_push(1.0); /* fld1 */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019712Au); RECOMP_ABI_CALL(0x00197B8Au, sub_00197B8A); /* call 0x00197B8A */

loc_0019712A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019712Fu); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0019712F: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523B8C);
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197142u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00197142: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x523B8C);
    ecx = ecx + ecx * 8;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x5239B0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019715Bu); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019715B: ;
    eax = 0x94;
    _fb = (uint32_t)(MEM32(0x523A10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x523A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5239AC) = 0x1C;
    MEM32(0x5239A8) = eax;
    eax = eax + eax * 2 + 0x54;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197182u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00197182: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x523974) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019718Fu); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_0019718F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x5239A8;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = 0x523990;

loc_001971A6: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001971B2u); RECOMP_ABI_CALL(0x0019B6CFu, sub_0019B6CF); /* call 0x0019B6CF */

loc_001971B2: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001971BAu); RECOMP_ABI_CALL(0x0019B6CFu, sub_0019B6CF); /* call 0x0019B6CF */

loc_001971BA: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -12) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00197207; /* jle: less or equal (signed <=) */

loc_001971C6: ;
    ebx = ebx + ebx * 2;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001971CC: ;
    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001971D4u); RECOMP_ABI_CALL(0x00196143u, sub_00196143); /* call 0x00196143 */

loc_001971D4: ;
    ecx = MEM32(0x523974);
    MEM32(ebx + ecx + 8) = eax;
    eax = MEM32(0x523974);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001971EEu); RECOMP_ABI_CALL(0x0019B6DEu, sub_0019B6DE); /* call 0x0019B6DE */

loc_001971EE: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001971CC; /* jl: less (signed <) */

loc_00197204: ;
    ebx = MEM32(ebp + -16);

loc_00197207: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001971A6; /* jl: less (signed <) */

loc_00197217: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019721Cu); RECOMP_ABI_CALL(0x001962CAu, sub_001962CA); /* call 0x001962CA */

loc_0019721C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197221u); RECOMP_ABI_CALL(0x001967B1u, sub_001967B1); /* call 0x001967B1 */

loc_00197221: ;
    PUSH32(esp, 0x197000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019722Bu); RECOMP_ABI_CALL(0x0019A599u, sub_0019A599); /* call 0x0019A599 */

loc_0019722B: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197233
 * Original: 0x00197233 - 0x0019729F (108 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197233(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197233: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x197000);
    PUSH32(esp, 0x0019723Eu); RECOMP_ABI_CALL(0x0019A5B2u, sub_0019A5B2); /* call 0x0019A5B2 */

loc_0019723E: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x00197244u); RECOMP_ABI_CALL(0x001967F1u, sub_001967F1); /* call 0x001967F1 */

loc_00197244: ;
    esi = 0x523990;

loc_00197249: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019724Fu); RECOMP_ABI_CALL(0x0019B727u, sub_0019B727); /* call 0x0019B727 */

loc_0019724F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0019725E; /* je: equal / zero */

loc_00197254: ;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x0019725Cu); RECOMP_ABI_CALL(0x002EBFE1u, sub_002EBFE1); /* call 0x002EBFE1 */

loc_0019725C: ;
    goto loc_00197249;

loc_0019725E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5239A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5239A8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197249; /* jl: less (signed <) */

loc_00197269: ;
    PUSH32(esp, 0x0019726Eu); RECOMP_ABI_CALL(0x00196467u, sub_00196467); /* call 0x00196467 */

loc_0019726E: ;
    PUSH32(esp, 0x00197273u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00197273: ;
    PUSH32(esp, MEM32(0x523974));
    PUSH32(esp, 0x0019727Eu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019727E: ;
    PUSH32(esp, MEM32(0x5239B0));
    PUSH32(esp, 0x00197289u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00197289: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0x00197290u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00197290: ;
    PUSH32(esp, MEM32(0x5239B4));
    PUSH32(esp, 0x0019729Bu); RECOMP_ABI_CALL(0x002EBFCBu, sub_002EBFCB); /* call 0x002EBFCB */

loc_0019729B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019729F
 * Original: 0x0019729F - 0x00197342 (163 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019729F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019729F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = 0x523978;

loc_001972B3: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(eax);
    goto loc_00197315;

loc_001972BA: ;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = MEM32(0x523BF4);
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM16(eax + ecx + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ecx + 0x28), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00197313; /* jge: greater or equal (signed >=) */

loc_001972D2: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019730C; /* jge: greater or equal (signed >=) */

loc_001972D8: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001972E4u); RECOMP_ABI_CALL(0x002ECD1Fu, sub_002ECD1F); /* call 0x002ECD1F */

loc_001972E4: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197313; /* jne: not equal / not zero */

loc_001972EA: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    edx = MEM32(0x5239B0);
    eax = ZX16(LO16(ecx));
    eax = eax + eax * 8;
    _fa = (uint32_t)(MEM8(edx + eax * 4 + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax * 4 + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197313; /* je: equal / zero */

loc_00197301: ;
    MEM16(ebp + edi * 2 + -520) = LO16(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00197313;

loc_0019730C: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197312u); RECOMP_ABI_CALL(0x0019BF93u, sub_0019BF93); /* call 0x0019BF93 */

loc_00197312: ;
    POP32(esp, ecx);

loc_00197313: ;
    esi = MEM32(esi);

loc_00197315: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001972BA; /* jne: not equal / not zero */

loc_00197319: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x523990) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x523990 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001972B3; /* jl: less (signed <) */

loc_00197326: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019733E; /* jle: less or equal (signed <=) */

loc_0019732A: ;
    eax = ZX16(MEM16(ebp + esi * 2 + -520));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197338u); RECOMP_ABI_CALL(0x001969C8u, sub_001969C8); /* call 0x001969C8 */

loc_00197338: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019732A; /* jl: less (signed <) */

loc_0019733E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00197342
 * Original: 0x00197342 - 0x001973CE (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197342(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197342: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0x4B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = 0x1000;
    if (CMP_L(_fas, _fbs)) goto loc_0019736F; /* jl: less (signed <) */

loc_00197356: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    eax = ecx;
    ebx = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    POP32(esp, ebx);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFB50u);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019736A: ;
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019736A; /* jne: not equal / not zero */

loc_0019736F: ;
    eax = 0xFFFFFB50u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019738E; /* jg: greater (signed >) */

loc_00197378: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4B0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00197389: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00197389; /* jne: not equal / not zero */

loc_0019738E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x369D);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0xFFFFFF01u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) ecx = eax; /* cmovl */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001973B9; /* jge: greater or equal (signed >=) */

loc_001973A5: ;
    eax = ZX8(MEM8(ecx + 0x379068));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((9) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_001973CB;

loc_001973B9: ;
    eax = ZX8(MEM8(ecx + 0x378F68));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_001973CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001973CE
 * Original: 0x001973CE - 0x00197470 (162 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001973CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001973CE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523BF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 0x8A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x8A), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197453; /* jne: not equal / not zero */

loc_001973E9: ;
    SET_LO16(ecx, MEM16(esi + 0x86));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x88);
    if (CMP_EQ(_fa, _fb)) goto loc_00197421; /* je: equal / zero */

loc_001973FC: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019740F; /* je: equal / zero */

loc_00197403: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x68);
    eax = (uint32_t)(int32_t)SMEM8(edi + eax);
    POP32(esp, edi);
    goto loc_00197413;

loc_0019740F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x68);

loc_00197413: ;
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00197421: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197445; /* je: equal / zero */

loc_0019742B: ;
    ecx = ZX8(MEM8(esi + 0x6C));
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x84);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00197445: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019744Bu); RECOMP_ABI_CALL(0x00197342u, sub_00197342); /* call 0x00197342 */

loc_0019744B: ;
    POP32(esp, ecx);
    MEM16(esi + 0x8A) = LO16(eax);

loc_00197453: ;
    eax = ZX16(MEM16(esi + 0x8C));
    ecx = ZX16(MEM16(esi + 0x8A));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi + 0x8E) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00197470
 * Original: 0x00197470 - 0x00197480 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197470: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019747Au); RECOMP_ABI_CALL(0x001ED5E1u, sub_001ED5E1); /* call 0x001ED5E1 */

loc_0019747A: ;
    MEM32(0x523C5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00197480
 * Original: 0x00197480 - 0x0019748C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197480(void)
{

loc_00197480: ;
    PUSH32(esp, MEM32(0x523C5C));
    PUSH32(esp, 0x0019748Bu); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_0019748B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019748C
 * Original: 0x0019748C - 0x0019749A (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019748C(void)
{

loc_0019748C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(0x523C5C));
    PUSH32(esp, 0x00197499u); RECOMP_ABI_CALL(0x001ED6EFu, sub_001ED6EF); /* call 0x001ED6EF */

loc_00197499: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019749A
 * Original: 0x0019749A - 0x001974A6 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019749A(void)
{

loc_0019749A: ;
    PUSH32(esp, MEM32(0x523C5C));
    PUSH32(esp, 0x001974A5u); RECOMP_ABI_CALL(0x001ED639u, sub_001ED639); /* call 0x001ED639 */

loc_001974A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001974A6
 * Original: 0x001974A6 - 0x00197518 (114 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001974A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001974A6: ;
    _fa = (uint32_t)(MEM32(0x523C7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523C7C), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00197502; /* jne: not equal / not zero */

loc_001974B1: ;
    xmm0 = XMM_SCALAR(MEMF(0x329D44)); /* movss */
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    MEM16(0x523A44) = 0x10;
    MEM8(0x523A63) = 0x5A;
    MEM8(0x523A54) = 1;
    MEM8(0x523A4F) = 0;
    MEMF(0x523A50) = xmm0.f[0]; /* movss */
    esi = 0x523A3C;
    edi = 0x523AEC;
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
    PUSH32(esp, 0x001974F3u); RECOMP_ABI_CALL(0x0019680Bu, sub_0019680B); /* call 0x0019680B */

loc_001974F3: ;
    MEM32(0x523C80) = eax;
    MEM32(0x523C7C) = 1;

loc_00197502: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(0x523C80);
    PUSH32(esp, 0x33);
    POP32(esp, ecx);
    esi = 0x523A20;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00197518
 * Original: 0x00197518 - 0x00197555 (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197518(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197518: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    ebx = 0x523A3C;
    esi = eax + 0x1C;
    edi = ebx;
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
    PUSH32(esp, 5);
    esi = eax + 0xB8;
    POP32(esp, ecx);
    edi = 0x523AD8;
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
    PUSH32(esp, 0x00197543u); RECOMP_ABI_CALL(0x001968B4u, sub_001968B4); /* call 0x001968B4 */

loc_00197543: ;
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    esi = ebx;
    edi = 0x523AEC;
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
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00197555
 * Original: 0x00197555 - 0x001975EE (153 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197555(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197555: ;
    PUSH32(esp, 0x0019755Au); RECOMP_ABI_CALL(0x001955A0u, sub_001955A0); /* call 0x001955A0 */

loc_0019755A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197562; /* jne: not equal / not zero */

loc_0019755E: ;
    PUSH32(esp, 0xFFFFFFF2u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00197562: ;
    eax = MEM32(0x523BD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019756D; /* je: equal / zero */

loc_0019756B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0019756Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019756Bu); } /* indirect call */
    }

loc_0019756D: ;
    eax = MEM32(0x523BDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197578; /* je: equal / zero */

loc_00197576: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00197578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197576u); } /* indirect call */
    }

loc_00197578: ;
    eax = MEM32(0x523BE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197583; /* je: equal / zero */

loc_00197581: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00197583u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197581u); } /* indirect call */
    }

loc_00197583: ;
    eax = MEM32(0x523BEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019758E; /* je: equal / zero */

loc_0019758C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0019758Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019758Cu); } /* indirect call */
    }

loc_0019758E: ;
    eax = MEM32(0x523BE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197599; /* je: equal / zero */

loc_00197597: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00197599u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197597u); } /* indirect call */
    }

loc_00197599: ;
    PUSH32(esp, 0x0019759Eu); RECOMP_ABI_CALL(0x0019804Fu, sub_0019804F); /* call 0x0019804F */

loc_0019759E: ;
    eax = MEM32(0x523BE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001975AC; /* je: equal / zero */

loc_001975A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001975ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001975A9u); } /* indirect call */
    }

loc_001975AB: ;
    POP32(esp, ecx);

loc_001975AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001975B4u); RECOMP_ABI_CALL(0x00197233u, sub_00197233); /* call 0x00197233 */

loc_001975B4: ;
    PUSH32(esp, 0x001975B9u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_001975B9: ;
    PUSH32(esp, MEM32(0x523BF4));
    PUSH32(esp, 0x001975C4u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001975C4: ;
    PUSH32(esp, MEM32(0x523BF8));
    PUSH32(esp, 0x001975CFu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001975CF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001975D7u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_001975D7: ;
    PUSH32(esp, 0x001975DCu); RECOMP_ABI_CALL(0x0019798Au, sub_0019798A); /* call 0x0019798A */

loc_001975DC: ;
    esi = eax;
    MEM8(0x523B88) = 0;
    PUSH32(esp, 0x001975EAu); RECOMP_ABI_CALL(0x00197480u, sub_00197480); /* call 0x00197480 */

loc_001975EA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001975EE
 * Original: 0x001975EE - 0x00197688 (154 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001975EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001975EE: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523B8C);
    PUSH32(esp, esi);
    esi = MEM32(0x37906C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, edi);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019760Cu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019760C: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x523BF4) = eax;
    PUSH32(esp, 0x00197618u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00197618: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x523B8C);
    eax = ecx + ecx * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00197683; /* jle: less or equal (signed <=) */

loc_00197634: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00197636: ;
    ecx = MEM32(0x523BF4);
    MEM32(edx + ecx + 0x64) = eax;
    ecx = MEM32(0x37906C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019766E; /* jle: less or equal (signed <=) */

loc_0019764C: ;
    ecx = MEM32(0x523BF4);
    ecx = MEM32(edx + ecx + 0x64);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(ecx + esi * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x37906C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019764C; /* jl: less (signed <) */

loc_0019766E: ;
    eax = eax + ecx * 4;
    ecx = (uint32_t)(int32_t)SMEM16(0x523B8C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197636; /* jl: less (signed <) */

loc_00197683: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00197688
 * Original: 0x00197688 - 0x0019770C (132 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197688(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197688: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x523938)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523938), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001976A4; /* jne: not equal / not zero */

loc_00197694: ;
    eax = MEM32(0x523934);
    MEM32(0x378E50) = eax;
    MEM32(0x523938) = esi;

loc_001976A4: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001976AA: ;
    ecx = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001976CD; /* je: equal / zero */

loc_001976B0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00197707; /* jne: not equal / not zero */

loc_001976B4: ;
    _fa = (uint32_t)(MEM32(0x523928)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523928), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001976FD; /* je: equal / zero */

loc_001976BC: ;
    SET_LO8(ecx, MEM8(0x523924));
    MEM8(eax + 0x2D) = LO8(ecx);
    MEM32(0x523928) = esi;
    goto loc_001976FD;

loc_001976CD: ;
    _fa = (uint32_t)(MEM32(0x523918)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523918), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001976E4; /* je: equal / zero */

loc_001976D5: ;
    SET_LO8(ecx, MEM8(0x523914));
    MEM8(eax + 0x2A) = LO8(ecx);
    MEM32(0x523918) = esi;

loc_001976E4: ;
    _fa = (uint32_t)(MEM32(0x523940)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523940), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001976FD; /* je: equal / zero */

loc_001976EC: ;
    SET_LO16(ecx, MEM16(0x52393C));
    MEM16(eax + 0x26) = LO16(ecx);
    MEM32(0x523940) = esi;

loc_001976FD: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001976AA; /* jl: less (signed <) */

loc_00197703: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00197707: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019770C
 * Original: 0x0019770C - 0x0019780B (255 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019770C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019770C: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), LO8(ebx) (8-bit) */
    MEM8(0x379B50) = 0x53;
    if (CMP_EQ(_fa, _fb)) goto loc_00197722; /* je: equal / zero */

loc_0019771E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00197722: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00197730u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00197730: ;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0019773Du); RECOMP_ABI_CALL(0x00197934u, sub_00197934); /* call 0x00197934 */

loc_0019773D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x523B8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x523B8C), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197764; /* jne: not equal / not zero */

loc_00197749: ;
    esi = 0x523A20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00197754u); RECOMP_ABI_CALL(0x001974A6u, sub_001974A6); /* call 0x001974A6 */

loc_00197754: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00197808; /* jl: less (signed <) */

loc_0019775D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00197763u); RECOMP_ABI_CALL(0x00197518u, sub_00197518); /* call 0x00197518 */

loc_00197763: ;
    POP32(esp, ecx);

loc_00197764: ;
    PUSH32(esp, MEM32(0x523A40));
    PUSH32(esp, 0x0019776Fu); RECOMP_ABI_CALL(0x0019C4F9u, sub_0019C4F9); /* call 0x0019C4F9 */

loc_0019776F: ;
    PUSH32(esp, 0x00197774u); RECOMP_ABI_CALL(0x00197470u, sub_00197470); /* call 0x00197470 */

loc_00197774: ;
    MEM8(0x523B88) = 1;
    PUSH32(esp, 0x00197780u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00197780: ;
    PUSH32(esp, 0x00197785u); RECOMP_ABI_CALL(0x001975EEu, sub_001975EE); /* call 0x001975EE */

loc_00197785: ;
    eax = ZX16(MEM16(0x523A44));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197795u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00197795: ;
    MEM32(0x523BF8) = eax;
    PUSH32(esp, 0x0019779Fu); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_0019779F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    MEM32(0x523B90) = ebx;
    MEMF(0x379068) = xmm0.f[0]; /* movss */
    MEM8(0x523B8E) = LO8(ebx);
    MEM8(0x523B8A) = LO8(ebx);
    MEM8(0x523B8B) = LO8(ebx);
    PUSH32(esp, 0x001977CDu); RECOMP_ABI_CALL(0x00197022u, sub_00197022); /* call 0x00197022 */

loc_001977CD: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001977EC; /* jge: greater or equal (signed >=) */

loc_001977D6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001977DCu); RECOMP_ABI_CALL(0x00197233u, sub_00197233); /* call 0x00197233 */

loc_001977DC: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x001977E2u); RECOMP_ABI_CALL(0x00197480u, sub_00197480); /* call 0x00197480 */

loc_001977E2: ;
    MEM8(0x523B88) = LO8(ebx);
    eax = esi;
    goto loc_00197808;

loc_001977EC: ;
    SET_LO8(eax, MEM8(0x523A60));
    _fb = (uint32_t)(MEM8(0x523A5F)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(0x523A5F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x523C74) = LO8(eax);
    PUSH32(esp, 0x00197801u); RECOMP_ABI_CALL(0x00198065u, sub_00198065); /* call 0x00198065 */

loc_00197801: ;
    PUSH32(esp, 0x00197806u); RECOMP_ABI_CALL(0x00197CFDu, sub_00197CFD); /* call 0x00197CFD */

loc_00197806: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00197808: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00197810
 * Original: 0x00197810 - 0x00197913 (259 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197810(void)
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

loc_00197810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 7 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001978D3; /* jne: not equal / not zero */

loc_00197829: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197864; /* jl: less (signed <) */

loc_0019782E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    fp_push(MEMD(esp)); /* fld double */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0019784B; /* js: sign (negative) */

loc_00197838: ;
    MEMD(eax) = fp_top(); /* fst */
    MEMD(eax + 8) = fp_top(); /* fst */
    MEMD(eax + 0x10) = fp_top(); /* fst */
    MEMD(eax + 0x18) = fp_top(); /* fst */
    eax = eax + 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00197838; /* jns: not sign (positive) */

loc_0019784B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0019785A; /* js: sign (negative) */

loc_00197850: ;
    MEMD(eax) = fp_top(); /* fst */
    eax = eax + 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00197850; /* jns: not sign (positive) */

loc_0019785A: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001978A9; /* jne: not equal / not zero */

loc_00197864: ;
    POP32(esp, edx);
    POP32(esp, ebx);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0019786E: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    eax = eax + 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0019786E; /* jns: not sign (positive) */

loc_0019788D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0019789F; /* js: sign (negative) */

loc_00197892: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00197892; /* jns: not sign (positive) */

loc_0019789F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001978A9; /* jne: not equal / not zero */

loc_001978A4: ;
    POP32(esp, edx);
    POP32(esp, ebx);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001978A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 4 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978B6; /* je: equal / zero */

loc_001978B1: ;
    MEM32(eax) = ebx;
    eax = eax + 4;

loc_001978B6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978C4; /* je: equal / zero */

loc_001978BE: ;
    MEM16(eax) = LO16(ebx);
    eax = eax + 2;

loc_001978C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 1 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978CE; /* je: equal / zero */

loc_001978CC: ;
    MEM8(eax) = LO8(ebx);

loc_001978CE: ;
    POP32(esp, edx);
    POP32(esp, ebx);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001978D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 1 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978E5; /* je: equal / zero */

loc_001978DA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001978E5; /* jl: less (signed <) */

loc_001978DF: ;
    MEM8(eax) = LO8(ebx);
    eax = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001978E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978FA; /* je: equal / zero */

loc_001978EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001978FA; /* jl: less (signed <) */

loc_001978F1: ;
    MEM16(eax) = LO16(ebx);
    eax = eax + 2;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001978FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 4 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019790E; /* je: equal / zero */

loc_00197901: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019790E; /* jl: less (signed <) */

loc_00197906: ;
    MEM32(eax) = ebx;
    eax = eax + 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0019790E: ;
    goto loc_00197829;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197913
 * Original: 0x00197913 - 0x00197934 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197913(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197913: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    eax = MEM32(0x523BFC);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00197933; /* jbe: below or equal (unsigned <=) */

loc_0019792F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;

loc_00197933: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00197934
 * Original: 0x00197934 - 0x0019798A (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197934(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197934: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(0x523BFC) = ecx;
    MEM32(ecx + 8) = eax;
    edx = ecx + eax + -8;
    PUSH32(esp, esi);
    esi = MEM32(0x523BFC);
    MEM32(esi + 4) = edx;
    edx = MEM32(0x523BFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(0x523BFC);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 0xF;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x523BFC);
    MEM32(ecx) = MEM32(ecx) & 0xFFFFFFF0u;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(0x523BFC);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + -32;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(0x523BFC);
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019798A
 * Original: 0x0019798A - 0x0019798F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019798A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019798A: ;
    g_seh_ebp = ebp; sub_0019C5B5(); return; /* tail jmp 0x0019C5B5 */

}

/**
 * sub_0019798F
 * Original: 0x0019798F - 0x00197A91 (258 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019798F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019798F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x523BFC);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001979B7; /* jne: not equal / not zero */

loc_001979B2: ;
    eax = MEM32(esi + 0xC);
    goto loc_00197A14;

loc_001979B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00197A00; /* jge: greater or equal (signed >=) */

loc_001979BE: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 4);
    eax = eax + ecx * 8;
    if (CMP_NE(_fa, _fb)) goto loc_001979D1; /* jne: not equal / not zero */

loc_001979CB: ;
    eax = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001979DB;

loc_001979D1: ;
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001979DB: ;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001979EEu); RECOMP_ABI_CALL(0x00197913u, sub_00197913); /* call 0x00197913 */

loc_001979EE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00197A32; /* jle: less or equal (signed <=) */

loc_001979F5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001979BE; /* jg: greater (signed >) */

loc_00197A00: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx * 8 + 8;
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00197A14: ;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197A27u); RECOMP_ABI_CALL(0x00197913u, sub_00197913); /* call 0x00197913 */

loc_00197A27: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00197A54; /* jle: less or equal (signed <=) */

loc_00197A2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00197A8C;

loc_00197A32: ;
    ecx = MEM32(esi + 0x14);
    goto loc_00197A4F;

loc_00197A37: ;
    eax = MEM32(esi + 4);
    eax = eax + ecx * 8;
    edx = MEM32(eax + 8);
    MEM32(eax) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 4) = edx;
    esi = MEM32(0x523BFC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00197A4F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197A37; /* jl: less (signed <) */

loc_00197A54: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx * 8;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    eax = MEM32(0x523BFC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x523BFC);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 0xFFFFFFF8u;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x523BFC);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00197A8C; /* jge: greater or equal (signed >=) */

loc_00197A89: ;
    MEM32(ecx + 0x10) = edx;

loc_00197A8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00197A91
 * Original: 0x00197A91 - 0x00197AE5 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197A91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197A91: ;
    eax = MEM32(0x523BFC);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00197AE3; /* jge: greater or equal (signed >=) */

loc_00197AA6: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);

loc_00197AAA: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197AB8; /* je: equal / zero */

loc_00197AAE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00197AAA; /* jg: greater (signed >) */

loc_00197AB6: ;
    goto loc_00197AE2;

loc_00197AB8: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x523BFC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 8;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00197AD8;

loc_00197AC6: ;
    eax = MEM32(eax + 4);
    eax = eax + ecx * 8;
    edx = MEM32(eax + -8);
    MEM32(eax) = edx;
    edx = MEM32(eax + -4);
    MEM32(eax + 4) = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00197AD8: ;
    eax = MEM32(0x523BFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00197AC6; /* jg: greater (signed >) */

loc_00197AE2: ;
    POP32(esp, edi);

loc_00197AE3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00197AE5
 * Original: 0x00197AE5 - 0x00197B11 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197AE5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197AE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00197AEBu); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00197AEB: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax + 4));
    eax = ZX16(MEM16(0x523A46));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197B03u); RECOMP_ABI_CALL(0x00198AB5u, sub_00198AB5); /* call 0x00198AB5 */

loc_00197B03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00197B0Du); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00197B0D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00197B11
 * Original: 0x00197B11 - 0x00197B8A (121 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197B11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197B11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 4);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00197B28; /* jne: not equal / not zero */

loc_00197B25: ;
    MEM32(ebp + 8) = ecx;

loc_00197B28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197B34; /* jne: not equal / not zero */

loc_00197B2D: ;
    MEM32(ebp + 8) = 0x400;

loc_00197B34: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197B54; /* jne: not equal / not zero */

loc_00197B39: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197B3Eu); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00197B3E: ;
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197B49u); RECOMP_ABI_CALL(0x00198C18u, sub_00198C18); /* call 0x00198C18 */

loc_00197B49: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197B52u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00197B52: ;
    goto loc_00197B85;

loc_00197B54: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    PUSH32(esp, 0);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5239B4));
    esi = 0x379070;
    edi = ebp + -48;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197B73u); RECOMP_ABI_CALL(0x002EDC8Du, sub_002EDC8D); /* call 0x002EDC8D */

loc_00197B73: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3794F0) = MEM32(0x3794F0) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x3794F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;

loc_00197B85: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00197B8A
 * Original: 0x00197B8A - 0x00197BF6 (108 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197B8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197B8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D48); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_00197BBA; /* je: equal / zero */

loc_00197BA8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00197BB6; /* je: equal / zero */

loc_00197BAB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00197BB2; /* je: equal / zero */

loc_00197BAE: ;
    PUSH32(esp, 5);
    goto loc_00197BBC;

loc_00197BB2: ;
    PUSH32(esp, 4);
    goto loc_00197BBC;

loc_00197BB6: ;
    PUSH32(esp, 3);
    goto loc_00197BBC;

loc_00197BBA: ;
    PUSH32(esp, 2);

loc_00197BBC: ;
    POP32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197BD3u); RECOMP_ABI_CALL(0x002ECBE5u, sub_002ECBE5); /* call 0x002ECBE5 */

loc_00197BD3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197BF3; /* je: equal / zero */

loc_00197BD9: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x5239B4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197BF3u); RECOMP_ABI_CALL(0x002ECBE5u, sub_002ECBE5); /* call 0x002ECBE5 */

loc_00197BF3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00197BF6
 * Original: 0x00197BF6 - 0x00197C9A (164 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197BF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197BF6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = ecx + ecx * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197C3D; /* je: equal / zero */

loc_00197C12: ;
    esi = MEM32(eax + 0x64);
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    eax = ZX8(MEM8(0x523A4D));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197C38u); RECOMP_ABI_CALL(0x00199F7Fu, sub_00199F7F); /* call 0x00199F7F */

loc_00197C38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00197C95;

loc_00197C3D: ;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = 1;
    edx = ebp + -72;
    MEM32(ebp + -4) = edx;
    edx = MEM32(eax + 0x64);
    xmm0 = XMM_SCALAR(MEMF(edx + esi * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31242C); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x378E60;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(ebp + -68) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ecx + ecx * 8;
    ecx = MEM32(0x5239B0);
    MEM32(ebp + -72) = 0xB;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197C95u); RECOMP_ABI_CALL(0x002ECC67u, sub_002ECC67); /* call 0x002ECC67 */

loc_00197C95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00197C9A
 * Original: 0x00197C9A - 0x00197CFD (99 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197C9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00197C9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(0x329D50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3003A0); /* mulss */
    MEMF(ebp + 0x10) = xmm2.f[0]; /* movss */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197CE6u); RECOMP_ABI_CALL(0x0019C665u, sub_0019C665); /* call 0x0019C665 */

loc_00197CE6: ;
    esi = MEM32(ebp + 8);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197CF6u); RECOMP_ABI_CALL(0x0019C5CCu, sub_0019C5CC); /* call 0x0019C5CC */

loc_00197CF6: ;
    POP32(esp, ecx);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197CFD
 * Original: 0x00197CFD - 0x00197FF4 (759 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197CFD(void)
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

loc_00197CFD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197D08u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00197D08: ;
    eax = ZX8(MEM8(0x523A5F));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197D18u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00197D18: ;
    POP32(esp, ecx);
    MEM32(0x523C9C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197D23u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_00197D23: ;
    ecx = ZX8(MEM8(0x523A5F));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00197D48; /* jle: less or equal (signed <=) */

loc_00197D30: ;
    edx = MEM32(0x523C9C);

loc_00197D36: ;
    MEM32(eax * 4 + 0x523C84) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197D36; /* jl: less (signed <) */

loc_00197D48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00197D4D: ;
    SET_LO8(edx, MEM8(0x523A5F));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_HI8(eax, LO8(ebx));
    eax = ZX16(LO16(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x329D4C); /* mulss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00197D7E; /* jne: not equal / not zero */

loc_00197D70: ;
    eax = MEM32(0x523C84);
    MEM8(eax + ebx) = 0x7F;
    goto loc_00197FE2;

loc_00197D7E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00197DA1; /* jbe: below or equal (unsigned <=) */

loc_00197D84: ;
    ecx = MEM32(eax * 4 + 0x523C84);
    MEM8(ebx + ecx) = 0;
    ecx = ZX8(MEM8(0x523A5F));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197D84; /* jl: less (signed <) */

loc_00197D9B: ;
    SET_LO8(edx, MEM8(0x523A5F));

loc_00197DA1: ;
    xmm0 = XMM_SCALAR(MEMF(0x523C60)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00197EA9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00197DB2: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_B(_fa, _fb)) goto loc_00197E25; /* jb: below (unsigned <) */

loc_00197DC1: ;
    fp_push(MEMF(0x523C64)); /* fld float */
    eax = ebp + -44;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x523C60)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197DDDu); RECOMP_ABI_CALL(0x00197C9Au, sub_00197C9A); /* call 0x00197C9A */

loc_00197DDD: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebp + -8) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -8), g_mxcsr, 0); /* cvtss2si */
    ecx = MEM32(0x523C84);
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM8(ecx + ebx) = LO8(eax);
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -12), g_mxcsr, 0); /* cvtss2si */
    ecx = MEM32(0x523C88);
    MEM8(ecx + ebx) = LO8(eax);
    goto loc_00197FE2;

loc_00197E25: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF024)); /* movss */
    fp_push(MEMF(0x523C60)); /* fld float */
    eax = ZX8(LO8(edx));
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 4 + 0x523C5C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197E59u); RECOMP_ABI_CALL(0x00197C9Au, sub_00197C9A); /* call 0x00197C9A */

loc_00197E59: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebp + -16) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -16), g_mxcsr, 0); /* cvtss2si */
    ecx = MEM32(0x523C84);
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM8(ecx + ebx) = LO8(eax);
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -20), g_mxcsr, 0); /* cvtss2si */

loc_00197E93: ;
    ecx = ZX8(MEM8(0x523A5F));
    ecx = MEM32(ecx * 4 + 0x523C80);
    MEM8(ebx + ecx) = LO8(eax);
    goto loc_00197FE2;

loc_00197EA9: ;
    ecx = ZX8(LO8(edx));
    eax = ecx * 4 + 0x523C5C;
    _fca = xmm1.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00197F3F; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(eax)) */

loc_00197EBC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF024)); /* movss */
    fp_push(MEMF(0x523C60)); /* fld float */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197F00u); RECOMP_ABI_CALL(0x00197C9Au, sub_00197C9A); /* call 0x00197C9A */

loc_00197F00: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebp + -24) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -24), g_mxcsr, 0); /* cvtss2si */
    ecx = MEM32(0x523C84);
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM8(ecx + ebx) = LO8(eax);
    MEMF(ebp + -28) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -28), g_mxcsr, 0); /* cvtss2si */
    goto loc_00197E93;

loc_00197F3F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00197FE2; /* jle: less or equal (signed <=) */

loc_00197F49: ;
    esi = edi;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x523C60); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00197FD6; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0x523C60)) */

loc_00197F57: ;
    eax = esi + 0x523C64;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00197FD6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00197F66: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    eax = ebp + -44;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x523C60)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197F88u); RECOMP_ABI_CALL(0x00197C9Au, sub_00197C9A); /* call 0x00197C9A */

loc_00197F88: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebp + -32) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -32), g_mxcsr, 0); /* cvtss2si */
    ecx = MEM32(esi + 0x523C84);
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM8(ebx + ecx) = LO8(eax);
    MEMF(ebp + -36) = xmm1.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -36), g_mxcsr, 0); /* cvtss2si */
    ecx = MEM32(esi + 0x523C88);
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEM8(ebx + ecx) = LO8(eax);
    SET_LO8(edx, MEM8(0x523A5F));

loc_00197FD6: ;
    eax = ZX8(LO8(edx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197F49; /* jl: less (signed <) */

loc_00197FE2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197D4D; /* jl: less (signed <) */

loc_00197FEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197FF4
 * Original: 0x00197FF4 - 0x0019804F (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197FF4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197FF4: ;
    ecx = ZX8(MEM8(esp + 5));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523A5F)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523A5F), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_BE(_fa, _fb)) goto loc_0019803B; /* jbe: below or equal (unsigned <=) */

loc_0019800A: ;
    edx = 0x523C84;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);

loc_00198014: ;
    ebx = MEM32(edx + eax);
    ebx = ZX8(MEM8(ebx + ecx));
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x305FE4); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ebx = ZX8(MEM8(0x523A5F));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198014; /* jl: less (signed <) */

loc_0019803A: ;
    POP32(esp, ebx);

loc_0019803B: ;
    _fa = (uint32_t)(MEM32(0x523C78)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523C78), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019804C; /* jne: not equal / not zero */

loc_00198044: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */

loc_0019804C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019804F
 * Original: 0x0019804F - 0x00198065 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019804F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019804F: ;
    PUSH32(esp, 0x00198054u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00198054: ;
    PUSH32(esp, MEM32(0x523C9C));
    PUSH32(esp, 0x0019805Fu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019805F: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_001950F1(); return; /* tail jmp 0x001950F1 */

}

/**
 * sub_00198065
 * Original: 0x00198065 - 0x00198236 (465 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198065(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198065: ;
    SET_LO8(eax, MEM8(0x523C74));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198089; /* jne: not equal / not zero */

loc_00198073: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x523C78) = ecx;
    MEMF(0x523C60) = xmm0.f[0]; /* movss */
    goto loc_00198161;

loc_00198089: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001980B8; /* jne: not equal / not zero */

loc_0019808D: ;
    xmm0 = XMM_SCALAR(MEMF(0x310950)); /* movss */
    MEMF(0x523C60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D60)); /* movss */
    MEM32(0x523C78) = edx;
    MEMF(0x523C64) = xmm0.f[0]; /* movss */
    goto loc_00198161;

loc_001980B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198108; /* jne: not equal / not zero */

loc_001980BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x319DB8)); /* movss */
    MEMF(0x523C60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D5C)); /* movss */
    MEMF(0x523C64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D58)); /* movss */
    MEMF(0x523C68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D54)); /* movss */
    MEM32(0x523C78) = 2;
    MEMF(0x523C6C) = xmm0.f[0]; /* movss */
    goto loc_00198161;

loc_00198108: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198161; /* jne: not equal / not zero */

loc_0019810C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x523C60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x319DB8)); /* movss */
    MEMF(0x523C64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D5C)); /* movss */
    MEMF(0x523C68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D58)); /* movss */
    MEMF(0x523C6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x329D54)); /* movss */
    MEM32(0x523C78) = 3;
    MEMF(0x523C70) = xmm0.f[0]; /* movss */

loc_00198161: ;
    _fa = (uint32_t)(MEM8(0x523A5F)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523A5F), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019817E; /* jne: not equal / not zero */

loc_0019816A: ;
    MEM16(0x523C0C) = 0xC000;
    MEM16(0x523C0E) = 0x4000;
    goto loc_00198190;

loc_0019817E: ;
    MEM16(0x523C0C) = 0xE000;
    MEM16(0x523C0E) = 0x2000;

loc_00198190: ;
    SET_LO16(eax, MEM16(0x523AAC));
    MEM16(0x523C18) = LO16(eax);
    SET_LO16(eax, MEM16(0x523AA8));
    MEM16(0x523C1A) = LO16(eax);
    SET_LO16(eax, MEM16(0x523AAA));
    MEM16(0x523C1C) = LO16(eax);
    MEM16(0x523C24) = 0xE000;
    MEM16(0x523C26) = 0x2000;
    MEM16(0x523C28) = 0xA000;
    MEM16(0x523C2A) = 0x6000;
    MEM16(0x523C30) = 0xE000;
    MEM16(0x523C32) = LO16(ecx);
    MEM16(0x523C34) = 0x2000;
    MEM16(0x523C36) = 0xA000;
    MEM16(0x523C38) = 0x6000;
    MEM16(0x523C3C) = 0xE000;
    MEM16(0x523C3E) = LO16(ecx);
    MEM16(0x523C40) = 0x2000;
    MEM16(0x523C42) = 0xA000;
    MEM16(0x523C44) = 0x6000;
    MEM16(0x523C46) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00198236
 * Original: 0x00198236 - 0x00198254 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198236(void)
{

loc_00198236: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    ecx = MEM32(esp + 0xC);
    eax = eax + eax * 2;
    eax = ZX8(MEM8(ecx + eax * 2 + 0x3799DD));
    esp += 4; return; /* ret */

}

/**
 * sub_00198254
 * Original: 0x00198254 - 0x001984DB (647 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198254(void)
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

loc_00198254: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -56) = MEM32(ebp + -56) & 0;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x523CA4) = MEM32(0x523CA4) + 1;
    _fa = (uint32_t)(MEM32(0x523CA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(0x523CA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523CA4), 0xBB8 (32-bit) */
    PUSH32(esp, edi);
    edi = ebp + -52;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(0x523D78);
    MEM32(ebp + -28) = eax;
    eax = MEM32(0x523D7C);
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001984D8; /* jge: greater or equal (signed >=) */

loc_0019828F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), edi (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001984D8; /* jle: less or equal (signed <=) */

loc_001982A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_001982A2: ;
    eax = MEM32(0x523CA8);
    esi = MEM32(eax + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001984C6; /* je: equal / zero */

loc_001982B2: ;
    eax = MEM32(esi);
    MEM32(ebp + -32) = eax;
    eax = ebp + -56;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001982C2u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_001982C2: ;
    eax = MEM32(esi + 0x48);
    eax = esi + eax * 4 + 8;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001982D1u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_001982D1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019849E; /* je: equal / zero */

loc_001982DC: ;
    eax = MEM32(0x523CA0);
    PUSH32(esp, MEM32(eax + edi * 4));
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(ecx + eax * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001982F2u); RECOMP_ABI_CALL(0x0019C73Bu, sub_0019C73B); /* call 0x0019C73B */

loc_001982F2: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_0019849E; /* jbe: below or equal (unsigned <=) */

loc_00198305: ;
    ebx = esi;
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = esi + 0x68;
    MEM32(ebp + -20) = ebx;

loc_0019830F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4 + -56), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198485; /* jne: not equal / not zero */

loc_0019831D: ;
    ecx = MEM32(esi + 0x40);
    eax = ebx + -104;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + edi + 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198485; /* je: equal / zero */

loc_00198332: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00198345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00198343u); } /* indirect call */
    }

loc_00198345: ;
    fp_push(MEMF(edi)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019838F; /* jne: not equal / not zero */

loc_00198353: ;
    ebx = ebx + edi + 0x523D30;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -24)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198370u); RECOMP_ABI_CALL(0x001997C4u, sub_001997C4); /* call 0x001997C4 */

loc_00198370: ;
    eax = MEM32(ebx);
    fp_push(MEMF(edi)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    goto loc_001983A0;

loc_0019838F: ;
    PUSH32(esp, MEM32(ebx + edi + 0x523D30));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));

loc_001983A0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x523EAC); PUSH32(esp, 0x001983A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001983A0u); } /* indirect call */
    }

loc_001983A6: ;
    edx = MEM32(ebp + -8);
    ecx = ZX8(MEM8(0x523CD1));
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + edx * 4 + -56) = 1;
    eax = MEM32(esi + 0x48);
    eax = eax + eax * 2;
    eax = ecx + eax * 2 + -7;
    eax = eax + eax * 2;
    eax = edx + eax * 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = eax + eax * 2;
    ebx = ebx * 2 + 0x3794F8;
    if (CMP_LE(_fas, _fbs)) goto loc_00198474; /* jle: less or equal (signed <=) */

loc_001983E1: ;
    eax = esi + 0x68;
    MEM32(ebp + -12) = eax;

loc_001983E7: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019845C; /* jl: less (signed <) */

loc_001983ED: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 1 (32-bit) */
    eax = SX8(LO8(eax));
    PUSH32(esp, MEM32(eax * 4 + 0x523D98));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019843D; /* jne: not equal / not zero */

loc_00198404: ;
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -24)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198416u); RECOMP_ABI_CALL(0x001997C4u, sub_001997C4); /* call 0x001997C4 */

loc_00198416: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(eax * 4 + 0x523D98);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    goto loc_00198448;

loc_0019843D: ;
    eax = MEM32(ebp + -12);
    fp_push(MEMF(eax)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));

loc_00198448: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x523EAC); PUSH32(esp, 0x0019844Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00198448u); } /* indirect call */
    }

loc_0019844E: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + eax * 4 + -56) = 1;

loc_0019845C: ;
    eax = ZX8(MEM8(0x523CD1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001983E7; /* jl: less (signed <) */

loc_00198474: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 1 (32-bit) */
    ebx = MEM32(ebp + -20);
    if (CMP_NE(_fa, _fb)) goto loc_00198485; /* jne: not equal / not zero */

loc_00198480: ;
    eax = MEM32(edi);
    MEM32(edi + -24) = eax;

loc_00198485: ;
    eax = ZX8(MEM8(0x523CD1));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019830F; /* jl: less (signed <) */

loc_0019849B: ;
    edi = MEM32(ebp + -24);

loc_0019849E: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -32);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001982B2; /* jne: not equal / not zero */

loc_001984B0: ;
    eax = MEM32(ebp + 8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(0x523CA0);
    PUSH32(esp, MEM32(eax + edi * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001984C4u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_001984C4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_001984C6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x37906C) (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001982A2; /* jl: less (signed <) */

loc_001984D6: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001984D8: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001984DB
 * Original: 0x001984DB - 0x001985B9 (222 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001984DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001984DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x523CDC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), ebx (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001985B5; /* je: equal / zero */

loc_001984FB: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 4 + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019850Fu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_0019850F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00198569; /* je: equal / zero */

loc_00198518: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00198569; /* jle: less or equal (signed <=) */

loc_00198522: ;
    edi = eax;
    eax = MEM32(esi + 0x3C);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198543; /* je: equal / zero */

loc_00198533: ;
    eax = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00198539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00198536u); } /* indirect call */
    }

loc_00198539: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(eax + edi);
    POP32(esp, ecx);
    MEM32(eax + 4) = ebx;

loc_00198543: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(edi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019855A; /* je: equal / zero */

loc_0019854D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198553u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198553: ;
    eax = MEM32(esi + 0x3C);
    POP32(esp, ecx);
    MEM32(edi + eax) = ebx;

loc_0019855A: ;
    eax = MEM32(ebp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00198522; /* jl: less (signed <) */

loc_00198566: ;
    edi = MEM32(ebp + -8);

loc_00198569: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019857A; /* je: equal / zero */

loc_00198570: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198576u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198576: ;
    POP32(esp, ecx);
    MEM32(esi + 0x3C) = ebx;

loc_0019857A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019857C: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198587; /* je: equal / zero */

loc_00198585: ;
    MEM32(eax) = ebx;

loc_00198587: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019857C; /* jl: less (signed <) */

loc_0019858F: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001985A0; /* je: equal / zero */

loc_00198596: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019859Cu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019859C: ;
    POP32(esp, ecx);
    MEM32(esi + 0x40) = ebx;

loc_001985A0: ;
    eax = MEM32(0x523CA0);
    PUSH32(esp, 0x800);
    PUSH32(esp, MEM32(edi + eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001985B2u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_001985B2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);

loc_001985B5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001985B9
 * Original: 0x001985B9 - 0x001989C8 (1039 bytes, 335 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001985B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001985B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001985C9u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_001985C9: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001985D7u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_001985D7: ;
    ebx = MEM32(esi + 0x48);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + ebx * 4 + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(ebp + -12) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001985EAu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_001985EA: ;
    MEM32(ebp + -8) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001985F6u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_001985F6: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    MEM32(esi + 0x3C) = eax;
    edi = MEM32(0x523CB0);
    if (CMP_LE(_fas, _fbs)) goto loc_001988FB; /* jle: less or equal (signed <=) */

loc_00198610: ;
    eax = ZX8(MEM8(edi));
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(eax * 4 + 0x379AE0));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198625u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198625: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(ebx + ecx) = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, MEM32(eax * 4 + 0x379AE0));
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(eax + ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198640u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00198640: ;
    eax = ebp + -28;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019864Bu); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019864B: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00198871; /* ja: above (unsigned >) */

loc_0019865A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1989C8); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00198661u) goto loc_00198661;
    if (_jt == 0x00198671u) goto loc_00198671;
    if (_jt == 0x001986BBu) goto loc_001986BB;
    if (_jt == 0x001986F7u) goto loc_001986F7;
    if (_jt == 0x00198733u) goto loc_00198733;
    if (_jt == 0x00198780u) goto loc_00198780;
    if (_jt == 0x001987DEu) goto loc_001987DE;
    if (_jt == 0x0019880Eu) goto loc_0019880E;
    if (_jt == 0x00198858u) goto loc_00198858;
    if (_jt == 0x00198865u) goto loc_00198865;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00198661: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(eax + ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019866Cu); RECOMP_ABI_CALL(0x0019C751u, sub_0019C751); /* call 0x0019C751 */

loc_0019866C: ;
    goto loc_00198870;

loc_00198671: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198685u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198685: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -24) = eax;
    eax = edi + 6;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019869Fu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_0019869F: ;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001986AAu); RECOMP_ABI_CALL(0x0019D0ECu, sub_0019D0EC); /* call 0x0019D0EC */

loc_001986AA: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001986B6u); RECOMP_ABI_CALL(0x0019D115u, sub_0019D115); /* call 0x0019D115 */

loc_001986B6: ;
    goto loc_00198853;

loc_001986BB: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 2;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001986CFu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_001986CF: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001986E6u); RECOMP_ABI_CALL(0x0019D044u, sub_0019D044); /* call 0x0019D044 */

loc_001986E6: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001986F2u); RECOMP_ABI_CALL(0x0019D06Fu, sub_0019D06F); /* call 0x0019D06F */

loc_001986F2: ;
    goto loc_00198809;

loc_001986F7: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 2;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019870Bu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_0019870B: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198722u); RECOMP_ABI_CALL(0x0019CF16u, sub_0019CF16); /* call 0x0019CF16 */

loc_00198722: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019872Eu); RECOMP_ABI_CALL(0x0019CFCFu, sub_0019CFCF); /* call 0x0019CFCF */

loc_0019872E: ;
    goto loc_00198809;

loc_00198733: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198747u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198747: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = eax;
    eax = edi + 6;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198758u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198758: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019876Fu); RECOMP_ABI_CALL(0x0019CF16u, sub_0019CF16); /* call 0x0019CF16 */

loc_0019876F: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019877Bu); RECOMP_ABI_CALL(0x0019CF41u, sub_0019CF41); /* call 0x0019CF41 */

loc_0019877B: ;
    goto loc_00198853;

loc_00198780: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 2;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198794u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198794: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -24) = eax;
    eax = edi + 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001987AEu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_001987AE: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    eax = edi + 6;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001987BFu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_001987BF: ;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001987CAu); RECOMP_ABI_CALL(0x0019CE24u, sub_0019CE24); /* call 0x0019CE24 */

loc_001987CA: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001987D6u); RECOMP_ABI_CALL(0x0019CE57u, sub_0019CE57); /* call 0x0019CE57 */

loc_001987D6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00198871;

loc_001987DE: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 2;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001987F2u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_001987F2: ;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001987FDu); RECOMP_ABI_CALL(0x0019CCDDu, sub_0019CCDD); /* call 0x0019CCDD */

loc_001987FD: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198809u); RECOMP_ABI_CALL(0x0019CD06u, sub_0019CD06); /* call 0x0019CD06 */

loc_00198809: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00198871;

loc_0019880E: ;
    eax = MEM32(esi + 0x3C);
    eax = MEM32(ebx + eax);
    MEM32(ebp + -4) = eax;
    eax = edi + 2;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198822u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198822: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -24) = eax;
    eax = edi + 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198839u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198839: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198847u); RECOMP_ABI_CALL(0x0019CBE2u, sub_0019CBE2); /* call 0x0019CBE2 */

loc_00198847: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198853u); RECOMP_ABI_CALL(0x0019CC0Du, sub_0019CC0D); /* call 0x0019CC0D */

loc_00198853: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00198871;

loc_00198858: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(eax + ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198863u); RECOMP_ABI_CALL(0x0019CA33u, sub_0019CA33); /* call 0x0019CA33 */

loc_00198863: ;
    goto loc_00198870;

loc_00198865: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(eax + ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198870u); RECOMP_ABI_CALL(0x0019C97Bu, sub_0019C97B); /* call 0x0019C97B */

loc_00198870: ;
    POP32(esp, ecx);

loc_00198871: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001988DF; /* jbe: below or equal (unsigned <=) */

loc_00198878: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 9 (8-bit) */
    edx = MEM32(esi + 0x3C);
    eax = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_001988C2; /* jne: not equal / not zero */

loc_00198883: ;
    MEM32(ebp + -4) = eax;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x523CD1));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019889Au); RECOMP_ABI_CALL(0x00198236u, sub_00198236); /* call 0x00198236 */

loc_0019889A: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ebx + edx);
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(ebp + -4);
    edx = MEM32(esi + 0x3C);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x523CD1));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001988BDu); RECOMP_ABI_CALL(0x00198236u, sub_00198236); /* call 0x00198236 */

loc_001988BD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001988D6;

loc_001988C2: ;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x523CD1));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001988D3u); RECOMP_ABI_CALL(0x00198236u, sub_00198236); /* call 0x00198236 */

loc_001988D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001988D6: ;
    edx = MEM32(ebx + edx);
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + eax * 4) = edx;

loc_001988DF: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(MEM32(eax * 4 + 0x379B08)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax * 4 + 0x379B08);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198610; /* jl: less (signed <) */

loc_001988F8: ;
    ebx = MEM32(ebp + -12);

loc_001988FB: ;
    edi = MEM32(0x523CAC);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esi + ebx * 4 + 0x24;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198911u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198911: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0019895F; /* jle: less or equal (signed <=) */

loc_00198917: ;
    eax = ZX8(MEM8(edi + 9));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 8));
    PUSH32(esp, eax);
    eax = edi + 4;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019892Cu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_0019892C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(ecx + eax * 4));
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019893Cu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_0019893C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, MEM32(ecx + eax * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198949u); RECOMP_ABI_CALL(0x0019C844u, sub_0019C844); /* call 0x0019C844 */

loc_00198949: ;
    PUSH32(esp, 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198957u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198957: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198917; /* jl: less (signed <) */

loc_0019895F: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x523CA0);
    MEM32(0x523CA4) = 0xBB8;
    PUSH32(esp, 0x800);
    PUSH32(esp, MEM32(ecx + eax * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019897Fu); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019897F: ;
    eax = MEM32(0x523CB0);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00198999;

loc_0019898C: ;
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(MEM32(ecx * 4 + 0x379B08)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx * 4 + 0x379B08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00198999: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019898C; /* jne: not equal / not zero */

loc_0019899F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 6);
    eax = esi + 0x68;
    POP32(esp, ecx);

loc_001989AD: ;
    MEMF(eax + -24) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001989AD; /* jne: not equal / not zero */

loc_001989BC: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001989F0
 * Original: 0x001989F0 - 0x00198A5A (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001989F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001989F0: ;
    eax = MEM32(0x37906C);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00198A02u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198A02: ;
    ecx = MEM32(0x37906C);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x523CA0) = eax;
    MEM32(0x523CDC) = edx;
    MEM32(0x523DCC) = ecx;
    PUSH32(esp, 0x00198A28u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00198A28: ;
    eax = MEM32(0x37906C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00198A36u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198A36: ;
    ecx = MEM32(0x37906C);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x523CA8) = eax;
    PUSH32(esp, 0x00198A4Bu); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00198A4B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x523CB4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00198A5A
 * Original: 0x00198A5A - 0x00198AB5 (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198A5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198A5A: ;
    _fa = (uint32_t)(MEM32(0x523CB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523CB4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198AB4; /* je: equal / zero */

loc_00198A63: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x523CA0));
    PUSH32(esp, 0x00198A6Fu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198A6F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00198AA0; /* jle: less or equal (signed <=) */

loc_00198A7A: ;
    PUSH32(esp, esi);

loc_00198A7B: ;
    eax = MEM32(0x523CA8);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198A96; /* je: equal / zero */

loc_00198A87: ;
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00198A8Fu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198A8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00198A87; /* jne: not equal / not zero */

loc_00198A96: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198A7B; /* jl: less (signed <) */

loc_00198A9F: ;
    POP32(esp, esi);

loc_00198AA0: ;
    PUSH32(esp, MEM32(0x523CA8));
    PUSH32(esp, 0x00198AABu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198AAB: ;
    MEM32(0x523CB4) = MEM32(0x523CB4) & 0;
    _fa = (uint32_t)(MEM32(0x523CB4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, edi);

loc_00198AB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00198AB5
 * Original: 0x00198AB5 - 0x00198C18 (355 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198AB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198AB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x523CA8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), 0 (32-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00198AE5; /* jne: not equal / not zero */

loc_00198AD1: ;
    PUSH32(esp, 0x800);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198ADBu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198ADB: ;
    POP32(esp, ecx);
    ecx = MEM32(0x523CA0);
    MEM32(esi + ecx) = eax;

loc_00198AE5: ;
    PUSH32(esp, 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198AEFu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198AEF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00198C14; /* je: equal / zero */

loc_00198AFA: ;
    eax = MEM32(0x523CA8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(ebx) = ecx;
    MEM32(eax) = ebx;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    esi = eax;
    edi = ebx + 4;
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
    esi = ZX8(MEM8(0x523CD1));
    edi = eax + 0x38;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebx + esi * 4 + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198B2Cu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198B2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00198B3B; /* je: equal / zero */

loc_00198B32: ;
    eax = ZX8(MEM8(0x523CD1));
    goto loc_00198B6C;

loc_00198B3B: ;
    eax = ebx + esi * 4 + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198B47u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198B47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00198B69; /* jne: not equal / not zero */

loc_00198B4D: ;
    eax = ebx + esi * 4 + 0xC;
    MEM32(ebp + -4) = eax;

loc_00198B54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -4));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198B63u); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198B63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00198B54; /* je: equal / zero */

loc_00198B69: ;
    eax = esi + 1;

loc_00198B6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x48) = eax;
    MEM32(ebx + 0x44) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00198BBB; /* jle: less or equal (signed <=) */

loc_00198B76: ;
    eax = ebx + 0x24;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = esi;

loc_00198B7F: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198B8Du); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00198BA0; /* jle: less or equal (signed <=) */

loc_00198B93: ;
    ecx = ZX8(MEM8(edi));
    _fb = (uint32_t)(MEM32(ecx * 4 + 0x379B08)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx * 4 + 0x379B08);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00198B93; /* jne: not equal / not zero */

loc_00198BA0: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198BAAu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198BAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    eax = eax + eax * 2;
    POP32(esp, ecx);
    edi = edi + eax * 4;
    if ((_fa != 0)) goto loc_00198B7F; /* jne: not equal / not zero */

loc_00198BBB: ;
    eax = ebx + esi * 4 + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(0x523CB0) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198BCDu); RECOMP_ABI_CALL(0x0019C76Cu, sub_0019C76C); /* call 0x0019C76C */

loc_00198BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00198BE0; /* jle: less or equal (signed <=) */

loc_00198BD3: ;
    ecx = ZX8(MEM8(edi));
    _fb = (uint32_t)(MEM32(ecx * 4 + 0x379B08)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx * 4 + 0x379B08);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00198BD3; /* jne: not equal / not zero */

loc_00198BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(0x523CAC) = edi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198BF5u); RECOMP_ABI_CALL(0x001985B9u, sub_001985B9); /* call 0x001985B9 */

loc_00198BF5: ;
    eax = MEM32(0x523CDC);
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x523CD8) = 0x198254;
    MEM32(ecx + eax) = 1;
    eax = ebx;
    POP32(esp, edi);

loc_00198C14: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00198C18
 * Original: 0x00198C18 - 0x00198CBA (162 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198C18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198C18: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00198C2Cu); RECOMP_ABI_CALL(0x001984DBu, sub_001984DB); /* call 0x001984DB */

loc_00198C2C: ;
    eax = MEM32(0x523CA8);
    POP32(esp, ecx);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ecx);
    ecx = esi + eax;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198C49; /* jne: not equal / not zero */

loc_00198C41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198C85; /* jne: not equal / not zero */

loc_00198C45: ;
    MEM32(ecx) = MEM32(ecx) & edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00198C7E;

loc_00198C49: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198C7E; /* jne: not equal / not zero */

loc_00198C4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198C68; /* jne: not equal / not zero */

loc_00198C51: ;
    ecx = MEM32(0x523CA8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198C63; /* je: equal / zero */

loc_00198C5F: ;
    edi = MEM32(edi);
    MEM32(ecx) = edi;

loc_00198C63: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00198C76;

loc_00198C68: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198C72; /* jne: not equal / not zero */

loc_00198C6C: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    goto loc_00198C63;

loc_00198C72: ;
    eax = edx;
    edx = MEM32(edx);

loc_00198C76: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198C49; /* jne: not equal / not zero */

loc_00198C7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198C85; /* je: equal / zero */

loc_00198C7E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00198C84u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198C84: ;
    POP32(esp, ecx);

loc_00198C85: ;
    eax = MEM32(0x523CA8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198CB4; /* jne: not equal / not zero */

loc_00198C91: ;
    eax = MEM32(0x523CDC);
    MEM32(esi + eax) = edi;
    eax = MEM32(0x523CA0);
    eax = MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198CB4; /* je: equal / zero */

loc_00198CA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00198CABu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198CAB: ;
    eax = MEM32(0x523CA0);
    POP32(esp, ecx);
    MEM32(esi + eax) = edi;

loc_00198CB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00198CBA
 * Original: 0x00198CBA - 0x00198D05 (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198CBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198CBA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198CCFu); RECOMP_ABI_CALL(0x00196717u, sub_00196717); /* call 0x00196717 */

loc_00198CCF: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00198D03; /* jge: greater or equal (signed >=) */

loc_00198CDE: ;
    PUSH32(esp, esi);
    esi = ecx + ecx * 8;
    PUSH32(esp, edi);
    edi = MEM32(0x523BF4);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + edi + 0x6D;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00198CF2: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198CF8; /* je: equal / zero */

loc_00198CF7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00198CF8: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00198CF2; /* jne: not equal / not zero */

loc_00198D01: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00198D03: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00198D05
 * Original: 0x00198D05 - 0x00198D39 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198D05(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198D05: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00198D13u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00198D13: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00198D1Au); RECOMP_ABI_CALL(0x00198CBAu, sub_00198CBA); /* call 0x00198CBA */

loc_00198D1A: ;
    PUSH32(esp, 0x400);
    MEM16(esi) = LO16(eax);
    edi = ZX16(LO16(eax));
    PUSH32(esp, 0x00198D2Au); RECOMP_ABI_CALL(0x00198CBAu, sub_00198CBA); /* call 0x00198CBA */

loc_00198D2A: ;
    MEM16(esi + 6) = LO16(eax);
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00198D39
 * Original: 0x00198D39 - 0x00198D69 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198D39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00198D39: ;
    eax = 0x2C95C8;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198D43u); RECOMP_ABI_CALL(0x002C025Cu, sub_002C025C); /* call 0x002C025C */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00198D43: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198D4Fu); RECOMP_ABI_CALL(0x0019D232u, sub_0019D232); /* call 0x0019D232 */

loc_00198D4F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198D5Au); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_00198D5A: ;
    ecx = MEM32(ebp + -12);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00198D69
 * Original: 0x00198D69 - 0x00198D6E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198D69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00198D69: ;
    g_seh_ebp = ebp; sub_0019D24B(); return; /* tail jmp 0x0019D24B */

}

/**
 * sub_00198D6E
 * Original: 0x00198D6E - 0x00198EF7 (393 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198D6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198D6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00198D9D; /* je: equal / zero */

loc_00198D89: ;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198D97u); RECOMP_ABI_CALL(0x0019BE3Bu, sub_0019BE3B); /* call 0x0019BE3B */

loc_00198D97: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = edi;

loc_00198D9D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00198EEF; /* jle: less or equal (signed <=) */

loc_00198DA6: ;
    eax = MEM32(esi + 0x24);
    edi = esi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198E22; /* jl: less (signed <) */

loc_00198DB0: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198DC2u); RECOMP_ABI_CALL(0x0019BCE5u, sub_0019BCE5); /* call 0x0019BCE5 */

loc_00198DC2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00198DFC; /* je: equal / zero */

loc_00198DCC: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198DD8; /* je: equal / zero */

loc_00198DD2: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00198DF6; /* jbe: below or equal (unsigned <=) */

loc_00198DD8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198DE5; /* jne: not equal / not zero */

loc_00198DDE: ;
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198DE5u); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_00198DE5: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198DF6u); RECOMP_ABI_CALL(0x0019E44Bu, sub_0019E44B); /* call 0x0019E44B */

loc_00198DF6: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00198E22;

loc_00198DFC: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198E1C; /* je: equal / zero */

loc_00198E02: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax = ecx + eax * 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198E1Au); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00198E1A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00198E1C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;

loc_00198E22: ;
    eax = MEM32(esi + 0x24);
    edi = MEM32(edi);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) edi = ecx; /* cmovl */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00198EC1; /* je: equal / zero */

loc_00198E42: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198E70; /* je: equal / zero */

loc_00198E48: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00198E96; /* ja: above (unsigned >) */

loc_00198E4E: ;
    ecx = MEM32(ebx + 4);
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0xE));
    eax = ecx + eax * 4;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = eax + edx * 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198E6Bu); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_00198E6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00198EC1;

loc_00198E70: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198E96; /* jne: not equal / not zero */

loc_00198E76: ;
    ecx = MEM32(esi + 0x1C);
    eax = ZX16(MEM16(ecx + 0xC));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00198E96; /* jle: less or equal (signed <=) */

loc_00198E86: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198E93u); RECOMP_ABI_CALL(0x0019E75Bu, sub_0019E75B); /* call 0x0019E75B */

loc_00198E93: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00198E96: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx * 4;
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00198EB5; /* jne: not equal / not zero */

loc_00198EA8: ;
    eax = ZX16(MEM16(ebx + 0xC));
    ecx = MEM32(ebx + 4);
    eax = ecx + eax * 4;
    MEM32(ebp + -8) = eax;

loc_00198EB5: ;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198EC1u); RECOMP_ABI_CALL(0x0019E4B3u, sub_0019E4B3); /* call 0x0019E4B3 */

loc_00198EC1: ;
    eax = ZX8(MEM8(esi + 0x1A));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + edi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + eax * 2 + 0xC;
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(edi);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebx + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx + 0xE) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198EE3; /* jne: not equal / not zero */

loc_00198ED9: ;
    MEM16(ebx + 0xC) = MEM16(ebx + 0xC) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebx + 0xE) = MEM16(ebx + 0xE) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_00198EE3: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198DA6; /* jl: less (signed <) */

loc_00198EEF: ;
    eax = MEM32(esi + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00198EF7
 * Original: 0x00198EF7 - 0x00198F4C (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198EF7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198EF7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198F4A; /* je: equal / zero */

loc_00198F03: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198F4A; /* jne: not equal / not zero */

loc_00198F0F: ;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198F24; /* je: equal / zero */

loc_00198F16: ;
    ecx = edi;
    PUSH32(esp, 0x00198F1Du); RECOMP_ABI_CALL(0x00198D69u, sub_00198D69); /* call 0x00198D69 */

loc_00198F1D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00198F23u); RECOMP_ABI_CALL(0x0019E445u, sub_0019E445); /* call 0x0019E445 */

loc_00198F23: ;
    POP32(esp, ecx);

loc_00198F24: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00198F3D; /* je: equal / zero */

loc_00198F2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00198F35u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198F35: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_00198F3D: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00198F45u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00198F45: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_00198F4A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00198F4C
 * Original: 0x00198F4C - 0x0019907D (305 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198F4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00198F4C: ;
    eax = 0x2C95E6;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198F56u); RECOMP_ABI_CALL(0x002C025Cu, sub_002C025C); /* call 0x002C025C */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00198F56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198FC8; /* jne: not equal / not zero */

loc_00198F64: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198FBB; /* jne: not equal / not zero */

loc_00198F6E: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198F75u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198F75: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(0x523CB8) = eax;
    MEM32(esp) = 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198F89u); RECOMP_ABI_CALL(0x0019E43Fu, sub_0019E43F); /* call 0x0019E43F */

loc_00198F89: ;
    POP32(esp, ecx);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00198F9D; /* je: equal / zero */

loc_00198F94: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198F9Bu); RECOMP_ABI_CALL(0x00198D39u, sub_00198D39); /* call 0x00198D39 */

loc_00198F9B: ;
    goto loc_00198F9F;

loc_00198F9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00198F9F: ;
    ecx = MEM32(0x523CB8);
    MEM32(ecx) = eax;
    MEM16(ecx + 0xC) = LO16(ebx);
    MEM16(ecx + 0xE) = LO16(ebx);
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 0x18) = 1;
    goto loc_0019901A;

loc_00198FBB: ;
    eax = MEM32(0x523CB8);
    MEM32(esi + 0x1C) = eax;
    MEM32(eax + 0x18) = ecx;
    goto loc_0019902A;

loc_00198FC8: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198FCFu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00198FCF: ;
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x1C) = eax;
    MEM32(0x523CB8) = eax;
    MEM32(esp) = 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198FE6u); RECOMP_ABI_CALL(0x0019E43Fu, sub_0019E43F); /* call 0x0019E43F */

loc_00198FE6: ;
    POP32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 8) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00198FFF; /* je: equal / zero */

loc_00198FF8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198FFDu); RECOMP_ABI_CALL(0x00198D39u, sub_00198D39); /* call 0x00198D39 */

loc_00198FFD: ;
    goto loc_00199001;

loc_00198FFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00199001: ;
    ecx = MEM32(0x523CB8);
    MEM32(ecx) = eax;
    MEM16(ecx + 0xC) = LO16(ebx);
    MEM16(ecx + 0xE) = LO16(ebx);
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 0x18) = edi;
    edi = MEM32(ebp + 0xC);

loc_0019901A: ;
    eax = MEM32(esi + 0x1C);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 8) = ebx;

loc_0019902A: ;
    MEM32(esi) = 0x198D6E;
    MEM32(esi + 4) = 0x198EF7;
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019903Fu); RECOMP_ABI_CALL(0x0019C1C0u, sub_0019C1C0); /* call 0x0019C1C0 */

loc_0019903F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199045u); RECOMP_ABI_CALL(0x0019E7B7u, sub_0019E7B7); /* call 0x0019E7B7 */

loc_00199045: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 8) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0x34) = LO8(eax);
    PUSH32(esp, MEM32(edi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199062u); RECOMP_ABI_CALL(0x0019C1E7u, sub_0019C1E7); /* call 0x0019C1E7 */

loc_00199062: ;
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, edi);
    MEM8(esi + 0x35) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019907D
 * Original: 0x0019907D - 0x001991A2 (293 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019907D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019907D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(ebp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0019919B; /* jle: less or equal (signed <=) */

loc_0019909A: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    goto loc_001990A3;

loc_001990A0: ;
    edi = MEM32(ebp + 0x14);

loc_001990A3: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001990D5; /* je: equal / zero */

loc_001990A9: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001990FB; /* jg: greater (signed >) */

loc_001990AF: ;
    eax = MEM32(esi + 0x1C);
    ecx = ebx;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0xE));
    eax = MEM32(eax + 4);
    eax = eax + ecx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001990C9u); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_001990C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx;
    MEM32(ebp + -4) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0019912B;

loc_001990D5: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001990FB; /* jne: not equal / not zero */

loc_001990DB: ;
    ecx = MEM32(esi + 0x1C);
    eax = ZX16(MEM16(ecx + 0xC));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001990FB; /* jle: less or equal (signed <=) */

loc_001990EB: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001990F8u); RECOMP_ABI_CALL(0x0019E75Bu, sub_0019E75B); /* call 0x0019E75B */

loc_001990F8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001990FB: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 2 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00199114; /* jne: not equal / not zero */

loc_00199104: ;
    eax = MEM32(esi + 0x1C);
    ecx = ZX16(MEM16(eax + 0xC));
    eax = MEM32(eax + 4);
    eax = eax + ecx * 4;
    MEM32(ebp + -8) = eax;

loc_00199114: ;
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199123u); RECOMP_ABI_CALL(0x0019E4B3u, sub_0019E4B3); /* call 0x0019E4B3 */

loc_00199123: ;
    edi = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + edi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019912B: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 2 (32-bit) */
    eax = MEM32(ebp + 0x14);
    eax = eax + edi * 4;
    MEM32(ebp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00199162; /* jg: greater (signed >) */

loc_0019913A: ;
    eax = ZX8(MEM8(esi + 0x1A));
    ecx = MEM32(esi + 0x1C);
    eax = ecx + eax * 2 + 0xC;
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(edi);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(esi + 0x1C);
    SET_LO16(ecx, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0xE) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199162; /* jne: not equal / not zero */

loc_00199155: ;
    MEM16(eax + 0xC) = MEM16(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x1C);
    MEM16(eax + 0xE) = MEM16(eax + 0xE) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_00199162: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00199190; /* jge: greater or equal (signed >=) */

loc_00199166: ;
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199176u); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_00199176: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199190u); RECOMP_ABI_CALL(0x0019E44Bu, sub_0019E44B); /* call 0x0019E44B */

loc_00199190: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001990A0; /* jg: greater (signed >) */

loc_0019919A: ;
    POP32(esp, esi);

loc_0019919B: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001991A2
 * Original: 0x001991A2 - 0x001991F7 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001991A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001991A2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001991F5; /* je: equal / zero */

loc_001991AE: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001991F5; /* jne: not equal / not zero */

loc_001991BA: ;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001991CF; /* je: equal / zero */

loc_001991C1: ;
    ecx = edi;
    PUSH32(esp, 0x001991C8u); RECOMP_ABI_CALL(0x00198D69u, sub_00198D69); /* call 0x00198D69 */

loc_001991C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001991CEu); RECOMP_ABI_CALL(0x0019E445u, sub_0019E445); /* call 0x0019E445 */

loc_001991CE: ;
    POP32(esp, ecx);

loc_001991CF: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001991E8; /* je: equal / zero */

loc_001991DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001991E0u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001991E0: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001991E8: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x001991F0u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001991F0: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001991F5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001991F7
 * Original: 0x001991F7 - 0x00199379 (386 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001991F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001991F7: ;
    eax = 0x2C9604;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199201u); RECOMP_ABI_CALL(0x002C025Cu, sub_002C025C); /* call 0x002C025C */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00199201: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001992B9; /* jne: not equal / not zero */

loc_00199213: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001992A9; /* jne: not equal / not zero */

loc_00199221: ;
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199228u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00199228: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(0x523CBC) = eax;
    MEM32(esp) = 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019923Cu); RECOMP_ABI_CALL(0x0019E43Fu, sub_0019E43F); /* call 0x0019E43F */

loc_0019923C: ;
    POP32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 8) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00199250; /* je: equal / zero */

loc_00199249: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019924Eu); RECOMP_ABI_CALL(0x00198D39u, sub_00198D39); /* call 0x00198D39 */

loc_0019924E: ;
    goto loc_00199252;

loc_00199250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00199252: ;
    ecx = MEM32(0x523CBC);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199265u); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_00199265: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, MEM32(esi + 0x28));
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x523CBC);
    ecx = MEM32(eax);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019928Du); RECOMP_ABI_CALL(0x0019E44Bu, sub_0019E44B); /* call 0x0019E44B */

loc_0019928D: ;
    eax = MEM32(0x523CBC);
    MEM16(eax + 0xC) = LO16(ebx);
    MEM16(eax + 0xE) = LO16(ebx);
    MEM32(eax + 0x10) = 1;
    MEM32(eax + 4) = ebx;
    goto loc_0019934A;

loc_001992A9: ;
    eax = MEM32(0x523CBC);
    MEM32(esi + 0x1C) = eax;
    MEM32(eax + 0x10) = ecx;
    goto loc_0019934D;

loc_001992B9: ;
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001992C0u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_001992C0: ;
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x1C) = eax;
    MEM32(0x523CBC) = eax;
    MEM32(esp) = 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001992D7u); RECOMP_ABI_CALL(0x0019E43Fu, sub_0019E43F); /* call 0x0019E43F */

loc_001992D7: ;
    POP32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 8) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001992F1; /* je: equal / zero */

loc_001992EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001992EFu); RECOMP_ABI_CALL(0x00198D39u, sub_00198D39); /* call 0x00198D39 */

loc_001992EF: ;
    goto loc_001992F3;

loc_001992F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001992F3: ;
    ecx = MEM32(0x523CBC);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199306u); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_00199306: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, MEM32(esi + 0x28));
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x523CBC);
    ecx = MEM32(eax);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019932Eu); RECOMP_ABI_CALL(0x0019E44Bu, sub_0019E44B); /* call 0x0019E44B */

loc_0019932E: ;
    eax = MEM32(0x523CBC);
    MEM16(eax + 0xC) = LO16(ebx);
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 0x10) = 1;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 0x1C);

loc_0019934A: ;
    MEM32(eax + 8) = ebx;

loc_0019934D: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi) = 0x19907D;
    MEM32(esi + 4) = 0x1991A2;
    MEM32(edi + 0x28) = 0x1A4D4D;
    MEM32(esi + 0x20) = ebx;
    eax = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00199379
 * Original: 0x00199379 - 0x001994A0 (295 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199379(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199379: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199395; /* jl: less (signed <) */

loc_0019938D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0019949D;

loc_00199395: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001993BB; /* jle: less or equal (signed <=) */

loc_001993A6: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = ecx;
    edi = eax;
    goto loc_001993BF;

loc_001993BB: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001993BF: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), 2 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00199435; /* jne: not equal / not zero */

loc_001993C9: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199413; /* jne: not equal / not zero */

loc_001993CF: ;
    ecx = eax;
    eax = ZX16(MEM16(ecx + 0xC));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001993EF; /* jle: less or equal (signed <=) */

loc_001993DC: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = ecx + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001993ECu); RECOMP_ABI_CALL(0x0019E75Bu, sub_0019E75B); /* call 0x0019E75B */

loc_001993EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001993EF: ;
    eax = MEM32(esi + 0x1C);
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = ebx;
    ecx = ZX16(MEM16(eax + 0xC));
    edx = MEM32(eax + 4);
    ecx = edx + ecx * 4;
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199411u); RECOMP_ABI_CALL(0x0019E4B3u, sub_0019E4B3); /* call 0x0019E4B3 */

loc_00199411: ;
    goto loc_00199451;

loc_00199413: ;
    eax = MEM32(esi + 0x1C);
    ebx = MEM32(ebp + 0x14);
    ecx = edi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0xE));
    eax = MEM32(eax + 4);
    eax = eax + ecx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199430u); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_00199430: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019944B;

loc_00199435: ;
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = ebp + -8;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019944Bu); RECOMP_ABI_CALL(0x0019E4B3u, sub_0019E4B3); /* call 0x0019E4B3 */

loc_0019944B: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edi;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00199451: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199467; /* je: equal / zero */

loc_00199458: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebx + edi * 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199465u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_00199465: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00199467: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), 2 (8-bit) */
    POP32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_00199499; /* ja: above (unsigned >) */

loc_00199471: ;
    eax = ZX8(MEM8(esi + 0x1A));
    ecx = MEM32(esi + 0x1C);
    eax = ecx + eax * 2 + 0xC;
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax) = MEM16(eax) + LO16(edi);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(esi + 0x1C);
    SET_LO16(ecx, MEM16(eax + 0xC));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + 0xE) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199499; /* jne: not equal / not zero */

loc_0019948C: ;
    MEM16(eax + 0xC) = MEM16(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x1C);
    MEM16(eax + 0xE) = MEM16(eax + 0xE) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_00199499: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0019949D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001994A0
 * Original: 0x001994A0 - 0x001994AB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001994A0(void)
{

loc_001994A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001994AB
 * Original: 0x001994AB - 0x00199500 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001994AB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001994AB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001994FE; /* je: equal / zero */

loc_001994B7: ;
    MEM8(eax + 0x19) = MEM8(eax + 0x19) - 1;
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001994FE; /* jne: not equal / not zero */

loc_001994C3: ;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001994D8; /* je: equal / zero */

loc_001994CA: ;
    ecx = edi;
    PUSH32(esp, 0x001994D1u); RECOMP_ABI_CALL(0x00198D69u, sub_00198D69); /* call 0x00198D69 */

loc_001994D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001994D7u); RECOMP_ABI_CALL(0x0019E445u, sub_0019E445); /* call 0x0019E445 */

loc_001994D7: ;
    POP32(esp, ecx);

loc_001994D8: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001994F1; /* je: equal / zero */

loc_001994E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001994E9u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001994E9: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001994F1: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x001994F9u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_001994F9: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001994FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00199500
 * Original: 0x00199500 - 0x00199656 (342 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199500: ;
    eax = 0x2C9622;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019950Au); RECOMP_ABI_CALL(0x002C025Cu, sub_002C025C); /* call 0x002C025C */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0019950A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019959C; /* jne: not equal / not zero */

loc_0019951A: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019958E; /* jne: not equal / not zero */

loc_00199524: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019952Bu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019952B: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(0x523CC0) = eax;
    MEM32(esp) = 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019953Fu); RECOMP_ABI_CALL(0x0019E43Fu, sub_0019E43F); /* call 0x0019E43F */

loc_0019953F: ;
    POP32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 8) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00199553; /* je: equal / zero */

loc_0019954C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199551u); RECOMP_ABI_CALL(0x00198D39u, sub_00198D39); /* call 0x00198D39 */

loc_00199551: ;
    goto loc_00199555;

loc_00199553: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00199555: ;
    ecx = MEM32(0x523CC0);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199568u); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_00199568: ;
    PUSH32(esp, MEM32(edi + 0xC));
    eax = MEM32(0x523CC0);
    ecx = MEM32(eax);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019957Eu); RECOMP_ABI_CALL(0x0019E44Bu, sub_0019E44B); /* call 0x0019E44B */

loc_0019957E: ;
    eax = MEM32(esi + 0x1C);
    MEM16(eax + 0xC) = LO16(ebx);
    eax = MEM32(esi + 0x1C);
    MEM16(eax + 0xE) = LO16(ebx);
    goto loc_00199608;

loc_0019958E: ;
    eax = MEM32(0x523CC0);
    MEM32(esi + 0x1C) = eax;
    MEM8(eax + 0x19) = 2;
    goto loc_0019961B;

loc_0019959C: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001995A3u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_001995A3: ;
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x1C) = eax;
    MEM32(0x523CC0) = eax;
    MEM32(esp) = 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001995BAu); RECOMP_ABI_CALL(0x0019E43Fu, sub_0019E43F); /* call 0x0019E43F */

loc_001995BA: ;
    POP32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 8) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001995D4; /* je: equal / zero */

loc_001995CD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001995D2u); RECOMP_ABI_CALL(0x00198D39u, sub_00198D39); /* call 0x00198D39 */

loc_001995D2: ;
    goto loc_001995D6;

loc_001995D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001995D6: ;
    ecx = MEM32(0x523CC0);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001995E9u); RECOMP_ABI_CALL(0x0019E497u, sub_0019E497); /* call 0x0019E497 */

loc_001995E9: ;
    PUSH32(esp, MEM32(edi + 0xC));
    eax = MEM32(0x523CC0);
    ecx = MEM32(eax);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001995FFu); RECOMP_ABI_CALL(0x0019E44Bu, sub_0019E44B); /* call 0x0019E44B */

loc_001995FF: ;
    eax = MEM32(0x523CC0);
    MEM16(eax + 0xC) = LO16(ebx);

loc_00199608: ;
    eax = MEM32(esi + 0x1C);
    MEM8(eax + 0x19) = 1;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 8) = ebx;

loc_0019961B: ;
    MEM32(esi) = 0x199379;
    MEM32(esi + 4) = 0x1994AB;
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 0x28) = 0x1994A0;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 0x10) = ebx;
    SET_LO8(ecx, MEM8(edi + 8));
    eax = MEM32(esi + 0x1C);
    POP32(esp, edi);
    MEM8(eax + 0x18) = LO8(ecx);
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00199656
 * Original: 0x00199656 - 0x001997C4 (366 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199656(void)
{

loc_00199656: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329DA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D9C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D98); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D94); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D90); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D8C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D88); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D84); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D80); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D7C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D78); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D74); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x2C); /* addss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D6C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D68); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001997C4
 * Original: 0x001997C4 - 0x001999B7 (499 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001997C4(void)
{

loc_001997C4: ;
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x329D64); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FF504); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x300474); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30105C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30075C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x307660); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x31B474); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x317728); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x1C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x329DA8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3003A4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x24); /* addss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x307664); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x28); /* addss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x300760); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x2C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x2C); /* addss */
    MEMF(eax + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x317A9C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x329DA4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x34); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3003AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312D88); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00199999
 * Original: 0x00199999 - 0x001999B7 (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199999(void)
{

loc_00199999: ;
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001999B7
 * Original: 0x001999B7 - 0x00199A6A (179 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001999B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001999B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = ebx;
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00199A66; /* jbe: below or equal (unsigned <=) */

loc_001999D9: ;
    PUSH32(esp, esi);

loc_001999DA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 8); /* comiss */
    esi = edi * 4 + 0x523DE8;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00199A46; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 8)) */

loc_001999EF: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199A09; /* jne: not equal / not zero */

loc_001999F3: ;
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001999FAu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_001999FA: ;
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199A02u); RECOMP_ABI_CALL(0x0019D0ECu, sub_0019D0EC); /* call 0x0019D0EC */

loc_00199A02: ;
    eax = MEM32(esi);
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(eax + 8) = ebx;

loc_00199A09: ;
    eax = ZX16(MEM16(0x523A46));
    ecx = eax;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    MEM32(ebp + -12) = ecx;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ebp + -4), g_mxcsr, 0); /* cvtss2si */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    MEM32(ebp + -8) = 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199A43u); RECOMP_ABI_CALL(0x0019D115u, sub_0019D115); /* call 0x0019D115 */

loc_00199A43: ;
    POP32(esp, ecx);
    goto loc_00199A54;

loc_00199A46: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199A55; /* je: equal / zero */

loc_00199A4C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199A52u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00199A52: ;
    MEM32(esi) = ebx;

loc_00199A54: ;
    POP32(esp, ecx);

loc_00199A55: ;
    eax = ZX8(MEM8(0x523CD1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001999DA; /* jl: less (signed <) */

loc_00199A65: ;
    POP32(esp, esi);

loc_00199A66: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00199A6A
 * Original: 0x00199A6A - 0x00199C10 (422 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199A6A(void)
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

loc_00199A6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, MEM32(0x523D78));
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199A89u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00199A87u); } /* indirect call */
    }

loc_00199A89: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00199AD7; /* jg: greater (signed >) */

loc_00199A90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00199AAF; /* jle: less or equal (signed <=) */

loc_00199A9A: ;
    ecx = MEM32(esi + 0x38);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    edx = MEM32(esi + 0x34);
    MEMF(edx + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199A9A; /* jl: less (signed <) */

loc_00199AAF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00199AD0; /* jbe: below or equal (unsigned <=) */

loc_00199AB9: ;
    eax = esi + 4;

loc_00199ABC: ;
    edx = MEM32(eax + 0x18);
    MEM32(eax) = edx;
    edx = ZX8(MEM8(0x523CD1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199ABC; /* jl: less (signed <) */

loc_00199AD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00199C0C;

loc_00199AD7: ;
    eax = MEM32(0x523D7C);
    eax = MEM32(eax + 0x3C);
    MEM32(esi + 0x3C) = eax;
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00199B83; /* jle: less or equal (signed <=) */

loc_00199AEF: ;
    eax = MEM32(0x523CDC);
    edx = ebx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199B76; /* je: equal / zero */

loc_00199AFF: ;
    eax = MEM32(esi + 0x34);
    edi = edx + eax;
    eax = MEM32(esi + 0x38);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    ecx = eax + edx;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00199B46; /* jnp: not parity */

loc_00199B18: ;
    eax = MEM32(0x523CA0);
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, MEM32(edx + eax));
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199B38u); RECOMP_ABI_CALL(0x001997C4u, sub_001997C4); /* call 0x001997C4 */

loc_00199B38: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    fp_push(MEMF(edx + eax)); /* fld float */
    MEMF(edx + ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00199B73;

loc_00199B46: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00199B76; /* jnp: not parity */

loc_00199B57: ;
    eax = MEM32(0x523CA0);
    fp_push(MEMF(ecx)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edx + eax));
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(0x523EAC); PUSH32(esp, 0x00199B73u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00199B6Du); } /* indirect call */
    }

loc_00199B73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00199B76: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199AEF; /* jl: less (signed <) */

loc_00199B83: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00199C08; /* jbe: below or equal (unsigned <=) */

loc_00199B90: ;
    ebx = 0x523D7C;
    edi = esi + 0x1C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00199B9A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + -24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00199BCB; /* jnp: not parity */

loc_00199BA8: ;
    PUSH32(esp, MEM32(ebx + edi));
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -24)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199BC4u); RECOMP_ABI_CALL(0x001997C4u, sub_001997C4); /* call 0x001997C4 */

loc_00199BC4: ;
    eax = MEM32(edi);
    MEM32(edi + -24) = eax;
    goto loc_00199BF3;

loc_00199BCB: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00199BF6; /* jnp: not parity */

loc_00199BDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + edi));
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(0x523EAC); PUSH32(esp, 0x00199BF3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00199BEDu); } /* indirect call */
    }

loc_00199BF3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00199BF6: ;
    eax = ZX8(MEM8(0x523CD1));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199B9A; /* jl: less (signed <) */

loc_00199C08: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    POP32(esp, edi);

loc_00199C0C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00199C10
 * Original: 0x00199C10 - 0x00199C15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199C10: ;
    g_seh_ebp = ebp; sub_0019798F(); return; /* tail jmp 0x0019798F */

}

/**
 * sub_00199C15
 * Original: 0x00199C15 - 0x00199C1A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199C15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199C15: ;
    g_seh_ebp = ebp; sub_00197A91(); return; /* tail jmp 0x00197A91 */

}

/**
 * sub_00199C1A
 * Original: 0x00199C1A - 0x00199CB8 (158 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199C1A(void)
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

loc_00199C1A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00199C22u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00199C22: ;
    PUSH32(esp, 0x00199C27u); RECOMP_ABI_CALL(0x00198A5Au, sub_00198A5A); /* call 0x00198A5A */

loc_00199C27: ;
    eax = MEM32(0x523DB0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199C3F; /* je: equal / zero */

loc_00199C32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199C38u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00199C38: ;
    POP32(esp, ecx);
    MEM32(0x523DB0) = ebx;

loc_00199C3F: ;
    eax = MEM32(0x523EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199C55; /* je: equal / zero */

loc_00199C48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199C4Eu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00199C4E: ;
    POP32(esp, ecx);
    MEM32(0x523EA8) = ebx;

loc_00199C55: ;
    esi = 0x523D70;

loc_00199C5A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199C69; /* je: equal / zero */

loc_00199C60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199C66u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00199C66: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_00199C69: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x523D78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x523D78 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199C5A; /* jl: less (signed <) */

loc_00199C74: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00199CA0; /* jbe: below or equal (unsigned <=) */

loc_00199C7E: ;
    esi = edi * 4 + 0x523D80;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199C94; /* je: equal / zero */

loc_00199C8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199C91u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00199C91: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_00199C94: ;
    eax = ZX8(MEM8(0x523CD1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199C7E; /* jl: less (signed <) */

loc_00199CA0: ;
    fp_push(MEMF(0x2FF504)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00199CAFu); RECOMP_ABI_CALL(0x001999B7u, sub_001999B7); /* call 0x001999B7 */

loc_00199CAF: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001950F1(); return; /* tail jmp 0x001950F1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00199CB8
 * Original: 0x00199CB8 - 0x00199CE6 (46 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199CB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199CB8: ;
    _fa = (uint32_t)(MEM8(0x523CD2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD2), 0 (8-bit) */
    MEM32(0x523EAC) = 0x19E800;
    MEM16(0x523CD4) = 0x400;
    if (CMP_EQ(_fa, _fb)) goto loc_00199CE5; /* je: equal / zero */

loc_00199CD4: ;
    SET_LO16(eax, ZX8(MEM8(0x523CD1)));
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(0x523CD4) = LO16(eax);

loc_00199CE5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00199CE6
 * Original: 0x00199CE6 - 0x00199E56 (368 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199CE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199CE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    _fb = (uint32_t)(MEM32(0x523EA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523EA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00199D29; /* jne: not equal / not zero */

loc_00199D25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00199D55;

loc_00199D29: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D32; /* jne: not equal / not zero */

loc_00199D2E: ;
    eax = ecx;
    goto loc_00199D55;

loc_00199D32: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D3B; /* jne: not equal / not zero */

loc_00199D37: ;
    PUSH32(esp, 2);
    goto loc_00199D54;

loc_00199D3B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D44; /* jne: not equal / not zero */

loc_00199D40: ;
    PUSH32(esp, 3);
    goto loc_00199D54;

loc_00199D44: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D4D; /* jne: not equal / not zero */

loc_00199D49: ;
    PUSH32(esp, 4);
    goto loc_00199D54;

loc_00199D4D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D55; /* jne: not equal / not zero */

loc_00199D52: ;
    PUSH32(esp, 5);

loc_00199D54: ;
    POP32(esp, eax);

loc_00199D55: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D63; /* jne: not equal / not zero */

loc_00199D5A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00199D6B; /* jle: less or equal (signed <=) */

loc_00199D5F: ;
    edi = ecx;
    goto loc_00199D6B;

loc_00199D63: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199D6B; /* jne: not equal / not zero */

loc_00199D68: ;
    PUSH32(esp, 2);
    POP32(esp, edi);

loc_00199D6B: ;
    edi = edi + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edi + 0x523CE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x523CE0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199E01; /* je: equal / zero */

loc_00199D7F: ;
    PUSH32(esp, MEM32(edi + 0x523D28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199D8Au); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00199D8A: ;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x28);
    SET_LO8(ecx, MEM8(ebp + 0x3C));
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = ZX8(MEM8(0x523B8F));
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 0x48);
    MEM16(eax + 0x18) = 0xF0;
    eax = MEM32(esi + 0x48);
    MEM8(eax + 0x1A) = LO8(ecx);
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    { uint32_t _icall_target = MEM32(edi + 0x523CE0); PUSH32(esp, 0x00199DECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00199DE6u); } /* indirect call */
    }

loc_00199DEC: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi + 0x48));
    MEM32(esi + 0x44) = eax;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199DFEu); RECOMP_ABI_CALL(0x0019C7C0u, sub_0019C7C0); /* call 0x0019C7C0 */

loc_00199DFE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00199E01: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199E4E; /* je: equal / zero */

loc_00199E06: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199E0F; /* je: equal / zero */

loc_00199E0B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00199E0F: ;
    PUSH32(esp, 0x1834);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199E19u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_00199E19: ;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(ecx, MEM8(ebp + 0x3C));
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(esi + 0x4C) = eax;
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 0x4C);
    MEM16(eax + 0x18) = 0xC8;
    eax = MEM32(esi + 0x4C);
    MEM8(eax + 0x1A) = LO8(ecx);
    PUSH32(esp, MEM32(esi + 0x4C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199E3Fu); RECOMP_ABI_CALL(0x0019EDF4u, sub_0019EDF4); /* call 0x0019EDF4 */

loc_00199E3F: ;
    PUSH32(esp, MEM32(esi + 0x4C));
    eax = esi + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00199E4Bu); RECOMP_ABI_CALL(0x0019C7C0u, sub_0019C7C0); /* call 0x0019C7C0 */

loc_00199E4B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00199E4E: ;
    POP32(esp, edi);
    MEM8(esi) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00199E56
 * Original: 0x00199E56 - 0x00199EB6 (96 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199E56(void)
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

loc_00199E56: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    _fb = (uint32_t)(MEM32(0x523EA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(eax + 1) = LO8(edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00199E92; /* jle: less or equal (signed <=) */

loc_00199E7B: ;
    PUSH32(esp, edi);

loc_00199E7C: ;
    esi = MEM32(eax + 0x38);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    edi = MEM32(eax + 0x34);
    MEMF(edi + ecx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199E7C; /* jl: less (signed <) */

loc_00199E91: ;
    POP32(esp, edi);

loc_00199E92: ;
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00199EB1; /* jbe: below or equal (unsigned <=) */

loc_00199E9A: ;
    ecx = eax + 4;

loc_00199E9D: ;
    esi = MEM32(ecx + 0x18);
    MEM32(ecx) = esi;
    esi = ZX8(MEM8(0x523CD1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199E9D; /* jl: less (signed <) */

loc_00199EB1: ;
    MEM8(eax) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00199EB6
 * Original: 0x00199EB6 - 0x00199F51 (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199EB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199EB6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    _fb = (uint32_t)(MEM32(0x523EA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523EA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00199EF5; /* jle: less or equal (signed <=) */

loc_00199ECF: ;
    eax = MEM32(0x523DCC);
    edx = MEM32(esi + 0x34);
    xmm0 = XMM_SCALAR(MEMF(edx + ecx * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x3C); /* mulss */
    eax = eax + ecx * 4;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199ECF; /* jl: less (signed <) */

loc_00199EF5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00199F29; /* jbe: below or equal (unsigned <=) */

loc_00199EFF: ;
    edx = esi + 4;

loc_00199F02: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x3C); /* mulss */
    eax = ecx * 4 + 0x523DB4;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = ZX8(MEM8(0x523CD1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199F02; /* jl: less (signed <) */

loc_00199F29: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199F37; /* je: equal / zero */

loc_00199F33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00199F36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00199F34u); } /* indirect call */
    }

loc_00199F36: ;
    POP32(esp, ecx);

loc_00199F37: ;
    eax = MEM32(esi + 0x40);
    edi = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199F43u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_00199F43: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x40) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00199F29; /* jne: not equal / not zero */

loc_00199F4B: ;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00199F51
 * Original: 0x00199F51 - 0x00199F7F (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199F51(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199F51: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x523EA8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x17);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + ecx * 4 + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x523EA8);
    MEM8(eax + ecx + 1) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00199F7F
 * Original: 0x00199F7F - 0x00199FAB (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199F7F(void)
{

loc_00199F7F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x523EA8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    ecx = MEM32(eax + ecx + 0x38);
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + edx * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x523EA8);
    MEM8(eax + ecx + 1) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00199FAB
 * Original: 0x00199FAB - 0x0019A194 (489 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199FAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199FAB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x199C10);
    PUSH32(esp, 0x00199FB8u); RECOMP_ABI_CALL(0x0019EFFAu, sub_0019EFFA); /* call 0x0019EFFA */

loc_00199FB8: ;
    MEM32(esp) = 0x199C15;
    PUSH32(esp, 0x00199FC4u); RECOMP_ABI_CALL(0x0019F004u, sub_0019F004); /* call 0x0019F004 */

loc_00199FC4: ;
    MEM32(esp) = 0x195918;
    PUSH32(esp, 0x00199FD0u); RECOMP_ABI_CALL(0x0019EFEEu, sub_0019EFEE); /* call 0x0019EFEE */

loc_00199FD0: ;
    esi = MEM32(esp + 0x14);
    edi = 0x523CC8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x00199FE2u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_00199FE2: ;
    PUSH32(esp, 0x00199FE7u); RECOMP_ABI_CALL(0x001989F0u, sub_001989F0); /* call 0x001989F0 */

loc_00199FE7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A005; /* jle: less or equal (signed <=) */

loc_00199FF3: ;
    ecx = MEM32(0x523CDC);
    MEM32(ecx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00199FF3; /* jl: less (signed <) */

loc_0019A005: ;
    esi = 0x523D78;

loc_0019A00A: ;
    PUSH32(esp, 0x20BC);
    PUSH32(esp, 0x0019A014u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019A014: ;
    MEM32(esi + -8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x3F (8-bit) */
    POP32(esp, ecx);
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019A029; /* je: equal / zero */

loc_0019A021: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x3F (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A021; /* jne: not equal / not zero */

loc_0019A029: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x523D80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x523D80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A00A; /* jl: less (signed <) */

loc_0019A034: ;
    _fa = (uint32_t)(MEM8(0x523CD2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A053; /* je: equal / zero */

loc_0019A03D: ;
    eax = ZX8(MEM8(0x523CD1));
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019A04Du); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019A04D: ;
    POP32(esp, ecx);
    MEM32(0x523DB0) = eax;

loc_0019A053: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019A08E; /* jbe: below or equal (unsigned <=) */

loc_0019A05E: ;
    esi = 0x523D98;

loc_0019A063: ;
    PUSH32(esp, 0x840);
    PUSH32(esp, 0x0019A06Du); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019A06D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x3F (8-bit) */
    MEM32(esi + -24) = eax;
    POP32(esp, ecx);
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019A07F; /* je: equal / zero */

loc_0019A077: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x3F (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A077; /* jne: not equal / not zero */

loc_0019A07F: ;
    eax = ZX8(MEM8(0x523CD1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A063; /* jl: less (signed <) */

loc_0019A08E: ;
    SET_LO8(eax, MEM8(0x523CD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019A129; /* jbe: below or equal (unsigned <=) */

loc_0019A09B: ;
    ecx = MEM32(0x37906C);
    eax = ZX8(LO8(eax));
    ecx = ecx * 8 + 0x5C;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019A0B4u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019A0B4: ;
    ecx = MEM32(0x37906C);
    edx = ZX8(MEM8(0x523CD0));
    ecx = ecx * 8 + 0x5C;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x523EA8) = eax;
    PUSH32(esp, 0x0019A0D7u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019A0D7: ;
    ecx = ZX8(MEM8(0x523CD0));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    _fb = (uint32_t)(MEM32(0x523EA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A129; /* jle: less or equal (signed <=) */

loc_0019A0F2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019A0F4: ;
    esi = MEM32(0x523EA8);
    MEM32(ecx + esi + 0x34) = eax;
    esi = MEM32(0x37906C);
    eax = eax + esi * 4;
    esi = MEM32(0x523EA8);
    MEM32(ecx + esi + 0x38) = eax;
    esi = MEM32(0x37906C);
    eax = eax + esi * 4;
    esi = ZX8(MEM8(0x523CD0));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A0F4; /* jl: less (signed <) */

loc_0019A129: ;
    PUSH32(esp, 0x0019A12Eu); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_0019A12E: ;
    PUSH32(esp, 0x0019A133u); RECOMP_ABI_CALL(0x0019EFB1u, sub_0019EFB1); /* call 0x0019EFB1 */

loc_0019A133: ;
    PUSH32(esp, 0x0019A138u); RECOMP_ABI_CALL(0x0019EF74u, sub_0019EF74); /* call 0x0019EF74 */

loc_0019A138: ;
    PUSH32(esp, 0x0019A13Du); RECOMP_ABI_CALL(0x0019EF0Fu, sub_0019EF0F); /* call 0x0019EF0F */

loc_0019A13D: ;
    PUSH32(esp, 0x0019A142u); RECOMP_ABI_CALL(0x00199CB8u, sub_00199CB8); /* call 0x00199CB8 */

loc_0019A142: ;
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019A190; /* jbe: below or equal (unsigned <=) */

loc_0019A14B: ;
    edi = 0x523DD0;
    esi = 0x523E00;

loc_0019A155: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019A15Eu); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_0019A15E: ;
    MEM16(esi + 0x18) = MEM16(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esi + 0x1A) = 0;
    PUSH32(esp, 0x0019A16Eu); RECOMP_ABI_CALL(0x0019C7C0u, sub_0019C7C0); /* call 0x0019C7C0 */

loc_0019A16E: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, MEM32(edi + -56));
    PUSH32(esp, 0x0019A17Bu); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019A17B: ;
    eax = ZX8(MEM8(0x523CD1));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A155; /* jl: less (signed <) */

loc_0019A190: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A194
 * Original: 0x0019A194 - 0x0019A1A4 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A194: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0019A19Du); RECOMP_ABI_CALL(0x00199EB6u, sub_00199EB6); /* call 0x00199EB6 */

loc_0019A19D: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x523CCC)); return; /* indirect tail jmp */

}

/**
 * sub_0019A1A4
 * Original: 0x0019A1A4 - 0x0019A452 (686 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A1A4(void)
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

loc_0019A1A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A1F1; /* jle: less or equal (signed <=) */

loc_0019A1B4: ;
    eax = MEM32(0x523CDC);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A1E8; /* je: equal / zero */

loc_0019A1BF: ;
    eax = MEM32(0x523DCC);
    ecx = eax + edx * 4;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019A1E8; /* jnp: not parity */

loc_0019A1D8: ;
    eax = MEM32(0x523CA0);
    PUSH32(esp, MEM32(eax + edx * 4));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A1E6u); RECOMP_ABI_CALL(0x00199656u, sub_00199656); /* call 0x00199656 */

loc_0019A1E6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019A1E8: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A1B4; /* jl: less (signed <) */

loc_0019A1F1: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0019A23F; /* jbe: below or equal (unsigned <=) */

loc_0019A1FE: ;
    edi = MEM32(ebp + 0xC);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x523DB4;

loc_0019A209: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A212u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019A212: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019A230; /* jnp: not parity */

loc_0019A225: ;
    PUSH32(esp, MEM32(esi + -28));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A22Eu); RECOMP_ABI_CALL(0x00199656u, sub_00199656); /* call 0x00199656 */

loc_0019A22E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019A230: ;
    eax = ZX8(MEM8(0x523CD1));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A209; /* jl: less (signed <) */

loc_0019A23F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x523CD0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD0), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019A3A7; /* jbe: below or equal (unsigned <=) */

loc_0019A250: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019A254: ;
    eax = MEM32(0x523EA8);
    ecx = MEM32(ebp + -16);
    esi = ecx + eax;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A390; /* jne: not equal / not zero */

loc_0019A268: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A282; /* je: equal / zero */

loc_0019A26E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A274u); RECOMP_ABI_CALL(0x00199A6Au, sub_00199A6A); /* call 0x00199A6A */

loc_0019A274: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 1) = 0;
    goto loc_0019A287;

loc_0019A282: ;
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019A287: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A390; /* je: equal / zero */

loc_0019A28F: ;
    ecx = MEM32(esi + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, MEM32(0x523D78));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x0019A2A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019A2A2u); } /* indirect call */
    }

loc_0019A2A4: ;
    ecx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0019A2BE; /* jge: greater or equal (signed >=) */

loc_0019A2B0: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A2B8u); RECOMP_ABI_CALL(0x0019A194u, sub_0019A194); /* call 0x0019A194 */

loc_0019A2B8: ;
    POP32(esp, ecx);
    goto loc_0019A390;

loc_0019A2BE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0019A390; /* je: equal / zero */

loc_0019A2C4: ;
    eax = MEM32(0x523D7C);
    fp_push(MEMF(eax + ecx * 4 + -4)); /* fld float */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019A330; /* jbe: below or equal (unsigned <=) */

loc_0019A2DD: ;
    MEM32(ebp + -12) = 0x523D7C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - esi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + 0x1C;

loc_0019A2EA: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019A31E; /* jnp: not parity */

loc_0019A2FB: ;
    eax = MEM32(ebp + -12);
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(eax + edi);
    eax = eax + ebx * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x523EAC); PUSH32(esp, 0x0019A318u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019A312u); } /* indirect call */
    }

loc_0019A318: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019A31E: ;
    eax = ZX8(MEM8(0x523CD1));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A2EA; /* jl: less (signed <) */

loc_0019A330: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A390; /* jle: less or equal (signed <=) */

loc_0019A33A: ;
    eax = MEM32(0x523CDC);
    _fa = (uint32_t)(MEM32(eax + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A387; /* je: equal / zero */

loc_0019A345: ;
    eax = MEM32(esi + 0x38);
    ecx = eax + edi * 4;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019A387; /* jnp: not parity */

loc_0019A35C: ;
    eax = MEM32(0x523CA0);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(eax + edi * 4);
    eax = eax + ebx * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x523D7C));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -20));
    { uint32_t _icall_target = MEM32(0x523EAC); PUSH32(esp, 0x0019A37Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019A377u); } /* indirect call */
    }

loc_0019A37D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x523CA4) = MEM32(0x523CA4) & 0;
    _fa = (uint32_t)(MEM32(0x523CA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019A387: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A33A; /* jl: less (signed <) */

loc_0019A390: ;
    eax = ZX8(MEM8(0x523CD0));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x5C;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A254; /* jl: less (signed <) */

loc_0019A3A7: ;
    eax = MEM32(0x523CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A3B6; /* je: equal / zero */

loc_0019A3B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0019A3B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019A3B3u); } /* indirect call */
    }

loc_0019A3B5: ;
    POP32(esp, ecx);

loc_0019A3B6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x523CD1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD1), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019A436; /* jbe: below or equal (unsigned <=) */

loc_0019A3C3: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -16) = 0x523DE8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) - esi;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x523D98;
    ebx = 0x523DD0;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0019A3DE: ;
    eax = MEM32(ebp + -16);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0019A413; /* je: equal / zero */

loc_0019A3EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(0x523D78));
    eax = MEM32(eax);
    PUSH32(esp, MEM32(edi + esi));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019A3FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019A3F9u); } /* indirect call */
    }

loc_0019A3FB: ;
    eax = MEM32(ebx + esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(0x523D78));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019A40Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019A40Cu); } /* indirect call */
    }

loc_0019A40E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019A424;

loc_0019A413: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    eax = MEM32(ebx + esi);
    PUSH32(esp, MEM32(edi + esi));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019A421u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019A41Fu); } /* indirect call */
    }

loc_0019A421: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019A424: ;
    eax = ZX8(MEM8(0x523CD1));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A3DE; /* jl: less (signed <) */

loc_0019A436: ;
    _fa = (uint32_t)(MEM32(0x523C54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523C54), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0019A450; /* je: equal / zero */

loc_0019A442: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x523EB4); PUSH32(esp, 0x0019A44Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019A448u); } /* indirect call */
    }

loc_0019A44E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019A450: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019A452
 * Original: 0x0019A452 - 0x0019A599 (327 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A452(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A452: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523CD2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD2), 0 (8-bit) */
    MEM8(ebp + -8) = 1;
    edi = ebp + -7;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A540; /* je: equal / zero */

loc_0019A474: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -32) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0019A595; /* jle: less or equal (signed <=) */

loc_0019A486: ;
    esi = 0x200;
    PUSH32(esp, ebx);

loc_0019A48C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    edx = ZX8(MEM8(0x523CD1));
    ebx = esi;
    if (CMP_LE(_fas, _fbs)) ebx = MEM32(ebp + 0xC); /* cmovle */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A4B5; /* jle: less or equal (signed <=) */

loc_0019A4A2: ;
    eax = MEM32(0x523DB0);
    edi = ebx + ebx;

loc_0019A4AA: ;
    MEM32(ebp + ecx * 4 + -56) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A4AA; /* jl: less (signed <) */

loc_0019A4B5: ;
    eax = ebp + -56;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A4BFu); RECOMP_ABI_CALL(0x0019A1A4u, sub_0019A1A4); /* call 0x0019A1A4 */

loc_0019A4BF: ;
    SET_LO8(eax, MEM8(0x523CD1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019A4D4; /* jne: not equal / not zero */

loc_0019A4CA: ;
    MEM8(ebp + -8) = 1;
    MEM8(ebp + -7) = 0;
    goto loc_0019A506;

loc_0019A4D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A4EA; /* jne: not equal / not zero */

loc_0019A4D8: ;
    MEM8(ebp + -8) = 3;
    MEM8(ebp + -7) = 0;
    MEM8(ebp + -6) = 2;
    MEM8(ebp + -5) = 1;
    goto loc_0019A506;

loc_0019A4EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A506; /* jne: not equal / not zero */

loc_0019A4EE: ;
    MEM8(ebp + -8) = 4;
    MEM8(ebp + -7) = 1;
    MEM8(ebp + -6) = 0;
    MEM8(ebp + -5) = 5;
    MEM8(ebp + -4) = 3;
    MEM8(ebp + -3) = 2;

loc_0019A506: ;
    PUSH32(esp, MEM32(ebp + -32));
    ecx = ebp + -8;
    PUSH32(esp, MEM32(ebp + -56));
    eax = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A51Au); RECOMP_ABI_CALL(0x0019F00Eu, sub_0019F00E); /* call 0x0019F00E */

loc_0019A51A: ;
    eax = ZX8(MEM8(0x523CD1));
    ecx = MEM32(ebp + -32);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - esi;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    eax = ecx + eax * 2;
    MEM32(ebp + -32) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0019A48C; /* jg: greater (signed >) */

loc_0019A53D: ;
    POP32(esp, ebx);
    goto loc_0019A595;

loc_0019A540: ;
    ecx = ZX8(MEM8(0x523CD1));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A553; /* jle: less or equal (signed <=) */

loc_0019A54B: ;
    esi = MEM32(ebp + 8);
    edi = ebp + -32;
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

loc_0019A553: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A595; /* jle: less or equal (signed <=) */

loc_0019A55A: ;
    esi = 0x200;

loc_0019A55F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = esi;
    if (CMP_LE(_fas, _fbs)) eax = edi; /* cmovle */
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A570u); RECOMP_ABI_CALL(0x0019A1A4u, sub_0019A1A4); /* call 0x0019A1A4 */

loc_0019A570: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = ZX8(MEM8(0x523CD1));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A58F; /* jle: less or equal (signed <=) */

loc_0019A57F: ;
    edx = ZX16(MEM16(0x523CD4));

loc_0019A586: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + eax * 4 + -32) = MEM32(ebp + eax * 4 + -32) + edx;
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A586; /* jl: less (signed <) */

loc_0019A58F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019A55F; /* jg: greater (signed >) */

loc_0019A595: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019A599
 * Original: 0x0019A599 - 0x0019A5B2 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A599(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A599: ;
    eax = (uint32_t)(int32_t)SMEM8(0x523B8B);
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x523BAC) = ecx;
    MEM8(0x523B8B) = MEM8(0x523B8B) + 1;
    _fa = (uint32_t)(MEM8(0x523B8B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0019A5B2
 * Original: 0x0019A5B2 - 0x0019A5F5 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A5B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A5B2: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x523B8B);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A5F4; /* jle: less or equal (signed <=) */

loc_0019A5BF: ;
    edx = MEM32(eax * 4 + 0x523BAC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A5D2; /* je: equal / zero */

loc_0019A5CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A5BF; /* jl: less (signed <) */

loc_0019A5D1: ;
    esp += 4; return; /* ret */

loc_0019A5D2: ;
    MEM8(0x523B8B) = MEM8(0x523B8B) - 1;
    _fa = (uint32_t)(MEM8(0x523B8B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_0019A5E9;

loc_0019A5DA: ;
    ecx = MEM32(eax * 4 + 0x523BB0);
    MEM32(eax * 4 + 0x523BAC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019A5E9: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x523B8B);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A5DA; /* jl: less (signed <) */

loc_0019A5F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A5F5
 * Original: 0x0019A5F5 - 0x0019A61F (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A5F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A5F5: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A61E; /* je: equal / zero */

loc_0019A5FE: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x523B8B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B8B), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019A61D; /* jle: less or equal (signed <=) */

loc_0019A60A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x523BAC); PUSH32(esp, 0x0019A611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019A60Au); } /* indirect call */
    }

loc_0019A611: ;
    eax = (uint32_t)(int32_t)SMEM8(0x523B8B);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A60A; /* jl: less (signed <) */

loc_0019A61D: ;
    POP32(esp, esi);

loc_0019A61E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A61F
 * Original: 0x0019A61F - 0x0019A624 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A61F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A61F: ;
    g_seh_ebp = ebp; sub_001955AD(); return; /* tail jmp 0x001955AD */

}

/**
 * sub_0019A624
 * Original: 0x0019A624 - 0x0019AAEE (1226 bytes, 325 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A624(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A624: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -100;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    PUSH32(esp, 0x2B);
    POP32(esp, ecx);
    MEM32(ebp + 0x5C) = eax;
    MEM32(esi + 0xC8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2E);
    edi = ebp + -460;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -644;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 6);
    ecx = esi + 0xB0;
    eax = esi + 0x98;
    POP32(esp, edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019A676: ;
    MEM32(eax) = ebx;
    MEM16(ecx) = LO16(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019A676; /* jne: not equal / not zero */

loc_0019A683: ;
    MEM32(ebp + -48) = MEM32(ebp + -48) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -264) = MEM32(ebp + -264) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -264)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -260) = MEM32(ebp + -260) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -260)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x7F);
    POP32(esp, eax);
    MEM32(ebp + -76) = ebx;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ebx;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -52) = 0x3C;
    MEM32(ebp + -44) = edi;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -32) = 0x40;
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    MEM8(esi + 0x17) = LO8(ebx);
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x14) = 0x379B30;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x48) = ebx;
    MEM32(ebp + 0x4C) = ebx;
    MEM32(ebp + 0x50) = ebx;
    MEM32(ebp + 0x54) = ebx;
    MEM32(ebp + 0x58) = ebx;
    MEM32(ebp + 0x20) = eax;
    MEM32(ebp + 0x24) = ebx;
    MEM32(ebp + 0x28) = ebx;
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x30) = ebx;
    MEM32(ebp + 0x34) = ebx;
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x40) = ebx;
    MEM32(ebp + 0x44) = edi;
    MEM32(ebp + -288) = 2;
    MEM32(ebp + -280) = edi;
    MEM32(ebp + -272) = 0x5DC0;
    MEM32(ebp + -268) = ebx;
    MEM32(ebp + -256) = ebx;
    MEM32(ebp + -176) = ebx;
    MEM32(ebp + -252) = ebx;
    MEM32(ebp + -172) = ebx;
    MEM32(ebp + -208) = ebx;
    MEM32(ebp + -168) = ebx;
    MEM32(ebp + -204) = ebx;
    MEM32(ebp + -164) = ebx;
    MEM32(ebp + -152) = ebx;
    MEM32(ebp + -136) = ebx;
    MEM32(ebp + -148) = ebx;
    MEM32(ebp + -132) = ebx;
    MEM32(ebp + -160) = 8;
    MEM32(ebp + -240) = ebx;
    MEM32(ebp + 0x7C) = ebx;
    goto loc_0019A8AD;

loc_0019A790: ;
    ecx = MEM32(ebp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019A7CD; /* jge: greater or equal (signed >=) */

loc_0019A798: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    eax = MEM32(ebp + 0x64);
    MEM32(ebp + ecx * 4 + -80) = eax;
    eax = MEM32(ebp + 0x68);
    MEM32(ebp + ecx * 4 + -460) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0019A8AD; /* jne: not equal / not zero */

loc_0019A7B2: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x17);
    MEM32(esi + ecx * 4 + 0x34) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x17);
    ecx = MEM32(ebp + 0x6C);
    MEM32(esi + eax * 4 + 0x44) = ecx;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_0019A8AD;

loc_0019A7CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A8A5; /* jl: less (signed <) */

loc_0019A7D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019A8A5; /* jge: greater or equal (signed >=) */

loc_0019A7E5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x98 (32-bit) */
    eax = MEM32(ebp + 0x64);
    edx = ecx * 4 + -512;
    MEM32(ebp + edx + -288) = eax;
    eax = MEM32(ebp + 0x68);
    MEM32(ebp + edx + -644) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0019A81E; /* jne: not equal / not zero */

loc_0019A808: ;
    MEM32(esi + 0x98) = eax;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    MEM16(esi + 0xB0) = LO16(eax);
    goto loc_0019A8AD;

loc_0019A81E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A839; /* jne: not equal / not zero */

loc_0019A826: ;
    MEM32(esi + 0x9C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    MEM16(esi + 0xB2) = LO16(eax);
    goto loc_0019A8AD;

loc_0019A839: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A854; /* jne: not equal / not zero */

loc_0019A841: ;
    MEM32(esi + 0xA0) = eax;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    MEM16(esi + 0xB4) = LO16(eax);
    goto loc_0019A8AD;

loc_0019A854: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A86F; /* jne: not equal / not zero */

loc_0019A85C: ;
    MEM32(esi + 0xA4) = eax;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    MEM16(esi + 0xB6) = LO16(eax);
    goto loc_0019A8AD;

loc_0019A86F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A88A; /* jne: not equal / not zero */

loc_0019A877: ;
    MEM32(esi + 0xA8) = eax;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    MEM16(esi + 0xB8) = LO16(eax);
    goto loc_0019A8AD;

loc_0019A88A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A8AD; /* jne: not equal / not zero */

loc_0019A892: ;
    MEM32(esi + 0xAC) = eax;
    SET_LO16(eax, MEM16(ebp + 0x6C));
    MEM16(esi + 0xBA) = LO16(eax);
    goto loc_0019A8AD;

loc_0019A8A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A8C1; /* je: equal / zero */

loc_0019A8AD: ;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019A8B6u); RECOMP_ABI_CALL(0x0019F2E7u, sub_0019F2E7); /* call 0x0019F2E7 */

loc_0019A8B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019A790; /* jne: not equal / not zero */

loc_0019A8BF: ;
    goto loc_0019A8C4;

loc_0019A8C1: ;
    MEM32(ebp + 0x7C) = edi;

loc_0019A8C4: ;
    SET_LO8(eax, MEM8(ebp + -76));
    MEM8(esi + 8) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -72));
    MEM8(esi + 9) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -68));
    MEM8(esi + 0xA) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -64));
    MEM8(esi + 0xB) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -56));
    MEM8(esi + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -52));
    MEM8(esi + 0xD) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -48));
    MEM8(esi + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -44));
    MEM8(esi + 0xF) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -40));
    MEM8(esi + 0x10) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -32));
    MEM8(esi + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -28));
    MEM8(esi + 0x12) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -24));
    MEM8(esi + 0x14) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -20));
    MEM8(esi + 0x15) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -16));
    ecx = MEM32(ebp + -8);
    MEM16(esi + 4) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -12));
    MEM16(esi + 6) = LO16(eax);
    eax = MEM32(ebp + -388);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    MEM32(esi + 0x20) = eax;
    SET_LO8(eax, MEM8(ebp + -4));
    MEM8(esi + 0x16) = LO8(eax);
    eax = MEM32(ebp + -368);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + -360);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x80) = eax;
    eax = MEM32(ebp + 0x48);
    ecx = MEM32(ebp + 0x24);
    MEM32(esi + 0x84) = eax;
    eax = MEM32(ebp + 0x4C);
    MEM32(esi + 0x88) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(esi + 0x8C) = eax;
    eax = MEM32(ebp + 0x54);
    MEM32(esi + 0x90) = eax;
    eax = MEM32(ebp + 0x58);
    MEM32(esi + 0x94) = eax;
    SET_LO8(eax, MEM8(ebp + 0x20));
    MEM8(esi + 0x1A) = LO8(eax);
    eax = MEM32(ebp + -344);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x30);
    MEM32(esi + 0x2C) = eax;
    SET_LO8(eax, MEM8(ebp + 0x28));
    MEM8(esi + 0x1B) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x2C));
    MEM8(esi + 0x1C) = LO8(eax);
    eax = MEM32(ebp + -332);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = eax;
    SET_LO8(eax, MEM8(ebp + 0x34));
    MEM8(esi + 0x1D) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x38));
    MEM16(esi + 0x54) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 0x3C));
    MEM8(esi + 0x1E) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x40));
    MEM16(esi) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 0x44));
    MEM8(esi + 0x1F) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -288));
    MEM8(esi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -160));
    MEM8(esi + 0x13) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -272));
    MEM16(esi + 0x56) = LO16(eax);
    eax = MEM32(ebp + -268);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(ebp + -264);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(ebp + -260);
    MEM32(esi + 0x60) = eax;
    SET_LO16(eax, MEM16(ebp + -240));
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(ebp + -604);
    MEM32(esi + 0x64) = eax;
    eax = MEM32(ebp + -256);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(ebp + -176);
    MEM32(ebp + -104) = eax;
    eax = MEM32(ebp + -252);
    MEM32(esi + 0x6C) = eax;
    eax = MEM32(ebp + -172);
    SET_LO8(ecx, MEM8(ebp + -280));
    MEM32(ebp + -100) = eax;
    eax = MEM32(ebp + -208);
    MEM32(esi + 0x70) = eax;
    eax = MEM32(ebp + -168);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -204);
    MEM32(esi + 0x74) = eax;
    eax = MEM32(ebp + -164);
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + -152);
    MEM32(esi + 0x78) = eax;
    eax = MEM32(ebp + -136);
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + -148);
    MEM32(esi + 0x7C) = eax;
    eax = MEM32(ebp + -132);
    MEM32(ebp + -84) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM8(esi + 3) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0019AADB; /* jle: less or equal (signed <=) */

loc_0019AA9E: ;
    edx = esi + 0xBC;

loc_0019AAA4: ;
    _fa = (uint32_t)(MEM32(0x523C78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523C78), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019AAB6; /* jne: not equal / not zero */

loc_0019AAAC: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019AAB6; /* jne: not equal / not zero */

loc_0019AAB2: ;
    MEM32(ebp + eax * 4 + -104) = ebx;

loc_0019AAB6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 2;
    SET_LO16(ecx, MEM16(ecx * 2 + 0x523BF4));
    _fb = (uint32_t)(MEM16(ebp + eax * 4 + -104)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(ebp + eax * 4 + -104));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 3);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019AAA4; /* jl: less (signed <) */

loc_0019AADB: ;
    eax = MEM32(ebp + 0x5C);
    ecx = MEM32(ebp + 0x78);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x7C);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019AAEE
 * Original: 0x0019AAEE - 0x0019AB10 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AAEE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019AAEE: ;
    ecx = ZX16(MEM16(0x523A44));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019AB0C; /* jle: less or equal (signed <=) */

loc_0019AAFB: ;
    edx = MEM32(0x523BF8);
    _fa = (uint32_t)(MEM32(edx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AB0F; /* je: equal / zero */

loc_0019AB07: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019AAFB; /* jl: less (signed <) */

loc_0019AB0C: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);

loc_0019AB0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019AB10
 * Original: 0x0019AB10 - 0x0019AB36 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019AB10: ;
    edx = MEM32(esp + 4);
    ecx = ZX16(MEM16(edx + 6));
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019AB2E; /* jge: greater or equal (signed >=) */

loc_0019AB20: ;
    eax = eax * 4 + 0x14;
    ecx = MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019AB31; /* jne: not equal / not zero */

loc_0019AB2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0019AB31: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0019AB36
 * Original: 0x0019AB36 - 0x0019AB81 (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AB36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019AB36: ;
    PUSH32(esp, esi);
    esi = MEM32(0x523BF4);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(0x523B8C);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x26;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019AB48: ;
    MEM8(0x523EBC) = MEM8(0x523EBC) + 1;
    _fa = (uint32_t)(MEM8(0x523EBC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019AB57; /* jne: not equal / not zero */

loc_0019AB50: ;
    MEM8(0x523EBC) = 1;

loc_0019AB57: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;

loc_0019AB5B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019AB77; /* jge: greater or equal (signed >=) */

loc_0019AB5F: ;
    _fa = (uint32_t)(MEM8(eax + 0x47)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x47), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AB6F; /* je: equal / zero */

loc_0019AB65: ;
    SET_LO8(edx, MEM8(0x523EBC));
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AB48; /* je: equal / zero */

loc_0019AB6F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019AB5B;

loc_0019AB77: ;
    eax = ZX8(MEM8(0x523EBC));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019AB81
 * Original: 0x0019AB81 - 0x0019AFC8 (1095 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AB81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019AB81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    eax = (uint32_t)(int32_t)SMEM8(eax + 5);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -12) = eax;

loc_0019ABA2: ;
    MEM32(ebp + -8) = 0xFFFFFFF7u;

loc_0019ABA9: ;
    eax = ebp + -20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ABB3u); RECOMP_ABI_CALL(0x0019F73Au, sub_0019F73A); /* call 0x0019F73A */

loc_0019ABB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019AFC0; /* je: equal / zero */

loc_0019ABC0: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ABCEu); RECOMP_ABI_CALL(0x00196717u, sub_00196717); /* call 0x00196717 */

loc_0019ABCE: ;
    PUSH32(esp, MEM32(ebp + -24));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xC);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019ABE7u); RECOMP_ABI_CALL(0x0019B2E3u, sub_0019B2E3); /* call 0x0019B2E3 */

loc_0019ABE7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0019ABA9; /* jl: less (signed <) */

loc_0019ABF1: ;
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x11);
    esi = eax + eax * 8;
    eax = MEM32(0x523BF4);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -48) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AC26; /* je: equal / zero */

loc_0019AC0C: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AC15u); RECOMP_ABI_CALL(0x0019F70Bu, sub_0019F70B); /* call 0x0019F70B */

loc_0019AC15: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    if ((_fas >= 0)) goto loc_0019AC1E; /* jns: not sign (positive) */

loc_0019AC1A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0019AC26;

loc_0019AC1E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019AC26; /* jle: less or equal (signed <=) */

loc_0019AC23: ;
    PUSH32(esp, 0x7F);
    POP32(esp, ebx);

loc_0019AC26: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AC2Cu); RECOMP_ABI_CALL(0x0019F6FEu, sub_0019F6FE); /* call 0x0019F6FE */

loc_0019AC2C: ;
    edx = MEM32(ebp + 0x1C);
    MEM16(esi + 0x4C) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 4));
    POP32(esp, ecx);
    MEM16(esi + 0x88) = LO16(eax);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edi + 0xD));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM16(esi + 0x88) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0019AC64; /* je: equal / zero */

loc_0019AC5B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x88) = LO16(eax);

loc_0019AC64: ;
    SET_LO16(eax, MEM16(edi + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AC7E; /* je: equal / zero */

loc_0019AC6D: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AC76u); RECOMP_ABI_CALL(0x0019F70Bu, sub_0019F70B); /* call 0x0019F70B */

loc_0019AC76: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0x88) = MEM16(esi + 0x88) + LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0x88)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, ecx);

loc_0019AC7E: ;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x78) = eax;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0019AC9B; /* je: equal / zero */

loc_0019AC8F: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AC98u); RECOMP_ABI_CALL(0x0019F70Bu, sub_0019F70B); /* call 0x0019F70B */

loc_0019AC98: ;
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019AC9B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019ACA3; /* jle: less or equal (signed <=) */

loc_0019ACA0: ;
    PUSH32(esp, 0x7F);
    POP32(esp, ebx);

loc_0019ACA3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019ACA9; /* jge: greater or equal (signed >=) */

loc_0019ACA7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019ACA9: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x20));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x7F);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -44) = eax;
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(edi + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM16(esi + 0x86) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + -32));
    MEM8(esi + 0x68) = LO8(eax);
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x70) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1A);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x44) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0019ACF0; /* jge: greater or equal (signed >=) */

loc_0019ACE9: ;
    MEM32(esi + 0x44) = 0x7FFFFFFF;

loc_0019ACF0: ;
    eax = MEM32(eax + 4);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x44))); }
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(edi + 0x30);
    MEM32(esi + 0x80) = eax;
    SET_LO8(eax, MEM8(edi + 0x1D));
    MEM8(esi + 0x6A) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 0x54));
    MEM16(esi + 0x84) = LO16(eax);
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AD32; /* je: equal / zero */

loc_0019AD20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AD25u); RECOMP_ABI_CALL(0x0019C514u, sub_0019C514); /* call 0x0019C514 */

loc_0019AD25: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x6B) = LO8(edx);
    goto loc_0019AD36;

loc_0019AD32: ;
    MEM8(esi + 0x6B) = 0;

loc_0019AD36: ;
    _fa = (uint32_t)(MEM8(edi + 0x1E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1E), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019AD4E; /* je: equal / zero */

loc_0019AD3C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AD41u); RECOMP_ABI_CALL(0x0019C514u, sub_0019C514); /* call 0x0019C514 */

loc_0019AD41: ;
    ecx = ZX8(MEM8(edi + 0x1D));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x6C) = LO8(edx);
    goto loc_0019AD52;

loc_0019AD4E: ;
    MEM8(esi + 0x6C) = 0;

loc_0019AD52: ;
    ebx = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(ebx + 0xE));
    PUSH32(esp, MEM32(ebp + -16));
    MEM16(esi + 0x6E) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0xC));
    MEM16(esi + 0x8A) = MEM16(esi + 0x8A) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x8A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(esi + 0x8C) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AD78u); RECOMP_ABI_CALL(0x001973CEu, sub_001973CE); /* call 0x001973CE */

loc_0019AD78: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(esi + 0x12) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(esi + 0x10) = LO16(eax);
    eax = MEM32(edi + 0x60);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(edi + 0x58);
    MEM32(esi + 0x14) = eax;
    SET_LO16(eax, MEM16(edi + 0x56));
    MEM16(esi + 0x20) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 0x13));
    MEM8(esi + 0x22) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 3));
    MEM8(esi + 0x23) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x324CE8); /* mulss */
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    MEM32(ebp + -4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0019AE8C; /* jle: less or equal (signed <=) */

loc_0019ADCE: ;
    goto loc_0019ADD8;

loc_0019ADD0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    ecx = MEM32(ebp + -4);

loc_0019ADD8: ;
    SET_LO16(edx, MEM16(edi + ecx * 2 + 0xBC));
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    _fb = (uint32_t)(MEM16(eax * 2 + 0x523BF4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(eax * 2 + 0x523BF4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx * 2 + 4);
    MEM16(esi + ecx * 2 + 0x50) = LO16(edx);
    SET_LO16(ecx, MEM16(ebp + -40));
    ebx = eax + eax * 8;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(0x523BF4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM16(ebx + 0x24) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + -44));
    MEM8(ebx + 0x2B) = LO8(ecx);
    ecx = MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(ecx + 4));
    MEMF(ebx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(ebx + 0x5F) = LO8(ecx);
    ecx = MEM32(edi + 0x20);
    MEM32(ebx + 0x74) = ecx;
    MEMF(ebx + 0x30) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(edi + 0xF));
    MEM8(ebx + 0x5C) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0xE));
    MEM8(ebx + 0x5E) = LO8(ecx);
    MEM8(ebx + 0x5D) = 0;
    ecx = MEM32(esi + 0x40);
    MEM32(ebx + 0x40) = ecx;
    ecx = MEM32(esi + 0x44);
    MEM32(ebx + 0x44) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(ebx + 0x3C) = ecx;
    ecx = MEM32(esi + 0x70);
    MEM32(ebx + 0x70) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x1B));
    MEM8(ebx + 0x69) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x6B));
    MEM8(ebx + 0x6B) = LO8(ecx);
    ecx = MEM32(edi + 0x2C);
    MEM32(ebx + 0x7C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AE6Eu); RECOMP_ABI_CALL(0x00196062u, sub_00196062); /* call 0x00196062 */

loc_0019AE6E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 5 (32-bit) */
    POP32(esp, ecx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0x4E) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019ADD0; /* jl: less (signed <) */

loc_0019AE89: ;
    ebx = MEM32(ebp + 0x14);

loc_0019AE8C: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019AEAD; /* jne: not equal / not zero */

loc_0019AE93: ;
    SET_LO16(eax, MEM16(esi + 0x50));
    _fb = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ebx + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x4C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0xA));
    MEM16(esi + 0x1E) = LO16(eax);
    goto loc_0019AF15;

loc_0019AEAD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = SX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x523C78);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    eax = eax + eax * 2;
    eax = eax * 2 + 0x329E12;
    MEM32(ebp + -44) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0019AF15; /* jle: less or equal (signed <=) */

loc_0019AED0: ;
    edx = esi + 0x50;

loc_0019AED3: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + -76);
    ebx = MEM32(ebp + -4);
    ecx = MEM32(ebp + -44);
    SET_LO16(ecx, ZX8(MEM8(ecx + ebx)));
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + 0x1C) = LO16(ecx);
    SET_LO16(ebx, MEM16(edx));
    MEM16(eax + 0x1E) = MEM16(eax + 0x1E) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x1E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + LO16(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x1C) = LO16(ebx);
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019AED3; /* jl: less (signed <) */

loc_0019AF12: ;
    ebx = MEM32(ebp + 0x14);

loc_0019AF15: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi + 3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 3), 0 (8-bit) */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -12); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x324CE8); /* mulss */
    if (CMP_LE(_fas, _fbs)) goto loc_0019AF6D; /* jle: less or equal (signed <=) */

loc_0019AF2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019AF2F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    SET_LO8(ecx, MEM8(ebp + -12));
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x60) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37906C), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019AF5F; /* jle: less or equal (signed <=) */

loc_0019AF4E: ;
    edx = MEM32(eax + 0x64);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37906C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x37906C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019AF4E; /* jl: less (signed <) */

loc_0019AF5F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019AF2F; /* jl: less (signed <) */

loc_0019AF6D: ;
    eax = ZX16(MEM16(ebx + 0x16));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0x14));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AF88u); RECOMP_ABI_CALL(0x0019F360u, sub_0019F360); /* call 0x0019F360 */

loc_0019AF88: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019AFC0; /* jge: greater or equal (signed >=) */

loc_0019AF8F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 3), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019ABA2; /* jle: less or equal (signed <=) */

loc_0019AF9A: ;
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019AFA0: ;
    eax = MEM32(0x523BF4);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019AFAFu); RECOMP_ABI_CALL(0x0019B593u, sub_0019B593); /* call 0x0019B593 */

loc_0019AFAF: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 3);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019AFA0; /* jl: less (signed <) */

loc_0019AFBB: ;
    goto loc_0019ABA2;

loc_0019AFC0: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019AFC8
 * Original: 0x0019AFC8 - 0x0019B195 (461 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AFC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019AFC8: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    MEM32(ebp + 0x60) = edi;
    MEM32(ebp + 0x4C) = edi;
    MEM32(ebp + 0x48) = edi;
    MEM32(ebp + 0x58) = 0xFFFFFFF7u;
    if (CMP_NE(_fa, _fb)) goto loc_0019AFF3; /* jne: not equal / not zero */

loc_0019AFEB: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_0019B18F;

loc_0019AFF3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019AFFE; /* jne: not equal / not zero */

loc_0019AFF8: ;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 0x6C) = eax;

loc_0019AFFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    eax = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(ebp + 0x5C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    MEM32(ebp + 0x50) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B019u); RECOMP_ABI_CALL(0x0019AB36u, sub_0019AB36); /* call 0x0019AB36 */

loc_0019B019: ;
    MEM32(ebp + 0x44) = eax;
    PUSH32(esp, ebx);

loc_0019B01D: ;
    eax = ebp + -184;
    PUSH32(esp, eax);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B02Du); RECOMP_ABI_CALL(0x0019A624u, sub_0019A624); /* call 0x0019A624 */

loc_0019B02D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x4C), edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 0x54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0019B058; /* jne: not equal / not zero */

loc_0019B037: ;
    _fa = (uint32_t)(MEM16(ebp + -184)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -184), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B051; /* je: equal / zero */

loc_0019B040: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -184);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B04Du); RECOMP_ABI_CALL(0x0019F70Bu, sub_0019F70B); /* call 0x0019F70B */

loc_0019B04D: ;
    POP32(esp, ecx);
    MEM32(ebp + 0x48) = eax;

loc_0019B051: ;
    MEM32(ebp + 0x4C) = 1;

loc_0019B058: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -176);
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x50), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B0CF; /* jl: less (signed <) */

loc_0019B064: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -175);
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x50), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019B0CF; /* jg: greater (signed >) */

loc_0019B070: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -174);
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B0CF; /* jl: less (signed <) */

loc_0019B07C: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -173);
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019B0CF; /* jg: greater (signed >) */

loc_0019B088: ;
    PUSH32(esp, MEM32(ebp + 0x48));
    eax = ebp + -184;
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, MEM32(ebp + 0x74));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B0A7u); RECOMP_ABI_CALL(0x0019AB81u, sub_0019AB81); /* call 0x0019AB81 */

loc_0019B0A7: ;
    ebx = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ebp + 0x58) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0019B111; /* jl: less (signed <) */

loc_0019B0B3: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    MEM32(ebp + eax * 4 + 0x14) = ebx;
    eax = ebp + -184;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B0CCu); RECOMP_ABI_CALL(0x001956B1u, sub_001956B1); /* call 0x001956B1 */

loc_0019B0CC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019B0CF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B01D; /* jne: not equal / not zero */

loc_0019B0D8: ;
    eax = MEM32(ebp + 0x60);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x54) = eax;
    MEM32(ebp + 0x60) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0019B10C; /* jle: less or equal (signed <=) */

loc_0019B0E7: ;
    esi = MEM32(ebp + ebx * 4 + 0x14);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B0F1u); RECOMP_ABI_CALL(0x0019F7AFu, sub_0019F7AF); /* call 0x0019F7AF */

loc_0019B0F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019B100; /* jne: not equal / not zero */

loc_0019B0F6: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + eax * 4 + 0x14) = esi;

loc_0019B100: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x54) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B0E7; /* jl: less (signed <) */

loc_0019B106: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B12C; /* jne: not equal / not zero */

loc_0019B10C: ;
    ebx = MEM32(ebp + 0x58);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019B111: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B128; /* jle: less or equal (signed <=) */

loc_0019B118: ;
    PUSH32(esp, MEM32(ebp + esi * 4 + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B121u); RECOMP_ABI_CALL(0x001960FFu, sub_001960FF); /* call 0x001960FF */

loc_0019B121: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x60) (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019B118; /* jl: less (signed <) */

loc_0019B128: ;
    eax = ebx;
    goto loc_0019B18D;

loc_0019B12C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B155; /* jne: not equal / not zero */

loc_0019B132: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B13Au); RECOMP_ABI_CALL(0x0019B69Bu, sub_0019B69B); /* call 0x0019B69B */

loc_0019B13A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019B18A; /* jl: less (signed <) */

loc_0019B13F: ;
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x27) = 0;
    goto loc_0019B18A;

loc_0019B155: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x60), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B186; /* jle: less or equal (signed <=) */

loc_0019B15C: ;
    PUSH32(esp, MEM32(ebp + esi * 4 + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B165u); RECOMP_ABI_CALL(0x0019B69Bu, sub_0019B69B); /* call 0x0019B69B */

loc_0019B165: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019B180; /* jl: less (signed <) */

loc_0019B16A: ;
    edi = eax + eax * 8;
    SET_LO8(eax, MEM8(ebp + 0x44));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(0x523BF4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x26) = LO8(eax);
    MEM8(edi + 0x27) = 0;

loc_0019B180: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x60) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B15C; /* jl: less (signed <) */

loc_0019B186: ;
    MEM8(edi + 0x27) = 1;

loc_0019B18A: ;
    eax = MEM32(ebp + 0x58);

loc_0019B18D: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0019B18F: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x64;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019B195
 * Original: 0x0019B195 - 0x0019B1C5 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B195(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019B195: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0019B1C1; /* jl: less (signed <) */

loc_0019B19D: ;
    ecx = ZX16(MEM16(0x523A44));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0019B1C1; /* jge: greater or equal (signed >=) */

loc_0019B1A8: ;
    ecx = MEM32(0x523BF8);
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B1C1; /* je: equal / zero */

loc_0019B1B6: ;
    SET_LO8(eax, MEM8(eax + 4));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFEEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0019B1C1: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B1C5
 * Original: 0x0019B1C5 - 0x0019B1E9 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B1C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B1C5: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0xE));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x2000 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019B1DB; /* jbe: below or equal (unsigned <=) */

loc_0019B1D4: ;
    MEM16(eax + 0xE) = 0x2000;
    esp += 4; return; /* ret */

loc_0019B1DB: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x800 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019B1E8; /* jae: above or equal (unsigned >=) */

loc_0019B1E2: ;
    MEM16(eax + 0xE) = 0x800;

loc_0019B1E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B1E9
 * Original: 0x0019B1E9 - 0x0019B20B (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B1E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B1E9: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B20A; /* je: equal / zero */

loc_0019B1F2: ;
    eax = (uint32_t)(int32_t)SMEM8(0x523B8A);
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x523B94) = ecx;
    MEM8(0x523B8A) = MEM8(0x523B8A) + 1;
    _fa = (uint32_t)(MEM8(0x523B8A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0019B20A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B20B
 * Original: 0x0019B20B - 0x0019B262 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B20B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B20B: ;
    _fa = (uint32_t)(MEM8(0x523B88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523B88), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B261; /* je: equal / zero */

loc_0019B214: ;
    PUSH32(esp, 0x0019B219u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0019B219: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x523B8A);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B25C; /* jle: less or equal (signed <=) */

loc_0019B226: ;
    edx = MEM32(eax * 4 + 0x523B94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B23A; /* je: equal / zero */

loc_0019B233: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B226; /* jl: less (signed <) */

loc_0019B238: ;
    goto loc_0019B25C;

loc_0019B23A: ;
    MEM8(0x523B8A) = MEM8(0x523B8A) - 1;
    _fa = (uint32_t)(MEM8(0x523B8A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_0019B251;

loc_0019B242: ;
    ecx = MEM32(eax * 4 + 0x523B98);
    MEM32(eax * 4 + 0x523B94) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019B251: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x523B8A);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B242; /* jl: less (signed <) */

loc_0019B25C: ;
    g_seh_ebp = ebp; sub_001950F1(); return; /* tail jmp 0x001950F1 */

loc_0019B261: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B262
 * Original: 0x0019B262 - 0x0019B2BF (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B262(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B262: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x523BF4);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(MEM8(ecx + edx + 0x26));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0019B2AC; /* jne: not equal / not zero */

loc_0019B280: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019B2BB; /* jge: greater or equal (signed >=) */

loc_0019B284: ;
    MEM32(ecx) = eax;

loc_0019B286: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019B28B: ;
    eax = MEM32(ecx);
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX8(MEM8(eax + 0x26));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B2AC; /* jne: not equal / not zero */

loc_0019B2A1: ;
    _fa = (uint32_t)(MEM8(eax + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x6D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B2AC; /* jne: not equal / not zero */

loc_0019B2A7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019B286; /* jge: greater or equal (signed >=) */

loc_0019B2AC: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = (uint32_t)(int32_t)SMEM16(0x523B8C);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B28B; /* jl: less (signed <) */

loc_0019B2BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B2BF
 * Original: 0x0019B2BF - 0x0019B2E3 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B2BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B2BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B2DC; /* jle: less or equal (signed <=) */

loc_0019B2C7: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x523EC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B2DF; /* je: equal / zero */

loc_0019B2D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B2C7; /* jl: less (signed <) */

loc_0019B2DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0019B2DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0019B2E3
 * Original: 0x0019B2E3 - 0x0019B593 (688 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B2E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019B2E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = 0xFFFFFFF7u;
    if (CMP_LE(_fas, _fbs)) goto loc_0019B311; /* jle: less or equal (signed <=) */

loc_0019B2FE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0x523EC0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_0019B311: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x523ECC)) + (uint64_t)(0x100)) >> 32) & 1);
    MEM32(0x523ECC) = MEM32(0x523ECC) + 0x100;
    _fa = (uint32_t)(MEM32(0x523ECC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_0019B324; /* jns: not sign (positive) */

loc_0019B31D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x523ECC) = MEM32(0x523ECC) & 0;
    _fa = (uint32_t)(MEM32(0x523ECC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019B324: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B38A; /* jle: less or equal (signed <=) */

loc_0019B328: ;
    MEM32(ebp + -12) = edx;

loc_0019B32B: ;
    esi = MEM32(ebp + 0x14);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0019B385; /* jge: greater or equal (signed >=) */

loc_0019B338: ;
    ecx = MEM32(0x523BF4);
    eax = esi + esi * 8;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x2C;

loc_0019B348: ;
    _fa = (uint32_t)(MEM8(edx + 0x41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0019B367; /* jne: not equal / not zero */

loc_0019B34E: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B357u); RECOMP_ABI_CALL(0x0019B2BFu, sub_0019B2BF); /* call 0x0019B2BF */

loc_0019B357: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019B367; /* jne: not equal / not zero */

loc_0019B35D: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0019B367; /* jae: above or equal (unsigned >=) */

loc_0019B363: ;
    ebx = eax;
    edi = esi;

loc_0019B367: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x90)) >> 32) & 1);
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019B348; /* jl: less (signed <) */

loc_0019B373: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0019B385; /* jl: less (signed <) */

loc_0019B377: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax * 2 + 0x523EC0) = LO16(edi);

loc_0019B385: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019B32B; /* jne: not equal / not zero */

loc_0019B38A: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = eax;
    goto loc_0019B421;

loc_0019B395: ;
    _fa = (uint32_t)(MEM8(0x523A54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523A54), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0019B3A2; /* jne: not equal / not zero */

loc_0019B3A1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0019B3A2: ;
    edi = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = eax;
    eax = edi;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0019B41B; /* jge: greater or equal (signed >=) */

loc_0019B3B5: ;
    ecx = MEM32(0x523BF4);
    eax = eax + eax * 8;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x2A;

loc_0019B3C5: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B3CEu); RECOMP_ABI_CALL(0x0019B2BFu, sub_0019B2BF); /* call 0x0019B2BF */

loc_0019B3CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019B3F7; /* jne: not equal / not zero */

loc_0019B3D4: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x65 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0019B3F7; /* jae: above or equal (unsigned >=) */

loc_0019B3DA: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0019B3EA; /* jge: greater or equal (signed >=) */

loc_0019B3E2: ;
    esi = MEM32(edx + 2);
    MEM32(ebp + -8) = eax;
    goto loc_0019B3F5;

loc_0019B3EA: ;
    if (CMP_NE(_fa, _fb)) goto loc_0019B3F7; /* jne: not equal / not zero */

loc_0019B3EC: ;
    eax = MEM32(edx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0019B3F7; /* jae: above or equal (unsigned >=) */

loc_0019B3F3: ;
    esi = eax;

loc_0019B3F5: ;
    ebx = edi;

loc_0019B3F7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x90)) >> 32) & 1);
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019B3C5; /* jl: less (signed <) */

loc_0019B403: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0019B41B; /* jl: less (signed <) */

loc_0019B407: ;
    eax = MEM32(ebp + -4);
    MEM16(eax * 2 + 0x523EC0) = LO16(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0019B42A; /* jge: greater or equal (signed >=) */

loc_0019B41B: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);

loc_0019B421: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019B395; /* jl: less (signed <) */

loc_0019B42A: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019B58B; /* jne: not equal / not zero */

loc_0019B436: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;

loc_0019B43A: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0019B472; /* jle: less or equal (signed <=) */

loc_0019B444: ;
    eax = edi * 2 + 0x523EC0;
    SET_LO16(esi, MEM16(eax));
    ecx = edi * 2 + 0x523EC2;
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0019B468; /* jle: less or equal (signed <=) */

loc_0019B45D: ;
    esi = SX16(LO16(esi));
    MEM16(eax) = LO16(edx);
    MEM16(ecx) = LO16(esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019B468: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0019B444; /* jl: less (signed <) */

loc_0019B46E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B43A; /* je: equal / zero */

loc_0019B472: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523EC0);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(0x523ECC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(ebp + 0x10);
    MEM32(edi) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x523EC0);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0019B4E2; /* jle: less or equal (signed <=) */

loc_0019B495: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx * 2 + 0x523EC0);
    esi = eax + eax * 8;
    eax = MEM32(0x523BF4);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0019B4CA; /* je: equal / zero */

loc_0019B4B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0019B4C3; /* jge: greater or equal (signed >=) */

loc_0019B4B6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = ecx + ecx * 8;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + eax);

loc_0019B4C3: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B4C9u); RECOMP_ABI_CALL(0x001960FFu, sub_001960FF); /* call 0x001960FF */

loc_0019B4C9: ;
    POP32(esp, ecx);

loc_0019B4CA: ;
    MEM8(esi + 0x6D) = 1;
    eax = MEM32(0x523B90);
    MEM32(esi + 0x2C) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esi + 0x2A) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0019B495; /* jl: less (signed <) */

loc_0019B4E2: ;
    eax = (uint32_t)(int32_t)SMEM16(0x523EC0);
    ecx = MEM32(edi);
    edx = MEM32(0x523BF4);
    eax = eax + eax * 8;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx) = ecx;
    SET_LO16(eax, MEM16(0x523EC0));
    edx = MEM32(0x523BF4);
    ecx = SX16(LO16(eax));
    ecx = ecx + ecx * 8;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + edx + 4) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x523EC0);
    ecx = MEM32(0x523BF4);
    eax = eax + eax * 8;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM16(eax + ecx + 0x28) = MEM16(eax + ecx + 0x28) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + ecx + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0019B58B; /* jle: less or equal (signed <=) */

loc_0019B535: ;
    edx = (uint32_t)(int32_t)SMEM16(0x523EC0);
    edi = MEM32(0x523BF4);
    edx = edx + edx * 8;
    eax = ecx * 2 + 0x523EC0;
    SET_LO16(esi, MEM16(eax));
    edx = ecx + edx * 8;
    MEM16(edi + edx * 2 + 4) = LO16(esi);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    esi = MEM32(0x523BF4);
    edx = edx + edx * 8;
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM32(edx + esi) = MEM32(edx + esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx + esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    SET_LO16(edx, MEM16(0x523EC0));
    esi = MEM32(0x523BF4);
    eax = eax + eax * 8;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(eax + esi + 0x28) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0019B535; /* jl: less (signed <) */

loc_0019B58B: ;
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019B593
 * Original: 0x0019B593 - 0x0019B69B (264 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B593(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B593: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x523BF4);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ebx + ebx * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0x26));
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B681; /* je: equal / zero */

loc_0019B5C5: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x523B8C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B60E; /* jle: less or equal (signed <=) */

loc_0019B5D4: ;
    ecx = edx + 0x6D;

loc_0019B5D7: ;
    esi = ZX8(MEM8(ecx + -71));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B5F6; /* jne: not equal / not zero */

loc_0019B5E0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + -109)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -109), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B5F6; /* jl: less (signed <) */

loc_0019B5E7: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B5F6; /* je: equal / zero */

loc_0019B5EB: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx + -70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + -70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B5F6; /* je: equal / zero */

loc_0019B5F3: ;
    edi = MEM32(ebp + -4);

loc_0019B5F6: ;
    esi = (uint32_t)(int32_t)SMEM16(0x523B8C);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B5D7; /* jl: less (signed <) */

loc_0019B60B: ;
    ebx = MEM32(ebp + 8);

loc_0019B60E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B681; /* je: equal / zero */

loc_0019B614: ;
    ecx = edi + edi * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + edx + 0x6D;
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B673; /* jne: not equal / not zero */

loc_0019B625: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B673; /* je: equal / zero */

loc_0019B629: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B673; /* jne: not equal / not zero */

loc_0019B62F: ;
    MEM8(eax + 0x6D) = 0;
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x27) = 0;
    edx = MEM32(0x523B90);
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(0x523BF4);
    MEM8(ecx + eax + 0x6D) = 0;
    eax = MEM32(0x523BF4);
    MEM8(ecx + eax + 0x26) = 0;
    eax = MEM32(0x523BF4);
    MEM8(ecx + eax + 0x27) = 0;
    eax = MEM32(0x523B90);
    edx = MEM32(0x523BF4);
    MEM32(ecx + edx + 0x2C) = eax;
    goto loc_0019B696;

loc_0019B673: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B681; /* jne: not equal / not zero */

loc_0019B678: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B681; /* jne: not equal / not zero */

loc_0019B67C: ;
    MEM8(esi) = 2;
    goto loc_0019B696;

loc_0019B681: ;
    MEM8(eax + 0x27) = 0;
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x6D) = 0;
    ecx = MEM32(0x523B90);
    MEM32(eax + 0x2C) = ecx;

loc_0019B696: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019B69B
 * Original: 0x0019B69B - 0x0019B6CF (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B69B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B69B: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B6CB; /* jl: less (signed <) */

loc_0019B6A3: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x523B8C);
    eax = edx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019B6CB; /* jge: greater or equal (signed >=) */

loc_0019B6B5: ;
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x523BF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ecx + 0x6D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B6CB; /* je: equal / zero */

loc_0019B6C7: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B6CE; /* je: equal / zero */

loc_0019B6CB: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);

loc_0019B6CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B6CF
 * Original: 0x0019B6CF - 0x0019B6DE (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B6CF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B6CF: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B6DE
 * Original: 0x0019B6DE - 0x0019B702 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B6DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B6DE: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B6F9; /* je: equal / zero */

loc_0019B6F4: ;
    MEM32(edx + 4) = ecx;
    goto loc_0019B6FC;

loc_0019B6F9: ;
    MEM32(eax + 4) = ecx;

loc_0019B6FC: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B702
 * Original: 0x0019B702 - 0x0019B727 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B702(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B702: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B71E; /* je: equal / zero */

loc_0019B71A: ;
    MEM32(edx) = ecx;
    goto loc_0019B720;

loc_0019B71E: ;
    MEM32(eax) = ecx;

loc_0019B720: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B727
 * Original: 0x0019B727 - 0x0019B746 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B727(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B727: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B745; /* je: equal / zero */

loc_0019B731: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0019B73E; /* jne: not equal / not zero */

loc_0019B739: ;
    MEM32(edx + 4) = MEM32(edx + 4) & ecx;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0019B742;

loc_0019B73E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019B742: ;
    MEM32(edx + 8) = MEM32(edx + 8) - 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0019B745: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B746
 * Original: 0x0019B746 - 0x0019B782 (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B746(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B746: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B758; /* jne: not equal / not zero */

loc_0019B754: ;
    edx = MEM32(edx);
    MEM32(ecx) = edx;

loc_0019B758: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B765; /* jne: not equal / not zero */

loc_0019B75F: ;
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;

loc_0019B765: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B772; /* je: equal / zero */

loc_0019B76C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    POP32(esp, esi);

loc_0019B772: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B77E; /* je: equal / zero */

loc_0019B778: ;
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;

loc_0019B77E: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0019B782
 * Original: 0x0019B782 - 0x0019B7BC (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B782(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B782: ;
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0019B7B9; /* jle: less or equal (signed <=) */

loc_0019B791: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0x523BF4);
    ecx = ecx + ecx * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 4;

loc_0019B7A5: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) edi = edx; /* cmovg */
    if (CMP_G(_fas, _fbs)) eax = esi; /* cmovg */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B7A5; /* jl: less (signed <) */

loc_0019B7B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B7BC
 * Original: 0x0019B7BC - 0x0019B7D0 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B7BC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B7BC: ;
    PUSH32(esp, 0x0019B7C1u); RECOMP_ABI_CALL(0x00196FBFu, sub_00196FBF); /* call 0x00196FBF */

loc_0019B7C1: ;
    ecx = MEM32(esp + 4);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B7D0
 * Original: 0x0019B7D0 - 0x0019B85E (142 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B7DAu); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0019B7DA: ;
    eax = ZX8(MEM8(0x523A5E));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019B7F6; /* jle: less or equal (signed <=) */

loc_0019B7E7: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x5241D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x5241D4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B804; /* je: equal / zero */

loc_0019B7F1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B7E7; /* jl: less (signed <) */

loc_0019B7F6: ;
    PUSH32(esp, 0xFFFFFFF7u);

loc_0019B7F8: ;
    POP32(esp, edi);

loc_0019B7F9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B7FEu); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_0019B7FE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019B804: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B80Eu); RECOMP_ABI_CALL(0x00196FBFu, sub_00196FBF); /* call 0x00196FBF */

loc_0019B80E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0019B818; /* jge: greater or equal (signed >=) */

loc_0019B814: ;
    PUSH32(esp, 0xFFFFFFFAu);
    goto loc_0019B7F8;

loc_0019B818: ;
    PUSH32(esp, ebx);
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B820u); RECOMP_ABI_CALL(0x00196FBFu, sub_00196FBF); /* call 0x00196FBF */

loc_0019B820: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B827u); RECOMP_ABI_CALL(0x00196FBFu, sub_00196FBF); /* call 0x00196FBF */

loc_0019B827: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x54) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x9C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x58) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esi + 0x40) = LO16(ecx);
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(edi * 4 + 0x5241D4) = esi;
    POP32(esp, ebx);
    goto loc_0019B7F9;

}

/**
 * sub_0019B85E
 * Original: 0x0019B85E - 0x0019BB97 (825 bytes, 258 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B85E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B85E: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x58) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B879u); RECOMP_ABI_CALL(0x0019B1C5u, sub_0019B1C5); /* call 0x0019B1C5 */

loc_0019B879: ;
    ebx = MEM32(ebp + 0x74);
    SET_LO8(eax, MEM8(ebx + 2));
    MEM8(ebp + -125) = LO8(eax);
    POP32(esp, ecx);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0x78);
    MEM32(ebp + 0x5C) = ecx;
    ecx = MEM32(ebp + 0x70);
    edi = MEM32(ecx * 4 + 0x5241D4);
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(ebp + -104) = LO16(ecx);
    ecx = MEM32(ebx);
    MEM32(ebp + 0x58) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 0x48) = esi;
    MEM32(edi + 0x4C) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x60) = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x62)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x62), 0 (8-bit) */
    MEM32(edi + 8) = esi;
    MEM16(edi + 0x46) = LO16(esi);
    MEM16(edi + 0x44) = LO16(esi);
    MEM32(ebp + 0x74) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0019B900; /* jbe: below or equal (unsigned <=) */

loc_0019B8C6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x64) = eax;
    ecx = edi + 0x64;
    eax = edi + 0x28;
    goto loc_0019B8D7;

loc_0019B8D4: ;
    ecx = MEM32(ebp + 0x60);

loc_0019B8D7: ;
    edx = MEM32(ebp + 0x64);
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -84) = esi;
    MEM16(eax + 0xC) = LO16(esi);
    MEM16(eax) = LO16(esi);
    edx = MEM32(edx);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = ecx;
    ecx = ZX8(MEM8(edi + 0x62));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019B8D4; /* jl: less (signed <) */

loc_0019B900: ;
    eax = ebp + -128;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B90Du); RECOMP_ABI_CALL(0x0019F73Au, sub_0019F73A); /* call 0x0019F73A */

loc_0019B90D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019BB8D; /* je: equal / zero */

loc_0019B91A: ;
    ecx = ebp + 0x54;
    PUSH32(esp, ecx);
    ecx = ebp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B928u); RECOMP_ABI_CALL(0x00196717u, sub_00196717); /* call 0x00196717 */

loc_0019B928: ;
    PUSH32(esp, MEM32(ebp + 0x54));
    eax = ebp + 0x50;
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x65);
    PUSH32(esp, MEM32(ebp + 0x5C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B93Cu); RECOMP_ABI_CALL(0x0019B2E3u, sub_0019B2E3); /* call 0x0019B2E3 */

loc_0019B93C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0019B94E; /* jge: greater or equal (signed >=) */

loc_0019B946: ;
    MEM32(edi) = 0xFFFFFFF7u;
    goto loc_0019B900;

loc_0019B94E: ;
    ecx = MEM32(ebp + 0x50);
    MEM32(edi) = ecx;
    ecx = ZX8(MEM8(ebx + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B95Eu); RECOMP_ABI_CALL(0x0019B782u, sub_0019B782); /* call 0x0019B782 */

loc_0019B95E: ;
    esi = MEM32(ebp + 0x64);
    MEM8(edi + 0x42) = LO8(eax);
    eax = MEM32(0x523BF4);
    esi = esi + esi * 8;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x60) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(ebx));
    MEM16(esi + 0x20) = LO16(eax);
    SET_LO8(eax, MEM8(ebx + 3));
    MEM8(esi + 0x22) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 2));
    POP32(esp, ecx);
    MEM8(esi + 0x23) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0019B9A4; /* jne: not equal / not zero */

loc_0019B997: ;
    edx = MEM32(ebp + 0x7C);
    SET_LO16(eax, MEM16(edx + 8));
    MEM16(esi + 0x1C) = LO16(eax);
    goto loc_0019B9AE;

loc_0019B9A4: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019B9AAu); RECOMP_ABI_CALL(0x0019F6AAu, sub_0019F6AA); /* call 0x0019F6AA */

loc_0019B9AA: ;
    edx = MEM32(ebp + 0x7C);
    POP32(esp, ecx);

loc_0019B9AE: ;
    MEM16(esi + 0x4C) = MEM16(esi + 0x4C) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(esi + 0x12) = MEM16(esi + 0x12) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = MEM32(ebp + 0x78);
    SET_LO16(ecx, MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x324CE8)); /* movss */
    MEM16(esi + 0x88) = LO16(ecx);
    SET_LO16(ecx, MEM16(edx + 0xC));
    MEM16(esi + 0x8C) = LO16(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    MEM8(esi + 0x68) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 5));
    MEM8(esi + 0x60) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 5);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esi + 0x64);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(eax + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x26) = 0;
    MEM8(esi + 0x27) = 0;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x80) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM16(esi + 0x86) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    eax = ZX8(MEM8(ebx + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019BADF; /* jle: less or equal (signed <=) */

loc_0019BA35: ;
    edx = MEM32(ebp + 0x78);
    SET_LO16(edx, MEM16(edx + ecx * 2 + 0xC));
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    _fb = (uint32_t)(MEM16(eax * 2 + 0x523BF4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(eax * 2 + 0x523BF4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx * 2 + 4);
    MEM16(esi + ecx * 2 + 0x50) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x74));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x24) = LO16(edx);
    edx = MEM32(ebp + 0x7C);
    SET_LO8(edx, MEM8(edx + 4));
    MEM8(eax + 0x5F) = LO8(edx);
    edx = MEM32(ebp + 0x78);
    SET_LO8(edx, MEM8(edx + 3));
    MEM8(eax + 0x2B) = LO8(edx);
    edx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(eax + 0x74) = edx;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEM8(eax + 0x5E) = LO8(edx);
    MEM8(eax + 0x5D) = LO8(edx);
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x7C) = edx;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 0x5C) = 1;
    MEM32(eax + 0x40) = 0x7F0000;
    MEM32(eax + 0x44) = 0x7FFFFFFF;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x379068); /* mulss */
    MEM16(eax + 0x1E) = MEM16(eax + 0x1E) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x1E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x4E) = LO8(edx);
    eax = ZX8(MEM8(ebx + 2));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BA35; /* jl: less (signed <) */

loc_0019BADC: ;
    edx = MEM32(ebp + 0x7C);

loc_0019BADF: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019BAED; /* jne: not equal / not zero */

loc_0019BAE5: ;
    SET_LO16(eax, MEM16(edx + 0xA));
    MEM16(esi + 0x1E) = LO16(eax);

loc_0019BAED: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019BB1F; /* jbe: below or equal (unsigned <=) */

loc_0019BAF7: ;
    ecx = esi + 0x50;

loc_0019BAFA: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + -76);
    SET_LO16(edx, MEM16(ecx));
    eax = eax + eax * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x523BF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x1C) = MEM16(eax + 0x1C) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(ebx + 2));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BAFA; /* jl: less (signed <) */

loc_0019BB1F: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    MEM16(esi + 0x8A) = MEM16(esi + 0x8A) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x8A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019BB2Fu); RECOMP_ABI_CALL(0x001973CEu, sub_001973CE); /* call 0x001973CE */

loc_0019BB2F: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    eax = MEM32(ebp + 0x7C);
    ecx = ZX16(MEM16(eax + 0x16));
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x14));
    eax = ZX16(MEM16(eax + 0xE));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, MEM32(ebp + 0x70));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019BB50u); RECOMP_ABI_CALL(0x0019C231u, sub_0019C231); /* call 0x0019C231 */

loc_0019BB50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0019BB8D; /* jge: greater or equal (signed >=) */

loc_0019BB5A: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019BB81; /* jle: less or equal (signed <=) */

loc_0019BB61: ;
    esi = MEM32(ebp + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = eax;

loc_0019BB6A: ;
    eax = MEM32(0x523BF4);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019BB79u); RECOMP_ABI_CALL(0x0019B593u, sub_0019B593); /* call 0x0019B593 */

loc_0019BB79: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0019BB6A; /* jne: not equal / not zero */

loc_0019BB81: ;
    eax = MEM32(ebp + 0x64);
    MEM32(edi) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0019B900;

loc_0019BB8D: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019BB97
 * Original: 0x0019BB97 - 0x0019BC7C (229 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BB97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BB97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax * 4 + 0x5241D4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x62), LO8(edx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0019BBC9; /* jbe: below or equal (unsigned <=) */

loc_0019BBAF: ;
    eax = ecx + 0x34;

loc_0019BBB2: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x40);
    edi = (uint32_t)(int32_t)SMEM16(eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019BC18; /* jge: greater or equal (signed >=) */

loc_0019BBBE: ;
    esi = ZX8(MEM8(ecx + 0x62));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BBB2; /* jl: less (signed <) */

loc_0019BBC9: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x46);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x7C;
    edx = MEM32(eax + 4);
    edx = edx ^ MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7FFFFFFF;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) ^ edx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ebx;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM8(ecx + 0x62)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x62), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019BC48; /* jbe: below or equal (unsigned <=) */

loc_0019BC0A: ;
    ebx = esi + 0xC;
    edx = ecx + 0x34;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = ebx;
    goto loc_0019BC20;

loc_0019BC18: ;
    PUSH32(esp, 0xFFFFFFF3u);
    POP32(esp, eax);
    goto loc_0019BC78;

loc_0019BC1D: ;
    eax = MEM32(ebp + -8);

loc_0019BC20: ;
    ebx = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(ebx);
    eax = ZX8(MEM8(ecx + 0x62));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BC1D; /* jl: less (signed <) */

loc_0019BC48: ;
    eax = MEM32(esi + 4);
    edx = MEM32(ecx + 0x48);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(ecx + 0x46));
    POP32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx + 0x46) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x40));
    _fa = (uint32_t)(MEM16(ecx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x46), LO16(edx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BC78; /* jl: less (signed <) */

loc_0019BC72: ;
    MEM16(ecx + 0x46) = 0;

loc_0019BC78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019BC7C
 * Original: 0x0019BC7C - 0x0019BCAF (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BC7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BC7C: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x5241D4);
    edx = ZX8(MEM8(eax + 0x62));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019BCA6; /* jle: less or equal (signed <=) */

loc_0019BC92: ;
    ecx = eax + 0x34;
    PUSH32(esp, edi);

loc_0019BC96: ;
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BCA0; /* jl: less (signed <) */

loc_0019BC9D: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx);

loc_0019BCA0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019BC96; /* jne: not equal / not zero */

loc_0019BCA5: ;
    POP32(esp, edi);

loc_0019BCA6: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x40);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BCAF
 * Original: 0x0019BCAF - 0x0019BCC3 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BCAF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BCAF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x5241D4);
    eax = MEM32(ecx + 0x4C);
    ecx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0019BCC3
 * Original: 0x0019BCC3 - 0x0019BCE5 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BCC3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BCC3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019BCC9u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0019BCC9: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019BCD3u); RECOMP_ABI_CALL(0x00196FBFu, sub_00196FBF); /* call 0x00196FBF */

loc_0019BCD3: ;
    MEM32(esi * 4 + 0x5241D4) = MEM32(esi * 4 + 0x5241D4) & 0;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x5241D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    PUSH32(esp, 0x0019BCE1u); RECOMP_ABI_CALL(0x001950F1u, sub_001950F1); /* call 0x001950F1 */

loc_0019BCE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BCE5
 * Original: 0x0019BCE5 - 0x0019BE3B (342 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BCE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BCE5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi * 4 + 0x5241D4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x62), LO8(ebx) (8-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0019BD26; /* jbe: below or equal (unsigned <=) */

loc_0019BD07: ;
    edx = ZX8(MEM8(eax + 0x62));
    ecx = eax + 0x10;

loc_0019BD0E: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019BD19; /* ja: above (unsigned >) */

loc_0019BD15: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019BD19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019BD0E; /* jne: not equal / not zero */

loc_0019BD1F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019BD72; /* je: equal / zero */

loc_0019BD26: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x44);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ebx (32-bit) */
    edx = ecx + eax + 0x7C;
    if (CMP_EQ(_fa, _fb)) goto loc_0019BD56; /* je: equal / zero */

loc_0019BD36: ;
    ecx = MEM32(0x523ED0);
    ecx = ecx * 8 + 0x523ED4;
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 2) = LO16(esi);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = edx;
    MEM32(0x523ED0) = MEM32(0x523ED0) + 1;
    _fa = (uint32_t)(MEM32(0x523ED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019BD56: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x44));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x44) = LO16(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(eax + 0x40));
    _fa = (uint32_t)(MEM16(eax + 0x44)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x44), LO16(ecx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BD72; /* jl: less (signed <) */

loc_0019BD6E: ;
    MEM16(eax + 0x44) = LO16(ebx);

loc_0019BD72: ;
    esi = MEM32(ebp + 0xC);
    ecx = eax + esi * 2 + 0x34;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(ebx) (16-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0019BD88; /* jne: not equal / not zero */

loc_0019BD81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0019BE36;

loc_0019BD88: ;
    ebx = MEM32(ebp + 0x10);
    ecx = eax + esi * 2 + 0x28;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + eax + 0x7C;
    edi = MEM32(edx + 4);
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebx) = edi;
    edi = MEM32(edx + 4);
    ebx = MEM32(ebp + 0x14);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebx) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ecx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(edi);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + esi * 4 + 0x10) = MEM32(eax + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax + 0x10;
    goto loc_0019BDC7;

loc_0019BDC4: ;
    edi = MEM32(ebp + 0xC);

loc_0019BDC7: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019BDD2; /* ja: above (unsigned >) */

loc_0019BDCE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019BDD2: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0019BDEA; /* jne: not equal / not zero */

loc_0019BDE1: ;
    edi = ZX8(MEM8(eax + 0x62));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BDC4; /* jl: less (signed <) */

loc_0019BDEA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019BE0D; /* je: equal / zero */

loc_0019BDF0: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + 4);
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x48) = MEM32(eax + 0x48) - edi;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(edx + 4);
    ebx = MEM32(eax + 0x4C);
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x4C) = edi;

loc_0019BE0D: ;
    SET_LO16(eax, MEM16(eax + 0x40));
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BE1B; /* jl: less (signed <) */

loc_0019BE16: ;
    MEM16(ecx) = 0;

loc_0019BE1B: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    edx = MEM32(edx + esi * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019BE34; /* jne: not equal / not zero */

loc_0019BE2F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0019BE36;

loc_0019BE34: ;
    eax = edx;

loc_0019BE36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019BE3B
 * Original: 0x0019BE3B - 0x0019BE7B (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BE3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BE3B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx * 4 + 0x5241D4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x42);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019BE7A; /* jne: not equal / not zero */

loc_0019BE50: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x4C) = MEM32(eax + 0x4C) - ecx;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019BE7A; /* je: equal / zero */

loc_0019BE5D: ;
    eax = MEM32(0x523ED0);
    eax = eax * 8 + 0x523ED4;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ecx;
    MEM32(0x523ED0) = MEM32(0x523ED0) + 1;
    _fa = (uint32_t)(MEM32(0x523ED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019BE7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BE7B
 * Original: 0x0019BE7B - 0x0019BEC7 (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BE7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BE7B: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x523ED0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x523ED0), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019BEBE; /* jle: less or equal (signed <=) */

loc_0019BE86: ;
    PUSH32(esp, esi);
    esi = 0x523ED8;

loc_0019BE8C: ;
    _fa = (uint32_t)(MEM16(esi + -4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -4), 0 (16-bit) */
    ecx = ZX16(MEM16(esi + -2));
    eax = MEM32(ecx * 4 + 0x5241D4);
    PUSH32(esp, MEM32(eax + 0x5C));
    PUSH32(esp, MEM32(esi));
    if (CMP_NE(_fa, _fb)) goto loc_0019BEAC; /* jne: not equal / not zero */

loc_0019BEA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0019BEA7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019BEA4u); } /* indirect call */
    }

loc_0019BEA7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019BEB1;

loc_0019BEAC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0019BEAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019BEACu); } /* indirect call */
    }

loc_0019BEAF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019BEB1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523ED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x523ED0) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BE8C; /* jl: less (signed <) */

loc_0019BEBD: ;
    POP32(esp, esi);

loc_0019BEBE: ;
    MEM32(0x523ED0) = MEM32(0x523ED0) & 0;
    _fa = (uint32_t)(MEM32(0x523ED0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BEC7
 * Original: 0x0019BEC7 - 0x0019BF11 (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BEC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BEC7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x5241D4);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0019BEDBu); RECOMP_ABI_CALL(0x001960FFu, sub_001960FF); /* call 0x001960FF */

loc_0019BEDB: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0019BEE1u); RECOMP_ABI_CALL(0x0019BE7Bu, sub_0019BE7B); /* call 0x0019BE7B */

loc_0019BEE1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x62), LO8(ebx) (8-bit) */
    MEM32(esi) = 0xFFFFFFFFu;
    if (CMP_BE(_fa, _fb)) goto loc_0019BF0C; /* jbe: below or equal (unsigned <=) */

loc_0019BEEE: ;
    PUSH32(esp, edi);
    edi = esi + 0x64;

loc_0019BEF2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019BEFF; /* je: equal / zero */

loc_0019BEF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BEFEu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019BEFE: ;
    POP32(esp, ecx);

loc_0019BEFF: ;
    eax = ZX8(MEM8(esi + 0x62));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019BEF2; /* jl: less (signed <) */

loc_0019BF0B: ;
    POP32(esp, edi);

loc_0019BF0C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BF11
 * Original: 0x0019BF11 - 0x0019BF93 (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BF11(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BF11: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    _fb = (uint32_t)(MEM32(0x523EA8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x523EA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = 0x40000;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019BF31; /* jle: less or equal (signed <=) */

loc_0019BF2D: ;
    MEM32(esp + 0x10) = eax;

loc_0019BF31: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019BF82; /* jne: not equal / not zero */

loc_0019BF37: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0019BF3Eu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019BF3E: ;
    MEM32(esi + 0x50) = eax;
    _fa = (uint32_t)(MEM8(0x523CD6)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x523CD6), 0x32 (8-bit) */
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_0019BF4E; /* jb: below (unsigned <) */

loc_0019BF4B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019BF4E: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x50);
    MEM16(eax + 0x18) = 0xA0;
    eax = MEM32(esi + 0x50);
    MEM8(eax + 0x1A) = 0;
    eax = ZX8(MEM8(0x523B8F));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x50));
    PUSH32(esp, 0x0019BF73u); RECOMP_ABI_CALL(0x0019F9B1u, sub_0019F9B1); /* call 0x0019F9B1 */

loc_0019BF73: ;
    PUSH32(esp, MEM32(esi + 0x50));
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BF7Fu); RECOMP_ABI_CALL(0x0019C7C0u, sub_0019C7C0); /* call 0x0019C7C0 */

loc_0019BF7F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019BF82: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 0x50));
    PUSH32(esp, 0x0019BF8Eu); RECOMP_ABI_CALL(0x0019F7C3u, sub_0019F7C3); /* call 0x0019F7C3 */

loc_0019BF8E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BF93
 * Original: 0x0019BF93 - 0x0019C1C0 (557 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BF93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BF93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX16(MEM16(esi + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax + eax * 8;
    PUSH32(esp, edi);
    eax = ebp + -20;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(0x523BF4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019BFC4u); RECOMP_ABI_CALL(0x002ECD3Bu, sub_002ECD3B); /* call 0x002ECD3B */

loc_0019BFC4: ;
    eax = MEM32(ebp + -20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x24);
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esi + 0x18);
    edx = eax + eax * 8;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0019BFE4; /* jb: below (unsigned <) */

loc_0019BFDE: ;
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0019BFEB;

loc_0019BFE4: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019BFEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0019C1B8; /* jle: less or equal (signed <=) */

loc_0019BFF6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C05C; /* jne: not equal / not zero */

loc_0019BFFB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x23), 0 (8-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0019C03E; /* jbe: below or equal (unsigned <=) */

loc_0019C004: ;
    edi = ebx + 4;

loc_0019C007: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C01Au); RECOMP_ABI_CALL(0x0019BCE5u, sub_0019BCE5); /* call 0x0019BCE5 */

loc_0019C01A: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    edx = MEM32(0x5239B0);
    ecx = ecx + ecx * 8;
    ecx = MEM32(edx + ecx * 4 + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1C) = eax;
    eax = ZX8(MEM8(ebx + 0x23));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019C007; /* jl: less (signed <) */

loc_0019C03E: ;
    eax = MEM32(ebp + -12);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 0 (8-bit) */
    MEM32(esi + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0019C057; /* jne: not equal / not zero */

loc_0019C04C: ;
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_0019C059;

loc_0019C057: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019C059: ;
    MEM32(esi + 0x24) = eax;

loc_0019C05C: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019C0BF; /* je: equal / zero */

loc_0019C067: ;
    edi = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019C07D; /* jg: greater (signed >) */

loc_0019C075: ;
    MEM32(esi + 0x1C) = ecx;
    goto loc_0019C1AA;

loc_0019C07D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C085; /* jle: less or equal (signed <=) */

loc_0019C082: ;
    MEM32(ebp + -8) = eax;

loc_0019C085: ;
    eax = ZX8(MEM8(ebx + 0x23));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C0B7; /* jle: less or equal (signed <=) */

loc_0019C08D: ;
    edx = ebx + 4;

loc_0019C090: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    edi = MEM32(0x5239B0);
    eax = eax + eax * 8;
    eax = MEM32(edi + eax * 4 + 0x18);
    eax = MEM32(eax + 0x1C);
    edi = MEM32(esi + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + ecx * 4 + -56) = eax;
    eax = ZX8(MEM8(ebx + 0x23));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019C090; /* jl: less (signed <) */

loc_0019C0B7: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = edi;

loc_0019C0BF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0019C1A2;

loc_0019C0C7: ;
    edi = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) edi = eax; /* cmovg */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019C18E; /* jbe: below or equal (unsigned <=) */

loc_0019C0E0: ;
    eax = ebx + 4;
    MEM32(ebp + -16) = eax;

loc_0019C0E6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    ecx = MEM32(0x5239B0);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019C152; /* je: equal / zero */

loc_0019C102: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp + ebx * 4 + -56;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C119u); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_0019C119: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -24);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 0 (8-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0019C13C; /* jne: not equal / not zero */

loc_0019C131: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x24);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_0019C13E;

loc_0019C13C: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0019C13E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C14Au); RECOMP_ABI_CALL(0x0019BE3Bu, sub_0019BE3B); /* call 0x0019BE3B */

loc_0019C14A: ;
    ebx = MEM32(ebp + -28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019C177;

loc_0019C152: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019C177; /* jae: above or equal (unsigned >=) */

loc_0019C15A: ;
    eax = ZX16(MEM16(esi + 0xC));
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C172u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019C172: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0019C177: ;
    eax = ZX8(MEM8(ebx + 0x23));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 2;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019C0E6; /* jl: less (signed <) */

loc_0019C18B: ;
    eax = MEM32(ebp + -8);

loc_0019C18E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x14) (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0019C1A2; /* jb: below (unsigned <) */

loc_0019C19E: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019C1A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019C0C7; /* jg: greater (signed >) */

loc_0019C1AA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019BFF6; /* jg: greater (signed >) */

loc_0019C1B5: ;
    edx = MEM32(ebp + -20);

loc_0019C1B8: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019C1C0
 * Original: 0x0019C1C0 - 0x0019C1E7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C1C0: ;
    ecx = ZX8(MEM8(0x523A4D));
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x523BF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(ecx + 0x28));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C1E6; /* je: equal / zero */

loc_0019C1E3: ;
    eax = SX16(LO16(ecx));

loc_0019C1E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C1E7
 * Original: 0x0019C1E7 - 0x0019C231 (74 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C1E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C1E7: ;
    eax = ZX8(MEM8(0x523A4D));
    edx = MEM32(0x523BF4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + esi * 8;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(eax + 0x28));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C22D; /* je: equal / zero */

loc_0019C20D: ;
    eax = SX16(LO16(eax));
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019C21E: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C22F; /* je: equal / zero */

loc_0019C225: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019C21E; /* jl: less (signed <) */

loc_0019C22D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019C22F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C231
 * Original: 0x0019C231 - 0x0019C4F9 (712 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C231(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C231: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x5239B0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi + esi * 8;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x523BF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(0x523BF4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + esi * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + ecx + 0x1C) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019C331; /* je: equal / zero */

loc_0019C266: ;
    eax = ZX8(MEM8(edi + 0x23));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0019C2D2; /* jle: less or equal (signed <=) */

loc_0019C271: ;
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 4;
    MEM32(ebp + 0xC) = ecx;

loc_0019C27D: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 0x20);
    ecx = ZX8(MEM8(ecx + 7));
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x1C);
    eax = ZX8(MEM8(eax + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(0x523A4D));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C2B4u); RECOMP_ABI_CALL(0x00199CE6u, sub_00199CE6); /* call 0x00199CE6 */

loc_0019C2B4: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C2BDu); RECOMP_ABI_CALL(0x00196C66u, sub_00196C66); /* call 0x00196C66 */

loc_0019C2BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(edi + 0x23));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019C27D; /* jl: less (signed <) */

loc_0019C2D2: ;
    esi = edi + 4;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C2DEu); RECOMP_ABI_CALL(0x00196DDBu, sub_00196DDB); /* call 0x00196DDB */

loc_0019C2DE: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C2EAu); RECOMP_ABI_CALL(0x0019FB22u, sub_0019FB22); /* call 0x0019FB22 */

loc_0019C2EA: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C2F6u); RECOMP_ABI_CALL(0x0019FA2Eu, sub_0019FA2E); /* call 0x0019FA2E */

loc_0019C2F6: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C302u); RECOMP_ABI_CALL(0x0019F9E4u, sub_0019F9E4); /* call 0x0019F9E4 */

loc_0019C302: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019C4F2; /* jbe: below or equal (unsigned <=) */

loc_0019C30E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ZX8(MEM8(0x523A4D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C320u); RECOMP_ABI_CALL(0x00199E56u, sub_00199E56); /* call 0x00199E56 */

loc_0019C320: ;
    eax = ZX8(MEM8(edi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019C30E; /* jl: less (signed <) */

loc_0019C32C: ;
    goto loc_0019C4F2;

loc_0019C331: ;
    ecx = MEM32(0x5239B0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 3), 0x14 (8-bit) */
    MEM32(ebp + -20) = eax;
    eax = ZX16(MEM16(ecx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3116CC); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    if (CMP_NE(_fa, _fb)) goto loc_0019C375; /* jne: not equal / not zero */

loc_0019C358: ;
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x23) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x23;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x24);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = ebx;
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0019C37E;

loc_0019C375: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -12) = 1;

loc_0019C37E: ;
    _fa = (uint32_t)(MEM8(edi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x23), LO8(ebx) (8-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0019C48B; /* jbe: below or equal (unsigned <=) */

loc_0019C38D: ;
    esi = MEM32(ebp + -12);
    esi = esi + esi * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -16) = esi;
    goto loc_0019C39E;

loc_0019C39B: ;
    esi = MEM32(ebp + -16);

loc_0019C39E: ;
    _fa = (uint32_t)(MEM32(esi + 0x523998)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x523998), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019C3AF; /* jg: greater (signed >) */

loc_0019C3A6: ;
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C3AEu); RECOMP_ABI_CALL(0x0019624Eu, sub_0019624E); /* call 0x0019624E */

loc_0019C3AE: ;
    POP32(esp, ecx);

loc_0019C3AF: ;
    eax = esi + 0x523990;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C3BBu); RECOMP_ABI_CALL(0x0019B727u, sub_0019B727); /* call 0x0019B727 */

loc_0019C3BB: ;
    esi = eax;
    eax = MEM32(ebp + -16);
    eax = eax + 0x523978;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C3CDu); RECOMP_ABI_CALL(0x0019B6DEu, sub_0019B6DE); /* call 0x0019B6DE */

loc_0019C3CD: ;
    edx = MEM32(0x5239B0);
    ecx = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(edi + ecx * 2 + 4);
    eax = eax + eax * 8;
    MEM32(edx + eax * 4 + 0x18) = esi;
    SET_LO16(eax, MEM16(edi + ecx * 2 + 4));
    edx = MEM32(ebp + 8);
    MEM16(esi + 0xC) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + -12));
    MEM8(esi + 0xE) = LO8(eax);
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0019C437; /* jne: not equal / not zero */

loc_0019C413: ;
    ecx = ZX8(MEM8(edi + 0x23));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C420u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019C420: ;
    MEM32(esi + 0x10) = eax;
    ecx = ZX8(MEM8(edi + 0x23));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -8));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C432u); RECOMP_ABI_CALL(0x00197810u, sub_00197810); /* call 0x00197810 */

loc_0019C432: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019C446;

loc_0019C437: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -20);
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;

loc_0019C446: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C454u); RECOMP_ABI_CALL(0x002ED6B7u, sub_002ED6B7); /* call 0x002ED6B7 */

loc_0019C454: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C460u); RECOMP_ABI_CALL(0x002ECCFFu, sub_002ECCFF); /* call 0x002ECCFF */

loc_0019C460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C469u); RECOMP_ABI_CALL(0x002ECD5Bu, sub_002ECD5B); /* call 0x002ECD5B */

loc_0019C469: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax * 2 + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C477u); RECOMP_ABI_CALL(0x00196C66u, sub_00196C66); /* call 0x00196C66 */

loc_0019C477: ;
    eax = ZX8(MEM8(edi + 0x23));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0019C39B; /* jl: less (signed <) */

loc_0019C488: ;
    esi = MEM32(ebp + 0xC);

loc_0019C48B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C491u); RECOMP_ABI_CALL(0x00196DDBu, sub_00196DDB); /* call 0x00196DDB */

loc_0019C491: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C49Au); RECOMP_ABI_CALL(0x0019FA2Eu, sub_0019FA2E); /* call 0x0019FA2E */

loc_0019C49A: ;
    eax = ZX8(MEM8(edi + 0x23));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0019C4F2; /* js: sign (negative) */

loc_0019C4A4: ;
    edi = edi + eax * 2 + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;

loc_0019C4AC: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C4CAu); RECOMP_ABI_CALL(0x002ECC83u, sub_002ECC83); /* call 0x002ECC83 */

loc_0019C4CA: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    eax = eax + eax * 8;
    MEM8(ecx + eax * 4 + 0x1C) = 1;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x5239B0);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4 + 0x20) = esi;
    if ((_fa != 0)) goto loc_0019C4AC; /* jne: not equal / not zero */

loc_0019C4F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019C4F9
 * Original: 0x0019C4F9 - 0x0019C514 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C4F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C4F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019C4FB: ;
    ecx = MEM32(eax + 0x379B38);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(eax + 0x524250) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0019C4FB; /* jl: less (signed <) */

loc_0019C513: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C514
 * Original: 0x0019C514 - 0x0019C5B5 (161 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C514(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0019C514: ;
    ecx = MEM32(0x524264);
    PUSH32(esp, esi);
    esi = MEM32(0x524268);
    eax = ecx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019C530; /* jb: below (unsigned <) */

loc_0019C528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0019C530; /* jb: below (unsigned <) */

loc_0019C52C: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0019C533;

loc_0019C530: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019C533: ;
    ecx = MEM32(0x524260);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x524264) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x52425C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x524260) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(0x524258);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x52425C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(0x524258) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x524254)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x524254) = MEM32(0x524254) + eax;
    _fa = (uint32_t)(MEM32(0x524254)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x524254);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x524268) = esi;
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_0019C5B4; /* jne: not equal / not zero */

loc_0019C58E: ;
    MEM32(0x524264) = MEM32(0x524264) + 1;
    _fa = (uint32_t)(MEM32(0x524264)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019C5B4; /* jne: not equal / not zero */

loc_0019C596: ;
    MEM32(0x524260) = MEM32(0x524260) + 1;
    _fa = (uint32_t)(MEM32(0x524260)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019C5B4; /* jne: not equal / not zero */

loc_0019C59E: ;
    MEM32(0x52425C) = MEM32(0x52425C) + 1;
    _fa = (uint32_t)(MEM32(0x52425C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019C5B4; /* jne: not equal / not zero */

loc_0019C5A6: ;
    MEM32(0x524258) = MEM32(0x524258) + 1;
    _fa = (uint32_t)(MEM32(0x524258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019C5B4; /* jne: not equal / not zero */

loc_0019C5AE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x524254) = eax;

loc_0019C5B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C5B5
 * Original: 0x0019C5B5 - 0x0019C5CC (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C5B5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C5B5: ;
    ecx = MEM32(0x523BFC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = esi;
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C5CC
 * Original: 0x0019C5CC - 0x0019C665 (153 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C5CC(void)
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

loc_0019C5CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x301054)); /* movss */
    goto loc_0019C5E5;

loc_0019C5E1: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0019C5E5: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0019C5E1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0019C5EA: ;
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) - fp_top()); /* fsubr dword ptr [0x2fe99c] */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(ebp + -12)); /* fld float */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DBC)); /* fmul dword ptr [0x329dbc] */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DB8)); /* fmul dword ptr [0x329db8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DB4)); /* fmul dword ptr [0x329db4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DB0)); /* fmul dword ptr [0x329db0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DAC)); /* fmul dword ptr [0x329dac] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019C665
 * Original: 0x0019C665 - 0x0019C70F (170 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C665(void)
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

loc_0019C665: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x301054)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019C68B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0019C67D: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0019C67D; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0019C686: ;
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_0019C68B: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -8)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x317AA0)); /* fmul dword ptr [0x317aa0] */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 8) - fp_top()); /* fsubr dword ptr [ebp + 8] */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    fp_push(MEMF(ebp + -12)); /* fld float */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DD0)); /* fmul dword ptr [0x329dd0] */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    MEMF(ebp + -24) = xmm1.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DCC)); /* fmul dword ptr [0x329dcc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DC8)); /* fmul dword ptr [0x329dc8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DC4)); /* fmul dword ptr [0x329dc4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -24)); /* fmul dword ptr [ebp - 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x329DC0)); /* fmul dword ptr [0x329dc0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019C70F
 * Original: 0x0019C70F - 0x0019C73B (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C70F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C70F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, 0x0019C72Bu); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_0019C72B: ;
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C73B
 * Original: 0x0019C73B - 0x0019C751 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C73B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C73B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x19C70F;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C751
 * Original: 0x0019C751 - 0x0019C76C (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C751(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C751: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x1B) = LO8(ecx);
    MEM32(eax + 0x1C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0019C76C
 * Original: 0x0019C76C - 0x0019C7C0 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C76C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C76C: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C78C; /* je: equal / zero */

loc_0019C77A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;

loc_0019C77E: ;
    edi = ZX8(MEM8(ecx));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019C77E; /* jne: not equal / not zero */

loc_0019C78A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019C78C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C79C; /* jne: not equal / not zero */

loc_0019C791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C7BF; /* jle: less or equal (signed <=) */

loc_0019C796: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_0019C79C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C7AE; /* jne: not equal / not zero */

loc_0019C7A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C7BF; /* jle: less or equal (signed <=) */

loc_0019C7A8: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_0019C7AE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C7BF; /* jne: not equal / not zero */

loc_0019C7B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C7BF; /* jle: less or equal (signed <=) */

loc_0019C7BA: ;
    _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0019C7BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C7C0
 * Original: 0x0019C7C0 - 0x0019C800 (64 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C7C0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C7E6; /* je: equal / zero */

loc_0019C7D1: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x18));

loc_0019C7D6: ;
    _fa = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x18), LO16(esi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019C7E5; /* jae: above or equal (unsigned >=) */

loc_0019C7DC: ;
    edx = eax;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C7D6; /* jne: not equal / not zero */

loc_0019C7E5: ;
    POP32(esp, esi);

loc_0019C7E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019C7F0; /* je: equal / zero */

loc_0019C7ED: ;
    MEM32(eax + 0x10) = ecx;

loc_0019C7F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C7F8; /* jne: not equal / not zero */

loc_0019C7F4: ;
    MEM32(edi) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0019C7F8: ;
    MEM32(edx + 8) = ecx;
    MEM32(ecx + 0x10) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C800
 * Original: 0x0019C800 - 0x0019C844 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C800: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C81D; /* jne: not equal / not zero */

loc_0019C80C: ;
    eax = MEM32(eax + 8);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_0019C812: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C823; /* je: equal / zero */

loc_0019C81B: ;
    eax = ecx;

loc_0019C81D: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C812; /* jne: not equal / not zero */

loc_0019C823: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C843; /* je: equal / zero */

loc_0019C82A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C843; /* jne: not equal / not zero */

loc_0019C830: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C83A; /* je: equal / zero */

loc_0019C837: ;
    MEM32(ecx + 0x10) = eax;

loc_0019C83A: ;
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0019C843: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C844
 * Original: 0x0019C844 - 0x0019C8CA (134 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C844(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C844: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C887; /* jne: not equal / not zero */

loc_0019C84D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C86D; /* jne: not equal / not zero */

loc_0019C853: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C85C: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x10) = eax;
    MEM32(eax + 8) = ecx;

loc_0019C865: ;
    MEM8(eax + 0x1A) = 1;

loc_0019C869: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0019C86D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C873: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C87C: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x10) = eax;
    MEM32(eax + 0xC) = ecx;
    goto loc_0019C865;

loc_0019C887: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C88D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8A7; /* jne: not equal / not zero */

loc_0019C893: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C89C: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x14) = eax;
    MEM32(eax + 8) = ecx;
    goto loc_0019C8BF;

loc_0019C8A7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C8AD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019C8C5; /* jne: not equal / not zero */

loc_0019C8B6: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x14) = eax;
    MEM32(eax + 0xC) = ecx;

loc_0019C8BF: ;
    MEM8(eax + 0x1A) = 2;
    goto loc_0019C869;

loc_0019C8C5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C8CA
 * Original: 0x0019C8CA - 0x0019C968 (158 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C8CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C8CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x24), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0019C8E5; /* je: equal / zero */

loc_0019C8DA: ;
    MEM16(esi + 0x24) = MEM16(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x24)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(esi + 0x26) = 1;

loc_0019C8E5: ;
    edi = MEM32(ebp + 0xC);
    ebx = edi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019C90D; /* jge: greater or equal (signed >=) */

loc_0019C8F2: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C900; /* je: equal / zero */

loc_0019C8F9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C8FFu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019C8FF: ;
    POP32(esp, ecx);

loc_0019C900: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C906u); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019C906: ;
    POP32(esp, ecx);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edi;

loc_0019C90D: ;
    _fa = (uint32_t)(MEM16(esi + 0x26)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x26), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C94C; /* je: equal / zero */

loc_0019C914: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019C923u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019C921u); } /* indirect call */
    }

loc_0019C923: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C963; /* jle: less or equal (signed <=) */

loc_0019C92A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C936u); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_0019C936: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C942u); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_0019C942: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x26) = MEM16(esi + 0x26) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x26)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0019C961;

loc_0019C94C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C958u); RECOMP_ABI_CALL(0x00195918u, sub_00195918); /* call 0x00195918 */

loc_0019C958: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x24) = 1;

loc_0019C961: ;
    eax = edi;

loc_0019C963: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C968
 * Original: 0x0019C968 - 0x0019C97B (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C968(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C968: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C97A; /* je: equal / zero */

loc_0019C973: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019C979u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019C979: ;
    POP32(esp, ecx);

loc_0019C97A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C97B
 * Original: 0x0019C97B - 0x0019C9B0 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C97B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C97B: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x1B) = LO8(ecx);
    MEM32(eax + 4) = 0x19C968;
    MEM32(eax) = 0x19C8CA;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM16(eax + 0x24) = LO16(ecx);
    MEM16(eax + 0x26) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0019C9B0
 * Original: 0x0019C9B0 - 0x0019CA33 (131 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C9B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019C9E0; /* jle: less or equal (signed <=) */

loc_0019C9C0: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019C9CE; /* je: equal / zero */

loc_0019C9C7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C9CDu); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019C9CD: ;
    POP32(esp, ecx);

loc_0019C9CE: ;
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019C9DCu); RECOMP_ABI_CALL(0x0019798Fu, sub_0019798F); /* call 0x0019798F */

loc_0019C9DC: ;
    POP32(esp, ecx);
    MEM32(esi + 0x1C) = eax;

loc_0019C9E0: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019C9EFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019C9EDu); } /* indirect call */
    }

loc_0019C9EF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019CA2F; /* jle: less or equal (signed <=) */

loc_0019C9F6: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019CA05u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019CA03u); } /* indirect call */
    }

loc_0019CA05: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019CA2F; /* jle: less or equal (signed <=) */

loc_0019CA0C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019CA2D; /* jle: less or equal (signed <=) */

loc_0019CA12: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx + ecx * 4)); /* movss */
    eax = eax + ecx * 4;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0019CA12; /* jl: less (signed <) */

loc_0019CA2D: ;
    eax = edi;

loc_0019CA2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019CA33
 * Original: 0x0019CA33 - 0x0019CA5E (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA33(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CA33: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x1B) = LO8(ecx);
    MEM32(eax + 4) = 0x19C968;
    MEM32(eax) = 0x19C9B0;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0019CA5E
 * Original: 0x0019CA5E - 0x0019CB4D (239 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CA5E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    ebx = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(ecx + 0x24);
    eax = edx + eax * 4;
    if (CMP_AE(_fa, _fb)) goto loc_0019CB49; /* jae: above or equal (unsigned >=) */

loc_0019CA80: ;
    edx = MEM32(ebp + 0x10);
    xmm4 = XMM_SCALAR(MEMF(0x329DD4)); /* movss */
    PUSH32(esp, edi);
    edi = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0019CA94: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + -8); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + -4); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edx); /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x2C); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(edx + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax); /* addss */
    MEMF(esi) = xmm5.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esi + 4) = xmm5.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 8); /* addss */
    MEMF(edi + edx) = xmm5.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm5.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0019CA94; /* jb: below (unsigned <) */

loc_0019CB48: ;
    POP32(esp, edi);

loc_0019CB49: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0019CB4D
 * Original: 0x0019CB4D - 0x0019CBC5 (120 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CB4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CB4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0019CB76; /* je: equal / zero */

loc_0019CB60: ;
    ecx = ZX8(MEM8(esi + 0x1A));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019CB6Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019CB6Du); } /* indirect call */
    }

loc_0019CB6F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019CBC1; /* jle: less or equal (signed <=) */

loc_0019CB76: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -4) = eax;
    goto loc_0019CBB9;

loc_0019CB85: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019CB91; /* jl: less (signed <) */

loc_0019CB8D: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0019CB91: ;
    _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + -4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_G(_fas, _fbs)) edi = ebx; /* cmovg */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019CBA6u); RECOMP_ABI_CALL(0x0019CA5Eu, sub_0019CA5E); /* call 0x0019CA5E */

loc_0019CBA6: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019CBB9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019CB85; /* jg: greater (signed >) */

loc_0019CBBD: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebx);

loc_0019CBC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0019CBC5
 * Original: 0x0019CBC5 - 0x0019CBE2 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CBC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CBC5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019CBE0; /* je: equal / zero */

loc_0019CBD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019CBD7u); RECOMP_ABI_CALL(0x00197A91u, sub_00197A91); /* call 0x00197A91 */

loc_0019CBD7: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_0019CBE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019CBE2
 * Original: 0x0019CBE2 - 0x0019CC0D (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CBE2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CBE2: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x1B) = LO8(ecx);
    MEM32(eax + 4) = 0x19CBC5;
    MEM32(eax) = 0x19CB4D;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x1C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}
