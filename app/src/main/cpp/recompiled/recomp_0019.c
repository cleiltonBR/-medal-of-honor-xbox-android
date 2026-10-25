/**
 * Medal of Honor European Assault - Recompiled code chunk 19
 * Functions: 250 (0x0009C040 - 0x000A2485)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0009C040
 * Original: 0x0009C040 - 0x0009C129 (233 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C040: ;
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
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xEC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C058u); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_0009C058: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(edx + esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + esi + 8)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C0FFu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0009C0FF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    PUSH32(esp, 0xF4A6B7D5u);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C120u); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_0009C120: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C130
 * Original: 0x0009C130 - 0x0009C1E3 (179 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C130: ;
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
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    eax = esp + 0x20;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C179u); RECOMP_ABI_CALL(0x00084960u, sub_00084960); /* call 0x00084960 */

loc_0009C179: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x4C;
    PUSH32(esp, 0xF4A6B7D5u);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C19Au); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_0009C19A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    _fb = (uint32_t)(0xFFFFFF20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFF20u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x0009C1AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C1A9u); } /* indirect call */
    }

loc_0009C1AF: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C1B6u); RECOMP_ABI_CALL(0x0009B880u, sub_0009B880); /* call 0x0009B880 */

loc_0009C1B6: ;
    SET_LO8(eax, MEM8(edi + 0x104));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C1DB; /* je: equal / zero */

loc_0009C1C0: ;
    PUSH32(esp, 0);
    MEM8(edi + 0x104) = 0;
    MEM32(edi + 0x108) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C1D8u); RECOMP_ABI_CALL(0x00084470u, sub_00084470); /* call 0x00084470 */

loc_0009C1D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009C1DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C1F0
 * Original: 0x0009C1F0 - 0x0009C1F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C1F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C230(); return; /* tail jmp 0x0009C230 */

}

/**
 * sub_0009C200
 * Original: 0x0009C200 - 0x0009C208 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C200: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C230(); return; /* tail jmp 0x0009C230 */

}

/**
 * sub_0009C210
 * Original: 0x0009C210 - 0x0009C218 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C210: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C230(); return; /* tail jmp 0x0009C230 */

}

/**
 * sub_0009C220
 * Original: 0x0009C220 - 0x0009C22B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C220: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C230(); return; /* tail jmp 0x0009C230 */

}

/**
 * sub_0009C230
 * Original: 0x0009C230 - 0x0009C287 (87 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C230: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x30DA7C;
    MEM32(esi + 4) = 0x30DA64;
    MEM32(esi + 0x20) = 0x30D918;
    MEM32(esi + 0x28) = 0x30D90C;
    MEM32(esi + 0xE0) = 0x30D8FC;
    MEM32(0x3C3B38) = 0;
    MEM32(esi + 0xE0) = 0x30C284;
    PUSH32(esp, 0x0009C271u); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_0009C271: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009C281; /* je: equal / zero */

loc_0009C278: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C27Eu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009C27E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009C281: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C290
 * Original: 0x0009C290 - 0x0009C291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C290(void)
{

loc_0009C290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C2A0
 * Original: 0x0009C2A0 - 0x0009C2A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C2A0(void)
{

loc_0009C2A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C2B0
 * Original: 0x0009C2B0 - 0x0009C2B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C2B0(void)
{

loc_0009C2B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C2C0
 * Original: 0x0009C2C0 - 0x0009C2E0 (32 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C2C0: ;
    MEM32(ecx) = 0x30DC84;
    MEM32(ecx + 4) = 0x30DC6C;
    MEM32(ecx + 0x20) = 0x30DB20;
    MEM32(ecx + 0x28) = 0x30DB14;
    g_seh_ebp = ebp; sub_00097100(); return; /* tail jmp 0x00097100 */

}

/**
 * sub_0009C2E0
 * Original: 0x0009C2E0 - 0x0009C34A (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C2E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x0009C2F0u); RECOMP_ABI_CALL(0x00097080u, sub_00097080); /* call 0x00097080 */

loc_0009C2F0: ;
    MEM32(esi + 0x1C) = ebp;
    ebp = esi + 0xC;
    edi = esi + 4;
    ebx = esi + 0x20;
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi) = 0x30DC84;
    MEM32(edi) = 0x30DC6C;
    MEM32(ebx) = 0x30DB20;
    MEM32(esi + 0x28) = 0x30DB14;
    PUSH32(esp, 0x0009C31Du); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009C31D: ;
    PUSH32(esp, 0x30DAFC);
    ecx = ebp;
    PUSH32(esp, 0x0009C329u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009C329: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C32Fu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009C32F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009C337u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0009C337: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0xE0) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C350
 * Original: 0x0009C350 - 0x0009C3C1 (113 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0009C35Du); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0009C35D: ;
    SET_LO8(eax, MEM8(0x3C35A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C36D; /* je: equal / zero */

loc_0009C366: ;
    MEM8(esi + 0xC0) = 1;

loc_0009C36D: ;
    SET_LO8(eax, MEM8(esi + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C3BD; /* jne: not equal / not zero */

loc_0009C377: ;
    ecx = MEM32(0x3888C0);
    edx = MEM32(0x389418);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1FAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1FAC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009C390;

    /* nop */

loc_0009C390: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C3A1; /* jge: greater or equal (signed >=) */

loc_0009C394: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009C390; /* jl: less (signed <) */

loc_0009C39D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C3A1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 1);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    PUSH32(esp, 0x4395D999);
    PUSH32(esp, 0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C3BAu); RECOMP_ABI_CALL(0x00082710u, sub_00082710); /* call 0x00082710 */

loc_0009C3BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009C3BD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C3D0
 * Original: 0x0009C3D0 - 0x0009C456 (134 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C3D0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0009C434; /* jne: not equal / not zero */

loc_0009C3D9: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x0009C3E3u); RECOMP_ABI_CALL(0x00079E60u, sub_00079E60); /* call 0x00079E60 */

loc_0009C3E3: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C3F1u); RECOMP_ABI_CALL(0x00084360u, sub_00084360); /* call 0x00084360 */

loc_0009C3F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C452; /* je: equal / zero */

loc_0009C3F8: ;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0009C402u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009C402: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C41A; /* je: equal / zero */

loc_0009C409: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009C411u); RECOMP_ABI_CALL(0x0009C2E0u, sub_0009C2E0); /* call 0x0009C2E0 */

loc_0009C411: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C41A; /* je: equal / zero */

loc_0009C415: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009C41C;

loc_0009C41A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C41C: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C424u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009C424: ;
    PUSH32(esp, 2);
    ecx = 0x3888C0;
    PUSH32(esp, 0x0009C430u); RECOMP_ABI_CALL(0x00079100u, sub_00079100); /* call 0x00079100 */

loc_0009C430: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C434: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C452; /* jne: not equal / not zero */

loc_0009C439: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009C446u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009C446: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C452; /* je: equal / zero */

loc_0009C44A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009C452u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C450u); } /* indirect call */
    }

loc_0009C452: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C460
 * Original: 0x0009C460 - 0x0009C468 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C460: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C490(); return; /* tail jmp 0x0009C490 */

}

/**
 * sub_0009C470
 * Original: 0x0009C470 - 0x0009C478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C470: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C490(); return; /* tail jmp 0x0009C490 */

}

/**
 * sub_0009C480
 * Original: 0x0009C480 - 0x0009C488 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C480: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C490(); return; /* tail jmp 0x0009C490 */

}

/**
 * sub_0009C490
 * Original: 0x0009C490 - 0x0009C4C9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C490: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x30DC84;
    MEM32(esi + 4) = 0x30DC6C;
    MEM32(esi + 0x20) = 0x30DB20;
    MEM32(esi + 0x28) = 0x30DB14;
    PUSH32(esp, 0x0009C4B3u); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_0009C4B3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009C4C3; /* je: equal / zero */

loc_0009C4BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C4C0u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009C4C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009C4C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C4D0
 * Original: 0x0009C4D0 - 0x0009C4D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C4D0(void)
{

loc_0009C4D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009C4E0
 * Original: 0x0009C4E0 - 0x0009C513 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C4E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C4EDu); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0009C4ED: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C50F; /* je: equal / zero */

loc_0009C4F6: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009C505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C4FFu); } /* indirect call */
    }

loc_0009C505: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0009C50Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C509u); } /* indirect call */
    }

loc_0009C50F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009C520
 * Original: 0x0009C520 - 0x0009C637 (279 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C520: ;
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
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C53Du); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_0009C53D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7C9D217C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009C549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C546u); } /* indirect call */
    }

loc_0009C549: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C550u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009C550: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C556u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0009C556: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C55Eu); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0009C55E: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C580; /* je: equal / zero */

loc_0009C567: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0009C576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C570u); } /* indirect call */
    }

loc_0009C576: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0009C580u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C57Au); } /* indirect call */
    }

loc_0009C580: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE59470C6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009C58Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C589u); } /* indirect call */
    }

loc_0009C58C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C593u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009C593: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C599u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0009C599: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C5A1u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0009C5A1: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C5C3; /* je: equal / zero */

loc_0009C5AA: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009C5B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C5B3u); } /* indirect call */
    }

loc_0009C5B9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0009C5C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C5BDu); } /* indirect call */
    }

loc_0009C5C3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x92934050u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009C5CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C5CCu); } /* indirect call */
    }

loc_0009C5CF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C5D6u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009C5D6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C5DCu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0009C5DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C5E4u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0009C5E4: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C606; /* je: equal / zero */

loc_0009C5ED: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009C5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C5F6u); } /* indirect call */
    }

loc_0009C5FC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0009C606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C600u); } /* indirect call */
    }

loc_0009C606: ;
    edx = MEM32(esi);
    eax = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xE65886A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009C618u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C615u); } /* indirect call */
    }

loc_0009C618: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C61Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009C61F: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esi + 0x24;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009C631u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009C631: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C640
 * Original: 0x0009C640 - 0x0009C649 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C640: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0009C520(); return; /* tail jmp 0x0009C520 */

}

/**
 * sub_0009C650
 * Original: 0x0009C650 - 0x0009C6EE (158 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
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
    PUSH32(esp, 0x0009C67Cu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009C67C: ;
    eax = MEM32(esp + 0x14);
    ebp = esi + 0x24;
    ecx = ebp;
    MEM32(esi) = 0x30DD00;
    MEM32(edi) = 0x30DCE8;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0009C699u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0009C699: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0009C6A8u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009C6A8: ;
    PUSH32(esp, 0x30DCBC);
    ecx = ebx;
    PUSH32(esp, 0x0009C6B4u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009C6B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009C6BAu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009C6BA: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009C6C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C6C1u); } /* indirect call */
    }

loc_0009C6C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xE65886A);
    ecx = eax + 8;
    PUSH32(esp, 0x0009C6D4u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009C6D4: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = ebp;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C6E5u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009C6E5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C6F0
 * Original: 0x0009C6F0 - 0x0009C738 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C6F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x24;
    MEM32(esi) = 0x30DD00;
    MEM32(edi) = 0x30DCE8;
    PUSH32(esp, 0x0009C70Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009C70B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0009C71Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009C71D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0009C728u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009C728: ;
    ecx = edi;
    PUSH32(esp, 0x0009C72Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009C72F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C740
 * Original: 0x0009C740 - 0x0009C7A5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C740: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C784; /* jne: not equal / not zero */

loc_0009C748: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0009C750u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009C750: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C776; /* je: equal / zero */

loc_0009C75B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009C763u); RECOMP_ABI_CALL(0x0009C650u, sub_0009C650); /* call 0x0009C650 */

loc_0009C763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C776; /* je: equal / zero */

loc_0009C767: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C772u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009C772: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009C776: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C780u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009C780: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009C784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C7A2; /* jne: not equal / not zero */

loc_0009C789: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009C796u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009C796: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C7A2; /* je: equal / zero */

loc_0009C79A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009C7A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C7A0u); } /* indirect call */
    }

loc_0009C7A2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C7B0
 * Original: 0x0009C7B0 - 0x0009C7B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C7B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009C7C0(); return; /* tail jmp 0x0009C7C0 */

}

/**
 * sub_0009C7C0
 * Original: 0x0009C7C0 - 0x0009C81C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x24;
    MEM32(esi) = 0x30DD00;
    MEM32(edi) = 0x30DCE8;
    PUSH32(esp, 0x0009C7DBu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009C7DB: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0009C7EDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009C7ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0009C7F8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009C7F8: ;
    ecx = edi;
    PUSH32(esp, 0x0009C7FFu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009C7FF: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_0009C815; /* je: equal / zero */

loc_0009C80C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C812u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009C812: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009C815: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C820
 * Original: 0x0009C820 - 0x0009C851 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C820: ;
    eax = MEM32(0x373410);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x373410;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009C833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C830u); } /* indirect call */
    }

loc_0009C833: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C84E; /* je: equal / zero */

loc_0009C837: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009C83Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0009C83F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009C84Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C847u); } /* indirect call */
    }

loc_0009C84A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C837; /* jne: not equal / not zero */

loc_0009C84E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C860
 * Original: 0x0009C860 - 0x0009C891 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C860: ;
    eax = MEM32(0x373470);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x373470;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009C873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C870u); } /* indirect call */
    }

loc_0009C873: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C88E; /* je: equal / zero */

loc_0009C877: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009C87Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0009C87F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009C88Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C887u); } /* indirect call */
    }

loc_0009C88A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C877; /* jne: not equal / not zero */

loc_0009C88E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C8A0
 * Original: 0x0009C8A0 - 0x0009C8B7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C8A0(void)
{

loc_0009C8A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0009C8ACu); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_0009C8AC: ;
    PUSH32(esp, esi);
    ecx = esi + 0x60;
    PUSH32(esp, 0x0009C8B5u); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_0009C8B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C8C0
 * Original: 0x0009C8C0 - 0x0009C8C3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C8C0(void)
{

loc_0009C8C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C8D0
 * Original: 0x0009C8D0 - 0x0009C8DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C8D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C8D6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009C8D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009C8E0
 * Original: 0x0009C8E0 - 0x0009C932 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C8E0(void)
{

loc_0009C8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0009C8E9u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_0009C8E9: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x2C) = eax;
    edi = esi + 0x34;
    MEM8(esi + 0x30) = 1;
    ecx = edi;
    MEM32(esi) = 0x30DD70;
    PUSH32(esp, 0x0009C904u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_0009C904: ;
    MEM32(edi) = 0x30DD10;
    edi = esi + 0x60;
    ecx = edi;
    PUSH32(esp, 0x0009C914u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_0009C914: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = 0x30DD40;
    POP32(esp, edi);
    MEM8(esi + 0x90) = 0;
    MEM32(esi + 0x98) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009C940
 * Original: 0x0009C940 - 0x0009C9D0 (144 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5861A04C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009C955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C952u); } /* indirect call */
    }

loc_0009C955: ;
    ecx = eax;
    PUSH32(esp, 0x0009C95Cu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009C95C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C990; /* je: equal / zero */

loc_0009C960: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3543808E);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009C971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C96Eu); } /* indirect call */
    }

loc_0009C971: ;
    ecx = eax;
    PUSH32(esp, 0x0009C978u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009C978: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C983; /* je: equal / zero */

loc_0009C97C: ;
    PUSH32(esp, 0x0009C981u); RECOMP_ABI_CALL(0x0009D1F0u, sub_0009D1F0); /* call 0x0009D1F0 */

loc_0009C981: ;
    goto loc_0009C988;

loc_0009C983: ;
    PUSH32(esp, 0x0009C988u); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009C988: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C990u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009C990: ;
    SET_LO8(ecx, MEM8(0x3C3C04));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009C9BF; /* jne: not equal / not zero */

loc_0009C99F: ;
    ecx = MEM32(0x3C3C04);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C3C04) = ecx;
    PUSH32(esp, 0x0009C9B7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009C9B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C00) = eax;

loc_0009C9BF: ;
    ecx = MEM32(0x3C3C00);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009C9CDu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009C9CD: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C9D0
 * Original: 0x0009C9D0 - 0x0009CA17 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C9D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x30) = 0;
    SET_LO8(ecx, MEM8(0x3C3C0C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009CA06; /* jne: not equal / not zero */

loc_0009C9E6: ;
    ecx = MEM32(0x3C3C0C);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C3C0C) = ecx;
    PUSH32(esp, 0x0009C9FEu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009C9FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C08) = eax;

loc_0009CA06: ;
    eax = MEM32(0x3C3C08);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CA13u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CA13: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CA20
 * Original: 0x0009CA20 - 0x0009CAA0 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CA20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5861A04C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009CA36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CA33u); } /* indirect call */
    }

loc_0009CA36: ;
    ecx = eax;
    PUSH32(esp, 0x0009CA3Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CA3D: ;
    edx = MEM32(esi);
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CA50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CA4Du); } /* indirect call */
    }

loc_0009CA50: ;
    ecx = eax;
    PUSH32(esp, 0x0009CA57u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CA57: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CA5F; /* jne: not equal / not zero */

loc_0009CA5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CA9A; /* je: equal / zero */

loc_0009CA5F: ;
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0009CA78u); RECOMP_ABI_CALL(0x00079670u, sub_00079670); /* call 0x00079670 */

loc_0009CA78: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x0009CA82u); RECOMP_ABI_CALL(0x00079800u, sub_00079800); /* call 0x00079800 */

loc_0009CA82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CA9A; /* je: equal / zero */

loc_0009CA86: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CA9A; /* jne: not equal / not zero */

loc_0009CA8D: ;
    PUSH32(esp, 0x0009CA92u); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009CA92: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CA9Au); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CA9A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CAA0
 * Original: 0x0009CAA0 - 0x0009CB50 (176 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009CAA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009CAB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CAAEu); } /* indirect call */
    }

loc_0009CAB1: ;
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp);
    ebx = eax;
    MEM32(esp + 0x18) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0009CAC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CAC4u); } /* indirect call */
    }

loc_0009CAC7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x93264B9Fu);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CADEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CADBu); } /* indirect call */
    }

loc_0009CADE: ;
    ecx = eax;
    PUSH32(esp, 0x0009CAE5u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009CAE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CAEBu); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_0009CAEB: ;
    MEM8(edi + 0x90) = 0;
    ecx = MEM32(ebp + 8);
    MEM32(edi + 0x94) = ecx;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esp + 0x1C) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009CB0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB0Bu); } /* indirect call */
    }

loc_0009CB0E: ;
    ecx = eax;
    PUSH32(esp, 0x0009CB15u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0009CB15: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009CB26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB23u); } /* indirect call */
    }

loc_0009CB26: ;
    ecx = eax;
    PUSH32(esp, 0x0009CB2Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CB2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CB46; /* je: equal / zero */

loc_0009CB31: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CB46; /* je: equal / zero */

loc_0009CB39: ;
    PUSH32(esp, 0x0009CB3Eu); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009CB3E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CB46u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CB46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CB50
 * Original: 0x0009CB50 - 0x0009CBC2 (114 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CB50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009CB5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB5Au); } /* indirect call */
    }

loc_0009CB5D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    edi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0009CB6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB67u); } /* indirect call */
    }

loc_0009CB6A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32A8D7FF);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009CB7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB7Au); } /* indirect call */
    }

loc_0009CB7D: ;
    ecx = eax;
    PUSH32(esp, 0x0009CB84u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009CB84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CB8Au); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_0009CB8A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CBA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB9Du); } /* indirect call */
    }

loc_0009CBA0: ;
    ecx = eax;
    PUSH32(esp, 0x0009CBA7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CBA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CBBC; /* je: equal / zero */

loc_0009CBAB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CBBC; /* je: equal / zero */

loc_0009CBAF: ;
    PUSH32(esp, 0x0009CBB4u); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009CBB4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CBBCu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CBBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CBD0
 * Original: 0x0009CBD0 - 0x0009CC99 (201 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009CBDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CBDAu); } /* indirect call */
    }

loc_0009CBDD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC94; /* je: equal / zero */

loc_0009CBE7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, 0x5861A04C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CBFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CBF9u); } /* indirect call */
    }

loc_0009CBFC: ;
    ecx = eax;
    PUSH32(esp, 0x0009CC03u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CC03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC93; /* je: equal / zero */

loc_0009CC0B: ;
    SET_LO8(eax, MEM8(ebx + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CC86; /* jne: not equal / not zero */

loc_0009CC15: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7707B5);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CC26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CC23u); } /* indirect call */
    }

loc_0009CC26: ;
    ecx = eax;
    PUSH32(esp, 0x0009CC2Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CC2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC86; /* je: equal / zero */

loc_0009CC31: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009CC38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CC35u); } /* indirect call */
    }

loc_0009CC38: ;
    ebx = MEM32(edi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009CC43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CC40u); } /* indirect call */
    }

loc_0009CC43: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x93264B9Fu);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CC56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CC53u); } /* indirect call */
    }

loc_0009CC56: ;
    ecx = eax;
    PUSH32(esp, 0x0009CC5Du); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009CC5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CC63u); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_0009CC63: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC86; /* je: equal / zero */

loc_0009CC6A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CC7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CC78u); } /* indirect call */
    }

loc_0009CC7B: ;
    ecx = eax;
    PUSH32(esp, 0x0009CC82u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CC82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CC93; /* jne: not equal / not zero */

loc_0009CC86: ;
    PUSH32(esp, 0x0009CC8Bu); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009CC8B: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CC93u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CC93: ;
    POP32(esp, ebx);

loc_0009CC94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CCA0
 * Original: 0x0009CCA0 - 0x0009CD32 (146 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CCA0: ;
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
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009CCB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CCB5u); } /* indirect call */
    }

loc_0009CCB8: ;
    ecx = esp + 0x10;
    edi = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CCC7u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_0009CCC7: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(esi + 0x8C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009CCD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CCD6u); } /* indirect call */
    }

loc_0009CCD9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CCE0u); RECOMP_ABI_CALL(0x00117AB0u, sub_00117AB0); /* call 0x00117AB0 */

loc_0009CCE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CD04; /* je: equal / zero */

loc_0009CCE4: ;
    SET_LO8(ecx, MEM8(eax + 0x1158));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CD04; /* je: equal / zero */

loc_0009CCEE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CCF3u); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009CCF3: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CCFBu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CCFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009CD04: ;
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CD26u); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_0009CD26: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CD40
 * Original: 0x0009CD40 - 0x0009CDAA (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009CD4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CD4Bu); } /* indirect call */
    }

loc_0009CD4E: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009CD5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CD58u); } /* indirect call */
    }

loc_0009CD5B: ;
    esi = eax;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x8C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CD6Eu); RECOMP_ABI_CALL(0x00117AB0u, sub_00117AB0); /* call 0x00117AB0 */

loc_0009CD6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CD85; /* jne: not equal / not zero */

loc_0009CD72: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x8C);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CD85u); RECOMP_ABI_CALL(0x00120170u, sub_00120170); /* call 0x00120170 */

loc_0009CD85: ;
    edx = MEM32(eax + 0x1120);
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x1F4) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0009CD9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CD95u); } /* indirect call */
    }

loc_0009CD9B: ;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x8C) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CDB0
 * Original: 0x0009CDB0 - 0x0009CE31 (129 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CDB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5861A04C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009CDC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CDC3u); } /* indirect call */
    }

loc_0009CDC6: ;
    ecx = eax;
    PUSH32(esp, 0x0009CDCDu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CDCD: ;
    edx = MEM32(esi);
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CDE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CDDDu); } /* indirect call */
    }

loc_0009CDE0: ;
    ecx = eax;
    PUSH32(esp, 0x0009CDE7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CDE7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CDEF; /* jne: not equal / not zero */

loc_0009CDEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CE2B; /* je: equal / zero */

loc_0009CDEF: ;
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x0009CE08u); RECOMP_ABI_CALL(0x00079670u, sub_00079670); /* call 0x00079670 */

loc_0009CE08: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x0009CE12u); RECOMP_ABI_CALL(0x00079800u, sub_00079800); /* call 0x00079800 */

loc_0009CE12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CE2B; /* je: equal / zero */

loc_0009CE16: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CE2B; /* jne: not equal / not zero */

loc_0009CE1E: ;
    PUSH32(esp, 0x0009CE23u); RECOMP_ABI_CALL(0x0009D1F0u, sub_0009D1F0); /* call 0x0009D1F0 */

loc_0009CE23: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CE2Bu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CE2B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CE40
 * Original: 0x0009CE40 - 0x0009CF14 (212 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009CE4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CE4Au); } /* indirect call */
    }

loc_0009CE4D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF0F; /* je: equal / zero */

loc_0009CE57: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, 0x5861A04C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CE6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CE69u); } /* indirect call */
    }

loc_0009CE6C: ;
    ecx = eax;
    PUSH32(esp, 0x0009CE73u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CE73: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF0E; /* je: equal / zero */

loc_0009CE7B: ;
    SET_LO8(eax, MEM8(ebx + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF0E; /* je: equal / zero */

loc_0009CE86: ;
    SET_LO8(eax, MEM8(ebx + 0x90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF01; /* je: equal / zero */

loc_0009CE90: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC6BC1E65u);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CEA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CE9Eu); } /* indirect call */
    }

loc_0009CEA1: ;
    ecx = eax;
    PUSH32(esp, 0x0009CEA8u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CEA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF01; /* je: equal / zero */

loc_0009CEAC: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009CEB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CEB0u); } /* indirect call */
    }

loc_0009CEB3: ;
    ebx = MEM32(edi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009CEBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CEBBu); } /* indirect call */
    }

loc_0009CEBE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E7F4C73);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CECEu); } /* indirect call */
    }

loc_0009CED1: ;
    ecx = eax;
    PUSH32(esp, 0x0009CED8u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009CED8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CEDEu); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_0009CEDE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF01; /* je: equal / zero */

loc_0009CEE5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009CEF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CEF3u); } /* indirect call */
    }

loc_0009CEF6: ;
    ecx = eax;
    PUSH32(esp, 0x0009CEFDu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009CEFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009CF0E; /* jne: not equal / not zero */

loc_0009CF01: ;
    PUSH32(esp, 0x0009CF06u); RECOMP_ABI_CALL(0x0009D1F0u, sub_0009D1F0); /* call 0x0009D1F0 */

loc_0009CF06: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CF0Eu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009CF0E: ;
    POP32(esp, ebx);

loc_0009CF0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CF20
 * Original: 0x0009CF20 - 0x0009CF3D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CF20(void)
{

loc_0009CF20: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    MEM8(eax + 0x90) = 1;
    ecx = MEM32(ecx + 8);
    eax = MEM32(edx + 8);
    MEM32(ecx + 0x94) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CF40
 * Original: 0x0009CF40 - 0x0009CF5D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CF40(void)
{

loc_0009CF40: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    MEM8(eax + 0x90) = 0;
    ecx = MEM32(ecx + 8);
    eax = MEM32(edx + 8);
    MEM32(ecx + 0x94) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CF60
 * Original: 0x0009CF60 - 0x0009D037 (215 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009CF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0009D012; /* jne: not equal / not zero */

loc_0009CF76: ;
    PUSH32(esp, 0x9C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CF80u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009CF80: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF9D; /* je: equal / zero */

loc_0009CF8A: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CF99u); RECOMP_ABI_CALL(0x0009C8E0u, sub_0009C8E0); /* call 0x0009C8E0 */

loc_0009CF99: ;
    esi = eax;
    goto loc_0009CF9F;

loc_0009CF9D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009CF9F: ;
    ecx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFA7u); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_0009CFA7: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFAFu); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_0009CFAF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFB6u); RECOMP_ABI_CALL(0x0009C940u, sub_0009C940); /* call 0x0009C940 */

loc_0009CFB6: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFBEu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009CFBE: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x6E9FA2D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFCBu); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_0009CFCB: ;
    MEM32(esi + 0x8C) = eax;
    ecx = MEM32(edi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFDEu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_0009CFDE: ;
    edx = MEM32(esi);
    edi = MEM32(esi + 0x8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009CFF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CFF4u); } /* indirect call */
    }

loc_0009CFF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D007u); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_0009D007: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0009D012: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009D02F; /* jne: not equal / not zero */

loc_0009D017: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D023u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009D023: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D02F; /* je: equal / zero */

loc_0009D027: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009D02Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D02Du); } /* indirect call */
    }

loc_0009D02F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D040
 * Original: 0x0009D040 - 0x0009D1E7 (423 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009D05Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D058u); } /* indirect call */
    }

loc_0009D05B: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    MEM32(esp + 0x1C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0009D071u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D06Eu); } /* indirect call */
    }

loc_0009D071: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7F4C73);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0009D088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D085u); } /* indirect call */
    }

loc_0009D088: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D08Fu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009D08F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D095u); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_0009D095: ;
    MEM8(edi + 0x90) = 1;
    ecx = MEM32(ebx + 8);
    MEM32(edi + 0x94) = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(0x3E8D08);
    MEM8(esp + 0x23) = LO8(eax);
    eax = MEM32(edx + 0x8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0009D0C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D0BEu); } /* indirect call */
    }

loc_0009D0C1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D0C8u); RECOMP_ABI_CALL(0x00117AB0u, sub_00117AB0); /* call 0x00117AB0 */

loc_0009D0C8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D0EC; /* je: equal / zero */

loc_0009D0CE: ;
    _fa = (uint32_t)(MEM8(eax + 0x1158)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1158), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D0EC; /* je: equal / zero */

loc_0009D0D6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D0DBu); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009D0DB: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D0E3u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009D0E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009D0EC: ;
    ecx = esp + 0x20;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xB4) = 0x2FF02C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D115u); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_0009D115: ;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x28) = 8;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D135u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0009D135: ;
    PUSH32(esp, 0x9D6A46C2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D13Fu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0009D13F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D156; /* je: equal / zero */

loc_0009D146: ;
    PUSH32(esp, eax);
    edx = esp + 0x36;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D151u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0009D151: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009D16D;

loc_0009D156: ;
    PUSH32(esp, 0x9D6A46C2u);
    PUSH32(esp, 0x30DE08);
    PUSH32(esp, 0x30DDC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D16Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0009D16A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009D16D: ;
    ecx = MEM32(0x3E8D08);
    eax = esp + 0x20;
    MEM32(esp + 0x2C) = 0x16654D3A;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009D185u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D182u); } /* indirect call */
    }

loc_0009D185: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D18Cu); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_0009D18C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009D19Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D19Au); } /* indirect call */
    }

loc_0009D19D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D1A4u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009D1A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D1BB; /* je: equal / zero */

loc_0009D1A8: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D1BB; /* je: equal / zero */

loc_0009D1AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D1B3u); RECOMP_ABI_CALL(0x0009D230u, sub_0009D230); /* call 0x0009D230 */

loc_0009D1B3: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D1BBu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0009D1BB: ;
    ecx = MEM32(esp + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0xB4) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0009D1DE; /* je: equal / zero */

loc_0009D1D1: ;
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D1DEu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0009D1DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D1F0
 * Original: 0x0009D1F0 - 0x0009D226 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D1F0: ;
    SET_LO8(ecx, MEM8(0x3C3C04));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009D220; /* jne: not equal / not zero */

loc_0009D1FF: ;
    ecx = MEM32(0x3C3C04);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C3C04) = ecx;
    PUSH32(esp, 0x0009D217u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009D217: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C00) = eax;
    esp += 4; return; /* ret */

loc_0009D220: ;
    eax = MEM32(0x3C3C00);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D230
 * Original: 0x0009D230 - 0x0009D266 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D230: ;
    SET_LO8(ecx, MEM8(0x3C3C0C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009D260; /* jne: not equal / not zero */

loc_0009D23F: ;
    ecx = MEM32(0x3C3C0C);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C3C0C) = ecx;
    PUSH32(esp, 0x0009D257u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009D257: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C08) = eax;
    esp += 4; return; /* ret */

loc_0009D260: ;
    eax = MEM32(0x3C3C08);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D270
 * Original: 0x0009D270 - 0x0009D2A2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D270: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3733F0;
    /* nop */

loc_0009D280: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009D287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D284u); } /* indirect call */
    }

loc_0009D287: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009D29C; /* je: equal / zero */

loc_0009D28F: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009D297u); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0009D297: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009D280;

loc_0009D29C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D2B0
 * Original: 0x0009D2B0 - 0x0009D2CE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D2B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009D2B8u); RECOMP_ABI_CALL(0x0009D2D0u, sub_0009D2D0); /* call 0x0009D2D0 */

loc_0009D2B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009D2C8; /* je: equal / zero */

loc_0009D2BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D2C5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009D2C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009D2C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D2D0
 * Original: 0x0009D2D0 - 0x0009D2FD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x60;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x0009D2E1u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_0009D2E1: ;
    ecx = esi + 0x34;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x0009D2EFu); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_0009D2EF: ;
    MEM32(esi) = 0x307EF0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014C500(); return; /* tail jmp 0x0014C500 */

}

/**
 * sub_0009D300
 * Original: 0x0009D300 - 0x0009D316 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D300: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009D313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D310u); } /* indirect call */
    }

loc_0009D313: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009D320
 * Original: 0x0009D320 - 0x0009D327 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D320(void)
{

loc_0009D320: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D330
 * Original: 0x0009D330 - 0x0009D366 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D330: ;
    SET_LO8(ecx, MEM8(0x3C3C14));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009D360; /* jne: not equal / not zero */

loc_0009D33F: ;
    ecx = MEM32(0x3C3C14);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x30DDAC);
    MEM32(0x3C3C14) = ecx;
    PUSH32(esp, 0x0009D357u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009D357: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C10) = eax;
    esp += 4; return; /* ret */

loc_0009D360: ;
    eax = MEM32(0x3C3C10);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D370
 * Original: 0x0009D370 - 0x0009D3A6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D370: ;
    SET_LO8(ecx, MEM8(0x3C3C1C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009D3A0; /* jne: not equal / not zero */

loc_0009D37F: ;
    ecx = MEM32(0x3C3C1C);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C3C1C) = ecx;
    PUSH32(esp, 0x0009D397u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009D397: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C18) = eax;
    esp += 4; return; /* ret */

loc_0009D3A0: ;
    eax = MEM32(0x3C3C18);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D3B0
 * Original: 0x0009D3B0 - 0x0009D3E6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D3B0: ;
    SET_LO8(ecx, MEM8(0x3C3C24));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009D3E0; /* jne: not equal / not zero */

loc_0009D3BF: ;
    ecx = MEM32(0x3C3C24);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C3C24) = ecx;
    PUSH32(esp, 0x0009D3D7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009D3D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3C20) = eax;
    esp += 4; return; /* ret */

loc_0009D3E0: ;
    eax = MEM32(0x3C3C20);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D3F0
 * Original: 0x0009D3F0 - 0x0009D3F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D3F0(void)
{

loc_0009D3F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D400
 * Original: 0x0009D400 - 0x0009D412 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D400: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D40E; /* je: equal / zero */

loc_0009D40A: ;
    MEM8(ecx + 0x18) = LO8(eax);
    esp += 4; return; /* ret */

loc_0009D40E: ;
    MEM8(eax + 0x20) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D420
 * Original: 0x0009D420 - 0x0009D434 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D420: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D42D; /* je: equal / zero */

loc_0009D428: ;
    MEM8(eax + 0x18) = 1;
    esp += 4; return; /* ret */

loc_0009D42D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D440
 * Original: 0x0009D440 - 0x0009D447 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D440(void)
{

loc_0009D440: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D450
 * Original: 0x0009D450 - 0x0009D459 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D450: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0009D460
 * Original: 0x0009D460 - 0x0009D497 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30DE94;
    MEM32(esi + 8) = 0x30DE90;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009D47Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009D47D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009D488u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009D488: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0009D4A0
 * Original: 0x0009D4A0 - 0x0009D4AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D4A0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0009D4B0
 * Original: 0x0009D4B0 - 0x0009D4BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D4B0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D4C0
 * Original: 0x0009D4C0 - 0x0009D551 (145 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D4C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0x2FF77C;
    ebp = esi + 0x10;
    ecx = ebp;
    MEM32(esi) = 0x30DE94;
    MEM32(edi) = 0x30DE90;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0009D4F2u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009D4F2: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0009D4FAu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009D4FA: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0009D50Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009D50D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0009D532; /* je: equal / zero */

loc_0009D513: ;
    PUSH32(esp, 0x30DE38);
    PUSH32(esp, 0x0009D51Du); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009D51D: ;
    PUSH32(esp, esi);
    MEM8(esi + 0x20) = 1;
    PUSH32(esp, 0x0009D527u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009D527: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009D532: ;
    PUSH32(esp, 0x30DE78);
    PUSH32(esp, 0x0009D53Cu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009D53C: ;
    PUSH32(esp, esi);
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0x0009D546u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009D546: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D560
 * Original: 0x0009D560 - 0x0009D5BE (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D560: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009D59D; /* jne: not equal / not zero */

loc_0009D568: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0009D570u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009D570: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D58F; /* je: equal / zero */

loc_0009D57B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009D583u); RECOMP_ABI_CALL(0x0009D4C0u, sub_0009D4C0); /* call 0x0009D4C0 */

loc_0009D583: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D58Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009D58B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009D58F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D599u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009D599: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009D59D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009D5BB; /* jne: not equal / not zero */

loc_0009D5A2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009D5AFu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009D5AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D5BB; /* je: equal / zero */

loc_0009D5B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009D5BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D5B9u); } /* indirect call */
    }

loc_0009D5BB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D5C0
 * Original: 0x0009D5C0 - 0x0009D5C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D5C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009D5D0(); return; /* tail jmp 0x0009D5D0 */

}

/**
 * sub_0009D5D0
 * Original: 0x0009D5D0 - 0x0009D61C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30DE94;
    MEM32(esi + 8) = 0x30DE90;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009D5EDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009D5ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009D5F8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009D5F8: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x0009D606u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009D606: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009D616; /* je: equal / zero */

loc_0009D60D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009D613u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009D613: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009D616: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009D620
 * Original: 0x0009D620 - 0x0009D66B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0009D620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D62D; /* je: equal / zero */

loc_0009D628: ;
    ecx = eax + -8;
    goto loc_0009D62F;

loc_0009D62D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009D62F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x11C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009D658; /* jp: parity */

loc_0009D647: ;
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009D657u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009D657: ;
    esp += 4; return; /* ret */

loc_0009D658: ;
    eax = MEM32(ecx + 0x11C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009D66Au); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009D66A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D670
 * Original: 0x0009D670 - 0x0009D698 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D689; /* je: equal / zero */

loc_0009D678: ;
    ecx = MEM32(eax + 0x140);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009D688u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0009D688: ;
    esp += 4; return; /* ret */

loc_0009D689: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 0x148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D697u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0009D697: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D6A0
 * Original: 0x0009D6A0 - 0x0009D6A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6A0(void)
{

loc_0009D6A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D6B0
 * Original: 0x0009D6B0 - 0x0009D6B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6B0(void)
{

loc_0009D6B0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0009D6C0
 * Original: 0x0009D6C0 - 0x0009D6C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D6C0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0009D6D0
 * Original: 0x0009D6D0 - 0x0009D6E7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6D0(void)
{

loc_0009D6D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x9C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009D6F0
 * Original: 0x0009D6F0 - 0x0009D764 (116 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D6F0(void)
{
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

loc_0009D6F0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3C3C5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D732; /* je: equal / zero */

loc_0009D6FA: ;
    eax = MEM32(0x3C3C60);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C3C60) = eax;
    fp_push((double)SMEM32(0x3C3C60)); /* fild */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009D721u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009D721: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009D760; /* jbe: below or equal (unsigned <=) */

loc_0009D72E: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009D732: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3C3C80);
    PUSH32(esp, 0x0009D740u); RECOMP_ABI_CALL(0x00266320u, sub_00266320); /* call 0x00266320 */

loc_0009D740: ;
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3C3C58)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009D760; /* jbe: below or equal (unsigned <=) */

loc_0009D74F: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(0x3C3C58) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009D760: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009D770
 * Original: 0x0009D770 - 0x0009D7C0 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0009D770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D77D; /* je: equal / zero */

loc_0009D778: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009D77F;

loc_0009D77D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009D77F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x100)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF9B4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM8(eax + 0x134) = 1;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D7AF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009D7A9: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0009D7AF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x29);
    PUSH32(esp, ecx);
    ecx = eax + 0x38;
    PUSH32(esp, 0x0009D7BFu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009D7BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009D7C0
 * Original: 0x0009D7C0 - 0x0009D83F (127 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30E02C;
    MEM32(esi + 8) = 0x30E028;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009D7DDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009D7DD: ;
    eax = MEM32(esi + 0x14C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D7FD; /* je: equal / zero */

loc_0009D7EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009D7F0u); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_0009D7F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14C) = 0;

loc_0009D7FD: ;
    ecx = esi + 0x80;
    PUSH32(esp, 0x0009D808u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009D808: ;
    ecx = esi + 0x68;
    PUSH32(esp, 0x0009D810u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009D810: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x0009D818u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009D818: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x0009D820u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009D820: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0009D828u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0009D828: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009D830u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009D830: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0009D840
 * Original: 0x0009D840 - 0x0009D84B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009D840: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0009D850
 * Original: 0x0009D850 - 0x0009D85A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009D850: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009D860
 * Original: 0x0009D860 - 0x0009DAC3 (611 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009D860(void)
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

loc_0009D860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = 1;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = ebx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x54) = ebx;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = 0x30E010;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = ebx;
    MEM8(esp + 0x78) = LO8(ebx);
    MEM8(esp + 0x79) = LO8(ebx);
    MEM8(esp + 0x7A) = LO8(ebx);
    MEM8(esp + 0x7B) = LO8(ebx);
    MEM8(esp + 0xA0) = LO8(ebx);
    MEM32(esp + 0x9C) = 0x302BAC;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D931u); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009D931: ;
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    ecx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D945u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0009D945: ;
    edx = MEM32(esi + 0xC);
    eax = esp + 0x9C;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x60) = ebx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D967u); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009D967: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D971u); RECOMP_ABI_CALL(0x00130D50u, sub_00130D50); /* call 0x00130D50 */

loc_0009D971: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D97B; /* je: equal / zero */

loc_0009D978: ;
    ebx = eax + 0x30;

loc_0009D97B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D986u); RECOMP_ABI_CALL(0x00149510u, sub_00149510); /* call 0x00149510 */

loc_0009D986: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = ZX16(LO16(eax));
    MEM32(esp + 0x50) = edx;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esi + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DA1Fu); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009DA1F: ;
    edx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DA2Au); RECOMP_ABI_CALL(0x00149510u, sub_00149510); /* call 0x00149510 */

loc_0009DA2A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x88); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x8C); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x90); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    eax = ZX16(LO16(eax));
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x68) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DA96u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0009DA96: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp + 0x64) = ecx;
    ecx = esp + 0x28;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x74) = 0xA;
    MEM32(esp + 0x70) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DABBu); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_0009DABB: ;
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
 * sub_0009DAD0
 * Original: 0x0009DAD0 - 0x0009DB97 (199 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DAD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DB8E; /* je: equal / zero */

loc_0009DAF1: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DAFAu); RECOMP_ABI_CALL(0x0009F640u, sub_0009F640); /* call 0x0009F640 */

loc_0009DAFA: ;
    PUSH32(esp, edi);
    ecx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DB04u); RECOMP_ABI_CALL(0x00142510u, sub_00142510); /* call 0x00142510 */

loc_0009DB04: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x144) = ebx;
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DB3Eu); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009DB3E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DB4Cu); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0009DB4C: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = esp + 0x24;
    MEM32(esp + 0x74) = ecx;
    ecx = esp + 0x38;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x84) = 0xA;
    MEM32(esp + 0x80) = 0x64;
    MEM8(esp + 0x89) = 1;
    MEM8(esp + 0x88) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DB8Eu); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_0009DB8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009DBA0
 * Original: 0x0009DBA0 - 0x0009DBA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DBA0(void)
{

loc_0009DBA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DBB0
 * Original: 0x0009DBB0 - 0x0009DC59 (169 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DBB0(void)
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

loc_0009DBB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009DBBE; /* je: equal / zero */

loc_0009DBB9: ;
    esi = eax + -8;
    goto loc_0009DBC0;

loc_0009DBBE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009DBC0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x118)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x114); /* comiss */
    MEM8(esi + 0x108) = 0;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DBF4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x114)) */

loc_0009DBD8: ;
    eax = MEM32(esi + 0x118);
    ecx = MEM32(esi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009DBEBu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009DBEB: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009DC02;

loc_0009DBF4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0009DC02: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DC26; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0009DC11: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x81452B10u);
    PUSH32(esp, edx);
    ecx = esi + 0x68;
    PUSH32(esp, 0x0009DC24u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009DC24: ;
    goto loc_0009DC2D;

loc_0009DC26: ;
    MEM8(esi + 0x108) = 1;

loc_0009DC2D: ;
    SET_LO8(eax, MEM8(esi + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009DC57; /* jne: not equal / not zero */

loc_0009DC37: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DC57; /* je: equal / zero */

loc_0009DC41: ;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DC57; /* je: equal / zero */

loc_0009DC4B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009DC57u); RECOMP_ABI_CALL(0x0009DAD0u, sub_0009DAD0); /* call 0x0009DAD0 */

loc_0009DC57: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009DC60
 * Original: 0x0009DC60 - 0x0009DCA2 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009DC60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DC6D; /* je: equal / zero */

loc_0009DC68: ;
    ecx = eax + -8;
    goto loc_0009DC6F;

loc_0009DC6D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009DC6F: ;
    SET_LO8(eax, MEM8(ecx + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DCA1; /* je: equal / zero */

loc_0009DC79: ;
    eax = MEM32(ecx + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009DCA1; /* jbe: below or equal (unsigned <=) */

loc_0009DC83: ;
    eax = MEM32(ecx + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DCA1; /* je: equal / zero */

loc_0009DC8D: ;
    SET_LO8(edx, MEM8(ecx + 0x12E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DCA1; /* je: equal / zero */

loc_0009DC97: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009DCA1u); RECOMP_ABI_CALL(0x0009DAD0u, sub_0009DAD0); /* call 0x0009DAD0 */

loc_0009DCA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009DCB0
 * Original: 0x0009DCB0 - 0x0009DE95 (485 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DCB0(void)
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

loc_0009DCB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 8;
    MEM32(esi + 4) = ebx;
    MEM32(edi) = 0x2FF77C;
    ebp = esi + 0x10;
    ecx = ebp;
    MEM32(esi) = 0x30E02C;
    MEM32(edi) = 0x30E028;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0009DCE1u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009DCE1: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0009DCE9u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0009DCE9: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x0009DCF1u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0009DCF1: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x0009DCF9u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0009DCF9: ;
    ecx = esi + 0x68;
    PUSH32(esp, 0x0009DD01u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0009DD01: ;
    ecx = esi + 0x80;
    PUSH32(esp, 0x0009DD0Cu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0009DD0C: ;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x148) = ebx;
    MEM32(esi + 0x14C) = ebx;
    PUSH32(esp, 0x0009DD2Cu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009DD2C: ;
    PUSH32(esp, 0x30DFF8);
    ecx = ebp;
    PUSH32(esp, 0x0009DD38u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009DD38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009DD3Eu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009DD3E: ;
    ecx = MEM32(esi + 0xC);
    SET_LO8(eax, 1);
    MEM8(esi + 0x134) = LO8(eax);
    MEM8(esi + 0x108) = LO8(eax);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0009DD6Cu); RECOMP_ABI_CALL(0x000368C0u, sub_000368C0); /* call 0x000368C0 */

loc_0009DD6C: ;
    PUSH32(esp, 0x8C97120Au);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0009DD7Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009DD7A: ;
    PUSH32(esp, 0x9F0798CEu);
    ecx = esp + 0x18;
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x0009DD8Eu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009DD8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DDA5; /* je: equal / zero */

loc_0009DD92: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DDA5; /* je: equal / zero */

loc_0009DD96: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009DD9Cu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0009DD9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = eax;

loc_0009DDA5: ;
    PUSH32(esp, 0xC70EEE44u);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0009DDB3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DDB3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0xB03954B);
    ecx = esp + 0x18;
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009DDCDu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DDCD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0xE8B7ECB);
    ecx = esp + 0x18;
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009DDE7u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DDE7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0xB7ADE5BAu);
    ecx = esp + 0x18;
    MEMF(esi + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009DE01u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DE01: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0x55E6A0BC);
    ecx = esp + 0x18;
    MEMF(esi + 0x118) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009DE1Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DE1B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0xF5F25DD);
    ecx = esp + 0x18;
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009DE35u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DE35: ;
    MEMF(esi + 0x124) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xE83080D4u);
    ecx = esp + 0x18;
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009DE54u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DE54: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    PUSH32(esp, 0xC2350B37u);
    ecx = esp + 0x18;
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009DE70u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009DE70: ;
    POP32(esp, edi);
    MEM8(esi + 0x12E) = LO8(eax);
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x144) = ebx;
    MEM32(esi + 0x13C) = 0xFFFFFFFFu;
    eax = esi;
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
 * sub_0009DEA0
 * Original: 0x0009DEA0 - 0x0009E037 (407 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009DEA0(void)
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

loc_0009DEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(0x523510);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009DEB5u); RECOMP_ABI_CALL(0x0018ABE0u, sub_0018ABE0); /* call 0x0018ABE0 */

loc_0009DEB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x130) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009E035; /* je: equal / zero */

loc_0009DEC3: ;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x3C2F40;
    PUSH32(esp, 0x0009DED4u); RECOMP_ABI_CALL(0x00181EF0u, sub_00181EF0); /* call 0x00181EF0 */

loc_0009DED4: ;
    edi = eax;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x12C) = LO8(edx);
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(eax + 0x28);
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0xF4) = edx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    MEMF(esi + 0xFC) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3D90EB26);
    ecx = eax + 8;
    PUSH32(esp, 0x0009DF24u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009DF24: ;
    MEMF(esi + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x12C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DF39; /* je: equal / zero */

loc_0009DF34: ;
    edx = MEM32(edi + 8);
    goto loc_0009DF56;

loc_0009DF39: ;
    eax = MEM32(esi + 0x130);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x3C2F40;
    PUSH32(esp, 0x0009DF4Fu); RECOMP_ABI_CALL(0x00181F20u, sub_00181F20); /* call 0x00181F20 */

loc_0009DF4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DF5C; /* je: equal / zero */

loc_0009DF53: ;
    edx = MEM32(eax + 0x48);

loc_0009DF56: ;
    MEM32(esi + 0xF8) = edx;

loc_0009DF5C: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x2C7F3620);
    ecx = eax + 8;
    PUSH32(esp, 0x0009DF6Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009DF6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E02E; /* je: equal / zero */

loc_0009DF78: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x822450A9u);
    ecx = eax + 8;
    PUSH32(esp, 0x0009DF8Bu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009DF8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009DF91u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0009DF91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DFE6; /* je: equal / zero */

loc_0009DF98: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009DFA8u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_0009DFA8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x148) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009DFE6; /* je: equal / zero */

loc_0009DFB5: ;
    edx = MEM32(eax);
    ecx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009DFC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009DFC0u); } /* indirect call */
    }

loc_0009DFC6: ;
    ecx = MEM32(esi + 0x148);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009DFD3u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0009DFD3: ;
    edx = MEM32(esi + 0x148);
    ecx = MEM32(edx + 0xCC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009DFE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009DFE3u); } /* indirect call */
    }

loc_0009DFE6: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xB8D31F36u);
    ecx = eax + 8;
    PUSH32(esp, 0x0009DFF9u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009DFF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009DFFFu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0009DFFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E02E; /* je: equal / zero */

loc_0009E006: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E010u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_0009E010: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009E02E; /* je: equal / zero */

loc_0009E01D: ;
    edx = MEM32(eax);
    ecx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009E02Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E028u); } /* indirect call */
    }

loc_0009E02E: ;
    MEM8(esi + 0x12D) = 1;

loc_0009E035: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E040
 * Original: 0x0009E040 - 0x0009E229 (489 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E040(void)
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

loc_0009E040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x144);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E066; /* je: equal / zero */

loc_0009E05D: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E066u); RECOMP_ABI_CALL(0x0009DAD0u, sub_0009DAD0); /* call 0x0009DAD0 */

loc_0009E066: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(edi + 0xC);
    eax = 1;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = ebx;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ebx;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x24) = 0x30E010;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM8(esp + 0x74) = LO8(ebx);
    MEM8(esp + 0x75) = LO8(ebx);
    MEM8(esp + 0x76) = LO8(ebx);
    MEM8(esp + 0x77) = LO8(ebx);
    MEM8(esp + 0x84) = LO8(ebx);
    MEM32(esp + 0x80) = 0x302BAC;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E125u); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009E125: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E139u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0009E139: ;
    eax = MEM32(edi + 0xC);
    ecx = esp + 0x7C;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E154u); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009E154: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E15Eu); RECOMP_ABI_CALL(0x00130D50u, sub_00130D50); /* call 0x00130D50 */

loc_0009E15E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E16A; /* je: equal / zero */

loc_0009E165: ;
    esi = eax + 0x30;
    goto loc_0009E16C;

loc_0009E16A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009E16C: ;
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E177u); RECOMP_ABI_CALL(0x00149510u, sub_00149510); /* call 0x00149510 */

loc_0009E177: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = ZX16(LO16(eax));
    MEM32(esp + 0x48) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = MEM32(edi + 0x144);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x54) = ebx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x5C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEM32(esp + 0x6C) = 0xA;
    MEM32(esp + 0x68) = 0x64;
    MEM8(esp + 0x70) = 1;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM8(esp + 0x71) = LO8(ebx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0009E220; /* jne: not equal / not zero */

loc_0009E211: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E21Au); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_0009E21A: ;
    MEM32(edi + 0x144) = eax;

loc_0009E220: ;
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
 * sub_0009E230
 * Original: 0x0009E230 - 0x0009E342 (274 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E230(void)
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

loc_0009E230: ;
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
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E272; /* je: equal / zero */

loc_0009E246: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009E24Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E248u); } /* indirect call */
    }

loc_0009E24B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E272; /* je: equal / zero */

loc_0009E24F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0009E2D0;

loc_0009E272: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E2D0; /* je: equal / zero */

loc_0009E279: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E2C3; /* je: equal / zero */

loc_0009E27F: ;
    edx = MEM32(ecx);
    edi = 0x30E044;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009E289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E286u); } /* indirect call */
    }

loc_0009E289: ;
    esi = eax;
    ecx = 0xB;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0009E2C3; /* jne: not equal / not zero */

loc_0009E296: ;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E29Eu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009E29E: ;
    SET_LO8(ecx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E2AC; /* je: equal / zero */

loc_0009E2A5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    goto loc_0009E2C8;

loc_0009E2AC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0009E2D0;

loc_0009E2C3: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);

loc_0009E2C8: ;
    ecx = MEM32(ebx + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E2D0u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0009E2D0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FF028)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0009E33B; /* ja: above (unsigned >) */

loc_0009E2FA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E304u); RECOMP_ABI_CALL(0x0009D6F0u, sub_0009D6F0); /* call 0x0009D6F0 */

loc_0009E304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E33B; /* je: equal / zero */

loc_0009E30B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(0x3C3C70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(0x3C3C74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(0x3C3C78) = xmm0.f[0]; /* movss */
    MEM32(0x3C3C54) = ebx;

loc_0009E33B: ;
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
 * sub_0009E350
 * Original: 0x0009E350 - 0x0009E3B1 (97 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009E350: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E390; /* jne: not equal / not zero */

loc_0009E358: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x0009E363u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009E363: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E382; /* je: equal / zero */

loc_0009E36E: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009E376u); RECOMP_ABI_CALL(0x0009DCB0u, sub_0009DCB0); /* call 0x0009DCB0 */

loc_0009E376: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E37Eu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009E37E: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009E382: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009E38Cu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009E38C: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009E390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E3AE; /* jne: not equal / not zero */

loc_0009E395: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009E3A2u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009E3A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E3AE; /* je: equal / zero */

loc_0009E3A6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009E3AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E3ACu); } /* indirect call */
    }

loc_0009E3AE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0009E3C0
 * Original: 0x0009E3C0 - 0x0009E445 (133 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009E3C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E3CE; /* je: equal / zero */

loc_0009E3C9: ;
    esi = eax + -8;
    goto loc_0009E3D0;

loc_0009E3CE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009E3D0: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0009E3E3u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009E3E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E431; /* je: equal / zero */

loc_0009E3E7: ;
    SET_LO8(ecx, MEM8(0x3C3CA8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009E425; /* jne: not equal / not zero */

loc_0009E3F6: ;
    edx = MEM32(0x3C3CA8);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B40);
    MEM32(0x3C3CA8) = edx;
    MEM32(0x3C3CA0) = 0x2FF7D4;
    MEM32(0x3C3CA4) = 2;
    PUSH32(esp, 0x0009E422u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0009E422: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009E425: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3CA0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009E431u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E42Eu); } /* indirect call */
    }

loc_0009E431: ;
    SET_LO8(eax, MEM8(esi + 0x12D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009E443; /* jne: not equal / not zero */

loc_0009E43B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0009DEA0(); return; /* tail jmp 0x0009DEA0 */

loc_0009E443: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009E450
 * Original: 0x0009E450 - 0x0009E50A (186 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E450(void)
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

loc_0009E450: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E45E; /* je: equal / zero */

loc_0009E459: ;
    esi = eax + -8;
    goto loc_0009E460;

loc_0009E45E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009E460: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0009E470u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x38;
    PUSH32(esp, 0x0009E480u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E480: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x108) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0009E4A7; /* je: equal / zero */

loc_0009E491: ;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E4A7; /* je: equal / zero */

loc_0009E49B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009E4A7u); RECOMP_ABI_CALL(0x0009E040u, sub_0009E040); /* call 0x0009E040 */

loc_0009E4A7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x110)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E4E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10C)) */

loc_0009E4B8: ;
    ecx = MEM32(esi + 0x110);
    edx = MEM32(esi + 0x10C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009E4CBu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009E4CB: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x548A2653);
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, 0x0009E4E5u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E4E5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009E4E7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x548A2653);
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, 0x0009E508u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E508: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E510
 * Original: 0x0009E510 - 0x0009E5B7 (167 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E510(void)
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

loc_0009E510: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E51E; /* je: equal / zero */

loc_0009E519: ;
    esi = eax + -8;
    goto loc_0009E520;

loc_0009E51E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009E520: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x108) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0009E547; /* je: equal / zero */

loc_0009E531: ;
    SET_LO8(ecx, MEM8(esi + 0x12E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E547; /* je: equal / zero */

loc_0009E53B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009E547u); RECOMP_ABI_CALL(0x0009E040u, sub_0009E040); /* call 0x0009E040 */

loc_0009E547: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x110)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E574; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10C)) */

loc_0009E558: ;
    ecx = MEM32(esi + 0x110);
    edx = MEM32(esi + 0x10C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009E56Bu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009E56B: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009E582;

loc_0009E574: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0009E582: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x548A2653);
    PUSH32(esp, eax);
    ecx = esi + 0x68;
    PUSH32(esp, 0x0009E595u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E595: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0009E5A5u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E5A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x38;
    PUSH32(esp, 0x0009E5B5u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009E5B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009E5C0
 * Original: 0x0009E5C0 - 0x0009ED28 (1896 bytes, 460 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009E5C0(void)
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

loc_0009E5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x29970E08);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E5E1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009E5E1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF3A8)); /* movss */
    MEMF(0x3C3C58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x3C3C70) = xmm0.f[0]; /* movss */
    MEMF(0x3C3C74) = xmm0.f[0]; /* movss */
    MEMF(0x3C3C78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    MEMF(0x3C3C80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE4)); /* movss */
    MEMF(0x3C3C84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    MEMF(0x3C3C88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    SET_LO8(edx, MEM8(esi + 0x134));
    ecx = MEM32(esi + 0x13C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    MEM8(0x3C3C5C) = LO8(eax);
    eax = MEM32(esi + 0x138);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC8)); /* movss */
    MEM32(0x3C3C60) = ebx;
    MEM32(0x3C3C54) = eax;
    MEM32(0x3C3C50) = ecx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0009E86C; /* jne: not equal / not zero */

loc_0009E698: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E78A; /* je: equal / zero */

loc_0009E6A0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E6A6u); RECOMP_ABI_CALL(0x0009E230u, sub_0009E230); /* call 0x0009E230 */

loc_0009E6A6: ;
    fp_push(MEMF(0x3C3C70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3C3C70)); /* fmul dword ptr [0x3c3c70] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x3C3C74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3C3C74)); /* fmul dword ptr [0x3c3c74] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x3C3C78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3C3C78)); /* fmul dword ptr [0x3c3c78] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FF028)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0009E86C; /* ja: above (unsigned >) */

loc_0009E6E3: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C3C70)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C3C80); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3C3C74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C3C84); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3C3C78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C3C88); /* subss */
    ecx = esp + 0x30;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E72Eu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_0009E72E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(esi + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E86A; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esi + 0x120)) */

loc_0009E770: ;
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009E78A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009E86C; /* jne: not equal / not zero */

loc_0009E792: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E86C; /* je: equal / zero */

loc_0009E79B: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E7A1u); RECOMP_ABI_CALL(0x00030800u, sub_00030800); /* call 0x00030800 */

loc_0009E7A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E86C; /* je: equal / zero */

loc_0009E7AC: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0009E7B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E7B6u); } /* indirect call */
    }

loc_0009E7B9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x3C3C70) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C3C80); /* subss */
    MEMF(0x3C3C74) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3C3C84); /* subss */
    MEMF(0x3C3C78) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3C3C88); /* subss */
    ecx = esp + 0x30;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E812u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_0009E812: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E86C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x120)) */

loc_0009E84B: ;
    ecx = MEM32(ebp + 8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E85Du); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0009E85D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009E86A: ;
    fp_pop(); /* fstp st(0) */

loc_0009E86C: ;
    ecx = MEM32(esi + 0xC);
    MEM8(esi + 0x134) = 0;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xB117D33Bu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E886u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009E886: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E986; /* je: equal / zero */

loc_0009E88E: ;
    eax = MEM32(0x3E8D08);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x303CFC); /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x3C3C88); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3C3C84); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C3C80); /* subss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm3 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009E936; /* jnp: not parity */

loc_0009E916: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */

loc_0009E936: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E986; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x120)) */

loc_0009E962: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEM32(esi + 0x138) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009E986: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x14FBE435);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E999u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009E999: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EB1F; /* je: equal / zero */

loc_0009E9A1: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xBAA082BCu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E9B4u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009E9B4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009E9F6; /* je: equal / zero */

loc_0009E9BA: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0009E9F6; /* jle: less or equal (signed <=) */

loc_0009E9BF: ;
    ecx = edi + 4;
    MEM32(esp + 0x1C) = ecx;
    goto loc_0009E9D0;

    /* nop */
    /* nop */

loc_0009E9D0: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx);
    PUSH32(esp, 0x9E230);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E9E1u); RECOMP_ABI_CALL(0x0014B700u, sub_0014B700); /* call 0x0014B700 */

loc_0009E9E1: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0009E9D0; /* jl: less (signed <) */

loc_0009E9F6: ;
    fp_push(MEMF(0x3C3C70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3C3C70)); /* fmul dword ptr [0x3c3c70] */
    fp_push(MEMF(0x3C3C74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3C3C74)); /* fmul dword ptr [0x3c3c74] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x3C3C78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3C3C78)); /* fmul dword ptr [0x3c3c78] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FF028)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0009EB1F; /* ja: above (unsigned >) */

loc_0009EA30: ;
    fp_push(MEMF(0x3C3C70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3C3C80)); /* fsub dword ptr [0x3c3c80] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C3C74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3C3C84)); /* fsub dword ptr [0x3c3c84] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_push(MEMF(0x3C3C78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3C3C88)); /* fsub dword ptr [0x3c3c88] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009EAC3; /* jnp: not parity */

loc_0009EAA2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0009EAC9;

loc_0009EAC3: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_0009EAC9: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009EB1F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x120)) */

loc_0009EAF5: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(0x3C3C54);
    MEM32(esi + 0x138) = ecx;
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009EB1F: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xE94DDA3Du);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EB32u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009EB32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009ECFC; /* je: equal / zero */

loc_0009EB3A: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x43A08CC6);
    ecx = eax + 8;
    MEM8(esp + 0x1F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EB52u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0009EB52: ;
    MEM32(esp + 0x1C) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009EB58: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EB5Eu); RECOMP_ABI_CALL(0x00030800u, sub_00030800); /* call 0x00030800 */

loc_0009EB5E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EBF7; /* je: equal / zero */

loc_0009EB6B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0009EB72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EB6Fu); } /* indirect call */
    }

loc_0009EB72: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009EBEA; /* jbe: below or equal (unsigned <=) */

loc_0009EB80: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0009EB87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EB84u); } /* indirect call */
    }

loc_0009EB87: ;
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009EBEA; /* jne: not equal / not zero */

loc_0009EB90: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0009EB9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EB9Bu); } /* indirect call */
    }

loc_0009EB9E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EBA4u); RECOMP_ABI_CALL(0x0009D6F0u, sub_0009D6F0); /* call 0x0009D6F0 */

loc_0009EBA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EBEA; /* je: equal / zero */

loc_0009EBAB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x23) = 1;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009EBBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EBBBu); } /* indirect call */
    }

loc_0009EBBE: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x3C3C70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0x3C3C74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(0x3C3C78) = xmm0.f[0]; /* movss */
    MEM32(0x3C3C50) = ebx;

loc_0009EBEA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0009EB58; /* jl: less (signed <) */

loc_0009EBF7: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009ECF2; /* je: equal / zero */

loc_0009EC03: ;
    fp_push(MEMF(0x3C3C70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3C3C80)); /* fsub dword ptr [0x3c3c80] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C3C74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3C3C84)); /* fsub dword ptr [0x3c3c84] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_push(MEMF(0x3C3C78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3C3C88)); /* fsub dword ptr [0x3c3c88] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009EC96; /* jnp: not parity */

loc_0009EC75: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_0009EC9C;

loc_0009EC96: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_0009EC9C: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(esi + 0x120); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009ECFC; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esi + 0x120)) */

loc_0009ECC8: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(0x3C3C50);
    MEM32(esi + 0x13C) = ecx;
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009ECF2: ;
    MEM32(esi + 0x13C) = 0xFFFFFFFFu;

loc_0009ECFC: ;
    edx = MEM32(esi + 0xC0);
    fp_push(MEMF(0x2FE99C)); /* fld float */
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0xC4);
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0xC8);
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
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
 * sub_0009ED30
 * Original: 0x0009ED30 - 0x0009F637 (2311 bytes, 524 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ED30(void)
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

loc_0009ED30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009ED4B; /* je: equal / zero */

loc_0009ED46: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009ED4D;

loc_0009ED4B: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009ED4D: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F630; /* je: equal / zero */

loc_0009ED5B: ;
    SET_LO8(eax, MEM8(esi + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F630; /* je: equal / zero */

loc_0009ED69: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EE88; /* je: equal / zero */

loc_0009ED77: ;
    ecx = eax + 0xC4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0009ED82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009ED7Fu); } /* indirect call */
    }

loc_0009ED82: ;
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    XMM_STORE(esi + 0xC0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    edi = esi + 0xB0;
    XMM_STORE(edi + 0x20, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x98);
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x9C);
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
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0009EE66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EE63u); } /* indirect call */
    }

loc_0009EE66: ;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EE75u); RECOMP_ABI_CALL(0x0009F6C0u, sub_0009F6C0); /* call 0x0009F6C0 */

loc_0009EE75: ;
    ecx = MEM32(esi + 0x14C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EE88; /* je: equal / zero */

loc_0009EE7F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009EE88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EE82u); } /* indirect call */
    }

loc_0009EE88: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EE94u); RECOMP_ABI_CALL(0x0009E5C0u, sub_0009E5C0); /* call 0x0009E5C0 */

loc_0009EE94: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = MEM32(esi + 0x130);
    SET_LO8(ecx, MEM8(esi + 0x12C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EEE4; /* je: equal / zero */

loc_0009EED7: ;
    xmm0 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    goto loc_0009F1F5;

loc_0009EEE4: ;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x3C2F40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EEF4u); RECOMP_ABI_CALL(0x00181F20u, sub_00181F20); /* call 0x00181F20 */

loc_0009EEF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F1ED; /* je: equal / zero */

loc_0009EEFC: ;
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0009F1ED; /* je: equal / zero */

loc_0009EF06: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009EF6F; /* jp: parity */

loc_0009EF61: ;
    xmm1 = XMM_SCALAR(MEMF(0x30E05C)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_0009EF6F: ;
    ecx = esp + 0x50;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EF7Eu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_0009EF7E: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm6; /* movaps */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x30E058); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm2.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] / xmm6.f[0]; /* divss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x2FF504); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(0x304BE4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x30E054); /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x30E050); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] / xmm5.f[0]; /* divss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x30105C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F142; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0009F06C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x2FF504); /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F0DF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0009F08F: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm4.f[0]; /* divss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0009F0BB; /* jb: below (unsigned <) */

loc_0009F0B5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    goto loc_0009F12F;

loc_0009F0BB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0009F142; /* jb: below (unsigned <) */

loc_0009F0D9: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    goto loc_0009F12F;

loc_0009F0DF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm4.f[0]; /* divss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0009F10B; /* jb: below (unsigned <) */

loc_0009F105: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    goto loc_0009F12F;

loc_0009F10B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0009F142; /* jb: below (unsigned <) */

loc_0009F12B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */

loc_0009F12F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F134u); RECOMP_ABI_CALL(0x002BE594u, sub_002BE594); /* call 0x002BE594 */

loc_0009F134: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    goto loc_0009F146;

loc_0009F142: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */

loc_0009F146: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F1DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009F1D6: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0009F1FB;

loc_0009F1DE: ;
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F1FB; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_0009F1E3: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    goto loc_0009F1F5;

loc_0009F1ED: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_0009F1F5: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0009F1FB: ;
    edx = MEM32(esi + 0xF4);
    eax = MEM32(esi + 0xF0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F20Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009F20E: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esi + 0xD0;
    PUSH32(esp, edx);
    ecx = esp + 0xD8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F22Du); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_0009F22D: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F239u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009F239: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F249u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_0009F249: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0xD8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F261u); RECOMP_ABI_CALL(0x00265ED0u, sub_00265ED0); /* call 0x00265ED0 */

loc_0009F261: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xD0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xF0)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x12C));
    xmm2 = XMM_SCALAR(MEMF(esp + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xD4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    SET_LO8(edx, LO8(eax));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xD8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x124)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x128); /* addss */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(9)) >> 32) & 1);
    edx = edx + 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    ecx = edx;
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F36E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009F35D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    ecx = 0xFF;
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */

loc_0009F36E: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x130);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    edi = esi + 0xE0;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = 0x3C2F40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F3A5u); RECOMP_ABI_CALL(0x00182050u, sub_00182050); /* call 0x00182050 */

loc_0009F3A5: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 0x12C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009F499; /* jne: not equal / not zero */

loc_0009F3B5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F499; /* je: equal / zero */

loc_0009F3BD: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    eax = esp + 0x40;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F458u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_0009F458: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F469u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_0009F469: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F47Au); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_0009F47A: ;
    PUSH32(esp, edi);
    ecx = esp + 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F487u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0009F487: ;
    eax = MEM32(ebx);
    ecx = esp + 0xD0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0009F499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F493u); } /* indirect call */
    }

loc_0009F499: ;
    eax = MEM32(esi + 0x148);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0009F581; /* je: equal / zero */

loc_0009F4AC: ;
    xmm0 = XMM_MEM(esi + 0xB0); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xC0); /* movaps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xD0); /* movaps */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xE0); /* movaps */
    PUSH32(esp, 0x41490FDB);
    PUSH32(esp, 0);
    XMM_STORE(esp + 0xC8, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F4F4u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009F4F4: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esp + 0x98;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F52Eu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0009F52E: ;
    ecx = MEM32(esi + 0x148);
    eax = MEM32(ecx);
    edx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0009F544u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F53Eu); } /* indirect call */
    }

loc_0009F544: ;
    ecx = MEM32(esi + 0x148);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F550u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0009F550: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3DCCCCCD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F55Fu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009F55F: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x148);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F571u); RECOMP_ABI_CALL(0x000FC700u, sub_000FC700); /* call 0x000FC700 */

loc_0009F571: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F581u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009F581: ;
    ecx = MEM32(esi + 0x14C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F590; /* je: equal / zero */

loc_0009F58B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F590u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_0009F590: ;
    SET_LO8(eax, MEM8(esi + 0x12E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F5AE; /* je: equal / zero */

loc_0009F59A: ;
    eax = MEM32(esi + 0x130);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x38));
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F5AEu); RECOMP_ABI_CALL(0x0009D860u, sub_0009D860); /* call 0x0009D860 */

loc_0009F5AE: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F5C1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009F5C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F60F; /* je: equal / zero */

loc_0009F5C5: ;
    _fa = (uint32_t)(MEM8(0x3C3CB4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C3CB4), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0009F5FC; /* jne: not equal / not zero */

loc_0009F5CD: ;
    edx = MEM32(0x3C3CB4);
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B50);
    MEM32(0x3C3CB4) = edx;
    MEM32(0x3C3CAC) = 0x2FF7D4;
    MEM32(0x3C3CB0) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F5F9u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0009F5F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F5FC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3CAC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009F608u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F605u); } /* indirect call */
    }

loc_0009F608: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0009F60F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF9B4); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F630u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009F630: ;
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
 * sub_0009F640
 * Original: 0x0009F640 - 0x0009F6A8 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F640: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    edx = 1;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x34) = edx;
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x30E010;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM8(eax + 0x50) = LO8(ecx);
    MEM8(eax + 0x51) = LO8(ecx);
    MEM8(eax + 0x52) = LO8(ecx);
    MEM8(eax + 0x53) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F6B0
 * Original: 0x0009F6B0 - 0x0009F6B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F6B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009F760(); return; /* tail jmp 0x0009F760 */

}

/**
 * sub_0009F6C0
 * Original: 0x0009F6C0 - 0x0009F705 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    eax = MEM32(ebp + 8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    PUSH32(esp, eax);
    PUSH32(esp, 0x534370);
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F6FFu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0009F6FF: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F710
 * Original: 0x0009F710 - 0x0009F751 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = esp + 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F74Bu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0009F74B: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F760
 * Original: 0x0009F760 - 0x0009F77E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F760: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009F768u); RECOMP_ABI_CALL(0x0009D7C0u, sub_0009D7C0); /* call 0x0009D7C0 */

loc_0009F768: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009F778; /* je: equal / zero */

loc_0009F76F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009F775u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009F775: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F778: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F780
 * Original: 0x0009F780 - 0x0009F781 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F780(void)
{

loc_0009F780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F790
 * Original: 0x0009F790 - 0x0009F797 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F790(void)
{

loc_0009F790: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F7A0
 * Original: 0x0009F7A0 - 0x0009F7A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F7A0: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0009F7B0
 * Original: 0x0009F7B0 - 0x0009F7CF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F7B0(void)
{

loc_0009F7B0: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0009F7BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F7B8u); } /* indirect call */
    }

loc_0009F7BB: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, edx);
    ecx = eax + 0x1440;
    PUSH32(esp, 0x0009F7CEu); RECOMP_ABI_CALL(0x00128E30u, sub_00128E30); /* call 0x00128E30 */

loc_0009F7CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F7D0
 * Original: 0x0009F7D0 - 0x0009F827 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F7D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    MEM32(edi + 4) = 0;
    ebx = esi + 0x10;
    ecx = ebx;
    MEM32(esi) = 0x30E174;
    MEM32(edi) = 0x30E15C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0009F802u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009F802: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0009F80Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009F80A: ;
    PUSH32(esp, 0x30E0F0);
    ecx = ebx;
    PUSH32(esp, 0x0009F816u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009F816: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009F81Cu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009F81C: ;
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
 * sub_0009F830
 * Original: 0x0009F830 - 0x0009F864 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30E174;
    MEM32(edi) = 0x30E15C;
    PUSH32(esp, 0x0009F849u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009F849: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009F854u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009F854: ;
    ecx = edi;
    PUSH32(esp, 0x0009F85Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009F85B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F870
 * Original: 0x0009F870 - 0x0009F87A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F870: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009F880
 * Original: 0x0009F880 - 0x0009F8E5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F880: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F8C4; /* jne: not equal / not zero */

loc_0009F888: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0009F890u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009F890: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F8B6; /* je: equal / zero */

loc_0009F89B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009F8A3u); RECOMP_ABI_CALL(0x0009F7D0u, sub_0009F7D0); /* call 0x0009F7D0 */

loc_0009F8A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F8B6; /* je: equal / zero */

loc_0009F8A7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F8B2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009F8B2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009F8B6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009F8C0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009F8C0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009F8C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009F8E2; /* jne: not equal / not zero */

loc_0009F8C9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009F8D6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009F8D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F8E2; /* je: equal / zero */

loc_0009F8DA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009F8E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F8E0u); } /* indirect call */
    }

loc_0009F8E2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F8F0
 * Original: 0x0009F8F0 - 0x0009F960 (112 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009F900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F8FDu); } /* indirect call */
    }

loc_0009F900: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x0009F910u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009F910: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F95E; /* je: equal / zero */

loc_0009F914: ;
    SET_LO8(ecx, MEM8(0x3C3CC0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009F952; /* jne: not equal / not zero */

loc_0009F923: ;
    edx = MEM32(0x3C3CC0);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B60);
    MEM32(0x3C3CC0) = edx;
    MEM32(0x3C3CB8) = 0x2FF7D4;
    MEM32(0x3C3CBC) = 2;
    PUSH32(esp, 0x0009F94Fu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0009F94F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F952: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3CB8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009F95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F95Bu); } /* indirect call */
    }

loc_0009F95E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F960
 * Original: 0x0009F960 - 0x0009F9A3 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0009F976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F973u); } /* indirect call */
    }

loc_0009F976: ;
    edi = MEM32(ebp + 8);
    edx = MEM32(edi + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F98Eu); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_0009F98E: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F99Au); RECOMP_ABI_CALL(0x00113E00u, sub_00113E00); /* call 0x00113E00 */

loc_0009F99A: ;
    MEM32(edi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F9B0
 * Original: 0x0009F9B0 - 0x0009F9C8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F9B0(void)
{

loc_0009F9B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xC500FB4Du);
    ecx = eax + 8;
    PUSH32(esp, 0x0009F9C7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009F9C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F9D0
 * Original: 0x0009F9D0 - 0x0009F9D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009F9D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009F9E0(); return; /* tail jmp 0x0009F9E0 */

}

/**
 * sub_0009F9E0
 * Original: 0x0009F9E0 - 0x0009FA28 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30E174;
    MEM32(edi) = 0x30E15C;
    PUSH32(esp, 0x0009F9F9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009F9F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009FA04u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009FA04: ;
    ecx = edi;
    PUSH32(esp, 0x0009FA0Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009FA0B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_0009FA21; /* je: equal / zero */

loc_0009FA18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009FA1Eu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009FA1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FA21: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009FA30
 * Original: 0x0009FA30 - 0x0009FA31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FA30(void)
{

loc_0009FA30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FA40
 * Original: 0x0009FA40 - 0x0009FA47 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FA40(void)
{

loc_0009FA40: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FA50
 * Original: 0x0009FA50 - 0x0009FA59 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FA50: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0009FA60
 * Original: 0x0009FA60 - 0x0009FAB7 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FA60: ;
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
    MEM32(esi) = 0x30E210;
    MEM32(edi) = 0x30E20C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0009FA92u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009FA92: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0009FA9Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009FA9A: ;
    PUSH32(esp, 0x30E1F4);
    ecx = ebx;
    PUSH32(esp, 0x0009FAA6u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009FAA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009FAACu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009FAAC: ;
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
 * sub_0009FAC0
 * Original: 0x0009FAC0 - 0x0009FAF7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30E210;
    MEM32(esi + 8) = 0x30E20C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009FADDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009FADD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009FAE8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009FAE8: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_0009FB00
 * Original: 0x0009FB00 - 0x0009FB0B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FB00: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_0009FB10
 * Original: 0x0009FB10 - 0x0009FB1A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FB10: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009FB20
 * Original: 0x0009FB20 - 0x0009FB7E (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FB20: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009FB5D; /* jne: not equal / not zero */

loc_0009FB28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0009FB30u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009FB30: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FB4F; /* je: equal / zero */

loc_0009FB3B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009FB43u); RECOMP_ABI_CALL(0x0009FA60u, sub_0009FA60); /* call 0x0009FA60 */

loc_0009FB43: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FB4Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009FB4B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009FB4F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FB59u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009FB59: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009FB5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009FB7B; /* jne: not equal / not zero */

loc_0009FB62: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009FB6Fu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009FB6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FB7B; /* je: equal / zero */

loc_0009FB73: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009FB7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FB79u); } /* indirect call */
    }

loc_0009FB7B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FB80
 * Original: 0x0009FB80 - 0x0009FCA7 (295 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FB80(void)
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

loc_0009FB80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009FB92; /* je: equal / zero */

loc_0009FB8D: ;
    edi = eax + -8;
    goto loc_0009FB94;

loc_0009FB92: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009FB94: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x9EF51A14u);
    ecx = esi;
    PUSH32(esp, 0x0009FBA9u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FBA9: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x7F29E296);
    ecx = esi;
    PUSH32(esp, 0x0009FBB9u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FBB9: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x42DAA93F);
    ecx = esi;
    PUSH32(esp, 0x0009FBC9u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FBC9: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009FBD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FBD1u); } /* indirect call */
    }

loc_0009FBD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x88EEDF25u);
    ecx = esi;
    PUSH32(esp, 0x0009FBE1u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FBE1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF460)); /* fmul dword ptr [0x2ff460] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009FC1Cu); RECOMP_ABI_CALL(0x00084CD0u, sub_00084CD0); /* call 0x00084CD0 */

loc_0009FC1C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xAC76A16Du);
    ecx = esi;
    PUSH32(esp, 0x0009FC2Bu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009FC2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FCA1; /* je: equal / zero */

loc_0009FC2F: ;
    PUSH32(esp, 0x7F29E296);
    ecx = esi;
    PUSH32(esp, 0x0009FC3Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FC3B: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x9EF51A14u);
    ecx = esi;
    PUSH32(esp, 0x0009FC4Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FC4B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x42DAA93F);
    ecx = esi;
    PUSH32(esp, 0x0009FC5Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FC5B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x6B433A31);
    PUSH32(esp, 0x0009FC8Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009FC8F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF460)); /* fmul dword ptr [0x2ff460] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009FC9Eu); RECOMP_ABI_CALL(0x000B17E0u, sub_000B17E0); /* call 0x000B17E0 */

loc_0009FC9E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FCA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0009FCB0
 * Original: 0x0009FCB0 - 0x0009FCE3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FCB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009FCBE; /* je: equal / zero */

loc_0009FCB9: ;
    esi = eax + -8;
    goto loc_0009FCC0;

loc_0009FCBE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009FCC0: ;
    PUSH32(esp, 0x0009FCC5u); RECOMP_ABI_CALL(0x00084B70u, sub_00084B70); /* call 0x00084B70 */

loc_0009FCC5: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xAC76A16Du);
    ecx = eax + 8;
    PUSH32(esp, 0x0009FCD8u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009FCD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009FCE2; /* je: equal / zero */

loc_0009FCDD: ;
    g_seh_ebp = ebp; sub_000B18E0(); return; /* tail jmp 0x000B18E0 */

loc_0009FCE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FCF0
 * Original: 0x0009FCF0 - 0x0009FCF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009FCF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009FD00(); return; /* tail jmp 0x0009FD00 */

}

/**
 * sub_0009FD00
 * Original: 0x0009FD00 - 0x0009FD4C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30E210;
    MEM32(esi + 8) = 0x30E20C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009FD1Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009FD1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009FD28u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009FD28: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x0009FD36u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009FD36: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009FD46; /* je: equal / zero */

loc_0009FD3D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009FD43u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009FD43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FD46: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009FD50
 * Original: 0x0009FD50 - 0x0009FD51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD50(void)
{

loc_0009FD50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FD60
 * Original: 0x0009FD60 - 0x0009FD61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD60(void)
{

loc_0009FD60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FD70
 * Original: 0x0009FD70 - 0x0009FD71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD70(void)
{

loc_0009FD70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FD80
 * Original: 0x0009FD80 - 0x0009FDA8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FD80: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x90ED01E2u);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009FD8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FD8Bu); } /* indirect call */
    }

loc_0009FD8E: ;
    ecx = eax;
    PUSH32(esp, 0x0009FD95u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009FD95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FDA7; /* je: equal / zero */

loc_0009FD9C: ;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FDA4u); RECOMP_ABI_CALL(0x00148480u, sub_00148480); /* call 0x00148480 */

loc_0009FDA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FDA7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FDB0
 * Original: 0x0009FDB0 - 0x0009FE2F (127 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FDB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xE286D6D1u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009FDC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FDC3u); } /* indirect call */
    }

loc_0009FDC6: ;
    ecx = eax;
    PUSH32(esp, 0x0009FDCDu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009FDCD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009FDDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FDD8u); } /* indirect call */
    }

loc_0009FDDB: ;
    ecx = eax;
    PUSH32(esp, 0x0009FDE2u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009FDE2: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0009FDECu); RECOMP_ABI_CALL(0x00148480u, sub_00148480); /* call 0x00148480 */

loc_0009FDEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FE28; /* je: equal / zero */

loc_0009FDF3: ;
    PUSH32(esp, 0xAC209B2Cu);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x2FF7D4;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0009FE11u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_0009FE11: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009FE1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FE1Cu); } /* indirect call */
    }

loc_0009FE1F: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0009FE28u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0009FE28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009FE30
 * Original: 0x0009FE30 - 0x0009FE93 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FE30: ;
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
    PUSH32(esp, 0x0009FE5Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009FE5B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0009FE76u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0009FE76: ;
    PUSH32(esp, 0x30E328);
    ecx = ebx;
    PUSH32(esp, 0x0009FE82u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009FE82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009FE88u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0009FE88: ;
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
 * sub_0009FEA0
 * Original: 0x0009FEA0 - 0x0009FED4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0009FEB9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009FEB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x0009FEC4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0009FEC4: ;
    ecx = edi;
    PUSH32(esp, 0x0009FECBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009FECB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FEE0
 * Original: 0x0009FEE0 - 0x0009FF45 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FEE0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009FF24; /* jne: not equal / not zero */

loc_0009FEE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0009FEF0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0009FEF0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FF16; /* je: equal / zero */

loc_0009FEFB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009FF03u); RECOMP_ABI_CALL(0x0009FE30u, sub_0009FE30); /* call 0x0009FE30 */

loc_0009FF03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FF16; /* je: equal / zero */

loc_0009FF07: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FF12u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009FF12: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009FF16: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FF20u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0009FF20: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0009FF24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009FF42; /* jne: not equal / not zero */

loc_0009FF29: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009FF36u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009FF36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FF42; /* je: equal / zero */

loc_0009FF3A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009FF42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FF40u); } /* indirect call */
    }

loc_0009FF42: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FF50
 * Original: 0x0009FF50 - 0x0009FF51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FF50(void)
{

loc_0009FF50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FF60
 * Original: 0x0009FF60 - 0x0009FFA6 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FF60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0009FF70u); RECOMP_ABI_CALL(0x001ADA30u, sub_001ADA30); /* call 0x001ADA30 */

loc_0009FF70: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0009FF8B; /* je: equal / zero */

loc_0009FF7B: ;
    ecx = edi;
    PUSH32(esp, 0x0009FF82u); RECOMP_ABI_CALL(0x001AD7F0u, sub_001AD7F0); /* call 0x001AD7F0 */

loc_0009FF82: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FF88u); RECOMP_ABI_CALL(0x0015EFA0u, sub_0015EFA0); /* call 0x0015EFA0 */

loc_0009FF88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FF8B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009FFA2; /* je: equal / zero */

loc_0009FF90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FFA2; /* je: equal / zero */

loc_0009FF94: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FFA2; /* je: equal / zero */

loc_0009FF9B: ;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;

loc_0009FFA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FFB0
 * Original: 0x0009FFB0 - 0x0009FFCC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FFB0(void)
{

loc_0009FFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FFBCu); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0009FFBC: ;
    ecx = eax;
    PUSH32(esp, 0x0009FFC3u); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_0009FFC3: ;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FFD0
 * Original: 0x0009FFD0 - 0x0009FFF7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FFD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM8(esi + 0x28) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009FFF5; /* je: equal / zero */

loc_0009FFE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FFE7u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_0009FFE7: ;
    ecx = eax;
    PUSH32(esp, 0x0009FFEEu); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_0009FFEE: ;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;

loc_0009FFF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0000
 * Original: 0x000A0000 - 0x000A0035 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0033; /* jne: not equal / not zero */

loc_000A000C: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM8(esi + 0x34) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A0033; /* je: equal / zero */

loc_000A0018: ;
    SET_LO8(ecx, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0033; /* jne: not equal / not zero */

loc_000A001F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0025u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A0025: ;
    ecx = eax;
    PUSH32(esp, 0x000A002Cu); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_000A002C: ;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;

loc_000A0033: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0040
 * Original: 0x000A0040 - 0x000A0151 (273 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0040(void)
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

loc_000A0040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
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
    PUSH32(esp, 0x000A006Du); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A006D: ;
    ecx = esi + 0x3C;
    MEM32(esi) = 0x30E500;
    MEM32(edi) = 0x30E4E8;
    PUSH32(esp, 0x000A0081u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000A0081: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = ebp;
    PUSH32(esp, 0x000A0090u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A0090: ;
    PUSH32(esp, 0x30E4D0);
    ecx = ebx;
    PUSH32(esp, 0x000A009Cu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A009C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A00A2u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A00A2: ;
    MEM32(esi + 0x20) = ebp;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0xB48929F3u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A00C0u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A00C0: ;
    PUSH32(esp, 0xD758F9D3u);
    ecx = esp + 0x14;
    MEM8(esi + 0x28) = LO8(eax);
    PUSH32(esp, 0x000A00D1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A00D1: ;
    PUSH32(esp, 0xC3539091u);
    ecx = esp + 0x14;
    MEM8(esi + 0x29) = LO8(eax);
    PUSH32(esp, 0x000A00E2u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A00E2: ;
    PUSH32(esp, 0x6672B460);
    ecx = esp + 0x14;
    MEM8(esi + 0x2A) = LO8(eax);
    PUSH32(esp, 0x000A00F3u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A00F3: ;
    PUSH32(esp, 0x2BBFA8F1);
    ecx = esp + 0x14;
    MEM8(esi + 0x2B) = LO8(eax);
    PUSH32(esp, 0x000A0104u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0104: ;
    PUSH32(esp, 0x6A291F3B);
    ecx = esp + 0x14;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000A0115u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A0115: ;
    PUSH32(esp, 0x1C597AAD);
    ecx = esp + 0x14;
    MEM8(esi + 0x35) = LO8(eax);
    PUSH32(esp, 0x000A0126u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A0126: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x7DE3CB58);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A0137u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A0137: ;
    SET_LO8(edx, MEM8(esi + 0x2A));
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(eax);
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    MEM8(esi + 0x34) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0160
 * Original: 0x000A0160 - 0x000A01A8 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x3C;
    MEM32(esi) = 0x30E500;
    MEM32(edi) = 0x30E4E8;
    PUSH32(esp, 0x000A017Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A017B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A018Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A018D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A0198u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A0198: ;
    ecx = edi;
    PUSH32(esp, 0x000A019Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A019F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A01B0
 * Original: 0x000A01B0 - 0x000A02BA (266 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A01B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A01B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x10;
    MEM8(esp + 0x24) = LO8(ebx);
    MEM32(esp + 0x20) = 0x302BAC;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A01F0u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000A01F0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A01FEu); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_000A01FE: ;
    ecx = MEM32(esi + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = esp + 0x20;
    MEM32(esp + 0x54) = ecx;
    ecx = esp + 0x34;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x34) = 0x2FF9EC;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x5C) = LO8(ebx);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = 0x9FF60;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x50) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0255u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_000A0255: ;
    MEM32(esi + 0x30) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x35)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x35), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A027E; /* je: equal / zero */

loc_000A025D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF9B4); /* mulss */
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    ecx = esi + 0x3C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A027Eu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A027E: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2B), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A02B4; /* je: equal / zero */

loc_000A0283: ;
    PUSH32(esp, 0xAC209B2Cu);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0x2FF7D4;
    MEM32(esp + 0x10) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A029Du); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A029D: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A02ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A02A8u); } /* indirect call */
    }

loc_000A02AB: ;
    ecx = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A02B4u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A02B4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A02C0
 * Original: 0x000A02C0 - 0x000A0325 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A02C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A02C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0304; /* jne: not equal / not zero */

loc_000A02C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x000A02D0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A02D0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A02F6; /* je: equal / zero */

loc_000A02DB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A02E3u); RECOMP_ABI_CALL(0x000A0040u, sub_000A0040); /* call 0x000A0040 */

loc_000A02E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A02F6; /* je: equal / zero */

loc_000A02E7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A02F2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A02F2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A02F6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0300u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0300: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0304: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0322; /* jne: not equal / not zero */

loc_000A0309: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0316u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A0316: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0322; /* je: equal / zero */

loc_000A031A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A0322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0320u); } /* indirect call */
    }

loc_000A0322: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0330
 * Original: 0x000A0330 - 0x000A034B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0330: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x28) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000A034A; /* je: equal / zero */

loc_000A033F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A034A; /* jne: not equal / not zero */

loc_000A0345: ;
    g_seh_ebp = ebp; sub_000A01B0(); return; /* tail jmp 0x000A01B0 */

loc_000A034A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0350
 * Original: 0x000A0350 - 0x000A036B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0350: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x34) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000A036A; /* je: equal / zero */

loc_000A035F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A036A; /* jne: not equal / not zero */

loc_000A0365: ;
    g_seh_ebp = ebp; sub_000A01B0(); return; /* tail jmp 0x000A01B0 */

loc_000A036A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0370
 * Original: 0x000A0370 - 0x000A03AB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A03A9; /* je: equal / zero */

loc_000A037C: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A03A9; /* je: equal / zero */

loc_000A0383: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A03A9; /* je: equal / zero */

loc_000A038A: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0393u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A0393: ;
    ecx = eax;
    PUSH32(esp, 0x000A039Au); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_000A039A: ;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A01B0(); return; /* tail jmp 0x000A01B0 */

loc_000A03A9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A03B0
 * Original: 0x000A03B0 - 0x000A03E4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A03B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A03B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A03E2; /* je: equal / zero */

loc_000A03BC: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A03E2; /* je: equal / zero */

loc_000A03C3: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A03CCu); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A03CC: ;
    ecx = eax;
    PUSH32(esp, 0x000A03D3u); RECOMP_ABI_CALL(0x001AC7E0u, sub_001AC7E0); /* call 0x001AC7E0 */

loc_000A03D3: ;
    MEM32(esi + 0x30) = 0xFFFFFFFFu;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A01B0(); return; /* tail jmp 0x000A01B0 */

loc_000A03E2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A03F0
 * Original: 0x000A03F0 - 0x000A03F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A03F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A03F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A0400(); return; /* tail jmp 0x000A0400 */

}

/**
 * sub_000A0400
 * Original: 0x000A0400 - 0x000A045C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0400: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x3C;
    MEM32(esi) = 0x30E500;
    MEM32(edi) = 0x30E4E8;
    PUSH32(esp, 0x000A041Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A041B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A042Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A042D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A0438u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A0438: ;
    ecx = edi;
    PUSH32(esp, 0x000A043Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A043F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_000A0455; /* je: equal / zero */

loc_000A044C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A0452u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A0452: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0455: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0460
 * Original: 0x000A0460 - 0x000A0461 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0460(void)
{

loc_000A0460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0470
 * Original: 0x000A0470 - 0x000A0471 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0470(void)
{

loc_000A0470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0480
 * Original: 0x000A0480 - 0x000A0481 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0480(void)
{

loc_000A0480: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0490
 * Original: 0x000A0490 - 0x000A064D (445 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0490: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x70EF42C1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A04A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A04A4u); } /* indirect call */
    }

loc_000A04A7: ;
    ecx = eax;
    PUSH32(esp, 0x000A04AEu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A04AE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x417C6F88);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A04BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A04B9u); } /* indirect call */
    }

loc_000A04BC: ;
    ecx = eax;
    PUSH32(esp, 0x000A04C3u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A04C3: ;
    MEM8(esp + 0x28) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6ABF13D3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A04D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A04D0u); } /* indirect call */
    }

loc_000A04D3: ;
    ecx = eax;
    PUSH32(esp, 0x000A04DAu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A04DA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xEAAE9BA6u);
    ecx = esi;
    MEM8(esp + 0x15) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A04EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A04E7u); } /* indirect call */
    }

loc_000A04EA: ;
    ecx = eax;
    PUSH32(esp, 0x000A04F1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A04F1: ;
    MEM8(esp + 0x12) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A0501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A04FEu); } /* indirect call */
    }

loc_000A0501: ;
    ecx = eax;
    PUSH32(esp, 0x000A0508u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A0508: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDAD14627u);
    ecx = esi;
    MEM8(esp + 0x17) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A0518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0515u); } /* indirect call */
    }

loc_000A0518: ;
    ecx = eax;
    PUSH32(esp, 0x000A051Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A051F: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x817C4EB6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A052Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A052Au); } /* indirect call */
    }

loc_000A052D: ;
    ecx = eax;
    PUSH32(esp, 0x000A0534u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0534: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDFFDA238u);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A0542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A053Fu); } /* indirect call */
    }

loc_000A0542: ;
    ecx = eax;
    PUSH32(esp, 0x000A0549u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0549: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6B433A31);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A0559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0556u); } /* indirect call */
    }

loc_000A0559: ;
    ecx = eax;
    PUSH32(esp, 0x000A0560u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0560: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B5EB2C0);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A0570u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A056Du); } /* indirect call */
    }

loc_000A0570: ;
    ecx = eax;
    PUSH32(esp, 0x000A0577u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0577: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A05B2; /* je: equal / zero */

loc_000A057F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000A05A5; /* je: equal / zero */

loc_000A0595: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A05A0u); RECOMP_ABI_CALL(0x00148FF0u, sub_00148FF0); /* call 0x00148FF0 */

loc_000A05A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A05B2;

loc_000A05A5: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A05AFu); RECOMP_ABI_CALL(0x00147CE0u, sub_00147CE0); /* call 0x00147CE0 */

loc_000A05AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A05B2: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A05C7; /* je: equal / zero */

loc_000A05BA: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A05C4u); RECOMP_ABI_CALL(0x00147DF0u, sub_00147DF0); /* call 0x00147DF0 */

loc_000A05C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A05C7: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A05DC; /* je: equal / zero */

loc_000A05CF: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A05D9u); RECOMP_ABI_CALL(0x00147C00u, sub_00147C00); /* call 0x00147C00 */

loc_000A05D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A05DC: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A05F1; /* je: equal / zero */

loc_000A05E4: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A05EEu); RECOMP_ABI_CALL(0x00147C90u, sub_00147C90); /* call 0x00147C90 */

loc_000A05EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A05F1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0645; /* jne: not equal / not zero */

loc_000A05F9: ;
    SET_LO8(ecx, MEM8(0x3C3D10));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0637; /* jne: not equal / not zero */

loc_000A0608: ;
    edx = MEM32(0x3C3D10);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B70);
    MEM32(0x3C3D10) = edx;
    MEM32(0x3C3D08) = 0x2FF7D4;
    MEM32(0x3C3D0C) = 0xB16BD083u;
    PUSH32(esp, 0x000A0634u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_000A0634: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0637: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3D08);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A0645u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0642u); } /* indirect call */
    }

loc_000A0645: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0650
 * Original: 0x000A0650 - 0x000A06B3 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0650: ;
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
    PUSH32(esp, 0x000A067Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A067B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000A0696u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A0696: ;
    PUSH32(esp, 0x30E5E4);
    ecx = ebx;
    PUSH32(esp, 0x000A06A2u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A06A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A06A8u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A06A8: ;
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
 * sub_000A06C0
 * Original: 0x000A06C0 - 0x000A06F4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A06C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A06C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A06D9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A06D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A06E4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A06E4: ;
    ecx = edi;
    PUSH32(esp, 0x000A06EBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A06EB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0700
 * Original: 0x000A0700 - 0x000A0765 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0700: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0744; /* jne: not equal / not zero */

loc_000A0708: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000A0710u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A0710: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0736; /* je: equal / zero */

loc_000A071B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A0723u); RECOMP_ABI_CALL(0x000A0650u, sub_000A0650); /* call 0x000A0650 */

loc_000A0723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0736; /* je: equal / zero */

loc_000A0727: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0732u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0732: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0736: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0740u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0740: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0744: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0762; /* jne: not equal / not zero */

loc_000A0749: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0756u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A0756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0762; /* je: equal / zero */

loc_000A075A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A0762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0760u); } /* indirect call */
    }

loc_000A0762: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0770
 * Original: 0x000A0770 - 0x000A0771 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0770(void)
{

loc_000A0770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0780
 * Original: 0x000A0780 - 0x000A0781 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0780(void)
{

loc_000A0780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0790
 * Original: 0x000A0790 - 0x000A0791 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0790(void)
{

loc_000A0790: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A07A0
 * Original: 0x000A07A0 - 0x000A08D3 (307 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A07A0(void)
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

loc_000A07A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A07ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A07AAu); } /* indirect call */
    }

loc_000A07AD: ;
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0xF89E4BD3u);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A07C1u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A07C1: ;
    PUSH32(esp, 0x458A3954);
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x000A07D1u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A07D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A07F4u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A07F4: ;
    ecx = eax;
    PUSH32(esp, 0x000A07FBu); RECOMP_ABI_CALL(0x001ABE10u, sub_001ABE10); /* call 0x001ABE10 */

loc_000A07FB: ;
    PUSH32(esp, 0x000A0800u); RECOMP_ABI_CALL(0x00149130u, sub_00149130); /* call 0x00149130 */

loc_000A0800: ;
    esi = eax;
    edx = esi + 0x10;
    MEM8(esi + 0x78) = 1;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A0811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A080Eu); } /* indirect call */
    }

loc_000A0811: ;
    ecx = eax;
    PUSH32(esp, 0x000A0818u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000A0818: ;
    PUSH32(esp, 0x55E59C6);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A0826u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_000A0826: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A08BF; /* je: equal / zero */

loc_000A0831: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A0889; /* je: equal / zero */

loc_000A0834: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A08D0; /* jne: not equal / not zero */

loc_000A083B: ;
    edx = MEM32(edi);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A0846u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0843u); } /* indirect call */
    }

loc_000A0846: ;
    ecx = eax;
    PUSH32(esp, 0x000A084Du); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000A084D: ;
    PUSH32(esp, 0xD184E98Fu);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A085Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A085B: ;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xA683D919u);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A086Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A086E: ;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F8A88A3);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A0881u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A0881: ;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A0889: ;
    PUSH32(esp, 0x3CD06B6C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A0897u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A0897: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x5A5FC396);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A08A8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A08A8: ;
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC5AF0932u);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A08B9u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A08B9: ;
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A08BF: ;
    PUSH32(esp, 0x3CD06B6C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A08CDu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A08CD: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A08D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A08E0
 * Original: 0x000A08E0 - 0x000A0971 (145 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A08E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A08E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A08F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A08F2u); } /* indirect call */
    }

loc_000A08F5: ;
    ecx = eax;
    PUSH32(esp, 0x000A08FCu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A08FC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x458A3954);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A090Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0907u); } /* indirect call */
    }

loc_000A090A: ;
    ecx = eax;
    PUSH32(esp, 0x000A0911u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0911: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000A0925u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A0925: ;
    ecx = eax;
    PUSH32(esp, 0x000A092Cu); RECOMP_ABI_CALL(0x001ABE10u, sub_001ABE10); /* call 0x001ABE10 */

loc_000A092C: ;
    PUSH32(esp, 0x000A0931u); RECOMP_ABI_CALL(0x00149130u, sub_00149130); /* call 0x00149130 */

loc_000A0931: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    MEM8(eax + 0x78) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A096B; /* je: equal / zero */

loc_000A093A: ;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0xAC209B2Cu);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0x2FF7D4;
    PUSH32(esp, 0x000A0954u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A0954: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A0962u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A095Fu); } /* indirect call */
    }

loc_000A0962: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000A096Bu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A096B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0980
 * Original: 0x000A0980 - 0x000A09E3 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0980: ;
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
    PUSH32(esp, 0x000A09ABu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A09AB: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000A09C6u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A09C6: ;
    PUSH32(esp, 0x30E700);
    ecx = ebx;
    PUSH32(esp, 0x000A09D2u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A09D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A09D8u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A09D8: ;
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
 * sub_000A09F0
 * Original: 0x000A09F0 - 0x000A0A24 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A09F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A09F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A0A09u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A0A09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A0A14u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A0A14: ;
    ecx = edi;
    PUSH32(esp, 0x000A0A1Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A0A1B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0A30
 * Original: 0x000A0A30 - 0x000A0A95 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0A30: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0A74; /* jne: not equal / not zero */

loc_000A0A38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000A0A40u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A0A40: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A66; /* je: equal / zero */

loc_000A0A4B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A0A53u); RECOMP_ABI_CALL(0x000A0980u, sub_000A0980); /* call 0x000A0980 */

loc_000A0A53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A66; /* je: equal / zero */

loc_000A0A57: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A62u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0A62: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0A66: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A70u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0A70: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0A74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0A92; /* jne: not equal / not zero */

loc_000A0A79: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0A86u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A0A86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A92; /* je: equal / zero */

loc_000A0A8A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A0A92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0A90u); } /* indirect call */
    }

loc_000A0A92: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AA0
 * Original: 0x000A0AA0 - 0x000A0AA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AA0(void)
{

loc_000A0AA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AB0
 * Original: 0x000A0AB0 - 0x000A0AB9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AB0(void)
{

loc_000A0AB0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AC0
 * Original: 0x000A0AC0 - 0x000A0AC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AC0(void)
{

loc_000A0AC0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x21) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AD0
 * Original: 0x000A0AD0 - 0x000A0B56 (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0AD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
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
    PUSH32(esp, 0x000A0AFDu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A0AFD: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x000A0B18u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A0B18: ;
    PUSH32(esp, 0x30E850);
    ecx = ebp;
    PUSH32(esp, 0x000A0B24u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A0B24: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A0B2Au); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A0B2A: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0xB48929F3u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A0B45u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A0B45: ;
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x21) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0B60
 * Original: 0x000A0B60 - 0x000A0B94 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A0B79u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A0B79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A0B84u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A0B84: ;
    ecx = edi;
    PUSH32(esp, 0x000A0B8Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A0B8B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0BA0
 * Original: 0x000A0BA0 - 0x000A0C19 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0BA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0x9871810Du);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A0BB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0BAFu); } /* indirect call */
    }

loc_000A0BB2: ;
    ecx = eax;
    PUSH32(esp, 0x000A0BB9u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0BB9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A0BC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0BC4u); } /* indirect call */
    }

loc_000A0BC7: ;
    ecx = eax;
    PUSH32(esp, 0x000A0BCEu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A0BCE: ;
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A0BD6u); RECOMP_ABI_CALL(0x00147780u, sub_00147780); /* call 0x00147780 */

loc_000A0BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0C12; /* je: equal / zero */

loc_000A0BDD: ;
    PUSH32(esp, 0xAC209B2Cu);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x2FF7D4;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000A0BFBu); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A0BFB: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A0C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0C06u); } /* indirect call */
    }

loc_000A0C09: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A0C12u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A0C12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0C20
 * Original: 0x000A0C20 - 0x000A0C85 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0C20: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0C64; /* jne: not equal / not zero */

loc_000A0C28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000A0C30u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A0C30: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0C56; /* je: equal / zero */

loc_000A0C3B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A0C43u); RECOMP_ABI_CALL(0x000A0AD0u, sub_000A0AD0); /* call 0x000A0AD0 */

loc_000A0C43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0C56; /* je: equal / zero */

loc_000A0C47: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0C52u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0C52: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0C56: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0C60u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0C60: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0C64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0C82; /* jne: not equal / not zero */

loc_000A0C69: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0C76u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A0C76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0C82; /* je: equal / zero */

loc_000A0C7A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A0C82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0C80u); } /* indirect call */
    }

loc_000A0C82: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0C90
 * Original: 0x000A0C90 - 0x000A0CA5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0C90: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x20) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000A0CA4; /* je: equal / zero */

loc_000A0C9F: ;
    g_seh_ebp = ebp; sub_000A0BA0(); return; /* tail jmp 0x000A0BA0 */

loc_000A0CA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0CB0
 * Original: 0x000A0CB0 - 0x000A0CC5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0CB0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x21) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000A0CC4; /* je: equal / zero */

loc_000A0CBF: ;
    g_seh_ebp = ebp; sub_000A0BA0(); return; /* tail jmp 0x000A0BA0 */

loc_000A0CC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0CD0
 * Original: 0x000A0CD0 - 0x000A0CD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0CD0(void)
{

loc_000A0CD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0CE0
 * Original: 0x000A0CE0 - 0x000A0D08 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0CE0(void)
{

loc_000A0CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x659C2B04);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A0CEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0CEBu); } /* indirect call */
    }

loc_000A0CEE: ;
    ecx = eax;
    PUSH32(esp, 0x000A0CF5u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0CF5: ;
    edi = eax;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x000A0CFFu); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A0CFF: ;
    MEM32(eax + 0x100D4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0D10
 * Original: 0x000A0D10 - 0x000A0D3C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0D10(void)
{

loc_000A0D10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x659C2B04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A0D22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0D1Fu); } /* indirect call */
    }

loc_000A0D22: ;
    ecx = eax;
    PUSH32(esp, 0x000A0D29u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0D29: ;
    edi = eax;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x000A0D33u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A0D33: ;
    MEM32(eax + 0x100D4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0D40
 * Original: 0x000A0D40 - 0x000A0DAA (106 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0D40: ;
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
    PUSH32(esp, 0x000A0D6Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A0D6B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x20) = 0;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000A0D8Du); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A0D8D: ;
    PUSH32(esp, 0x30E8E8);
    ecx = ebx;
    PUSH32(esp, 0x000A0D99u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A0D99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A0D9Fu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A0D9F: ;
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
 * sub_000A0DB0
 * Original: 0x000A0DB0 - 0x000A0DE4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A0DC9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A0DC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A0DD4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A0DD4: ;
    ecx = edi;
    PUSH32(esp, 0x000A0DDBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A0DDB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0DF0
 * Original: 0x000A0DF0 - 0x000A0E55 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0DF0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0E34; /* jne: not equal / not zero */

loc_000A0DF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000A0E00u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A0E00: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E26; /* je: equal / zero */

loc_000A0E0B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A0E13u); RECOMP_ABI_CALL(0x000A0D40u, sub_000A0D40); /* call 0x000A0D40 */

loc_000A0E13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E26; /* je: equal / zero */

loc_000A0E17: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0E22u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0E22: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0E26: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0E30u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A0E30: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A0E34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0E52; /* jne: not equal / not zero */

loc_000A0E39: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0E46u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A0E46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E52; /* je: equal / zero */

loc_000A0E4A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A0E52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0E50u); } /* indirect call */
    }

loc_000A0E52: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0E60
 * Original: 0x000A0E60 - 0x000A0E7D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0E60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E73; /* je: equal / zero */

loc_000A0E68: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x20;
    g_seh_ebp = ebp; sub_0014CBD0(); return; /* tail jmp 0x0014CBD0 */

loc_000A0E73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0x20;
    g_seh_ebp = ebp; sub_0014CBD0(); return; /* tail jmp 0x0014CBD0 */

}

/**
 * sub_000A0E80
 * Original: 0x000A0E80 - 0x000A0E87 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E80(void)
{

loc_000A0E80: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0E90
 * Original: 0x000A0E90 - 0x000A0E99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0E90: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A0EA0
 * Original: 0x000A0EA0 - 0x000A0ED5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0EA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0EBF; /* je: equal / zero */

loc_000A0EA8: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7A2502E6);
    PUSH32(esp, 0x426FC28F);
    ecx = eax + 0x20;
    PUSH32(esp, 0x000A0EBEu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A0EBE: ;
    esp += 4; return; /* ret */

loc_000A0EBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7A2502E6);
    PUSH32(esp, 0x426FC28F);
    ecx = eax + 0x20;
    PUSH32(esp, 0x000A0ED4u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A0ED4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0EE0
 * Original: 0x000A0EE0 - 0x000A0F20 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30ED54;
    MEM32(esi + 8) = 0x30ED50;
    PUSH32(esp, 0x000A0EF6u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A0EF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x38;
    PUSH32(esp, 0x000A0F01u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A0F01: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x000A0F09u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A0F09: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A0F11u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A0F11: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_000A0F30
 * Original: 0x000A0F30 - 0x000A0F3A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0F30: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0F40
 * Original: 0x000A0F40 - 0x000A0FD1 (145 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0F40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A0F51; /* je: equal / zero */

loc_000A0F4C: ;
    esi = eax + -8;
    goto loc_000A0F53;

loc_000A0F51: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A0F53: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8AB12380u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A0F67u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0F67: ;
    ecx = MEM32(esi + 0xC);
    edi = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xB6BC1CD9u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A0F7Cu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A0F7C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0F89u); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_000A0F89: ;
    edx = MEM32(esi + 0xC);
    MEM32(esi + 0x48) = eax;
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x000A0FA2u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A0FA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A0FCC; /* je: equal / zero */

loc_000A0FA7: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0x4F1066FB;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A0FC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0FC0u); } /* indirect call */
    }

loc_000A0FC3: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A0FCCu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A0FCC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0FE0
 * Original: 0x000A0FE0 - 0x000A11BB (475 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0FE0(void)
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

loc_000A0FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A0FF8; /* je: equal / zero */

loc_000A0FF3: ;
    esi = eax + -8;
    goto loc_000A0FFA;

loc_000A0FF8: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A0FFA: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x4D38E37F);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A100Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A100D: ;
    ecx = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x44);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xAD242E2);
    ecx = eax + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A102Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A102A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A1041; /* je: equal / zero */

loc_000A1032: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A1041; /* jne: not equal / not zero */

loc_000A1039: ;
    MEM32(esp + 0x1C) = 1;

loc_000A1041: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xF303EEC0u);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1054u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A1054: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A108B; /* jne: not equal / not zero */

loc_000A105F: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = 0x2FF7D4;
    MEM32(esp + 0x28) = 0xA90612C0u;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A107Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1078u); } /* indirect call */
    }

loc_000A107B: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1084u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A1084: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000A108B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A109E; /* jl: less (signed <) */

loc_000A1091: ;
    MEM32(esp + 0x24) = 0x74883791;
    goto loc_000A1197;

loc_000A109E: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A10E1; /* jne: not equal / not zero */

loc_000A10A5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A10E1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000A10B4: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF9B4); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7A2502E6);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A10D0u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A10D0: ;
    MEM8(esi + 0x4C) = 1;
    MEM32(esp + 0x24) = 0xF303EEC0u;
    goto loc_000A1197;

loc_000A10E1: ;
    edi = MEM32(0x3E8D08);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A10ECu); RECOMP_ABI_CALL(0x0007E940u, sub_0007E940); /* call 0x0007E940 */

loc_000A10EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1185; /* je: equal / zero */

loc_000A10F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1185; /* je: equal / zero */

loc_000A10FD: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xD6D53DB7u);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1110u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A1110: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A1185; /* jne: not equal / not zero */

loc_000A1114: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1124u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000A1124: ;
    ecx = esp + 0x30;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1133u); RECOMP_ABI_CALL(0x000143A0u, sub_000143A0); /* call 0x000143A0 */

loc_000A1133: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30E900)); /* movss */
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, edi);
    edx = esp + 0x30;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x44;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1174u); RECOMP_ABI_CALL(0x00113940u, sub_00113940); /* call 0x00113940 */

loc_000A1174: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x1B) = LO8(eax);
    if ((_fa == 0)) goto loc_000A118F; /* je: equal / zero */

loc_000A1185: ;
    MEM32(esp + 0x24) = 0x51CFE0E3;
    goto loc_000A1197;

loc_000A118F: ;
    MEM32(esp + 0x24) = 0xE36A9545u;

loc_000A1197: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0x2FF7D4;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A11ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A11A8u); } /* indirect call */
    }

loc_000A11AB: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A11B4u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A11B4: ;
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
 * sub_000A11C0
 * Original: 0x000A11C0 - 0x000A11FD (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A11C0(void)
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

loc_000A11C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A11CE; /* je: equal / zero */

loc_000A11C9: ;
    esi = eax + -8;
    goto loc_000A11D0;

loc_000A11CE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A11D0: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD5C2BDE0u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A11E3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A11E3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7A2502E6);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A11FBu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A11FB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1200
 * Original: 0x000A1200 - 0x000A12EA (234 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1211; /* je: equal / zero */

loc_000A120C: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A1213;

loc_000A1211: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A1213: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1258; /* jne: not equal / not zero */

loc_000A1220: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0xB16BD083u;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A123Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1239u); } /* indirect call */
    }

loc_000A123C: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(esi + 0x48);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 4;
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x000A1253u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A1253: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A1258: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x44) = ebp;
    edi = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB3A7D3AAu);
    ecx = edi;
    PUSH32(esp, 0x000A1276u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A1276: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A12E3; /* je: equal / zero */

loc_000A127A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x98AC4B15u);
    ecx = edi;
    PUSH32(esp, 0x000A1287u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A1287: ;
    PUSH32(esp, 0x718AA23A);
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A1295u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A1295: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A12A0; /* jne: not equal / not zero */

loc_000A129B: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A12E2; /* jg: greater (signed >) */

loc_000A12A0: ;
    eax = MEM32(esi + 0x44);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A12E2; /* jne: not equal / not zero */

loc_000A12AA: ;
    PUSH32(esp, 0x94390417u);
    ecx = edi;
    PUSH32(esp, 0x000A12B6u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_000A12B6: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A12E2; /* jle: less or equal (signed <=) */

loc_000A12BC: ;
    edi = eax + 4;
    /* nop */

loc_000A12C0: ;
    edx = MEM32(esi);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1234C98A);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A12D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A12CFu); } /* indirect call */
    }

loc_000A12D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A12D9u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_000A12D9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A12C0; /* jne: not equal / not zero */

loc_000A12E2: ;
    POP32(esp, ebx);

loc_000A12E3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A12F0
 * Original: 0x000A12F0 - 0x000A138C (156 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A12F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A12F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1300; /* je: equal / zero */

loc_000A12FB: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A1302;

loc_000A1300: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A1302: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA6AD7DC3u);
    ecx = edi;
    PUSH32(esp, 0x000A1317u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A1317: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = MEM32(esi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1388; /* je: equal / zero */

loc_000A131E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A1388; /* jle: less or equal (signed <=) */

loc_000A1322: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFD58D846u);
    ecx = edi;
    PUSH32(esp, 0x000A132Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A132F: ;
    PUSH32(esp, 0x4DDD89F9);
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A133Du); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A133D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A1347; /* jne: not equal / not zero */

loc_000A1343: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A1387; /* jg: greater (signed >) */

loc_000A1347: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1387; /* jne: not equal / not zero */

loc_000A1350: ;
    PUSH32(esp, 0xC0F61633u);
    ecx = edi;
    PUSH32(esp, 0x000A135Cu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_000A135C: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A1387; /* jle: less or equal (signed <=) */

loc_000A1362: ;
    edi = eax + 4;

loc_000A1365: ;
    edx = MEM32(esi);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10B361E6);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A1377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1374u); } /* indirect call */
    }

loc_000A1377: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A137Eu); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_000A137E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A1365; /* jne: not equal / not zero */

loc_000A1387: ;
    POP32(esp, ebx);

loc_000A1388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1390
 * Original: 0x000A1390 - 0x000A1408 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 8;
    MEM32(esi + 4) = ebx;
    MEM32(edi) = 0x2FF77C;
    ebp = esi + 0x10;
    ecx = ebp;
    MEM32(esi) = 0x30ED54;
    MEM32(edi) = 0x30ED50;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000A13C1u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A13C1: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x000A13C9u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000A13C9: ;
    MEM32(esi + 0x38) = 0x2FF7D4;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM8(esi + 0x4C) = LO8(ebx);
    MEM32(esi + 0x50) = ebx;
    PUSH32(esp, 0x000A13EAu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A13EA: ;
    PUSH32(esp, 0x30ECF4);
    ecx = ebp;
    PUSH32(esp, 0x000A13F6u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A13F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A13FCu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A13FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1410
 * Original: 0x000A1410 - 0x000A146E (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1410: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A144D; /* jne: not equal / not zero */

loc_000A1418: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x000A1420u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A1420: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A143F; /* je: equal / zero */

loc_000A142B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A1433u); RECOMP_ABI_CALL(0x000A1390u, sub_000A1390); /* call 0x000A1390 */

loc_000A1433: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A143Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A143B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A143F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1449u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A1449: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A144D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A146B; /* jne: not equal / not zero */

loc_000A1452: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A145Fu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A145F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A146B; /* je: equal / zero */

loc_000A1463: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A146Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1469u); } /* indirect call */
    }

loc_000A146B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1470
 * Original: 0x000A1470 - 0x000A166E (510 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1470: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1484; /* je: equal / zero */

loc_000A147F: ;
    esi = eax + -8;
    goto loc_000A1486;

loc_000A1484: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A1486: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xAD242E2);
    ecx = edi;
    PUSH32(esp, 0x000A149Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A149B: ;
    PUSH32(esp, 0xD8C32A36u);
    ecx = edi;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0x000A14ABu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A14AB: ;
    ebx = eax;
    PUSH32(esp, 0xCB887BDFu);
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000A14BDu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A14BD: ;
    ebp = eax;
    PUSH32(esp, 0x161EA25A);
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A14CDu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A14CD: ;
    ebx = eax;
    PUSH32(esp, 0x272CA99);
    ecx = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A14DDu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A14DD: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3E7FF5C0);
    ecx = edi;
    PUSH32(esp, 0x000A14EDu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A14ED: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A15D0; /* jle: less or equal (signed <=) */

loc_000A14FC: ;
    edi = MEM32(esp + 0x54);

loc_000A1500: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x44);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A15D0; /* jge: greater or equal (signed >=) */

loc_000A1514: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A1522u); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_000A1522: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A154E; /* jle: less or equal (signed <=) */

loc_000A152D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30ED7C);
    PUSH32(esp, 0x3C3D58);
    PUSH32(esp, 0x000A1549u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000A1549: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A1555;

loc_000A154E: ;
    MEM8(0x3C3D58) = 0;

loc_000A1555: ;
    PUSH32(esp, 0x3C3D58);
    eax = esp + 0x2C;
    PUSH32(esp, 0x30ED6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1569u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000A1569: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = eax + 8;
    PUSH32(esp, 0x000A157Fu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_000A157F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A15F5; /* je: equal / zero */

loc_000A1584: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A158Au); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000A158A: ;
    PUSH32(esp, 0x3C3D58);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1596u); RECOMP_ABI_CALL(0x000396B0u, sub_000396B0); /* call 0x000396B0 */

loc_000A1596: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(esi + 0x48);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A15B3u); RECOMP_ABI_CALL(0x000A12F0u, sub_000A12F0); /* call 0x000A12F0 */

loc_000A15B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca > _fcb)) goto loc_000A15FD; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000A15C5: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A1500; /* jg: greater (signed >) */

loc_000A15D0: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x24) = 0x2FF7D4;
    MEM32(esp + 0x28) = 0x4DE8E4B5;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A15ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A15E9u); } /* indirect call */
    }

loc_000A15EC: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A15F5u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A15F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A15FD: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A160B; /* jne: not equal / not zero */

loc_000A1604: ;
    edx = MEM32(esp + 0x4C);
    MEM32(esi + 0x50) = edx;

loc_000A160B: ;
    ebx = MEM32(esi + 0x50);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0x50) = ebx;
    PUSH32(esp, 0x000A1621u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000A1621: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, 0x7A2502E6);
    PUSH32(esp, edx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x000A1641u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A1641: ;
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = 0x2FF7D4;
    MEM32(esp + 0x20) = 0xF303EEC0u;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A165Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A165Au); } /* indirect call */
    }

loc_000A165D: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000A1666u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A1666: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1670
 * Original: 0x000A1670 - 0x000A1706 (150 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1670: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1688; /* je: equal / zero */

loc_000A167C: ;
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A168A; /* je: equal / zero */

loc_000A1683: ;
    eax = esi + 8;
    goto loc_000A168C;

loc_000A1688: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A168A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A168C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A169Du); RECOMP_ABI_CALL(0x000A1200u, sub_000A1200); /* call 0x000A1200 */

loc_000A169D: ;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = 0x2FF7D4;
    MEM32(esp + 0x18) = 0xDD430F8Bu;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4D38E37F);
    ecx = eax + 8;
    PUSH32(esp, 0x000A16C3u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A16C3: ;
    edi = MEM32(esi + 0x40);
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A16D4; /* je: equal / zero */

loc_000A16CD: ;
    eax = 1;
    goto loc_000A16E7;

loc_000A16D4: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xAD242E2);
    ecx = eax + 8;
    PUSH32(esp, 0x000A16E7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A16E7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000A16F8; /* jge: greater or equal (signed >=) */

loc_000A16EC: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A16F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A16F5u); } /* indirect call */
    }

loc_000A16F8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A1701u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A1701: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1710
 * Original: 0x000A1710 - 0x000A1718 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1710: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A1720(); return; /* tail jmp 0x000A1720 */

}

/**
 * sub_000A1720
 * Original: 0x000A1720 - 0x000A1775 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30ED54;
    MEM32(esi + 8) = 0x30ED50;
    PUSH32(esp, 0x000A1736u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A1736: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x38;
    PUSH32(esp, 0x000A1741u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A1741: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x000A1749u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A1749: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A1751u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A1751: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x000A175Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A175F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A176F; /* je: equal / zero */

loc_000A1766: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A176Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A176C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A176F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1780
 * Original: 0x000A1780 - 0x000A1781 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1780(void)
{

loc_000A1780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1790
 * Original: 0x000A1790 - 0x000A17B4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1790: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A17AF; /* je: equal / zero */

loc_000A1798: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A17AF; /* je: equal / zero */

loc_000A179F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A17A5u); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A17A5: ;
    ecx = eax;
    PUSH32(esp, 0x000A17ACu); RECOMP_ABI_CALL(0x001AC1A0u, sub_001AC1A0); /* call 0x001AC1A0 */

loc_000A17AC: ;
    esp += 8; return; /* ret 4 */

loc_000A17AF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A17C0
 * Original: 0x000A17C0 - 0x000A17EC (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A17C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A17C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A17E6; /* je: equal / zero */

loc_000A17CB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A17D4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000A17D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A17E6; /* je: equal / zero */

loc_000A17DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A17E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A17DFu); } /* indirect call */
    }

loc_000A17E2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A17E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A17F0
 * Original: 0x000A17F0 - 0x000A18B7 (199 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A17F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A17F0: ;
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
    PUSH32(esp, 0x000A181Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A181B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000A1836u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A1836: ;
    PUSH32(esp, 0x30EE14);
    ecx = ebx;
    PUSH32(esp, 0x000A1842u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A1842: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A1848u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A1848: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A1852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A184Fu); } /* indirect call */
    }

loc_000A1852: ;
    PUSH32(esp, 0x9E0864DFu);
    ecx = eax + 8;
    PUSH32(esp, 0x000A185Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A185F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A18AF; /* je: equal / zero */

loc_000A1863: ;
    SET_LO8(ecx, MEM8(0x3C3D78));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A18A1; /* jne: not equal / not zero */

loc_000A1872: ;
    edx = MEM32(0x3C3D78);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B80);
    MEM32(0x3C3D78) = edx;
    MEM32(0x3C3D70) = 0x2FF7D4;
    MEM32(0x3C3D74) = 2;
    PUSH32(esp, 0x000A189Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_000A189E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A18A1: ;
    eax = MEM32(edi + 8);
    ecx = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3D70);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A18AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A18ACu); } /* indirect call */
    }

loc_000A18AF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A18C0
 * Original: 0x000A18C0 - 0x000A18F4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A18C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A18C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A18D9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A18D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A18E4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A18E4: ;
    ecx = edi;
    PUSH32(esp, 0x000A18EBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A18EB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1900
 * Original: 0x000A1900 - 0x000A19DC (220 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1900: ;
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
    PUSH32(esp, 0x000A1916u); RECOMP_ABI_CALL(0x00142340u, sub_00142340); /* call 0x00142340 */

loc_000A1916: ;
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
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A1960u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A195Du); } /* indirect call */
    }

loc_000A1960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A198D; /* je: equal / zero */

loc_000A1964: ;
    edx = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A1970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A196Du); } /* indirect call */
    }

loc_000A1970: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1977u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000A1977: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1985u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_000A1985: ;
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = ecx;

loc_000A198D: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    MEM32(esp + 0x74) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A199Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A199Au); } /* indirect call */
    }

loc_000A199D: ;
    ecx = esp + 0x54;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A19B2u); RECOMP_ABI_CALL(0x00142380u, sub_00142380); /* call 0x00142380 */

loc_000A19B2: ;
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x3C) = 0x2FFA54;
    MEM32(esp + 0x44) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000A19D4; /* je: equal / zero */

loc_000A19CA: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A19D4u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000A19D4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A19E0
 * Original: 0x000A19E0 - 0x000A1A45 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A19E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A19E0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1A24; /* jne: not equal / not zero */

loc_000A19E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000A19F0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A19F0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1A16; /* je: equal / zero */

loc_000A19FB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A1A03u); RECOMP_ABI_CALL(0x000A17F0u, sub_000A17F0); /* call 0x000A17F0 */

loc_000A1A03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1A16; /* je: equal / zero */

loc_000A1A07: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1A12u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A1A12: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A1A16: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1A20u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A1A20: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A1A24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1A42; /* jne: not equal / not zero */

loc_000A1A29: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A1A36u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A1A36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1A42; /* je: equal / zero */

loc_000A1A3A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A1A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1A40u); } /* indirect call */
    }

loc_000A1A42: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1A50
 * Original: 0x000A1A50 - 0x000A1B02 (178 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1A50: ;
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0x4EA4BBD9);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A1A67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1A64u); } /* indirect call */
    }

loc_000A1A67: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1A6Eu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A1A6E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1A74u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000A1A74: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1A7Cu); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000A1A7C: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AA7; /* je: equal / zero */

loc_000A1A85: ;
    edx = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A1A91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1A8Eu); } /* indirect call */
    }

loc_000A1A91: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1A98u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000A1A98: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x000A1AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1AA1u); } /* indirect call */
    }

loc_000A1AA7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x394FEC80);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A1AB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1AB0u); } /* indirect call */
    }

loc_000A1AB3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1ABAu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A1ABA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AEC; /* je: equal / zero */

loc_000A1AC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AFC; /* je: equal / zero */

loc_000A1AC8: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1ACEu); RECOMP_ABI_CALL(0x001ACF40u, sub_001ACF40); /* call 0x001ACF40 */

loc_000A1ACE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1AD5u); RECOMP_ABI_CALL(0x001AC1A0u, sub_001AC1A0); /* call 0x001AC1A0 */

loc_000A1AD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AEC; /* je: equal / zero */

loc_000A1AD9: ;
    PUSH32(esp, 0x309BA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1AE3u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000A1AE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000A1AEC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F9000CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7F9000CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AFC; /* je: equal / zero */

loc_000A1AF4: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1AFCu); RECOMP_ABI_CALL(0x000A1900u, sub_000A1900); /* call 0x000A1900 */

loc_000A1AFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1B10
 * Original: 0x000A1B10 - 0x000A1B19 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1B10: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000A1A50(); return; /* tail jmp 0x000A1A50 */

}

/**
 * sub_000A1B20
 * Original: 0x000A1B20 - 0x000A1B51 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1B20: ;
    eax = MEM32(0x3734D0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3734D0;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A1B33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1B30u); } /* indirect call */
    }

loc_000A1B33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1B4E; /* je: equal / zero */

loc_000A1B37: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A1B3Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_000A1B3F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A1B4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1B47u); } /* indirect call */
    }

loc_000A1B4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1B37; /* jne: not equal / not zero */

loc_000A1B4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1B60
 * Original: 0x000A1B60 - 0x000A1B91 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1B60: ;
    eax = MEM32(0x3734E8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3734E8;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A1B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1B70u); } /* indirect call */
    }

loc_000A1B73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1B8E; /* je: equal / zero */

loc_000A1B77: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A1B7Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_000A1B7F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A1B8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1B87u); } /* indirect call */
    }

loc_000A1B8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1B77; /* jne: not equal / not zero */

loc_000A1B8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1BA0
 * Original: 0x000A1BA0 - 0x000A1BB7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1BA0(void)
{

loc_000A1BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = esi + 0x30;
    PUSH32(esp, 0x000A1BACu); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_000A1BAC: ;
    PUSH32(esp, esi);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x000A1BB5u); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_000A1BB5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1BC0
 * Original: 0x000A1BC0 - 0x000A1BCA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1BC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1BC6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1BC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1BD0
 * Original: 0x000A1BD0 - 0x000A1C0D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1BD0(void)
{

loc_000A1BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A1BD9u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_000A1BD9: ;
    eax = MEM32(esp + 0xC);
    edi = esi + 0x30;
    ecx = edi;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x30EE8C;
    PUSH32(esp, 0x000A1BF0u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_000A1BF0: ;
    MEM32(edi) = 0x30EE2C;
    edi = esi + 0x5C;
    ecx = edi;
    PUSH32(esp, 0x000A1C00u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_000A1C00: ;
    MEM32(edi) = 0x30EE5C;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1C10
 * Original: 0x000A1C10 - 0x000A1C51 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x3C3D94));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1C42; /* jne: not equal / not zero */

loc_000A1C22: ;
    ecx = MEM32(0x3C3D94);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C3D94) = ecx;
    PUSH32(esp, 0x000A1C3Au); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1C3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3D90) = eax;

loc_000A1C42: ;
    eax = MEM32(0x3C3D90);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A1C4Fu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_000A1C4F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1C60
 * Original: 0x000A1C60 - 0x000A1CA3 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x3C3D9C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1C92; /* jne: not equal / not zero */

loc_000A1C72: ;
    ecx = MEM32(0x3C3D9C);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C3D9C) = ecx;
    PUSH32(esp, 0x000A1C8Au); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1C8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3D98) = eax;

loc_000A1C92: ;
    eax = MEM32(0x3C3D98);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A1C9Fu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_000A1C9F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1CB0
 * Original: 0x000A1CB0 - 0x000A1CD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1CB0(void)
{

loc_000A1CB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, 0xEA0C9A57u);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000A1CC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1CBDu); } /* indirect call */
    }

loc_000A1CC0: ;
    ecx = eax;
    PUSH32(esp, 0x000A1CC7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A1CC7: ;
    MEM32(0x3888C8) = eax;
    MEM8(0x3C250F) = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1CE0
 * Original: 0x000A1CE0 - 0x000A1D87 (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1CE0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1D66; /* jne: not equal / not zero */

loc_000A1CE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x000A1CF4u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A1CF4: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1D12; /* je: equal / zero */

loc_000A1CFF: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A1D0Eu); RECOMP_ABI_CALL(0x000A1BD0u, sub_000A1BD0); /* call 0x000A1BD0 */

loc_000A1D0E: ;
    esi = eax;
    goto loc_000A1D14;

loc_000A1D12: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A1D14: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x000A1D1Cu); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_000A1D1C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A1D24u); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_000A1D24: ;
    _fa = (uint32_t)(MEM8(0x3C3D94)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C3D94), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1D4C; /* jne: not equal / not zero */

loc_000A1D2D: ;
    eax = MEM32(0x3C3D94);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C3D94) = eax;
    PUSH32(esp, 0x000A1D44u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1D44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3D90) = eax;

loc_000A1D4C: ;
    eax = MEM32(0x3C3D90);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A1D59u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_000A1D59: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1D61u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A1D61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A1D66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1D84; /* jne: not equal / not zero */

loc_000A1D6B: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A1D78u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A1D78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1D84; /* je: equal / zero */

loc_000A1D7C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A1D84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1D82u); } /* indirect call */
    }

loc_000A1D84: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1D90
 * Original: 0x000A1D90 - 0x000A1DC1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1D90: ;
    eax = MEM32(0x3734B8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3734B8;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A1DA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1DA0u); } /* indirect call */
    }

loc_000A1DA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1DBE; /* je: equal / zero */

loc_000A1DA7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A1DAFu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_000A1DAF: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A1DBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1DB7u); } /* indirect call */
    }

loc_000A1DBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1DA7; /* jne: not equal / not zero */

loc_000A1DBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1DD0
 * Original: 0x000A1DD0 - 0x000A1DEE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A1DD8u); RECOMP_ABI_CALL(0x00092E40u, sub_00092E40); /* call 0x00092E40 */

loc_000A1DD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1DE8; /* je: equal / zero */

loc_000A1DDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1DE5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A1DE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A1DE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1DF0
 * Original: 0x000A1DF0 - 0x000A1DF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1DF0(void)
{

loc_000A1DF0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1E00
 * Original: 0x000A1E00 - 0x000A1E36 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1E00: ;
    SET_LO8(ecx, MEM8(0x3C3DA4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1E30; /* jne: not equal / not zero */

loc_000A1E0F: ;
    ecx = MEM32(0x3C3DA4);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x30EEBC);
    MEM32(0x3C3DA4) = ecx;
    PUSH32(esp, 0x000A1E27u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1E27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3DA0) = eax;
    esp += 4; return; /* ret */

loc_000A1E30: ;
    eax = MEM32(0x3C3DA0);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1E40
 * Original: 0x000A1E40 - 0x000A1E76 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1E40: ;
    SET_LO8(ecx, MEM8(0x3C3DAC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1E70; /* jne: not equal / not zero */

loc_000A1E4F: ;
    ecx = MEM32(0x3C3DAC);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C3DAC) = ecx;
    PUSH32(esp, 0x000A1E67u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1E67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3DA8) = eax;
    esp += 4; return; /* ret */

loc_000A1E70: ;
    eax = MEM32(0x3C3DA8);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1E80
 * Original: 0x000A1E80 - 0x000A1EB6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1E80: ;
    SET_LO8(ecx, MEM8(0x3C3DB4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1EB0; /* jne: not equal / not zero */

loc_000A1E8F: ;
    ecx = MEM32(0x3C3DB4);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C3DB4) = ecx;
    PUSH32(esp, 0x000A1EA7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A1EA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3DB0) = eax;
    esp += 4; return; /* ret */

loc_000A1EB0: ;
    eax = MEM32(0x3C3DB0);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1EC0
 * Original: 0x000A1EC0 - 0x000A1EC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1EC0(void)
{

loc_000A1EC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1ED0
 * Original: 0x000A1ED0 - 0x000A1ED1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1ED0(void)
{

loc_000A1ED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1EE0
 * Original: 0x000A1EE0 - 0x000A1EE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1EE0(void)
{

loc_000A1EE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1EF0
 * Original: 0x000A1EF0 - 0x000A1EF7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1EF0(void)
{

loc_000A1EF0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1F00
 * Original: 0x000A1F00 - 0x000A1F09 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1F00: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A1F10
 * Original: 0x000A1F10 - 0x000A1F21 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1F10(void)
{

loc_000A1F10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1F30
 * Original: 0x000A1F30 - 0x000A1F65 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1F30(void)
{

loc_000A1F30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1F44u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A1F44: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000A1F61u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A1F61: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A1F70
 * Original: 0x000A1F70 - 0x000A1F9D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1F70(void)
{

loc_000A1F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, 0x000A1F84u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A1F84: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1F9Bu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A1F9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1FA0
 * Original: 0x000A1FA0 - 0x000A1FB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1FA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A1FB0u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A1FB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1FC0
 * Original: 0x000A1FC0 - 0x000A2025 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1FC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1FCF; /* je: equal / zero */

loc_000A1FCA: ;
    esi = eax + -8;
    goto loc_000A1FD1;

loc_000A1FCF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A1FD1: ;
    ecx = MEM32(esi + 0x20);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x115C) = LO8(eax);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    MEM8(edx + 0x115B) = LO8(eax);
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    ecx = edi;
    PUSH32(esp, 0x000A1FF8u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A1FF8: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A200Cu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A200C: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30F0A4);
    PUSH32(esp, 0x000A2022u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000A2022: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2030
 * Original: 0x000A2030 - 0x000A205C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2030: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A203D; /* je: equal / zero */

loc_000A2038: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A203F;

loc_000A203D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A203F: ;
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A205B; /* jle: less or equal (signed <=) */

loc_000A2052: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000A205Bu); RECOMP_ABI_CALL(0x000F3AF0u, sub_000F3AF0); /* call 0x000F3AF0 */

loc_000A205B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2060
 * Original: 0x000A2060 - 0x000A208A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2060: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A206D; /* je: equal / zero */

loc_000A2068: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A206F;

loc_000A206D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A206F: ;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    MEM8(ecx + 0x115C) = 0;
    PUSH32(esp, 0x3F800000);
    ecx = eax + 0x28;
    PUSH32(esp, 0x000A2089u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2089: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2068
 * Original: 0x000A2068 - 0x000A208A (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2068(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2068: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A206F;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A206F: ;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    MEM8(ecx + 0x115C) = 0;
    PUSH32(esp, 0x3F800000);
    ecx = eax + 0x28;
    PUSH32(esp, 0x000A2089u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2089: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2090
 * Original: 0x000A2090 - 0x000A20BA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2090: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A209D; /* je: equal / zero */

loc_000A2098: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A209F;

loc_000A209D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A209F: ;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    MEM8(ecx + 0x115C) = 0;
    PUSH32(esp, 0x3F800000);
    ecx = eax + 0x28;
    PUSH32(esp, 0x000A20B9u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A20B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A20C0
 * Original: 0x000A20C0 - 0x000A211F (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A20C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A20C0: ;
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
    MEM32(esi) = 0x30F0BC;
    MEM32(edi) = 0x30F0B8;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000A20F2u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A20F2: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A20FAu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000A20FA: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000A2102u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A2102: ;
    PUSH32(esp, 0x30F088);
    ecx = ebx;
    PUSH32(esp, 0x000A210Eu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A210E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2114u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A2114: ;
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
 * sub_000A2120
 * Original: 0x000A2120 - 0x000A215F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30F0BC;
    MEM32(esi + 8) = 0x30F0B8;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A213Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A213D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A2148u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A2148: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2150u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2150: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_000A2121
 * Original: 0x000A2121 - 0x000A215F (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2121(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2121: ;
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30F0BC;
    MEM32(esi + 8) = 0x30F0B8;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A213Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A213D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A2148u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A2148: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2150u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2150: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_000A2160
 * Original: 0x000A2160 - 0x000A216B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2160: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000A2170
 * Original: 0x000A2170 - 0x000A217A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2170: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2173
 * Original: 0x000A2173 - 0x000A217A (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2173(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2173: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2179
 * Original: 0x000A2179 - 0x000A217A (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2179(void)
{

loc_000A2179: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2180
 * Original: 0x000A2180 - 0x000A2195 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2180: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2192; /* je: equal / zero */

loc_000A218D: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

loc_000A2192: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A21A0
 * Original: 0x000A21A0 - 0x000A21FE (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A21A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A21A0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A21DD; /* jne: not equal / not zero */

loc_000A21A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x000A21B0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A21B0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A21CF; /* je: equal / zero */

loc_000A21BB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A21C3u); RECOMP_ABI_CALL(0x000A20C0u, sub_000A20C0); /* call 0x000A20C0 */

loc_000A21C3: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A21CBu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A21CB: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A21CF: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A21D9u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A21D9: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A21DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A21FB; /* jne: not equal / not zero */

loc_000A21E2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A21EFu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A21EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A21FB; /* je: equal / zero */

loc_000A21F3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A21FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A21F9u); } /* indirect call */
    }

loc_000A21FB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2200
 * Original: 0x000A2200 - 0x000A2287 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A220F; /* je: equal / zero */

loc_000A220A: ;
    esi = eax + -8;
    goto loc_000A2211;

loc_000A220F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2211: ;
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    MEM8(ecx + 0x115B) = 0;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);
    ecx = edi;
    PUSH32(esp, 0x000A2238u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A2238: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A224Fu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A224F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(edi + 0x1128);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2269; /* je: equal / zero */

loc_000A2262: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A2267u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2264u); } /* indirect call */
    }

loc_000A2267: ;
    goto loc_000A226B;

loc_000A2269: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A226B: ;
    edx = MEM32(edi + 0x1C0);
    ecx = MEM32(edx + 0x30);
    edx = MEM32(edx + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A2284u); RECOMP_ABI_CALL(0x00114050u, sub_00114050); /* call 0x00114050 */

loc_000A2284: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2290
 * Original: 0x000A2290 - 0x000A2329 (153 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A2290: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A229F; /* je: equal / zero */

loc_000A229A: ;
    ebx = eax + -8;
    goto loc_000A22A1;

loc_000A229F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A22A1: ;
    eax = MEM32(ebx + 0x20);
    esi = MEM32(eax + 0x1128);
    eax = MEM32(eax + 0x1124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A22BD; /* je: equal / zero */

loc_000A22B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A22BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A22B8u); } /* indirect call */
    }

loc_000A22BB: ;
    goto loc_000A22BF;

loc_000A22BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A22BF: ;
    edx = MEM32(esi + 0x1C0);
    ecx = MEM32(edx + 0x30);
    edx = MEM32(edx + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A22D8u); RECOMP_ABI_CALL(0x00114050u, sub_00114050); /* call 0x00114050 */

loc_000A22D8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1D4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A2326; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x1D4)) */

loc_000A22E4: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0x30BEFC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A22F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A22EEu); } /* indirect call */
    }

loc_000A22F1: ;
    esi = eax;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags == 0)) goto loc_000A2326; /* jne: not equal / not zero */

loc_000A22FF: ;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, 0x000A230Fu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A230F: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(ebx + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2326u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A2326: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2330
 * Original: 0x000A2330 - 0x000A2383 (83 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2330: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A237F; /* je: equal / zero */

loc_000A2340: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A2345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2342u); } /* indirect call */
    }

loc_000A2345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A237F; /* je: equal / zero */

loc_000A2349: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A236E; /* je: equal / zero */

loc_000A2356: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A235Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2358u); } /* indirect call */
    }

loc_000A235B: ;
    edx = MEM32(esp + 8);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A236Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2367u); } /* indirect call */
    }

loc_000A236A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A236E: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A237Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A237Cu); } /* indirect call */
    }

loc_000A237F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2390
 * Original: 0x000A2390 - 0x000A23D4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2390: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A239E; /* je: equal / zero */

loc_000A2399: ;
    esi = eax + -8;
    goto loc_000A23A0;

loc_000A239E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A23A0: ;
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x000A23A9u); RECOMP_ABI_CALL(0x000A2330u, sub_000A2330); /* call 0x000A2330 */

loc_000A23A9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A23C7; /* je: equal / zero */

loc_000A23B7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A23BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A23B9u); } /* indirect call */
    }

loc_000A23BC: ;
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_000A23C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A23E0
 * Original: 0x000A23E0 - 0x000A242E (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A23E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A23E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A23EE; /* je: equal / zero */

loc_000A23E9: ;
    esi = eax + -8;
    goto loc_000A23F0;

loc_000A23EE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A23F0: ;
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x000A23F9u); RECOMP_ABI_CALL(0x000A2330u, sub_000A2330); /* call 0x000A2330 */

loc_000A23F9: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x1130) = 1;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2421; /* je: equal / zero */

loc_000A2411: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A2416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2413u); } /* indirect call */
    }

loc_000A2416: ;
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000A2421: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C0) = MEM32(eax + 0x1C0) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2430
 * Original: 0x000A2430 - 0x000A2438 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2430: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A2440(); return; /* tail jmp 0x000A2440 */

}

/**
 * sub_000A2440
 * Original: 0x000A2440 - 0x000A2494 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30F0BC;
    MEM32(esi + 8) = 0x30F0B8;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A245Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A245D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A2468u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A2468: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2470u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2470: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x000A247Eu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A247E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A248E; /* je: equal / zero */

loc_000A2485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A248Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A248B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A248E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2485
 * Original: 0x000A2485 - 0x000A2494 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2485(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A248Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A248B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
